module.exports = grammar({
  name: "cql",

  extras: ($) => [$.comment, /[\s\p{Zs}\uFEFF\u2060\u200B]/],

  //TODO: look at these, try out precedence maybe
  conflicts: ($) => [
    [$.timing_expression, $.boolean_expression, $.type_expression],
    [$.timing_expression, $.type_expression],
    [$.timing_expression],
    [$.timing_expression, $.between_expression],
    [$.membership_expression, $.boolean_expression, $.type_expression],
    [$.membership_expression, $.keyword_identifier],
    [$.membership_expression, $.type_expression],
    [$.membership_expression, $.between_expression],
    [$.between_expression, $.membership_expression, $.timing_expression],
    [$.membership_expression, $.timing_expression],
    [$.interval_operator_phrase],
    [$.quantity, $.literal],
    [$.boolean_expression, $.type_expression, $.let_clause_item],
    [$.boolean_expression, $.type_expression, $.with_clause],
    [$.boolean_expression, $.type_expression, $.without_clause],
    [$.boolean_expression, $.type_expression, $.return_clause],
    [$.type_expression, $.return_clause],
    [$.type_expression, $.with_clause],
    [$.type_expression, $.without_clause],
    [$.type_expression, $.let_clause_item],
    [$.timing_expression, $.between_expression, $.return_clause],
    [$.timing_expression, $.return_clause],
    [$.between_expression, $.return_clause],
    [$.timing_expression, $.between_expression, $.let_clause_item],
    [$.timing_expression, $.between_expression, $.with_clause],
    [$.timing_expression, $.between_expression, $.without_clause],
    [$.between_expression, $.with_clause],
    [$.between_expression, $.without_clause],
    [$.timing_expression, $.with_clause],
    [$.timing_expression, $.without_clause],
    [$.timing_expression, $.let_clause_item],
    [$.between_expression, $.let_clause_item],
    [$.query_source_clause],
    [$.query],
    [$.let_clause],
  ],

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
        $.valueset_definition,
        $.codesystem_definition,
        $.parameter_definition,
        $.code_definition,
        $.concept_definition
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

    valueset_definition: ($) =>
      seq(
        optional($.access_modifier),
        "valueset",
        $.qualified_identifier,
        ":",
        alias($.string, $.valueset_id),
        optional($.version_specifier),
        optional($.codesystems)
      ),

    codesystems: ($) =>
      seq(
        "codesystems",
        "{",
        alias($.code_or_codesystem_identifier, $.codesystem_identifier),
        repeat(
          seq(
            ",",
            alias($.code_or_codesystem_identifier, $.codesystem_identifier)
          )
        ),
        "}"
      ),

    codesystem_definition: ($) =>
      seq(
        optional($.access_modifier),
        "codesystem",
        $.identifier,
        ":",
        alias($.string, $.codesystem_id),
        optional($.version_specifier)
      ),

    code_definition: ($) =>
      seq(
        optional($.access_modifier),
        "code",
        $.identifier,
        ":",
        alias($.string, $.code_id),
        "from",
        alias($.code_or_codesystem_identifier, $.codesystem_identifier),
        optional($.display_clause)
      ),

    concept_definition: ($) =>
      seq(
        optional($.access_modifier),
        "concept",
        $.identifier,
        ":",
        "{",
        alias($.code_or_codesystem_identifier, $.code_identifier),
        repeat(
          seq(",", alias($.code_or_codesystem_identifier, $.code_identifier))
        ),
        "}",
        optional($.display_clause)
      ),

    parameter_definition: ($) =>
      prec.right(
        1,
        seq(
          optional($.access_modifier),
          "parameter",
          $.identifier,
          optional($.type_specifier),
          optional(seq("default", $.expression))
        )
      ),

    access_modifier: () => choice("public", "private"),

    /* Statements */

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

    // TODO: functionIdentifier
    function_definition: ($) =>
      seq(
        "define",
        optional($.access_modifier),
        optional(alias("fluent", $.fluent_modifier)),
        "function",
        $.identifier,
        "(",
        optional(
          seq($.operand_definition, repeat(seq(",", $.operand_definition)))
        ),
        ")",
        optional(seq("returns", $.type_specifier)),
        ":",
        choice(alias($.expression, $.function_body), "external")
      ),

    operand_definition: ($) => seq($.referential_identifier, $.type_specifier),

    /* Expressions */

    expression_definition: ($) =>
      seq(
        "define",
        optional($.access_modifier),
        $.identifier,
        ":",
        $.expression
      ),

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
        $.in_fix_set_expression,
        $.duration_between_expression,
        $.difference_between_expression,
        $.membership_expression,
        $.timing_expression
      ),

    // TODO: everything
    expression_term: ($) => choice($.term),

    // TODO: everything
    term: ($) => choice($.literal),

    quantity: ($) => seq($.number, optional($.unit)),

    // TODO: long date datetime time  ratio
    literal: ($) =>
      choice(
        alias(/true|false/, $.boolean_literal),
        alias("null", $.null_literal),
        alias($.string, $.string_literal),
        alias($.number, $.number_literal),
        alias($.quantity, $.quantity_literal)
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

    date_time_precision: () =>
      choice(
        "year",
        "month",
        "week",
        "day",
        "hour",
        "minute",
        "second",
        "millisecond"
      ),

    plural_date_time_precision: () =>
      choice(
        "years",
        "months",
        "weeks",
        "days",
        "hours",
        "minutes",
        "seconds",
        "milliseconds"
      ),

    date_time_component: ($) =>
      choice(
        $.date_time_precision,
        "date",
        "time",
        "timezone",
        "timezoneoffset"
      ),

    duration_between_expression: ($) =>
      seq(
        optional(seq("duration", "in")),
        $.plural_date_time_precision,
        "between",
        $.expression_term,
        "and",
        $.expression_term
      ),

    difference_between_expression: ($) =>
      seq(
        "difference",
        "in",
        $.plural_date_time_precision,
        "between",
        $.expression_term,
        "and",
        $.expression_term
      ),

    date_time_precision_specifier: ($) => seq($.date_time_precision, "of"),

    membership_expression: ($) =>
      seq(
        choice("in", "contains"),
        optional($.date_time_precision_specifier),
        $.expression
      ),

    relative_qualifier: () => choice("or before", "or after"),

    offset_relative_qualifier: () => choice("or more", "or less"),

    exclusive_relative_qualifier: () => choice("less than", "more than"),

    quantity_offset: ($) =>
      choice(
        seq($.quantity, optional($.offset_relative_qualifier)),
        seq($.exclusive_relative_qualifier, $.quantity)
      ),

    temporal_relationship: () =>
      choice(
        seq(optional("on or"), choice("before", "after")),
        seq(choice("before", "after"), optional("or on"))
      ),

    interval_operator_phrase: ($) =>
      choice(
        seq(
          optional(choice("starts", "ends", "occurs")),
          "same",
          optional($.date_time_precision),
          choice($.relative_qualifier, "as"),
          optional(choice("start", "end"))
        ),
        seq(
          optional("properly"),
          "includes",
          optional($.date_time_precision_specifier),
          optional(choice("start", "end"))
        ),
        seq(
          optional(choice("starts", "ends", "occurs")),
          optional("properly"),
          choice("during", "included in"),
          optional($.date_time_precision_specifier)
        ),
        seq(
          "meets",
          optional(choice("before", "after")),
          optional($.date_time_precision_specifier)
        ),
        seq(
          "overlaps",
          optional(choice("before", "after")),
          optional($.date_time_precision_specifier)
        ),
        seq("starts", optional($.date_time_precision_specifier)),
        seq("ends", optional($.date_time_precision_specifier)),
        seq(
          optional(choice("starts", "ends", "occurs")),
          optional("properly"),
          "within",
          $.quantity,
          "of",
          optional(choice("start", "end"))
        ),
        seq(
          optional(choice("starts", "ends", "occurs")),
          optional($.quantity_offset),
          $.temporal_relationship,
          optional($.date_time_precision_specifier),
          optional(choice("start", "end"))
        )
      ),

    timing_expression: ($) =>
      seq($.expression, $.interval_operator_phrase, $.expression),

    // TODO aggregate
    query: ($) =>
      seq(
        $.query_source_clause,
        optional($.let_clause),
        repeat($.query_inclusion_clause),
        optional($.where_clause),
        optional(choice($.return_clause)),
        optional($.sort_clause)
      ),

    where_clause: ($) => prec.left(1, seq("where", $.expression)),

    let_clause: ($) =>
      seq("let", $.let_clause_item, repeat(seq(",", $.let_clause_item))),

    let_clause_item: ($) => seq($.identifier, ":", $.expression),

    query_inclusion_clause: ($) => choice($.with_clause, $.without_clause),

    with_clause: ($) =>
      seq("with", $.aliased_query_source, "such that", $.expression),

    without_clause: ($) =>
      seq("without", $.aliased_query_source, "such that", $.expression),

    return_clause: ($) =>
      seq("return", optional(choice("all", "distinct")), $.expression),

    sort_clause: ($) =>
      prec.left(
        1,
        seq(
          "sort",
          choice(
            $.sort_direction,
            seq("by", $.sort_by_item, repeat(seq(",", $.sort_by_item)))
          )
        )
      ),

    sort_direction: () => choice(/asc|ascending/, /desc|descending/),

    sort_by_item: ($) => seq($.expression_term, optional($.sort_direction)),

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

    terminology: ($) => choice($.qualified_identifier_expression, $.expression),

    /* Type Specifiers */
    type_specifier: ($) =>
      choice(
        $.named_type_specifier,
        $.list_type_specifier,
        $.interval_type_specifier,
        $.tuple_type_specifier,
        $.choice_type_specifier
      ),

    named_type_specifier: ($) =>
      seq(
        repeat(seq(alias($.identifier, $.qualifier), ".")),
        $.referential_or_type_name_identifier
      ),

    list_type_specifier: ($) => seq("List", "<", $.type_specifier, ">"),

    interval_type_specifier: ($) => seq("Interval", "<", $.type_specifier, ">"),

    tuple_type_specifier: ($) =>
      seq(
        "Tuple",
        "{",
        $.tuple_element_definition,
        repeat(seq(",", $.tuple_element_definition)),
        "}"
      ),

    tuple_element_definition: ($) =>
      seq($.referential_identifier, $.type_specifier),

    choice_type_specifier: ($) =>
      seq(
        "Choice",
        "<",
        $.type_specifier,
        repeat(seq(",", $.type_specifier)),
        ">"
      ),

    /* Identifiers */

    version_specifier: ($) => seq("version", alias($.string, $.version)),

    // TODO: delimited identifier
    identifier: ($) => choice($.default_identifier, $.quoted_identifier),

    code_or_codesystem_identifier: ($) =>
      seq(
        optional(seq(alias($.identifier, $.library_identifier), ".")),
        $.identifier
      ),

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

    number: () => /[0-9]+('.' [0-9]+)?/,

    unit: ($) =>
      choice($.date_time_precision, $.plural_date_time_precision, $.string),

    display_clause: ($) => seq("display", $.string),

    /* Extras */
    comment: () =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))
      ),
  },
});
