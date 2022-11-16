#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 32
#define SYMBOL_COUNT 145
#define ALIAS_COUNT 9
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_library = 1,
  anon_sym_using = 2,
  anon_sym_called = 3,
  anon_sym_include = 4,
  anon_sym_valueset = 5,
  anon_sym_COLON = 6,
  anon_sym_context = 7,
  anon_sym_DOT = 8,
  anon_sym_define = 9,
  anon_sym_function = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_external = 13,
  aux_sym_literal_token1 = 14,
  anon_sym_null = 15,
  anon_sym_is = 16,
  anon_sym_not = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  anon_sym_as = 20,
  anon_sym_cast = 21,
  anon_sym_exists = 22,
  anon_sym_properly = 23,
  anon_sym_between = 24,
  anon_sym_and = 25,
  anon_sym_EQ = 26,
  anon_sym_BANG_EQ = 27,
  anon_sym_TILDE = 28,
  anon_sym_BANG_TILDE = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_LT = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_or = 34,
  anon_sym_xor = 35,
  anon_sym_implies = 36,
  anon_sym_PIPE = 37,
  anon_sym_union = 38,
  anon_sym_intersect = 39,
  anon_sym_except = 40,
  anon_sym_where = 41,
  anon_sym_from = 42,
  anon_sym_COMMA = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_version = 46,
  sym_default_identifier = 47,
  anon_sym_DQUOTE = 48,
  anon_sym_Code = 49,
  anon_sym_Concept = 50,
  anon_sym_date = 51,
  anon_sym_time = 52,
  anon_sym_asc = 53,
  anon_sym_ascending = 54,
  anon_sym_by = 55,
  anon_sym_code = 56,
  anon_sym_codesystem = 57,
  anon_sym_codesystems = 58,
  anon_sym_concept = 59,
  anon_sym_contains = 60,
  anon_sym_default = 61,
  anon_sym_desc = 62,
  anon_sym_descending = 63,
  anon_sym_display = 64,
  anon_sym_div = 65,
  anon_sym_end = 66,
  anon_sym_ends = 67,
  anon_sym_fluent = 68,
  anon_sym_includes = 69,
  anon_sym_meets = 70,
  anon_sym_mod = 71,
  anon_sym_orafter = 72,
  anon_sym_orbefore = 73,
  anon_sym_orless = 74,
  anon_sym_ormore = 75,
  anon_sym_overlaps = 76,
  anon_sym_parameter = 77,
  anon_sym_predecessor = 78,
  anon_sym_private = 79,
  anon_sym_public = 80,
  anon_sym_start = 81,
  anon_sym_starting = 82,
  anon_sym_starts = 83,
  anon_sym_successor = 84,
  anon_sym_timezone = 85,
  anon_sym_timezoneoffset = 86,
  anon_sym_width = 87,
  anon_sym_SQUOTE = 88,
  sym_single_quote_string_fragment = 89,
  sym_double_quote_string_fragment = 90,
  sym_escape_sequence = 91,
  sym_comment = 92,
  sym_cql_library = 93,
  sym_definition = 94,
  sym_library_definition = 95,
  sym_using_definition = 96,
  sym_include_definition = 97,
  sym_valueset_definition = 98,
  sym_statement = 99,
  sym_context_definition = 100,
  sym_function_definition = 101,
  sym_expression_definition = 102,
  sym_expression = 103,
  sym_expression_term = 104,
  sym_term = 105,
  sym_literal = 106,
  sym_qualified_identifier_expression = 107,
  sym_boolean_expression = 108,
  sym_type_expression = 109,
  sym_cast_expression = 110,
  sym_not_expression = 111,
  sym_existence_expression = 112,
  sym_between_expression = 113,
  sym_equality_expression = 114,
  sym_inequality_expression = 115,
  sym_and_expression = 116,
  sym_or_expression = 117,
  sym_implies_expression = 118,
  sym_in_fix_set_expression = 119,
  sym_query = 120,
  sym_where_clause = 121,
  sym_query_source = 122,
  sym_aliased_query_source = 123,
  sym_query_source_clause = 124,
  sym_retrieve = 125,
  sym_terminology = 126,
  sym_type_specifier = 127,
  sym_named_type_specifier = 128,
  sym_version_specifier = 129,
  sym_identifier = 130,
  sym_qualified_identifier = 131,
  sym_quoted_identifier = 132,
  sym_referential_identifier = 133,
  sym_type_name_identifier = 134,
  sym_referential_or_type_name_identifier = 135,
  sym_keyword_identifier = 136,
  sym_string = 137,
  aux_sym_cql_library_repeat1 = 138,
  aux_sym_cql_library_repeat2 = 139,
  aux_sym_qualified_identifier_expression_repeat1 = 140,
  aux_sym_query_source_clause_repeat1 = 141,
  aux_sym_named_type_specifier_repeat1 = 142,
  aux_sym_quoted_identifier_repeat1 = 143,
  aux_sym_string_repeat1 = 144,
  alias_sym_function_body = 145,
  alias_sym_local_identifier = 146,
  alias_sym_model_identifier = 147,
  alias_sym_null_literal = 148,
  alias_sym_qualifier = 149,
  alias_sym_qualifier_expression = 150,
  alias_sym_query_alias = 151,
  alias_sym_string_literal = 152,
  alias_sym_version = 153,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_library] = "library",
  [anon_sym_using] = "using",
  [anon_sym_called] = "called",
  [anon_sym_include] = "include",
  [anon_sym_valueset] = "valueset",
  [anon_sym_COLON] = ":",
  [anon_sym_context] = "context",
  [anon_sym_DOT] = ".",
  [anon_sym_define] = "define",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_external] = "external",
  [aux_sym_literal_token1] = "boolean_literal",
  [anon_sym_null] = "null",
  [anon_sym_is] = "is",
  [anon_sym_not] = "not",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_as] = "as",
  [anon_sym_cast] = "cast",
  [anon_sym_exists] = "exists",
  [anon_sym_properly] = "properly",
  [anon_sym_between] = "between",
  [anon_sym_and] = "and",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_implies] = "implies",
  [anon_sym_PIPE] = "|",
  [anon_sym_union] = "union",
  [anon_sym_intersect] = "intersect",
  [anon_sym_except] = "except",
  [anon_sym_where] = "where",
  [anon_sym_from] = "from",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_version] = "version",
  [sym_default_identifier] = "default_identifier",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_Code] = "Code",
  [anon_sym_Concept] = "Concept",
  [anon_sym_date] = "date",
  [anon_sym_time] = "time",
  [anon_sym_asc] = "asc",
  [anon_sym_ascending] = "ascending",
  [anon_sym_by] = "by",
  [anon_sym_code] = "code",
  [anon_sym_codesystem] = "codesystem",
  [anon_sym_codesystems] = "codesystems",
  [anon_sym_concept] = "concept",
  [anon_sym_contains] = "contains",
  [anon_sym_default] = "default",
  [anon_sym_desc] = "desc",
  [anon_sym_descending] = "descending",
  [anon_sym_display] = "display",
  [anon_sym_div] = "div",
  [anon_sym_end] = "end",
  [anon_sym_ends] = "ends",
  [anon_sym_fluent] = "fluent",
  [anon_sym_includes] = "includes",
  [anon_sym_meets] = "meets",
  [anon_sym_mod] = "mod",
  [anon_sym_orafter] = "or after",
  [anon_sym_orbefore] = "or before",
  [anon_sym_orless] = "or less",
  [anon_sym_ormore] = "or more",
  [anon_sym_overlaps] = "overlaps",
  [anon_sym_parameter] = "parameter",
  [anon_sym_predecessor] = "predecessor",
  [anon_sym_private] = "private",
  [anon_sym_public] = "public",
  [anon_sym_start] = "start",
  [anon_sym_starting] = "starting",
  [anon_sym_starts] = "starts",
  [anon_sym_successor] = "successor",
  [anon_sym_timezone] = "timezone",
  [anon_sym_timezoneoffset] = "timezoneoffset",
  [anon_sym_width] = "width",
  [anon_sym_SQUOTE] = "'",
  [sym_single_quote_string_fragment] = "single_quote_string_fragment",
  [sym_double_quote_string_fragment] = "double_quote_string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_cql_library] = "cql_library",
  [sym_definition] = "definition",
  [sym_library_definition] = "library_definition",
  [sym_using_definition] = "using_definition",
  [sym_include_definition] = "include_definition",
  [sym_valueset_definition] = "valueset_definition",
  [sym_statement] = "statement",
  [sym_context_definition] = "context_definition",
  [sym_function_definition] = "function_definition",
  [sym_expression_definition] = "expression_definition",
  [sym_expression] = "expression",
  [sym_expression_term] = "expression_term",
  [sym_term] = "term",
  [sym_literal] = "literal",
  [sym_qualified_identifier_expression] = "qualified_identifier_expression",
  [sym_boolean_expression] = "boolean_expression",
  [sym_type_expression] = "type_expression",
  [sym_cast_expression] = "cast_expression",
  [sym_not_expression] = "not_expression",
  [sym_existence_expression] = "existence_expression",
  [sym_between_expression] = "between_expression",
  [sym_equality_expression] = "equality_expression",
  [sym_inequality_expression] = "inequality_expression",
  [sym_and_expression] = "and_expression",
  [sym_or_expression] = "or_expression",
  [sym_implies_expression] = "implies_expression",
  [sym_in_fix_set_expression] = "in_fix_set_expression",
  [sym_query] = "query",
  [sym_where_clause] = "where_clause",
  [sym_query_source] = "query_source",
  [sym_aliased_query_source] = "aliased_query_source",
  [sym_query_source_clause] = "query_source_clause",
  [sym_retrieve] = "retrieve",
  [sym_terminology] = "terminology",
  [sym_type_specifier] = "type_specifier",
  [sym_named_type_specifier] = "named_type_specifier",
  [sym_version_specifier] = "version_specifier",
  [sym_identifier] = "identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_quoted_identifier] = "quoted_identifier",
  [sym_referential_identifier] = "referential_identifier",
  [sym_type_name_identifier] = "type_name_identifier",
  [sym_referential_or_type_name_identifier] = "referential_or_type_name_identifier",
  [sym_keyword_identifier] = "keyword_identifier",
  [sym_string] = "valueset_id",
  [aux_sym_cql_library_repeat1] = "cql_library_repeat1",
  [aux_sym_cql_library_repeat2] = "cql_library_repeat2",
  [aux_sym_qualified_identifier_expression_repeat1] = "qualified_identifier_expression_repeat1",
  [aux_sym_query_source_clause_repeat1] = "query_source_clause_repeat1",
  [aux_sym_named_type_specifier_repeat1] = "named_type_specifier_repeat1",
  [aux_sym_quoted_identifier_repeat1] = "quoted_identifier_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_function_body] = "function_body",
  [alias_sym_local_identifier] = "local_identifier",
  [alias_sym_model_identifier] = "model_identifier",
  [alias_sym_null_literal] = "null_literal",
  [alias_sym_qualifier] = "qualifier",
  [alias_sym_qualifier_expression] = "qualifier_expression",
  [alias_sym_query_alias] = "query_alias",
  [alias_sym_string_literal] = "string_literal",
  [alias_sym_version] = "version",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_library] = anon_sym_library,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_called] = anon_sym_called,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_valueset] = anon_sym_valueset,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_context] = anon_sym_context,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_external] = anon_sym_external,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_cast] = anon_sym_cast,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_properly] = anon_sym_properly,
  [anon_sym_between] = anon_sym_between,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_implies] = anon_sym_implies,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_intersect] = anon_sym_intersect,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_version] = anon_sym_version,
  [sym_default_identifier] = sym_default_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_Code] = anon_sym_Code,
  [anon_sym_Concept] = anon_sym_Concept,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_asc] = anon_sym_asc,
  [anon_sym_ascending] = anon_sym_ascending,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_codesystem] = anon_sym_codesystem,
  [anon_sym_codesystems] = anon_sym_codesystems,
  [anon_sym_concept] = anon_sym_concept,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_descending] = anon_sym_descending,
  [anon_sym_display] = anon_sym_display,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_ends] = anon_sym_ends,
  [anon_sym_fluent] = anon_sym_fluent,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_meets] = anon_sym_meets,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_orafter] = anon_sym_orafter,
  [anon_sym_orbefore] = anon_sym_orbefore,
  [anon_sym_orless] = anon_sym_orless,
  [anon_sym_ormore] = anon_sym_ormore,
  [anon_sym_overlaps] = anon_sym_overlaps,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_predecessor] = anon_sym_predecessor,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_starting] = anon_sym_starting,
  [anon_sym_starts] = anon_sym_starts,
  [anon_sym_successor] = anon_sym_successor,
  [anon_sym_timezone] = anon_sym_timezone,
  [anon_sym_timezoneoffset] = anon_sym_timezoneoffset,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_single_quote_string_fragment] = sym_single_quote_string_fragment,
  [sym_double_quote_string_fragment] = sym_double_quote_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_cql_library] = sym_cql_library,
  [sym_definition] = sym_definition,
  [sym_library_definition] = sym_library_definition,
  [sym_using_definition] = sym_using_definition,
  [sym_include_definition] = sym_include_definition,
  [sym_valueset_definition] = sym_valueset_definition,
  [sym_statement] = sym_statement,
  [sym_context_definition] = sym_context_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_expression_definition] = sym_expression_definition,
  [sym_expression] = sym_expression,
  [sym_expression_term] = sym_expression_term,
  [sym_term] = sym_term,
  [sym_literal] = sym_literal,
  [sym_qualified_identifier_expression] = sym_qualified_identifier_expression,
  [sym_boolean_expression] = sym_boolean_expression,
  [sym_type_expression] = sym_type_expression,
  [sym_cast_expression] = sym_cast_expression,
  [sym_not_expression] = sym_not_expression,
  [sym_existence_expression] = sym_existence_expression,
  [sym_between_expression] = sym_between_expression,
  [sym_equality_expression] = sym_equality_expression,
  [sym_inequality_expression] = sym_inequality_expression,
  [sym_and_expression] = sym_and_expression,
  [sym_or_expression] = sym_or_expression,
  [sym_implies_expression] = sym_implies_expression,
  [sym_in_fix_set_expression] = sym_in_fix_set_expression,
  [sym_query] = sym_query,
  [sym_where_clause] = sym_where_clause,
  [sym_query_source] = sym_query_source,
  [sym_aliased_query_source] = sym_aliased_query_source,
  [sym_query_source_clause] = sym_query_source_clause,
  [sym_retrieve] = sym_retrieve,
  [sym_terminology] = sym_terminology,
  [sym_type_specifier] = sym_type_specifier,
  [sym_named_type_specifier] = sym_named_type_specifier,
  [sym_version_specifier] = sym_version_specifier,
  [sym_identifier] = sym_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_quoted_identifier] = sym_quoted_identifier,
  [sym_referential_identifier] = sym_referential_identifier,
  [sym_type_name_identifier] = sym_type_name_identifier,
  [sym_referential_or_type_name_identifier] = sym_referential_or_type_name_identifier,
  [sym_keyword_identifier] = sym_keyword_identifier,
  [sym_string] = sym_string,
  [aux_sym_cql_library_repeat1] = aux_sym_cql_library_repeat1,
  [aux_sym_cql_library_repeat2] = aux_sym_cql_library_repeat2,
  [aux_sym_qualified_identifier_expression_repeat1] = aux_sym_qualified_identifier_expression_repeat1,
  [aux_sym_query_source_clause_repeat1] = aux_sym_query_source_clause_repeat1,
  [aux_sym_named_type_specifier_repeat1] = aux_sym_named_type_specifier_repeat1,
  [aux_sym_quoted_identifier_repeat1] = aux_sym_quoted_identifier_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_function_body] = alias_sym_function_body,
  [alias_sym_local_identifier] = alias_sym_local_identifier,
  [alias_sym_model_identifier] = alias_sym_model_identifier,
  [alias_sym_null_literal] = alias_sym_null_literal,
  [alias_sym_qualifier] = alias_sym_qualifier,
  [alias_sym_qualifier_expression] = alias_sym_qualifier_expression,
  [alias_sym_query_alias] = alias_sym_query_alias,
  [alias_sym_string_literal] = alias_sym_string_literal,
  [alias_sym_version] = alias_sym_version,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_called] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valueset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_context] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_properly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_between] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intersect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [sym_default_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Concept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ascending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codesystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codesystems] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_desc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_descending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_display] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fluent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orafter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orbefore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ormore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_predecessor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_starting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_starts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_successor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timezone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timezoneoffset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_single_quote_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_cql_library] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_library_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_using_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_include_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_valueset_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_context_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_term] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_not_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_existence_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_between_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_inequality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_implies_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_in_fix_set_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_query_source] = {
    .visible = true,
    .named = true,
  },
  [sym_aliased_query_source] = {
    .visible = true,
    .named = true,
  },
  [sym_query_source_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_retrieve] = {
    .visible = true,
    .named = true,
  },
  [sym_terminology] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_named_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_version_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_referential_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_referential_or_type_name_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_cql_library_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cql_library_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_identifier_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_source_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_type_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_local_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_model_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_qualifier_expression] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_query_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_version] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_qualifier,
  },
  [2] = {
    [1] = alias_sym_version,
  },
  [3] = {
    [3] = alias_sym_local_identifier,
  },
  [4] = {
    [1] = alias_sym_model_identifier,
  },
  [5] = {
    [0] = alias_sym_null_literal,
  },
  [6] = {
    [0] = alias_sym_string_literal,
  },
  [7] = {
    [4] = alias_sym_local_identifier,
  },
  [8] = {
    [1] = alias_sym_query_alias,
  },
  [9] = {
    [0] = alias_sym_qualifier_expression,
  },
  [10] = {
    [6] = alias_sym_function_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_expression, 2,
    sym_expression,
    alias_sym_function_body,
  sym_identifier, 5,
    sym_identifier,
    alias_sym_local_identifier,
    alias_sym_model_identifier,
    alias_sym_qualifier,
    alias_sym_query_alias,
  sym_referential_identifier, 2,
    sym_referential_identifier,
    alias_sym_qualifier_expression,
  sym_string, 3,
    sym_string,
    alias_sym_string_literal,
    alias_sym_version,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 3,
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 12,
  [18] = 15,
  [19] = 19,
  [20] = 9,
  [21] = 6,
  [22] = 10,
  [23] = 11,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 29,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 34,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 62,
  [91] = 64,
  [92] = 61,
  [93] = 93,
  [94] = 63,
  [95] = 95,
  [96] = 96,
  [97] = 93,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 81,
  [132] = 132,
  [133] = 38,
  [134] = 80,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 138,
  [147] = 144,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 43,
  [157] = 157,
  [158] = 158,
  [159] = 44,
  [160] = 160,
  [161] = 45,
  [162] = 162,
  [163] = 41,
  [164] = 164,
  [165] = 64,
  [166] = 61,
  [167] = 162,
  [168] = 168,
  [169] = 162,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 172,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 180,
  [182] = 180,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
};

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(144);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == ')') ADVANCE(163);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(375);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(124);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'b') ADVANCE(261);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(379);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(188);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(141)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == ')') ADVANCE(163);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(404);
      if (lookahead == 'u') ADVANCE(359);
      if (lookahead == 'x') ADVANCE(379);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(188);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(379);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(379);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(379);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == ']') ADVANCE(212);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'C') ADVANCE(375);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(379);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'C') ADVANCE(375);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(379);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(455);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '/') ADVANCE(521);
      if (lookahead == '\\') ADVANCE(124);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(524);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(471);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(512);
      if (lookahead == '/') ADVANCE(515);
      if (lookahead == '\\') ADVANCE(124);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(518);
      if (lookahead != 0) ADVANCE(519);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(530);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(529);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 't') ADVANCE(108);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '~') ADVANCE(189);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(528);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 130:
      if (lookahead == 'w') ADVANCE(54);
      END_STATE();
    case 131:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 132:
      if (lookahead == 'x') ADVANCE(119);
      END_STATE();
    case 133:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(180);
      END_STATE();
    case 135:
      if (lookahead == '{') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 136:
      if (lookahead == '}') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 141:
      if (eof) ADVANCE(144);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == ')') ADVANCE(163);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(375);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'b') ADVANCE(261);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(379);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(188);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(141)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 142:
      if (eof) ADVANCE(144);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(404);
      if (lookahead == 'u') ADVANCE(359);
      if (lookahead == 'x') ADVANCE(379);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(188);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(142)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 143:
      if (eof) ADVANCE(144);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(512);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == ')') ADVANCE(163);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == 'v') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(88);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(188);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(143)
      END_STATE();
    case 144:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_called);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_called);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_valueset);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_cast);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_exists);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_properly);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_properly);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_between);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_between);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_implies);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_implies);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_intersect);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_intersect);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == 'u') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 'u') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 'u') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == 'u') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == 'y') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 's') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'g') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'g') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'g') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'g') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead == 's') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 's') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 's') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'x') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'x') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == 'v') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 'v') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == 'v') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_Code);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_Concept);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'z') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(471);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_asc);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_ascending);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_codesystems);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_concept);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_descending);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_display);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 's') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_ends);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_fluent);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_meets);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_orafter);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_orbefore);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_orless);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_ormore);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_overlaps);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_predecessor);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 's') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_starting);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_starts);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_successor);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_width);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(517);
      if (lookahead == '/') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(519);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '/') ADVANCE(515);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(525);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(522);
      if (lookahead == '/') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(523);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(521);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(526);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(527);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(530);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 143},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 143},
  [44] = {.lex_state = 143},
  [45] = {.lex_state = 143},
  [46] = {.lex_state = 143},
  [47] = {.lex_state = 143},
  [48] = {.lex_state = 143},
  [49] = {.lex_state = 143},
  [50] = {.lex_state = 143},
  [51] = {.lex_state = 143},
  [52] = {.lex_state = 143},
  [53] = {.lex_state = 143},
  [54] = {.lex_state = 143},
  [55] = {.lex_state = 143},
  [56] = {.lex_state = 143},
  [57] = {.lex_state = 143},
  [58] = {.lex_state = 143},
  [59] = {.lex_state = 143},
  [60] = {.lex_state = 143},
  [61] = {.lex_state = 142},
  [62] = {.lex_state = 142},
  [63] = {.lex_state = 143},
  [64] = {.lex_state = 142},
  [65] = {.lex_state = 143},
  [66] = {.lex_state = 143},
  [67] = {.lex_state = 143},
  [68] = {.lex_state = 143},
  [69] = {.lex_state = 143},
  [70] = {.lex_state = 143},
  [71] = {.lex_state = 143},
  [72] = {.lex_state = 143},
  [73] = {.lex_state = 143},
  [74] = {.lex_state = 143},
  [75] = {.lex_state = 143},
  [76] = {.lex_state = 143},
  [77] = {.lex_state = 143},
  [78] = {.lex_state = 143},
  [79] = {.lex_state = 143},
  [80] = {.lex_state = 143},
  [81] = {.lex_state = 143},
  [82] = {.lex_state = 143},
  [83] = {.lex_state = 143},
  [84] = {.lex_state = 143},
  [85] = {.lex_state = 143},
  [86] = {.lex_state = 143},
  [87] = {.lex_state = 143},
  [88] = {.lex_state = 143},
  [89] = {.lex_state = 143},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 143},
  [94] = {.lex_state = 143},
  [95] = {.lex_state = 143},
  [96] = {.lex_state = 143},
  [97] = {.lex_state = 143},
  [98] = {.lex_state = 143},
  [99] = {.lex_state = 143},
  [100] = {.lex_state = 143},
  [101] = {.lex_state = 143},
  [102] = {.lex_state = 143},
  [103] = {.lex_state = 143},
  [104] = {.lex_state = 143},
  [105] = {.lex_state = 143},
  [106] = {.lex_state = 143},
  [107] = {.lex_state = 143},
  [108] = {.lex_state = 143},
  [109] = {.lex_state = 143},
  [110] = {.lex_state = 143},
  [111] = {.lex_state = 143},
  [112] = {.lex_state = 143},
  [113] = {.lex_state = 143},
  [114] = {.lex_state = 143},
  [115] = {.lex_state = 143},
  [116] = {.lex_state = 143},
  [117] = {.lex_state = 143},
  [118] = {.lex_state = 143},
  [119] = {.lex_state = 143},
  [120] = {.lex_state = 143},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 143},
  [123] = {.lex_state = 143},
  [124] = {.lex_state = 143},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 143},
  [127] = {.lex_state = 143},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 143},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 143},
  [155] = {.lex_state = 15},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 143},
  [158] = {.lex_state = 143},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 143},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 143},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 143},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 143},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 143},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 143},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_called] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_valueset] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_cast] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_properly] = ACTIONS(1),
    [anon_sym_between] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_implies] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_intersect] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [sym_default_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_Code] = ACTIONS(1),
    [anon_sym_Concept] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_codesystem] = ACTIONS(1),
    [anon_sym_codesystems] = ACTIONS(1),
    [anon_sym_concept] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_descending] = ACTIONS(1),
    [anon_sym_display] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_ends] = ACTIONS(1),
    [anon_sym_fluent] = ACTIONS(1),
    [anon_sym_includes] = ACTIONS(1),
    [anon_sym_meets] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_overlaps] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_predecessor] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_starting] = ACTIONS(1),
    [anon_sym_starts] = ACTIONS(1),
    [anon_sym_successor] = ACTIONS(1),
    [anon_sym_timezone] = ACTIONS(1),
    [anon_sym_timezoneoffset] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_cql_library] = STATE(177),
    [sym_definition] = STATE(99),
    [sym_library_definition] = STATE(101),
    [sym_using_definition] = STATE(120),
    [sym_include_definition] = STATE(120),
    [sym_valueset_definition] = STATE(120),
    [sym_statement] = STATE(111),
    [sym_context_definition] = STATE(160),
    [sym_function_definition] = STATE(160),
    [sym_expression_definition] = STATE(160),
    [aux_sym_cql_library_repeat1] = STATE(99),
    [aux_sym_cql_library_repeat2] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_library] = ACTIONS(7),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_valueset] = ACTIONS(13),
    [anon_sym_context] = ACTIONS(15),
    [anon_sym_define] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(89),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(63),
    [sym_retrieve] = STATE(62),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_external] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(88),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(63),
    [sym_retrieve] = STATE(62),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(98),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(94),
    [sym_retrieve] = STATE(90),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(76),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(63),
    [sym_retrieve] = STATE(62),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(97),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(94),
    [sym_retrieve] = STATE(90),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(76),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(94),
    [sym_retrieve] = STATE(90),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(74),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(94),
    [sym_retrieve] = STATE(90),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(75),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(94),
    [sym_retrieve] = STATE(90),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(84),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(94),
    [sym_retrieve] = STATE(90),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(85),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(94),
    [sym_retrieve] = STATE(90),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(73),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(94),
    [sym_retrieve] = STATE(90),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(88),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(94),
    [sym_retrieve] = STATE(90),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(74),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(63),
    [sym_retrieve] = STATE(62),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(86),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(94),
    [sym_retrieve] = STATE(90),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(96),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(94),
    [sym_retrieve] = STATE(90),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(47),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(73),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(63),
    [sym_retrieve] = STATE(62),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(86),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(63),
    [sym_retrieve] = STATE(62),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_expression] = STATE(95),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(63),
    [sym_retrieve] = STATE(62),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_expression] = STATE(75),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(63),
    [sym_retrieve] = STATE(62),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_expression] = STATE(93),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(63),
    [sym_retrieve] = STATE(62),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_expression] = STATE(84),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(63),
    [sym_retrieve] = STATE(62),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_expression] = STATE(85),
    [sym_expression_term] = STATE(67),
    [sym_term] = STATE(68),
    [sym_literal] = STATE(69),
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_boolean_expression] = STATE(67),
    [sym_type_expression] = STATE(67),
    [sym_cast_expression] = STATE(67),
    [sym_not_expression] = STATE(67),
    [sym_existence_expression] = STATE(67),
    [sym_between_expression] = STATE(67),
    [sym_equality_expression] = STATE(67),
    [sym_inequality_expression] = STATE(67),
    [sym_and_expression] = STATE(67),
    [sym_or_expression] = STATE(67),
    [sym_implies_expression] = STATE(67),
    [sym_in_fix_set_expression] = STATE(67),
    [sym_query] = STATE(67),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(51),
    [sym_query_source_clause] = STATE(63),
    [sym_retrieve] = STATE(62),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [sym_string] = STATE(77),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_type_specifier] = STATE(72),
    [sym_named_type_specifier] = STATE(71),
    [sym_identifier] = STATE(48),
    [sym_quoted_identifier] = STATE(45),
    [sym_referential_identifier] = STATE(57),
    [sym_type_name_identifier] = STATE(57),
    [sym_referential_or_type_name_identifier] = STATE(60),
    [sym_keyword_identifier] = STATE(81),
    [aux_sym_named_type_specifier_repeat1] = STATE(32),
    [anon_sym_library] = ACTIONS(53),
    [anon_sym_using] = ACTIONS(53),
    [anon_sym_called] = ACTIONS(53),
    [anon_sym_include] = ACTIONS(53),
    [anon_sym_valueset] = ACTIONS(53),
    [anon_sym_context] = ACTIONS(53),
    [anon_sym_define] = ACTIONS(53),
    [anon_sym_function] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_xor] = ACTIONS(53),
    [anon_sym_implies] = ACTIONS(53),
    [anon_sym_union] = ACTIONS(53),
    [anon_sym_intersect] = ACTIONS(53),
    [anon_sym_except] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(53),
    [sym_default_identifier] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_Code] = ACTIONS(63),
    [anon_sym_Concept] = ACTIONS(63),
    [anon_sym_date] = ACTIONS(65),
    [anon_sym_time] = ACTIONS(65),
    [anon_sym_asc] = ACTIONS(53),
    [anon_sym_ascending] = ACTIONS(53),
    [anon_sym_by] = ACTIONS(53),
    [anon_sym_code] = ACTIONS(53),
    [anon_sym_codesystem] = ACTIONS(53),
    [anon_sym_codesystems] = ACTIONS(53),
    [anon_sym_concept] = ACTIONS(53),
    [anon_sym_contains] = ACTIONS(53),
    [anon_sym_default] = ACTIONS(53),
    [anon_sym_desc] = ACTIONS(53),
    [anon_sym_descending] = ACTIONS(53),
    [anon_sym_display] = ACTIONS(53),
    [anon_sym_div] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(53),
    [anon_sym_ends] = ACTIONS(53),
    [anon_sym_fluent] = ACTIONS(53),
    [anon_sym_includes] = ACTIONS(53),
    [anon_sym_meets] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(53),
    [anon_sym_orafter] = ACTIONS(67),
    [anon_sym_orbefore] = ACTIONS(67),
    [anon_sym_orless] = ACTIONS(67),
    [anon_sym_ormore] = ACTIONS(67),
    [anon_sym_overlaps] = ACTIONS(53),
    [anon_sym_parameter] = ACTIONS(53),
    [anon_sym_predecessor] = ACTIONS(53),
    [anon_sym_private] = ACTIONS(53),
    [anon_sym_public] = ACTIONS(53),
    [anon_sym_start] = ACTIONS(53),
    [anon_sym_starting] = ACTIONS(53),
    [anon_sym_starts] = ACTIONS(53),
    [anon_sym_successor] = ACTIONS(53),
    [anon_sym_timezone] = ACTIONS(53),
    [anon_sym_timezoneoffset] = ACTIONS(53),
    [anon_sym_width] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_type_specifier] = STATE(72),
    [sym_named_type_specifier] = STATE(71),
    [sym_identifier] = STATE(48),
    [sym_quoted_identifier] = STATE(45),
    [sym_referential_identifier] = STATE(57),
    [sym_type_name_identifier] = STATE(57),
    [sym_referential_or_type_name_identifier] = STATE(60),
    [sym_keyword_identifier] = STATE(81),
    [aux_sym_named_type_specifier_repeat1] = STATE(32),
    [anon_sym_library] = ACTIONS(53),
    [anon_sym_using] = ACTIONS(53),
    [anon_sym_called] = ACTIONS(53),
    [anon_sym_include] = ACTIONS(53),
    [anon_sym_valueset] = ACTIONS(53),
    [anon_sym_context] = ACTIONS(53),
    [anon_sym_define] = ACTIONS(53),
    [anon_sym_function] = ACTIONS(53),
    [anon_sym_xor] = ACTIONS(53),
    [anon_sym_implies] = ACTIONS(53),
    [anon_sym_union] = ACTIONS(53),
    [anon_sym_intersect] = ACTIONS(53),
    [anon_sym_except] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(53),
    [sym_default_identifier] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_Code] = ACTIONS(63),
    [anon_sym_Concept] = ACTIONS(63),
    [anon_sym_date] = ACTIONS(65),
    [anon_sym_time] = ACTIONS(65),
    [anon_sym_asc] = ACTIONS(53),
    [anon_sym_ascending] = ACTIONS(53),
    [anon_sym_by] = ACTIONS(53),
    [anon_sym_code] = ACTIONS(53),
    [anon_sym_codesystem] = ACTIONS(53),
    [anon_sym_codesystems] = ACTIONS(53),
    [anon_sym_concept] = ACTIONS(53),
    [anon_sym_contains] = ACTIONS(53),
    [anon_sym_default] = ACTIONS(53),
    [anon_sym_desc] = ACTIONS(53),
    [anon_sym_descending] = ACTIONS(53),
    [anon_sym_display] = ACTIONS(53),
    [anon_sym_div] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(53),
    [anon_sym_ends] = ACTIONS(53),
    [anon_sym_fluent] = ACTIONS(53),
    [anon_sym_includes] = ACTIONS(53),
    [anon_sym_meets] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(53),
    [anon_sym_orafter] = ACTIONS(67),
    [anon_sym_orbefore] = ACTIONS(67),
    [anon_sym_orless] = ACTIONS(67),
    [anon_sym_ormore] = ACTIONS(67),
    [anon_sym_overlaps] = ACTIONS(53),
    [anon_sym_parameter] = ACTIONS(53),
    [anon_sym_predecessor] = ACTIONS(53),
    [anon_sym_private] = ACTIONS(53),
    [anon_sym_public] = ACTIONS(53),
    [anon_sym_start] = ACTIONS(53),
    [anon_sym_starting] = ACTIONS(53),
    [anon_sym_starts] = ACTIONS(53),
    [anon_sym_successor] = ACTIONS(53),
    [anon_sym_timezone] = ACTIONS(53),
    [anon_sym_timezoneoffset] = ACTIONS(53),
    [anon_sym_width] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(50),
    [sym_retrieve] = STATE(171),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_qualified_identifier_expression] = STATE(171),
    [sym_query_source] = STATE(142),
    [sym_aliased_query_source] = STATE(55),
    [sym_retrieve] = STATE(171),
    [sym_identifier] = STATE(131),
    [sym_quoted_identifier] = STATE(161),
    [sym_referential_identifier] = STATE(140),
    [sym_keyword_identifier] = STATE(131),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(39),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_type_specifier] = STATE(70),
    [sym_named_type_specifier] = STATE(71),
    [sym_identifier] = STATE(48),
    [sym_quoted_identifier] = STATE(45),
    [sym_referential_identifier] = STATE(57),
    [sym_type_name_identifier] = STATE(57),
    [sym_referential_or_type_name_identifier] = STATE(60),
    [sym_keyword_identifier] = STATE(81),
    [aux_sym_named_type_specifier_repeat1] = STATE(32),
    [anon_sym_library] = ACTIONS(53),
    [anon_sym_using] = ACTIONS(53),
    [anon_sym_called] = ACTIONS(53),
    [anon_sym_include] = ACTIONS(53),
    [anon_sym_valueset] = ACTIONS(53),
    [anon_sym_context] = ACTIONS(53),
    [anon_sym_define] = ACTIONS(53),
    [anon_sym_function] = ACTIONS(53),
    [anon_sym_xor] = ACTIONS(53),
    [anon_sym_implies] = ACTIONS(53),
    [anon_sym_union] = ACTIONS(53),
    [anon_sym_intersect] = ACTIONS(53),
    [anon_sym_except] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(53),
    [sym_default_identifier] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_Code] = ACTIONS(63),
    [anon_sym_Concept] = ACTIONS(63),
    [anon_sym_date] = ACTIONS(65),
    [anon_sym_time] = ACTIONS(65),
    [anon_sym_asc] = ACTIONS(53),
    [anon_sym_ascending] = ACTIONS(53),
    [anon_sym_by] = ACTIONS(53),
    [anon_sym_code] = ACTIONS(53),
    [anon_sym_codesystem] = ACTIONS(53),
    [anon_sym_codesystems] = ACTIONS(53),
    [anon_sym_concept] = ACTIONS(53),
    [anon_sym_contains] = ACTIONS(53),
    [anon_sym_default] = ACTIONS(53),
    [anon_sym_desc] = ACTIONS(53),
    [anon_sym_descending] = ACTIONS(53),
    [anon_sym_display] = ACTIONS(53),
    [anon_sym_div] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(53),
    [anon_sym_ends] = ACTIONS(53),
    [anon_sym_fluent] = ACTIONS(53),
    [anon_sym_includes] = ACTIONS(53),
    [anon_sym_meets] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(53),
    [anon_sym_orafter] = ACTIONS(67),
    [anon_sym_orbefore] = ACTIONS(67),
    [anon_sym_orless] = ACTIONS(67),
    [anon_sym_ormore] = ACTIONS(67),
    [anon_sym_overlaps] = ACTIONS(53),
    [anon_sym_parameter] = ACTIONS(53),
    [anon_sym_predecessor] = ACTIONS(53),
    [anon_sym_private] = ACTIONS(53),
    [anon_sym_public] = ACTIONS(53),
    [anon_sym_start] = ACTIONS(53),
    [anon_sym_starting] = ACTIONS(53),
    [anon_sym_starts] = ACTIONS(53),
    [anon_sym_successor] = ACTIONS(53),
    [anon_sym_timezone] = ACTIONS(53),
    [anon_sym_timezoneoffset] = ACTIONS(53),
    [anon_sym_width] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_named_type_specifier] = STATE(167),
    [sym_identifier] = STATE(48),
    [sym_quoted_identifier] = STATE(45),
    [sym_referential_identifier] = STATE(57),
    [sym_type_name_identifier] = STATE(57),
    [sym_referential_or_type_name_identifier] = STATE(60),
    [sym_keyword_identifier] = STATE(131),
    [aux_sym_named_type_specifier_repeat1] = STATE(33),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_Code] = ACTIONS(63),
    [anon_sym_Concept] = ACTIONS(63),
    [anon_sym_date] = ACTIONS(65),
    [anon_sym_time] = ACTIONS(65),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_named_type_specifier] = STATE(162),
    [sym_identifier] = STATE(48),
    [sym_quoted_identifier] = STATE(45),
    [sym_referential_identifier] = STATE(57),
    [sym_type_name_identifier] = STATE(57),
    [sym_referential_or_type_name_identifier] = STATE(60),
    [sym_keyword_identifier] = STATE(131),
    [aux_sym_named_type_specifier_repeat1] = STATE(33),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_Code] = ACTIONS(63),
    [anon_sym_Concept] = ACTIONS(63),
    [anon_sym_date] = ACTIONS(65),
    [anon_sym_time] = ACTIONS(65),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_named_type_specifier] = STATE(169),
    [sym_identifier] = STATE(48),
    [sym_quoted_identifier] = STATE(45),
    [sym_referential_identifier] = STATE(57),
    [sym_type_name_identifier] = STATE(57),
    [sym_referential_or_type_name_identifier] = STATE(60),
    [sym_keyword_identifier] = STATE(131),
    [aux_sym_named_type_specifier_repeat1] = STATE(33),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_Code] = ACTIONS(63),
    [anon_sym_Concept] = ACTIONS(63),
    [anon_sym_date] = ACTIONS(65),
    [anon_sym_time] = ACTIONS(65),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(43),
    [anon_sym_orbefore] = ACTIONS(43),
    [anon_sym_orless] = ACTIONS(43),
    [anon_sym_ormore] = ACTIONS(43),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_default_identifier,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(56), 1,
      sym_referential_or_type_name_identifier,
    STATE(81), 1,
      sym_keyword_identifier,
    ACTIONS(63), 2,
      anon_sym_Code,
      anon_sym_Concept,
    ACTIONS(65), 2,
      anon_sym_date,
      anon_sym_time,
    STATE(57), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(67), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(53), 46,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_contains,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_end,
      anon_sym_ends,
      anon_sym_fluent,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_mod,
      anon_sym_overlaps,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_start,
      anon_sym_starting,
      anon_sym_starts,
      anon_sym_successor,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_width,
  [91] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_default_identifier,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(56), 1,
      sym_referential_or_type_name_identifier,
    STATE(131), 1,
      sym_keyword_identifier,
    ACTIONS(63), 2,
      anon_sym_Code,
      anon_sym_Concept,
    ACTIONS(65), 2,
      anon_sym_date,
      anon_sym_time,
    STATE(57), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(43), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(19), 46,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_contains,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_end,
      anon_sym_ends,
      anon_sym_fluent,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_mod,
      anon_sym_overlaps,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_start,
      anon_sym_starting,
      anon_sym_starts,
      anon_sym_successor,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_width,
  [182] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_default_identifier,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(140), 1,
      sym_referential_identifier,
    STATE(173), 1,
      sym_qualified_identifier_expression,
    STATE(182), 1,
      sym_terminology,
    STATE(131), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(43), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(19), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_version,
      anon_sym_date,
      anon_sym_time,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_contains,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_end,
      anon_sym_ends,
      anon_sym_fluent,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_mod,
      anon_sym_overlaps,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_start,
      anon_sym_starting,
      anon_sym_starts,
      anon_sym_successor,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_width,
  [267] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_default_identifier,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(140), 1,
      sym_referential_identifier,
    STATE(173), 1,
      sym_qualified_identifier_expression,
    STATE(180), 1,
      sym_terminology,
    STATE(131), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(43), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(19), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_version,
      anon_sym_date,
      anon_sym_time,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_contains,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_end,
      anon_sym_ends,
      anon_sym_fluent,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_mod,
      anon_sym_overlaps,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_start,
      anon_sym_starting,
      anon_sym_starts,
      anon_sym_successor,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_width,
  [352] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_default_identifier,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(140), 1,
      sym_referential_identifier,
    STATE(173), 1,
      sym_qualified_identifier_expression,
    STATE(181), 1,
      sym_terminology,
    STATE(131), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(43), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(19), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_version,
      anon_sym_date,
      anon_sym_time,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_contains,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_end,
      anon_sym_ends,
      anon_sym_fluent,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_mod,
      anon_sym_overlaps,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_start,
      anon_sym_starting,
      anon_sym_starts,
      anon_sym_successor,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_width,
  [437] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_default_identifier,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(136), 1,
      sym_referential_identifier,
    STATE(131), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(43), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(19), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_version,
      anon_sym_date,
      anon_sym_time,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_contains,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_end,
      anon_sym_ends,
      anon_sym_fluent,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_mod,
      anon_sym_overlaps,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_start,
      anon_sym_starting,
      anon_sym_starts,
      anon_sym_successor,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_width,
  [516] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_default_identifier,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(174), 1,
      sym_identifier,
    ACTIONS(79), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(71), 50,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_version,
      anon_sym_Code,
      anon_sym_Concept,
      anon_sym_date,
      anon_sym_time,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_contains,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_end,
      anon_sym_ends,
      anon_sym_fluent,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_mod,
      anon_sym_overlaps,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_start,
      anon_sym_starting,
      anon_sym_starts,
      anon_sym_successor,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_width,
  [593] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_default_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(136), 1,
      sym_referential_identifier,
    STATE(161), 1,
      sym_quoted_identifier,
    STATE(131), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(43), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(19), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_version,
      anon_sym_date,
      anon_sym_time,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_contains,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_end,
      anon_sym_ends,
      anon_sym_fluent,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_mod,
      anon_sym_overlaps,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_start,
      anon_sym_starting,
      anon_sym_starts,
      anon_sym_successor,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_width,
  [672] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_default_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(186), 1,
      sym_referential_identifier,
    STATE(131), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(90), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(81), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_version,
      anon_sym_date,
      anon_sym_time,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_contains,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_end,
      anon_sym_ends,
      anon_sym_fluent,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_mod,
      anon_sym_overlaps,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_start,
      anon_sym_starting,
      anon_sym_starts,
      anon_sym_successor,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_width,
  [751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 5,
      anon_sym_DQUOTE,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(93), 51,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_version,
      sym_default_identifier,
      anon_sym_Code,
      anon_sym_Concept,
      anon_sym_date,
      anon_sym_time,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_contains,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_end,
      anon_sym_ends,
      anon_sym_fluent,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_mod,
      anon_sym_overlaps,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_start,
      anon_sym_starting,
      anon_sym_starts,
      anon_sym_successor,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_width,
  [815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 5,
      anon_sym_DQUOTE,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(97), 49,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_version,
      sym_default_identifier,
      anon_sym_date,
      anon_sym_time,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_contains,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_end,
      anon_sym_ends,
      anon_sym_fluent,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_mod,
      anon_sym_overlaps,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_start,
      anon_sym_starting,
      anon_sym_starts,
      anon_sym_successor,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_width,
  [877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 33,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_version,
  [920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 33,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_version,
  [963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 33,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_version,
  [1006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 27,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_version,
  [1043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 27,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_version,
  [1080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_DOT,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 24,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_RBRACK,
  [1117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 23,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
  [1156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 23,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
  [1195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 23,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
  [1234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 23,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
  [1273] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 23,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
  [1312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(148), 24,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_COMMA,
  [1346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 24,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_where,
      anon_sym_COMMA,
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(152), 24,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_RBRACK,
  [1414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(156), 24,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_RBRACK,
  [1448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 24,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_RBRACK,
  [1482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 24,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_RBRACK,
  [1516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 24,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_RBRACK,
  [1550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
    ACTIONS(170), 16,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      sym_default_identifier,
  [1583] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_default_identifier,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
    ACTIONS(174), 15,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_where,
    STATE(79), 1,
      sym_where_clause,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 21,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
    ACTIONS(188), 16,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      sym_default_identifier,
  [1690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(190), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(194), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(198), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(206), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(210), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(230), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(254), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(262), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(266), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 22,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2458] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_is,
    ACTIONS(282), 1,
      anon_sym_as,
    ACTIONS(284), 1,
      anon_sym_properly,
    ACTIONS(286), 1,
      anon_sym_between,
    ACTIONS(288), 1,
      anon_sym_and,
    ACTIONS(298), 1,
      anon_sym_implies,
    ACTIONS(292), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(278), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(290), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(300), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_default_identifier,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 8,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
    ACTIONS(174), 13,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 9,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
    ACTIONS(188), 14,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      sym_default_identifier,
  [2575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 9,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
    ACTIONS(170), 14,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      sym_default_identifier,
  [2606] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_and,
    ACTIONS(298), 1,
      anon_sym_implies,
    ACTIONS(292), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(290), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(300), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(302), 7,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
  [2649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_where,
    STATE(79), 1,
      sym_where_clause,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 19,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2684] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_is,
    ACTIONS(282), 1,
      anon_sym_as,
    ACTIONS(284), 1,
      anon_sym_properly,
    ACTIONS(286), 1,
      anon_sym_between,
    ACTIONS(288), 1,
      anon_sym_and,
    ACTIONS(298), 1,
      anon_sym_implies,
    ACTIONS(292), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(306), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(290), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(300), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2735] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_is,
    ACTIONS(282), 1,
      anon_sym_as,
    ACTIONS(284), 1,
      anon_sym_properly,
    ACTIONS(286), 1,
      anon_sym_between,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(310), 1,
      anon_sym_and,
    ACTIONS(320), 1,
      anon_sym_implies,
    ACTIONS(314), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(312), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(322), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2784] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_and,
    ACTIONS(320), 1,
      anon_sym_implies,
    ACTIONS(314), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(312), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(322), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(302), 5,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
  [2825] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_is,
    ACTIONS(284), 1,
      anon_sym_properly,
    ACTIONS(286), 1,
      anon_sym_between,
    ACTIONS(310), 1,
      anon_sym_and,
    ACTIONS(320), 1,
      anon_sym_implies,
    ACTIONS(324), 1,
      anon_sym_as,
    ACTIONS(314), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(312), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(322), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2871] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(102), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(109), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(120), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(160), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [2911] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    STATE(102), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(112), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(120), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(160), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [2951] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(100), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(109), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(120), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(160), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [2991] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_using,
    ACTIONS(335), 1,
      anon_sym_include,
    ACTIONS(338), 1,
      anon_sym_valueset,
    STATE(102), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    ACTIONS(330), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    STATE(120), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
  [3018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(341), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [3036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(345), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [3054] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_called,
    ACTIONS(351), 1,
      anon_sym_version,
    STATE(119), 1,
      sym_version_specifier,
    ACTIONS(347), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3075] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_version,
    ACTIONS(355), 1,
      anon_sym_called,
    STATE(115), 1,
      sym_version_specifier,
    ACTIONS(353), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_version,
    STATE(130), 1,
      sym_version_specifier,
    ACTIONS(357), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3114] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      anon_sym_context,
    ACTIONS(364), 1,
      anon_sym_define,
    STATE(108), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(160), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [3136] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    STATE(108), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(160), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [3158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_version,
    STATE(127), 1,
      sym_version_specifier,
    ACTIONS(367), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3176] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(108), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(160), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [3198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    STATE(108), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(160), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [3220] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym_literal_token1,
    ACTIONS(373), 1,
      anon_sym_null,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      sym_term,
    STATE(69), 1,
      sym_literal,
    STATE(77), 1,
      sym_string,
    STATE(187), 1,
      sym_expression_term,
  [3245] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym_literal_token1,
    ACTIONS(373), 1,
      anon_sym_null,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      sym_term,
    STATE(69), 1,
      sym_literal,
    STATE(77), 1,
      sym_string,
    STATE(78), 1,
      sym_expression_term,
  [3270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_called,
    ACTIONS(377), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3285] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym_literal_token1,
    ACTIONS(373), 1,
      anon_sym_null,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      sym_term,
    STATE(69), 1,
      sym_literal,
    STATE(77), 1,
      sym_string,
    STATE(178), 1,
      sym_expression_term,
  [3310] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym_literal_token1,
    ACTIONS(373), 1,
      anon_sym_null,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym_expression_term,
    STATE(68), 1,
      sym_term,
    STATE(69), 1,
      sym_literal,
    STATE(77), 1,
      sym_string,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 7,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_called,
    ACTIONS(383), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3375] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(103), 1,
      sym_identifier,
    STATE(106), 1,
      sym_qualified_identifier,
    STATE(132), 1,
      aux_sym_named_type_specifier_repeat1,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3433] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(103), 1,
      sym_identifier,
    STATE(107), 1,
      sym_qualified_identifier,
    STATE(132), 1,
      aux_sym_named_type_specifier_repeat1,
  [3455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3479] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(103), 1,
      sym_identifier,
    STATE(132), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(179), 1,
      sym_qualified_identifier,
  [3501] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(103), 1,
      sym_identifier,
    STATE(105), 1,
      sym_qualified_identifier,
    STATE(132), 1,
      aux_sym_named_type_specifier_repeat1,
  [3523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [3546] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(104), 1,
      sym_identifier,
    STATE(133), 1,
      aux_sym_named_type_specifier_repeat1,
  [3565] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(133), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(172), 1,
      sym_identifier,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [3595] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_default_identifier,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_function,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(184), 1,
      sym_identifier,
  [3614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(410), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [3626] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(122), 1,
      sym_identifier,
  [3642] = 4,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(414), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [3656] = 4,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_SQUOTE,
    STATE(149), 1,
      aux_sym_string_repeat1,
    ACTIONS(420), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [3670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(422), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [3682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(154), 1,
      sym_identifier,
  [3698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(54), 1,
      sym_identifier,
  [3714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(126), 1,
      sym_identifier,
  [3730] = 4,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(426), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [3744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(124), 1,
      sym_identifier,
  [3760] = 4,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(414), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [3774] = 4,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(432), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [3788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(123), 1,
      sym_identifier,
  [3804] = 4,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SQUOTE,
    STATE(149), 1,
      aux_sym_string_repeat1,
    ACTIONS(436), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [3818] = 4,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SQUOTE,
    STATE(139), 1,
      aux_sym_string_repeat1,
    ACTIONS(441), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [3832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(175), 1,
      sym_identifier,
  [3848] = 4,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(445), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [3862] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_default_identifier,
    STATE(45), 1,
      sym_quoted_identifier,
    STATE(158), 1,
      sym_identifier,
  [3878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_DOT,
    ACTIONS(448), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [3890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [3899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [3908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [3917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [3926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [3935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [3944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [3953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
  [3963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [3971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [3979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [3987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [3995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COLON,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
  [4005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      sym_string,
  [4015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_COLON,
    ACTIONS(472), 1,
      anon_sym_RBRACK,
  [4025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      sym_string,
  [4035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DOT,
  [4050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RBRACK,
  [4057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_DOT,
  [4064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
  [4071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [4078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
  [4085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_and,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_COLON,
  [4099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
  [4106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
  [4113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COLON,
  [4127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_COLON,
  [4134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_between,
  [4141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_DOT,
  [4148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_and,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(32)] = 0,
  [SMALL_STATE(33)] = 91,
  [SMALL_STATE(34)] = 182,
  [SMALL_STATE(35)] = 267,
  [SMALL_STATE(36)] = 352,
  [SMALL_STATE(37)] = 437,
  [SMALL_STATE(38)] = 516,
  [SMALL_STATE(39)] = 593,
  [SMALL_STATE(40)] = 672,
  [SMALL_STATE(41)] = 751,
  [SMALL_STATE(42)] = 815,
  [SMALL_STATE(43)] = 877,
  [SMALL_STATE(44)] = 920,
  [SMALL_STATE(45)] = 963,
  [SMALL_STATE(46)] = 1006,
  [SMALL_STATE(47)] = 1043,
  [SMALL_STATE(48)] = 1080,
  [SMALL_STATE(49)] = 1117,
  [SMALL_STATE(50)] = 1156,
  [SMALL_STATE(51)] = 1195,
  [SMALL_STATE(52)] = 1234,
  [SMALL_STATE(53)] = 1273,
  [SMALL_STATE(54)] = 1312,
  [SMALL_STATE(55)] = 1346,
  [SMALL_STATE(56)] = 1380,
  [SMALL_STATE(57)] = 1414,
  [SMALL_STATE(58)] = 1448,
  [SMALL_STATE(59)] = 1482,
  [SMALL_STATE(60)] = 1516,
  [SMALL_STATE(61)] = 1550,
  [SMALL_STATE(62)] = 1583,
  [SMALL_STATE(63)] = 1620,
  [SMALL_STATE(64)] = 1657,
  [SMALL_STATE(65)] = 1690,
  [SMALL_STATE(66)] = 1722,
  [SMALL_STATE(67)] = 1754,
  [SMALL_STATE(68)] = 1786,
  [SMALL_STATE(69)] = 1818,
  [SMALL_STATE(70)] = 1850,
  [SMALL_STATE(71)] = 1882,
  [SMALL_STATE(72)] = 1914,
  [SMALL_STATE(73)] = 1946,
  [SMALL_STATE(74)] = 1978,
  [SMALL_STATE(75)] = 2010,
  [SMALL_STATE(76)] = 2042,
  [SMALL_STATE(77)] = 2074,
  [SMALL_STATE(78)] = 2106,
  [SMALL_STATE(79)] = 2138,
  [SMALL_STATE(80)] = 2170,
  [SMALL_STATE(81)] = 2202,
  [SMALL_STATE(82)] = 2234,
  [SMALL_STATE(83)] = 2266,
  [SMALL_STATE(84)] = 2298,
  [SMALL_STATE(85)] = 2330,
  [SMALL_STATE(86)] = 2362,
  [SMALL_STATE(87)] = 2394,
  [SMALL_STATE(88)] = 2426,
  [SMALL_STATE(89)] = 2458,
  [SMALL_STATE(90)] = 2509,
  [SMALL_STATE(91)] = 2544,
  [SMALL_STATE(92)] = 2575,
  [SMALL_STATE(93)] = 2606,
  [SMALL_STATE(94)] = 2649,
  [SMALL_STATE(95)] = 2684,
  [SMALL_STATE(96)] = 2735,
  [SMALL_STATE(97)] = 2784,
  [SMALL_STATE(98)] = 2825,
  [SMALL_STATE(99)] = 2871,
  [SMALL_STATE(100)] = 2911,
  [SMALL_STATE(101)] = 2951,
  [SMALL_STATE(102)] = 2991,
  [SMALL_STATE(103)] = 3018,
  [SMALL_STATE(104)] = 3036,
  [SMALL_STATE(105)] = 3054,
  [SMALL_STATE(106)] = 3075,
  [SMALL_STATE(107)] = 3096,
  [SMALL_STATE(108)] = 3114,
  [SMALL_STATE(109)] = 3136,
  [SMALL_STATE(110)] = 3158,
  [SMALL_STATE(111)] = 3176,
  [SMALL_STATE(112)] = 3198,
  [SMALL_STATE(113)] = 3220,
  [SMALL_STATE(114)] = 3245,
  [SMALL_STATE(115)] = 3270,
  [SMALL_STATE(116)] = 3285,
  [SMALL_STATE(117)] = 3310,
  [SMALL_STATE(118)] = 3335,
  [SMALL_STATE(119)] = 3348,
  [SMALL_STATE(120)] = 3363,
  [SMALL_STATE(121)] = 3375,
  [SMALL_STATE(122)] = 3397,
  [SMALL_STATE(123)] = 3409,
  [SMALL_STATE(124)] = 3421,
  [SMALL_STATE(125)] = 3433,
  [SMALL_STATE(126)] = 3455,
  [SMALL_STATE(127)] = 3467,
  [SMALL_STATE(128)] = 3479,
  [SMALL_STATE(129)] = 3501,
  [SMALL_STATE(130)] = 3523,
  [SMALL_STATE(131)] = 3535,
  [SMALL_STATE(132)] = 3546,
  [SMALL_STATE(133)] = 3565,
  [SMALL_STATE(134)] = 3584,
  [SMALL_STATE(135)] = 3595,
  [SMALL_STATE(136)] = 3614,
  [SMALL_STATE(137)] = 3626,
  [SMALL_STATE(138)] = 3642,
  [SMALL_STATE(139)] = 3656,
  [SMALL_STATE(140)] = 3670,
  [SMALL_STATE(141)] = 3682,
  [SMALL_STATE(142)] = 3698,
  [SMALL_STATE(143)] = 3714,
  [SMALL_STATE(144)] = 3730,
  [SMALL_STATE(145)] = 3744,
  [SMALL_STATE(146)] = 3760,
  [SMALL_STATE(147)] = 3774,
  [SMALL_STATE(148)] = 3788,
  [SMALL_STATE(149)] = 3804,
  [SMALL_STATE(150)] = 3818,
  [SMALL_STATE(151)] = 3832,
  [SMALL_STATE(152)] = 3848,
  [SMALL_STATE(153)] = 3862,
  [SMALL_STATE(154)] = 3878,
  [SMALL_STATE(155)] = 3890,
  [SMALL_STATE(156)] = 3899,
  [SMALL_STATE(157)] = 3908,
  [SMALL_STATE(158)] = 3917,
  [SMALL_STATE(159)] = 3926,
  [SMALL_STATE(160)] = 3935,
  [SMALL_STATE(161)] = 3944,
  [SMALL_STATE(162)] = 3953,
  [SMALL_STATE(163)] = 3963,
  [SMALL_STATE(164)] = 3971,
  [SMALL_STATE(165)] = 3979,
  [SMALL_STATE(166)] = 3987,
  [SMALL_STATE(167)] = 3995,
  [SMALL_STATE(168)] = 4005,
  [SMALL_STATE(169)] = 4015,
  [SMALL_STATE(170)] = 4025,
  [SMALL_STATE(171)] = 4035,
  [SMALL_STATE(172)] = 4043,
  [SMALL_STATE(173)] = 4050,
  [SMALL_STATE(174)] = 4057,
  [SMALL_STATE(175)] = 4064,
  [SMALL_STATE(176)] = 4071,
  [SMALL_STATE(177)] = 4078,
  [SMALL_STATE(178)] = 4085,
  [SMALL_STATE(179)] = 4092,
  [SMALL_STATE(180)] = 4099,
  [SMALL_STATE(181)] = 4106,
  [SMALL_STATE(182)] = 4113,
  [SMALL_STATE(183)] = 4120,
  [SMALL_STATE(184)] = 4127,
  [SMALL_STATE(185)] = 4134,
  [SMALL_STATE(186)] = 4141,
  [SMALL_STATE(187)] = 4148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(45),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(144),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(134),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(45),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(144),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(134),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 9),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_identifier, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_identifier, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2), SHIFT_REPEAT(27),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliased_query_source, 2, .production_id = 8),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aliased_query_source, 2, .production_id = 8),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_identifier, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name_identifier, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 5),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_term, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_term, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_specifier, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expression, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implies_expression, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implies_expression, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_expression, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_fix_set_expression, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_fix_set_expression, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 6),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 6),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_identifier, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_identifier, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inequality_expression, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inequality_expression, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_expression, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_expression, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_expression, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_existence_expression, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_existence_expression, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 10),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_definition, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(121),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(129),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(128),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(141),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(135),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2, .production_id = 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 5, .production_id = 7),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 4, .production_id = 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 4, .production_id = 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 7),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 3),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(45),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(149),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(152),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, .production_id = 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminology, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [480] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
