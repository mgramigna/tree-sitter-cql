module.exports = grammar({
  name: "cql",

  extras: ($) => [$.comment, /[\s\p{Zs}\uFEFF\u2060\u200B]/],

  rules: {
    cql_library: ($) =>
      seq(
        optional($.library_definition),
        repeat($.definition),
        repeat($.statement)
      ),

    /* Definitions */

    definition: ($) =>
      choice(
        $.using_definition,
        $.include_definition,
        $.valueset_definition
        // TODO: others
      ),

    library_definition: ($) =>
      seq("library", $.qualified_identifier, optional($.version_specifier)),

    using_definition: ($) =>
      seq(
        "using",
        $.qualified_identifier,
        optional($.version_specifier),
        optional(seq("called", alias($.identifier, $.local_identifier)))
      ),

    include_definition: ($) =>
      seq(
        "include",
        $.qualified_identifier,
        optional($.version_specifier),

        optional(seq("called", alias($.identifier, $.local_identifier)))
      ),

    // TODO: access modifier
    // TODO: codesystems
    valueset_definition: ($) =>
      seq(
        "valueset",
        $.qualified_identifier,
        ":",
        alias($.string, $.valueset_id),
        optional($.version_specifier)
      ),

    /* Statements */

    // TODO: Function
    statement: ($) =>
      choice(
        $.expression_definition,
        $.context_definition,
        $.function_definition
      ),

    context_definition: ($) =>
      seq(
        "context",
        optional(seq(alias($.identifier, $.model_identifier), ".")),
        $.identifier
      ),

    // TODO: access modifier
    // TODO: fluentModifier
    // TODO: functionIdentifier
    // TODO: operands
    // TODO: returns type
    function_definition: ($) =>
      seq(
        "define",
        "function",
        $.identifier,
        "(",
        ")",
        ":",
        choice(alias($.expression, $.function_body), "external")
      ),

    /* Expressions */

    // TODO: AccessModifier
    // TODO: actual expression
    expression_definition: ($) =>
      seq("define", $.identifier, ":", $.expression),

    /*
    * TODO:
    | ('duration' 'in')? pluralDateTimePrecision 'between' expressionTerm 'and' expressionTerm      #durationBetweenExpression
    | 'difference' 'in' pluralDateTimePrecision 'between' expressionTerm 'and' expressionTerm       #differenceBetweenExpression
    | expression intervalOperatorPhrase expression                                                  #timingExpression
    | expression ('in' | 'contains') dateTimePrecisionSpecifier? expression                         #membershipExpression
    */
    expression: ($) =>
      choice(
        $.expression_term,
        $.retrieve,
        $.query,
        $.boolean_expression,
        $.type_expression,
        $.cast_expression,
        $.not_expression,
        $.existence_expression,
        $.between_expression,
        $.equality_expression,
        $.inequality_expression,
        $.and_expression,
        $.or_expression,
        $.implies_expression,
        $.in_fix_set_expression
      ),

    // TODO: everything
    expression_term: ($) => choice($.term),

    // TODO: everything
    term: ($) => choice($.literal),

    // TODO: number, long date datetime time quantity ratio
    literal: ($) =>
      choice(
        alias(/true|false/, $.boolean_literal),
        alias("null", $.null_literal),
        alias($.string, $.string_literal)
      ),

    qualified_identifier_expression: ($) =>
      seq(
        repeat(
          seq(alias($.referential_identifier, $.qualifier_expression), ".")
        ),
        $.referential_identifier
      ),

    boolean_expression: ($) =>
      seq($.expression, "is", optional("not"), choice("null", "true", "false")),

    type_expression: ($) =>
      seq($.expression, choice("is", "as"), $.type_specifier),

    cast_expression: ($) =>
      prec.left(2, seq("cast", $.expression, "as", $.type_specifier)),

    not_expression: ($) => prec.left(2, seq("not", $.expression)),

    existence_expression: ($) => prec.left(2, seq("exists", $.expression)),

    between_expression: ($) =>
      seq(
        $.expression,
        optional("properly"),
        "between",
        $.expression_term,
        "and",
        $.expression_term
      ),

    // TODO: look at precedence?
    equality_expression: ($) =>
      prec.left(
        2,
        seq($.expression, choice("=", "!=", "~", "!~"), $.expression)
      ),

    inequality_expression: ($) =>
      prec.left(
        2,
        seq($.expression, choice("<=", "<", ">", ">="), $.expression)
      ),

    // TODO: prec
    and_expression: ($) => prec.left(2, seq($.expression, "and", $.expression)),

    or_expression: ($) =>
      prec.left(2, seq($.expression, choice("or", "xor"), $.expression)),

    /*
     * TODO: prec
     */
    implies_expression: ($) =>
      prec.left(2, seq($.expression, "implies", $.expression)),

    in_fix_set_expression: ($) =>
      prec.left(
        2,
        seq(
          $.expression,
          choice("|", "union", "intersect", "except"),
          $.expression
        )
      ),

    // TODO: let
    // TODO: inclusion
    // TODO aggregate
    // TODO: return
    // TODO: sort
    query: ($) => seq($.query_source_clause, optional($.where_clause)),

    where_clause: ($) => prec.left(1, seq("where", $.expression)),

    query_source: ($) =>
      choice(
        $.retrieve,
        $.qualified_identifier_expression,
        seq("(", $.expression, ")")
      ),

    aliased_query_source: ($) =>
      seq($.query_source, alias($.identifier, $.query_alias)),

    query_source_clause: ($) =>
      seq(
        optional("from"),
        $.aliased_query_source,
        repeat(seq(",", $.aliased_query_source))
      ),

    // TODO: contextIdentifier
    // TODO: codepath codeComparator
    retrieve: ($) =>
      seq("[", $.named_type_specifier, optional(seq(":", $.terminology)), "]"),

    // TODO: expression as well
    terminology: ($) => choice($.qualified_identifier_expression),

    /* Type Specifiers */
    // TODO: listTypeSpecifier
    // TODO: intervalTypeSpecifier
    // TODO: tupleTypeSpecifier
    // TODO: choiceTypeSpecifier
    type_specifier: ($) => choice($.named_type_specifier),

    named_type_specifier: ($) =>
      seq(
        repeat(seq(alias($.identifier, $.qualifier), ".")),
        $.referential_or_type_name_identifier
      ),

    /* Identifiers */

    version_specifier: ($) => seq("version", alias($.string, $.version)),

    // TODO: delimited identifier
    identifier: ($) => choice($.default_identifier, $.quoted_identifier),

    qualified_identifier: ($) =>
      seq(repeat(seq(alias($.identifier, $.qualifier), ".")), $.identifier),

    default_identifier: () => /([A-Za-z]|'_')([A-Za-z0-9]|'_')*/,

    quoted_identifier: ($) =>
      seq(
        '"',
        optional(
          repeat(choice($.double_quote_string_fragment, $.escape_sequence))
        ),
        '"'
      ),

    referential_identifier: ($) => choice($.identifier, $.keyword_identifier),

    type_name_identifier: () =>
      prec(1, choice("Code", "Concept", "date", "time")),

    referential_or_type_name_identifier: ($) =>
      choice($.referential_identifier, $.type_name_identifier),

    keyword_identifier: () =>
      choice(
        "asc",
        "ascending",
        "by",
        "called",
        "code",
        "codesystem",
        "codesystems",
        "concept",
        "contains",
        "context",
        "date",
        "default",
        "define",
        "desc",
        "descending",
        "display",
        "div",
        "end",
        "ends",
        "except",
        "fluent",
        "function",
        "implies",
        "include",
        "includes",
        "intersect",
        "library",
        "meets",
        "mod",
        "or after",
        "or before",
        "or less",
        "or more",
        "overlaps",
        "parameter",
        "predecessor",
        "private",
        "public",
        "start",
        "starting",
        "starts",
        "successor",
        "time",
        "timezone",
        "timezoneoffset",
        "union",
        "using",
        "valueset",
        "version",
        "where",
        "width",
        "xor"
      ),

    string: ($) =>
      seq(
        "'",
        repeat(choice($.single_quote_string_fragment, $.escape_sequence)),
        "'"
      ),

    single_quote_string_fragment: () => token.immediate(prec(1, /[^'\\]+/)),

    double_quote_string_fragment: () => token.immediate(prec(1, /[^"\\]+/)),

    escape_sequence: () =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu0-7]/,
            /[0-7]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/
          )
        )
      ),

    /* Extras */
    comment: () =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))
      ),
  },
});
