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
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 39
#define SYMBOL_COUNT 171
#define ALIAS_COUNT 9
#define TOKEN_COUNT 113
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
  anon_sym_year = 41,
  anon_sym_month = 42,
  anon_sym_week = 43,
  anon_sym_day = 44,
  anon_sym_hour = 45,
  anon_sym_minute = 46,
  anon_sym_second = 47,
  anon_sym_millisecond = 48,
  anon_sym_years = 49,
  anon_sym_months = 50,
  anon_sym_weeks = 51,
  anon_sym_days = 52,
  anon_sym_hours = 53,
  anon_sym_minutes = 54,
  anon_sym_seconds = 55,
  anon_sym_milliseconds = 56,
  anon_sym_date = 57,
  anon_sym_time = 58,
  anon_sym_timezone = 59,
  anon_sym_timezoneoffset = 60,
  anon_sym_duration = 61,
  anon_sym_in = 62,
  anon_sym_difference = 63,
  anon_sym_of = 64,
  anon_sym_contains = 65,
  anon_sym_where = 66,
  anon_sym_from = 67,
  anon_sym_COMMA = 68,
  anon_sym_LBRACK = 69,
  anon_sym_RBRACK = 70,
  anon_sym_version = 71,
  sym_default_identifier = 72,
  anon_sym_DQUOTE = 73,
  anon_sym_Code = 74,
  anon_sym_Concept = 75,
  anon_sym_asc = 76,
  anon_sym_ascending = 77,
  anon_sym_by = 78,
  anon_sym_code = 79,
  anon_sym_codesystem = 80,
  anon_sym_codesystems = 81,
  anon_sym_concept = 82,
  anon_sym_default = 83,
  anon_sym_desc = 84,
  anon_sym_descending = 85,
  anon_sym_display = 86,
  anon_sym_div = 87,
  anon_sym_end = 88,
  anon_sym_ends = 89,
  anon_sym_fluent = 90,
  anon_sym_includes = 91,
  anon_sym_meets = 92,
  anon_sym_mod = 93,
  anon_sym_orafter = 94,
  anon_sym_orbefore = 95,
  anon_sym_orless = 96,
  anon_sym_ormore = 97,
  anon_sym_overlaps = 98,
  anon_sym_parameter = 99,
  anon_sym_predecessor = 100,
  anon_sym_private = 101,
  anon_sym_public = 102,
  anon_sym_start = 103,
  anon_sym_starting = 104,
  anon_sym_starts = 105,
  anon_sym_successor = 106,
  anon_sym_width = 107,
  anon_sym_SQUOTE = 108,
  sym_single_quote_string_fragment = 109,
  sym_double_quote_string_fragment = 110,
  sym_escape_sequence = 111,
  sym_comment = 112,
  sym_cql_library = 113,
  sym_definition = 114,
  sym_library_definition = 115,
  sym_using_definition = 116,
  sym_include_definition = 117,
  sym_valueset_definition = 118,
  sym_statement = 119,
  sym_context_definition = 120,
  sym_function_definition = 121,
  sym_expression_definition = 122,
  sym_expression = 123,
  sym_expression_term = 124,
  sym_term = 125,
  sym_literal = 126,
  sym_qualified_identifier_expression = 127,
  sym_boolean_expression = 128,
  sym_type_expression = 129,
  sym_cast_expression = 130,
  sym_not_expression = 131,
  sym_existence_expression = 132,
  sym_between_expression = 133,
  sym_equality_expression = 134,
  sym_inequality_expression = 135,
  sym_and_expression = 136,
  sym_or_expression = 137,
  sym_implies_expression = 138,
  sym_in_fix_set_expression = 139,
  sym_date_time_precision = 140,
  sym_plural_date_time_precision = 141,
  sym_duration_between_expression = 142,
  sym_difference_between_expression = 143,
  sym_date_time_precision_specifier = 144,
  sym_membership_expression = 145,
  sym_query = 146,
  sym_where_clause = 147,
  sym_query_source = 148,
  sym_aliased_query_source = 149,
  sym_query_source_clause = 150,
  sym_retrieve = 151,
  sym_terminology = 152,
  sym_type_specifier = 153,
  sym_named_type_specifier = 154,
  sym_version_specifier = 155,
  sym_identifier = 156,
  sym_qualified_identifier = 157,
  sym_quoted_identifier = 158,
  sym_referential_identifier = 159,
  sym_type_name_identifier = 160,
  sym_referential_or_type_name_identifier = 161,
  sym_keyword_identifier = 162,
  sym_string = 163,
  aux_sym_cql_library_repeat1 = 164,
  aux_sym_cql_library_repeat2 = 165,
  aux_sym_qualified_identifier_expression_repeat1 = 166,
  aux_sym_query_source_clause_repeat1 = 167,
  aux_sym_named_type_specifier_repeat1 = 168,
  aux_sym_quoted_identifier_repeat1 = 169,
  aux_sym_string_repeat1 = 170,
  alias_sym_function_body = 171,
  alias_sym_local_identifier = 172,
  alias_sym_model_identifier = 173,
  alias_sym_null_literal = 174,
  alias_sym_qualifier = 175,
  alias_sym_qualifier_expression = 176,
  alias_sym_query_alias = 177,
  alias_sym_string_literal = 178,
  alias_sym_version = 179,
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
  [anon_sym_year] = "year",
  [anon_sym_month] = "month",
  [anon_sym_week] = "week",
  [anon_sym_day] = "day",
  [anon_sym_hour] = "hour",
  [anon_sym_minute] = "minute",
  [anon_sym_second] = "second",
  [anon_sym_millisecond] = "millisecond",
  [anon_sym_years] = "years",
  [anon_sym_months] = "months",
  [anon_sym_weeks] = "weeks",
  [anon_sym_days] = "days",
  [anon_sym_hours] = "hours",
  [anon_sym_minutes] = "minutes",
  [anon_sym_seconds] = "seconds",
  [anon_sym_milliseconds] = "milliseconds",
  [anon_sym_date] = "date",
  [anon_sym_time] = "time",
  [anon_sym_timezone] = "timezone",
  [anon_sym_timezoneoffset] = "timezoneoffset",
  [anon_sym_duration] = "duration",
  [anon_sym_in] = "in",
  [anon_sym_difference] = "difference",
  [anon_sym_of] = "of",
  [anon_sym_contains] = "contains",
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
  [anon_sym_asc] = "asc",
  [anon_sym_ascending] = "ascending",
  [anon_sym_by] = "by",
  [anon_sym_code] = "code",
  [anon_sym_codesystem] = "codesystem",
  [anon_sym_codesystems] = "codesystems",
  [anon_sym_concept] = "concept",
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
  [sym_date_time_precision] = "date_time_precision",
  [sym_plural_date_time_precision] = "plural_date_time_precision",
  [sym_duration_between_expression] = "duration_between_expression",
  [sym_difference_between_expression] = "difference_between_expression",
  [sym_date_time_precision_specifier] = "date_time_precision_specifier",
  [sym_membership_expression] = "membership_expression",
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
  [anon_sym_year] = anon_sym_year,
  [anon_sym_month] = anon_sym_month,
  [anon_sym_week] = anon_sym_week,
  [anon_sym_day] = anon_sym_day,
  [anon_sym_hour] = anon_sym_hour,
  [anon_sym_minute] = anon_sym_minute,
  [anon_sym_second] = anon_sym_second,
  [anon_sym_millisecond] = anon_sym_millisecond,
  [anon_sym_years] = anon_sym_years,
  [anon_sym_months] = anon_sym_months,
  [anon_sym_weeks] = anon_sym_weeks,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_hours] = anon_sym_hours,
  [anon_sym_minutes] = anon_sym_minutes,
  [anon_sym_seconds] = anon_sym_seconds,
  [anon_sym_milliseconds] = anon_sym_milliseconds,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_timezone] = anon_sym_timezone,
  [anon_sym_timezoneoffset] = anon_sym_timezoneoffset,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_difference] = anon_sym_difference,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_contains] = anon_sym_contains,
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
  [anon_sym_asc] = anon_sym_asc,
  [anon_sym_ascending] = anon_sym_ascending,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_codesystem] = anon_sym_codesystem,
  [anon_sym_codesystems] = anon_sym_codesystems,
  [anon_sym_concept] = anon_sym_concept,
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
  [sym_date_time_precision] = sym_date_time_precision,
  [sym_plural_date_time_precision] = sym_plural_date_time_precision,
  [sym_duration_between_expression] = sym_duration_between_expression,
  [sym_difference_between_expression] = sym_difference_between_expression,
  [sym_date_time_precision_specifier] = sym_date_time_precision_specifier,
  [sym_membership_expression] = sym_membership_expression,
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
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_month] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_week] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_day] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_second] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_millisecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_years] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_months] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weeks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_days] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hours] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minutes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_milliseconds] = {
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
  [anon_sym_timezone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timezoneoffset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_difference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
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
  [sym_date_time_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_plural_date_time_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_duration_between_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_difference_between_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_date_time_precision_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_membership_expression] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 9,
  [20] = 20,
  [21] = 14,
  [22] = 11,
  [23] = 7,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 25,
  [28] = 17,
  [29] = 18,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 36,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 41,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 44,
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
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 70,
  [101] = 69,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 68,
  [107] = 71,
  [108] = 108,
  [109] = 102,
  [110] = 99,
  [111] = 103,
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
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
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
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 80,
  [154] = 46,
  [155] = 74,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 162,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 159,
  [177] = 177,
  [178] = 178,
  [179] = 52,
  [180] = 51,
  [181] = 50,
  [182] = 182,
  [183] = 183,
  [184] = 68,
  [185] = 48,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 188,
  [191] = 188,
  [192] = 192,
  [193] = 69,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 198,
  [213] = 213,
  [214] = 198,
  [215] = 215,
  [216] = 210,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
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
      if (eof) ADVANCE(326);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(855);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == ',') ADVANCE(449);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(203);
      if (lookahead == '[') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(298);
      if (lookahead == ']') ADVANCE(451);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(208);
      if (lookahead == 'y') ADVANCE(115);
      if (lookahead == '|') ADVANCE(388);
      if (lookahead == '~') ADVANCE(376);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(323)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'b') ADVANCE(555);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'u') ADVANCE(643);
      if (lookahead == 'x') ADVANCE(666);
      if (lookahead == '|') ADVANCE(388);
      if (lookahead == '~') ADVANCE(376);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(856);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(786);
      if (lookahead == 'c') ADVANCE(455);
      if (lookahead == 'd') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == 'f') ADVANCE(457);
      if (lookahead == 'h') ADVANCE(663);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead == 'm') ADVANCE(530);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == 'o') ADVANCE(688);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(539);
      if (lookahead == 'x') ADVANCE(666);
      if (lookahead == 'y') ADVANCE(559);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(856);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(786);
      if (lookahead == 'c') ADVANCE(455);
      if (lookahead == 'd') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == 'f') ADVANCE(457);
      if (lookahead == 'h') ADVANCE(668);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead == 'm') ADVANCE(531);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == 'o') ADVANCE(688);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == 'x') ADVANCE(666);
      if (lookahead == 'y') ADVANCE(566);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(856);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(786);
      if (lookahead == 'c') ADVANCE(455);
      if (lookahead == 'd') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == 'f') ADVANCE(457);
      if (lookahead == 'h') ADVANCE(668);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead == 'm') ADVANCE(531);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == 'o') ADVANCE(688);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == 'x') ADVANCE(666);
      if (lookahead == 'y') ADVANCE(566);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(786);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == 'f') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(627);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead == 'm') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(688);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == 's') ADVANCE(740);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(585);
      if (lookahead == 'x') ADVANCE(666);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == ']') ADVANCE(451);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(786);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == 'f') ADVANCE(475);
      if (lookahead == 'i') ADVANCE(627);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead == 'm') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == 'o') ADVANCE(688);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == 's') ADVANCE(740);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(585);
      if (lookahead == 'x') ADVANCE(666);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(786);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == 'f') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(627);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead == 'm') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(688);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == 's') ADVANCE(740);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(585);
      if (lookahead == 'x') ADVANCE(666);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(771);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '/') ADVANCE(864);
      if (lookahead == '\\') ADVANCE(298);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(867);
      if (lookahead != 0) ADVANCE(868);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(855);
      if (lookahead == '/') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(298);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(861);
      if (lookahead != 0) ADVANCE(862);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(791);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(873);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == 't') ADVANCE(248);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(375);
      if (lookahead == '~') ADVANCE(377);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(250);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(812);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(843);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(820);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(829);
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(408);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(410);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'y') ADVANCE(799);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == 'v') ADVANCE(817);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(121);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(219);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(269);
      END_STATE();
    case 134:
      if (lookahead == 'f') ADVANCE(295);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(329);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(847);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(813);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(398);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(853);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 154:
      if (lookahead == 'k') ADVANCE(400);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(439);
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(804);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(851);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(839);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(831);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(827);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(835);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(833);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(846);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(823);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(795);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(807);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(809);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == 'y') ADVANCE(402);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(317);
      if (lookahead == 'x') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(871);
      if (lookahead != 0) ADVANCE(869);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 302:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 307:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 308:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 309:
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 310:
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 311:
      if (lookahead == 'x') ADVANCE(281);
      END_STATE();
    case 312:
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 313:
      if (lookahead == 'y') ADVANCE(815);
      END_STATE();
    case 314:
      if (lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 315:
      if (lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 316:
      if (lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 317:
      if (lookahead == '{') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 318:
      if (lookahead == '}') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 319:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 320:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(869);
      END_STATE();
    case 321:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 322:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 323:
      if (eof) ADVANCE(326);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(855);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == ',') ADVANCE(449);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(203);
      if (lookahead == '[') ADVANCE(450);
      if (lookahead == ']') ADVANCE(451);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(208);
      if (lookahead == 'y') ADVANCE(115);
      if (lookahead == '|') ADVANCE(388);
      if (lookahead == '~') ADVANCE(376);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(323)
      END_STATE();
    case 324:
      if (eof) ADVANCE(326);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'b') ADVANCE(555);
      if (lookahead == 'c') ADVANCE(677);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'u') ADVANCE(643);
      if (lookahead == 'x') ADVANCE(666);
      if (lookahead == '|') ADVANCE(388);
      if (lookahead == '~') ADVANCE(376);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(324)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 325:
      if (eof) ADVANCE(326);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(855);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == ',') ADVANCE(449);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == ']') ADVANCE(451);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(208);
      if (lookahead == '|') ADVANCE(388);
      if (lookahead == '~') ADVANCE(376);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(325)
      END_STATE();
    case 326:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_called);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_called);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 's') ADVANCE(825);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_valueset);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_cast);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_cast);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_exists);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_properly);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_properly);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_between);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_between);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_implies);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_implies);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_intersect);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_intersect);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_years);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_months);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_weeks);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_days);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_hours);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_minutes);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_seconds);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'z') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(791);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'z') ADVANCE(216);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(615);
      if (lookahead == 't') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_difference);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_difference);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(610);
      if (lookahead == 'o') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'u') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == 'l') ADVANCE(774);
      if (lookahead == 'r') ADVANCE(664);
      if (lookahead == 'u') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(760);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'u') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'e') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(776);
      if (lookahead == 'i') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(594);
      if (lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'i') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(697);
      if (lookahead == 'r') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(611);
      if (lookahead == 'o') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(623);
      if (lookahead == 'l') ADVANCE(774);
      if (lookahead == 'u') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(615);
      if (lookahead == 't') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead == 't') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(561);
      if (lookahead == 't') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(830);
      if (lookahead == 'n') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(830);
      if (lookahead == 'n') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(515);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'i') ADVANCE(618);
      if (lookahead == 'o') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == 'o') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'o') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == 'u') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == 'i') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead == 'i') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead == 'i') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == 'u') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == 's') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(576);
      if (lookahead == 's') ADVANCE(683);
      if (lookahead == 'v') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead == 'i') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(774);
      if (lookahead == 'u') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead == 's') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead == 'n') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(624);
      if (lookahead == 'n') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(681);
      if (lookahead == 'n') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(681);
      if (lookahead == 'n') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(681);
      if (lookahead == 'n') ADVANCE(762);
      if (lookahead == 's') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead == 'x') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead == 'x') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead == 'x') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(592);
      if (lookahead == 's') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(504);
      if (lookahead == 's') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(741);
      if (lookahead == 'u') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(454);
      if (lookahead == 'v') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(683);
      if (lookahead == 'v') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == 'u') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == 'y') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == 'y') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 't') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_Code);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_Code);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_Concept);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_Concept);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_asc);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_ascending);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == 's') ADVANCE(805);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_codesystems);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_codesystems);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_concept);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_concept);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_descending);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_descending);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_display);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_display);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 's') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 's') ADVANCE(821);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_ends);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_ends);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_fluent);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_fluent);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_meets);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_meets);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_orafter);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_orbefore);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_orless);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_ormore);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_overlaps);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_overlaps);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_predecessor);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_predecessor);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead == 's') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 's') ADVANCE(849);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_starting);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_starting);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_starts);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_starts);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_successor);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_successor);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_width);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(857);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(860);
      if (lookahead == '/') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(862);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(859);
      if (lookahead == '/') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(860);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(860);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '/') ADVANCE(858);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(862);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(862);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(863);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(866);
      if (lookahead == '/') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(868);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(865);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(866);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(866);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(864);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(868);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(868);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(869);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(870);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(873);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 325},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 4},
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
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 325},
  [51] = {.lex_state = 325},
  [52] = {.lex_state = 325},
  [53] = {.lex_state = 325},
  [54] = {.lex_state = 325},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 324},
  [69] = {.lex_state = 324},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 324},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 325},
  [114] = {.lex_state = 325},
  [115] = {.lex_state = 325},
  [116] = {.lex_state = 325},
  [117] = {.lex_state = 325},
  [118] = {.lex_state = 325},
  [119] = {.lex_state = 325},
  [120] = {.lex_state = 325},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 325},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 325},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 325},
  [130] = {.lex_state = 325},
  [131] = {.lex_state = 325},
  [132] = {.lex_state = 325},
  [133] = {.lex_state = 325},
  [134] = {.lex_state = 325},
  [135] = {.lex_state = 325},
  [136] = {.lex_state = 325},
  [137] = {.lex_state = 325},
  [138] = {.lex_state = 325},
  [139] = {.lex_state = 325},
  [140] = {.lex_state = 325},
  [141] = {.lex_state = 325},
  [142] = {.lex_state = 325},
  [143] = {.lex_state = 325},
  [144] = {.lex_state = 325},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 325},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 325},
  [150] = {.lex_state = 325},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 325},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 16},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
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
    [anon_sym_year] = ACTIONS(1),
    [anon_sym_month] = ACTIONS(1),
    [anon_sym_week] = ACTIONS(1),
    [anon_sym_day] = ACTIONS(1),
    [anon_sym_hour] = ACTIONS(1),
    [anon_sym_minute] = ACTIONS(1),
    [anon_sym_second] = ACTIONS(1),
    [anon_sym_millisecond] = ACTIONS(1),
    [anon_sym_years] = ACTIONS(1),
    [anon_sym_months] = ACTIONS(1),
    [anon_sym_weeks] = ACTIONS(1),
    [anon_sym_days] = ACTIONS(1),
    [anon_sym_hours] = ACTIONS(1),
    [anon_sym_minutes] = ACTIONS(1),
    [anon_sym_seconds] = ACTIONS(1),
    [anon_sym_milliseconds] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_timezone] = ACTIONS(1),
    [anon_sym_timezoneoffset] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_difference] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_Code] = ACTIONS(1),
    [anon_sym_Concept] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_codesystem] = ACTIONS(1),
    [anon_sym_codesystems] = ACTIONS(1),
    [anon_sym_concept] = ACTIONS(1),
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
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_cql_library] = STATE(199),
    [sym_definition] = STATE(114),
    [sym_library_definition] = STATE(115),
    [sym_using_definition] = STATE(149),
    [sym_include_definition] = STATE(149),
    [sym_valueset_definition] = STATE(149),
    [sym_statement] = STATE(127),
    [sym_context_definition] = STATE(178),
    [sym_function_definition] = STATE(178),
    [sym_expression_definition] = STATE(178),
    [aux_sym_cql_library_repeat1] = STATE(114),
    [aux_sym_cql_library_repeat2] = STATE(127),
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
    [sym_expression] = STATE(110),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_date_time_precision] = STATE(200),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_date_time_precision_specifier] = STATE(25),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(54),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(99),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_date_time_precision] = STATE(200),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_date_time_precision_specifier] = STATE(27),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(54),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(110),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_date_time_precision] = STATE(200),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_date_time_precision_specifier] = STATE(25),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(99),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_date_time_precision] = STATE(200),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_date_time_precision_specifier] = STATE(27),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(104),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_external] = ACTIONS(75),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(94),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(93),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(92),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(105),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(95),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(93),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(108),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(102),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(73),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(73),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(90),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(91),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_expression] = STATE(92),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_expression] = STATE(112),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_expression] = STATE(109),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_expression] = STATE(95),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_expression] = STATE(94),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_expression] = STATE(96),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_expression] = STATE(111),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_expression] = STATE(96),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_expression] = STATE(103),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(70),
    [sym_retrieve] = STATE(71),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_expression] = STATE(90),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_expression] = STATE(91),
    [sym_expression_term] = STATE(81),
    [sym_term] = STATE(72),
    [sym_literal] = STATE(83),
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_boolean_expression] = STATE(81),
    [sym_type_expression] = STATE(81),
    [sym_cast_expression] = STATE(81),
    [sym_not_expression] = STATE(81),
    [sym_existence_expression] = STATE(81),
    [sym_between_expression] = STATE(81),
    [sym_equality_expression] = STATE(81),
    [sym_inequality_expression] = STATE(81),
    [sym_and_expression] = STATE(81),
    [sym_or_expression] = STATE(81),
    [sym_implies_expression] = STATE(81),
    [sym_in_fix_set_expression] = STATE(81),
    [sym_plural_date_time_precision] = STATE(204),
    [sym_duration_between_expression] = STATE(81),
    [sym_difference_between_expression] = STATE(81),
    [sym_membership_expression] = STATE(81),
    [sym_query] = STATE(81),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(58),
    [sym_query_source_clause] = STATE(100),
    [sym_retrieve] = STATE(107),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [sym_string] = STATE(87),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
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
    [anon_sym_years] = ACTIONS(37),
    [anon_sym_months] = ACTIONS(37),
    [anon_sym_weeks] = ACTIONS(37),
    [anon_sym_days] = ACTIONS(37),
    [anon_sym_hours] = ACTIONS(37),
    [anon_sym_minutes] = ACTIONS(37),
    [anon_sym_seconds] = ACTIONS(37),
    [anon_sym_milliseconds] = ACTIONS(37),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_library] = ACTIONS(77),
    [anon_sym_using] = ACTIONS(77),
    [anon_sym_called] = ACTIONS(77),
    [anon_sym_include] = ACTIONS(77),
    [anon_sym_valueset] = ACTIONS(77),
    [anon_sym_context] = ACTIONS(77),
    [anon_sym_define] = ACTIONS(77),
    [anon_sym_function] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [aux_sym_literal_token1] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(77),
    [anon_sym_not] = ACTIONS(77),
    [anon_sym_cast] = ACTIONS(77),
    [anon_sym_exists] = ACTIONS(77),
    [anon_sym_xor] = ACTIONS(77),
    [anon_sym_implies] = ACTIONS(77),
    [anon_sym_union] = ACTIONS(77),
    [anon_sym_intersect] = ACTIONS(77),
    [anon_sym_except] = ACTIONS(77),
    [anon_sym_years] = ACTIONS(77),
    [anon_sym_months] = ACTIONS(77),
    [anon_sym_weeks] = ACTIONS(77),
    [anon_sym_days] = ACTIONS(77),
    [anon_sym_hours] = ACTIONS(77),
    [anon_sym_minutes] = ACTIONS(77),
    [anon_sym_seconds] = ACTIONS(77),
    [anon_sym_milliseconds] = ACTIONS(77),
    [anon_sym_date] = ACTIONS(77),
    [anon_sym_time] = ACTIONS(77),
    [anon_sym_timezone] = ACTIONS(77),
    [anon_sym_timezoneoffset] = ACTIONS(77),
    [anon_sym_duration] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(77),
    [anon_sym_contains] = ACTIONS(77),
    [anon_sym_where] = ACTIONS(77),
    [anon_sym_from] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_version] = ACTIONS(77),
    [sym_default_identifier] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_asc] = ACTIONS(77),
    [anon_sym_ascending] = ACTIONS(77),
    [anon_sym_by] = ACTIONS(77),
    [anon_sym_code] = ACTIONS(77),
    [anon_sym_codesystem] = ACTIONS(77),
    [anon_sym_codesystems] = ACTIONS(77),
    [anon_sym_concept] = ACTIONS(77),
    [anon_sym_default] = ACTIONS(77),
    [anon_sym_desc] = ACTIONS(77),
    [anon_sym_descending] = ACTIONS(77),
    [anon_sym_display] = ACTIONS(77),
    [anon_sym_div] = ACTIONS(77),
    [anon_sym_end] = ACTIONS(77),
    [anon_sym_ends] = ACTIONS(77),
    [anon_sym_fluent] = ACTIONS(77),
    [anon_sym_includes] = ACTIONS(77),
    [anon_sym_meets] = ACTIONS(77),
    [anon_sym_mod] = ACTIONS(77),
    [anon_sym_orafter] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(79),
    [anon_sym_orless] = ACTIONS(79),
    [anon_sym_ormore] = ACTIONS(79),
    [anon_sym_overlaps] = ACTIONS(77),
    [anon_sym_parameter] = ACTIONS(77),
    [anon_sym_predecessor] = ACTIONS(77),
    [anon_sym_private] = ACTIONS(77),
    [anon_sym_public] = ACTIONS(77),
    [anon_sym_start] = ACTIONS(77),
    [anon_sym_starting] = ACTIONS(77),
    [anon_sym_starts] = ACTIONS(77),
    [anon_sym_successor] = ACTIONS(77),
    [anon_sym_width] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_type_specifier] = STATE(88),
    [sym_named_type_specifier] = STATE(97),
    [sym_identifier] = STATE(55),
    [sym_quoted_identifier] = STATE(52),
    [sym_referential_identifier] = STATE(63),
    [sym_type_name_identifier] = STATE(63),
    [sym_referential_or_type_name_identifier] = STATE(62),
    [sym_keyword_identifier] = STATE(80),
    [aux_sym_named_type_specifier_repeat1] = STATE(40),
    [anon_sym_library] = ACTIONS(81),
    [anon_sym_using] = ACTIONS(81),
    [anon_sym_called] = ACTIONS(81),
    [anon_sym_include] = ACTIONS(81),
    [anon_sym_valueset] = ACTIONS(81),
    [anon_sym_context] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(81),
    [anon_sym_function] = ACTIONS(81),
    [anon_sym_null] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_xor] = ACTIONS(81),
    [anon_sym_implies] = ACTIONS(81),
    [anon_sym_union] = ACTIONS(81),
    [anon_sym_intersect] = ACTIONS(81),
    [anon_sym_except] = ACTIONS(81),
    [anon_sym_date] = ACTIONS(87),
    [anon_sym_time] = ACTIONS(87),
    [anon_sym_timezone] = ACTIONS(81),
    [anon_sym_timezoneoffset] = ACTIONS(81),
    [anon_sym_contains] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(81),
    [sym_default_identifier] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_Code] = ACTIONS(93),
    [anon_sym_Concept] = ACTIONS(93),
    [anon_sym_asc] = ACTIONS(81),
    [anon_sym_ascending] = ACTIONS(81),
    [anon_sym_by] = ACTIONS(81),
    [anon_sym_code] = ACTIONS(81),
    [anon_sym_codesystem] = ACTIONS(81),
    [anon_sym_codesystems] = ACTIONS(81),
    [anon_sym_concept] = ACTIONS(81),
    [anon_sym_default] = ACTIONS(81),
    [anon_sym_desc] = ACTIONS(81),
    [anon_sym_descending] = ACTIONS(81),
    [anon_sym_display] = ACTIONS(81),
    [anon_sym_div] = ACTIONS(81),
    [anon_sym_end] = ACTIONS(81),
    [anon_sym_ends] = ACTIONS(81),
    [anon_sym_fluent] = ACTIONS(81),
    [anon_sym_includes] = ACTIONS(81),
    [anon_sym_meets] = ACTIONS(81),
    [anon_sym_mod] = ACTIONS(81),
    [anon_sym_orafter] = ACTIONS(95),
    [anon_sym_orbefore] = ACTIONS(95),
    [anon_sym_orless] = ACTIONS(95),
    [anon_sym_ormore] = ACTIONS(95),
    [anon_sym_overlaps] = ACTIONS(81),
    [anon_sym_parameter] = ACTIONS(81),
    [anon_sym_predecessor] = ACTIONS(81),
    [anon_sym_private] = ACTIONS(81),
    [anon_sym_public] = ACTIONS(81),
    [anon_sym_start] = ACTIONS(81),
    [anon_sym_starting] = ACTIONS(81),
    [anon_sym_starts] = ACTIONS(81),
    [anon_sym_successor] = ACTIONS(81),
    [anon_sym_width] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(56),
    [sym_retrieve] = STATE(189),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_type_specifier] = STATE(88),
    [sym_named_type_specifier] = STATE(97),
    [sym_identifier] = STATE(55),
    [sym_quoted_identifier] = STATE(52),
    [sym_referential_identifier] = STATE(63),
    [sym_type_name_identifier] = STATE(63),
    [sym_referential_or_type_name_identifier] = STATE(62),
    [sym_keyword_identifier] = STATE(80),
    [aux_sym_named_type_specifier_repeat1] = STATE(40),
    [anon_sym_library] = ACTIONS(81),
    [anon_sym_using] = ACTIONS(81),
    [anon_sym_called] = ACTIONS(81),
    [anon_sym_include] = ACTIONS(81),
    [anon_sym_valueset] = ACTIONS(81),
    [anon_sym_context] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(81),
    [anon_sym_function] = ACTIONS(81),
    [anon_sym_xor] = ACTIONS(81),
    [anon_sym_implies] = ACTIONS(81),
    [anon_sym_union] = ACTIONS(81),
    [anon_sym_intersect] = ACTIONS(81),
    [anon_sym_except] = ACTIONS(81),
    [anon_sym_date] = ACTIONS(87),
    [anon_sym_time] = ACTIONS(87),
    [anon_sym_timezone] = ACTIONS(81),
    [anon_sym_timezoneoffset] = ACTIONS(81),
    [anon_sym_contains] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(81),
    [sym_default_identifier] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_Code] = ACTIONS(93),
    [anon_sym_Concept] = ACTIONS(93),
    [anon_sym_asc] = ACTIONS(81),
    [anon_sym_ascending] = ACTIONS(81),
    [anon_sym_by] = ACTIONS(81),
    [anon_sym_code] = ACTIONS(81),
    [anon_sym_codesystem] = ACTIONS(81),
    [anon_sym_codesystems] = ACTIONS(81),
    [anon_sym_concept] = ACTIONS(81),
    [anon_sym_default] = ACTIONS(81),
    [anon_sym_desc] = ACTIONS(81),
    [anon_sym_descending] = ACTIONS(81),
    [anon_sym_display] = ACTIONS(81),
    [anon_sym_div] = ACTIONS(81),
    [anon_sym_end] = ACTIONS(81),
    [anon_sym_ends] = ACTIONS(81),
    [anon_sym_fluent] = ACTIONS(81),
    [anon_sym_includes] = ACTIONS(81),
    [anon_sym_meets] = ACTIONS(81),
    [anon_sym_mod] = ACTIONS(81),
    [anon_sym_orafter] = ACTIONS(95),
    [anon_sym_orbefore] = ACTIONS(95),
    [anon_sym_orless] = ACTIONS(95),
    [anon_sym_ormore] = ACTIONS(95),
    [anon_sym_overlaps] = ACTIONS(81),
    [anon_sym_parameter] = ACTIONS(81),
    [anon_sym_predecessor] = ACTIONS(81),
    [anon_sym_private] = ACTIONS(81),
    [anon_sym_public] = ACTIONS(81),
    [anon_sym_start] = ACTIONS(81),
    [anon_sym_starting] = ACTIONS(81),
    [anon_sym_starts] = ACTIONS(81),
    [anon_sym_successor] = ACTIONS(81),
    [anon_sym_width] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_qualified_identifier_expression] = STATE(189),
    [sym_query_source] = STATE(165),
    [sym_aliased_query_source] = STATE(67),
    [sym_retrieve] = STATE(189),
    [sym_identifier] = STATE(153),
    [sym_quoted_identifier] = STATE(179),
    [sym_referential_identifier] = STATE(158),
    [sym_keyword_identifier] = STATE(153),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(44),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_type_specifier] = STATE(82),
    [sym_named_type_specifier] = STATE(97),
    [sym_identifier] = STATE(55),
    [sym_quoted_identifier] = STATE(52),
    [sym_referential_identifier] = STATE(63),
    [sym_type_name_identifier] = STATE(63),
    [sym_referential_or_type_name_identifier] = STATE(62),
    [sym_keyword_identifier] = STATE(80),
    [aux_sym_named_type_specifier_repeat1] = STATE(40),
    [anon_sym_library] = ACTIONS(81),
    [anon_sym_using] = ACTIONS(81),
    [anon_sym_called] = ACTIONS(81),
    [anon_sym_include] = ACTIONS(81),
    [anon_sym_valueset] = ACTIONS(81),
    [anon_sym_context] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(81),
    [anon_sym_function] = ACTIONS(81),
    [anon_sym_xor] = ACTIONS(81),
    [anon_sym_implies] = ACTIONS(81),
    [anon_sym_union] = ACTIONS(81),
    [anon_sym_intersect] = ACTIONS(81),
    [anon_sym_except] = ACTIONS(81),
    [anon_sym_date] = ACTIONS(87),
    [anon_sym_time] = ACTIONS(87),
    [anon_sym_timezone] = ACTIONS(81),
    [anon_sym_timezoneoffset] = ACTIONS(81),
    [anon_sym_contains] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(81),
    [sym_default_identifier] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_Code] = ACTIONS(93),
    [anon_sym_Concept] = ACTIONS(93),
    [anon_sym_asc] = ACTIONS(81),
    [anon_sym_ascending] = ACTIONS(81),
    [anon_sym_by] = ACTIONS(81),
    [anon_sym_code] = ACTIONS(81),
    [anon_sym_codesystem] = ACTIONS(81),
    [anon_sym_codesystems] = ACTIONS(81),
    [anon_sym_concept] = ACTIONS(81),
    [anon_sym_default] = ACTIONS(81),
    [anon_sym_desc] = ACTIONS(81),
    [anon_sym_descending] = ACTIONS(81),
    [anon_sym_display] = ACTIONS(81),
    [anon_sym_div] = ACTIONS(81),
    [anon_sym_end] = ACTIONS(81),
    [anon_sym_ends] = ACTIONS(81),
    [anon_sym_fluent] = ACTIONS(81),
    [anon_sym_includes] = ACTIONS(81),
    [anon_sym_meets] = ACTIONS(81),
    [anon_sym_mod] = ACTIONS(81),
    [anon_sym_orafter] = ACTIONS(95),
    [anon_sym_orbefore] = ACTIONS(95),
    [anon_sym_orless] = ACTIONS(95),
    [anon_sym_ormore] = ACTIONS(95),
    [anon_sym_overlaps] = ACTIONS(81),
    [anon_sym_parameter] = ACTIONS(81),
    [anon_sym_predecessor] = ACTIONS(81),
    [anon_sym_private] = ACTIONS(81),
    [anon_sym_public] = ACTIONS(81),
    [anon_sym_start] = ACTIONS(81),
    [anon_sym_starting] = ACTIONS(81),
    [anon_sym_starts] = ACTIONS(81),
    [anon_sym_successor] = ACTIONS(81),
    [anon_sym_width] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_named_type_specifier] = STATE(190),
    [sym_identifier] = STATE(55),
    [sym_quoted_identifier] = STATE(52),
    [sym_referential_identifier] = STATE(63),
    [sym_type_name_identifier] = STATE(63),
    [sym_referential_or_type_name_identifier] = STATE(62),
    [sym_keyword_identifier] = STATE(153),
    [aux_sym_named_type_specifier_repeat1] = STATE(39),
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
    [anon_sym_date] = ACTIONS(87),
    [anon_sym_time] = ACTIONS(87),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_Code] = ACTIONS(93),
    [anon_sym_Concept] = ACTIONS(93),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_named_type_specifier] = STATE(191),
    [sym_identifier] = STATE(55),
    [sym_quoted_identifier] = STATE(52),
    [sym_referential_identifier] = STATE(63),
    [sym_type_name_identifier] = STATE(63),
    [sym_referential_or_type_name_identifier] = STATE(62),
    [sym_keyword_identifier] = STATE(153),
    [aux_sym_named_type_specifier_repeat1] = STATE(39),
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
    [anon_sym_date] = ACTIONS(87),
    [anon_sym_time] = ACTIONS(87),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_Code] = ACTIONS(93),
    [anon_sym_Concept] = ACTIONS(93),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_named_type_specifier] = STATE(188),
    [sym_identifier] = STATE(55),
    [sym_quoted_identifier] = STATE(52),
    [sym_referential_identifier] = STATE(63),
    [sym_type_name_identifier] = STATE(63),
    [sym_referential_or_type_name_identifier] = STATE(62),
    [sym_keyword_identifier] = STATE(153),
    [aux_sym_named_type_specifier_repeat1] = STATE(39),
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
    [anon_sym_date] = ACTIONS(87),
    [anon_sym_time] = ACTIONS(87),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_Code] = ACTIONS(93),
    [anon_sym_Concept] = ACTIONS(93),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
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
    [anon_sym_orafter] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(57),
    [anon_sym_orless] = ACTIONS(57),
    [anon_sym_ormore] = ACTIONS(57),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_default_identifier,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(55), 1,
      sym_identifier,
    STATE(66), 1,
      sym_referential_or_type_name_identifier,
    STATE(153), 1,
      sym_keyword_identifier,
    ACTIONS(87), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(93), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(63), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(57), 4,
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
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
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
      anon_sym_width,
  [91] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_default_identifier,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(55), 1,
      sym_identifier,
    STATE(66), 1,
      sym_referential_or_type_name_identifier,
    STATE(80), 1,
      sym_keyword_identifier,
    ACTIONS(87), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(93), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(63), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(95), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(81), 46,
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
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
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
      anon_sym_width,
  [182] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_default_identifier,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(158), 1,
      sym_referential_identifier,
    STATE(197), 1,
      sym_qualified_identifier_expression,
    STATE(212), 1,
      sym_terminology,
    STATE(153), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(57), 4,
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
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
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
      anon_sym_width,
  [267] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_default_identifier,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(158), 1,
      sym_referential_identifier,
    STATE(197), 1,
      sym_qualified_identifier_expression,
    STATE(214), 1,
      sym_terminology,
    STATE(153), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(57), 4,
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
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
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
      anon_sym_width,
  [352] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_default_identifier,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(158), 1,
      sym_referential_identifier,
    STATE(197), 1,
      sym_qualified_identifier_expression,
    STATE(198), 1,
      sym_terminology,
    STATE(153), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(57), 4,
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
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
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
      anon_sym_width,
  [437] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_default_identifier,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(166), 1,
      sym_referential_identifier,
    STATE(179), 1,
      sym_quoted_identifier,
    STATE(153), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(57), 4,
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
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
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
      anon_sym_width,
  [516] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_default_identifier,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(217), 1,
      sym_referential_identifier,
    STATE(153), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(108), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(99), 48,
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
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
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
      anon_sym_width,
  [595] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_default_identifier,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(216), 1,
      sym_identifier,
    ACTIONS(119), 4,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(111), 50,
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
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_where,
      anon_sym_version,
      anon_sym_Code,
      anon_sym_Concept,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
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
      anon_sym_width,
  [672] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_default_identifier,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(166), 1,
      sym_referential_identifier,
    STATE(153), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(57), 4,
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
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
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
      anon_sym_width,
  [751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 5,
      anon_sym_DQUOTE,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(121), 51,
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
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_where,
      anon_sym_version,
      sym_default_identifier,
      anon_sym_Code,
      anon_sym_Concept,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
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
      anon_sym_width,
  [815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 5,
      anon_sym_DQUOTE,
      anon_sym_orafter,
      anon_sym_orbefore,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(125), 49,
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
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_where,
      anon_sym_version,
      sym_default_identifier,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
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
      anon_sym_width,
  [877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 33,
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
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 33,
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
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 33,
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
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 27,
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
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 27,
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
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 24,
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
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 23,
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
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 23,
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
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 23,
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
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 23,
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
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 23,
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
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(176), 24,
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
  [1346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 24,
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
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(184), 24,
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
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(176), 24,
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
    ACTIONS(190), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 24,
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
  [1482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 24,
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
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 24,
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
  [1550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
    ACTIONS(198), 16,
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
  [1583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
    ACTIONS(202), 16,
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
  [1616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_where,
    STATE(85), 1,
      sym_where_clause,
    ACTIONS(206), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(204), 21,
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
  [1653] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_default_identifier,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
    ACTIONS(212), 15,
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
  [1690] = 3,
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
  [1722] = 3,
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
  [1754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 22,
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
    ACTIONS(230), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(228), 22,
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
    ACTIONS(234), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 22,
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
    ACTIONS(238), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(236), 22,
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
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(240), 22,
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
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 22,
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
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 22,
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
  [2010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(248), 22,
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
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(252), 22,
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
    ACTIONS(258), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 22,
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
    ACTIONS(262), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 22,
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
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(264), 22,
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
    ACTIONS(270), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 22,
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
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(272), 22,
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
    ACTIONS(278), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 22,
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
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(280), 22,
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
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(284), 22,
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
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(288), 22,
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
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 22,
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
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 22,
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
    ACTIONS(302), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 22,
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
  [2458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(304), 22,
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
  [2490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(308), 22,
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
  [2522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 22,
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
  [2554] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_is,
    ACTIONS(321), 1,
      anon_sym_as,
    ACTIONS(324), 1,
      anon_sym_properly,
    ACTIONS(327), 1,
      anon_sym_between,
    ACTIONS(330), 1,
      anon_sym_and,
    ACTIONS(340), 1,
      anon_sym_implies,
    ACTIONS(334), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(316), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(332), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(342), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_where,
    STATE(85), 1,
      sym_where_clause,
    ACTIONS(206), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(204), 19,
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
  [2640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 9,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
    ACTIONS(202), 14,
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
  [2671] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_and,
    ACTIONS(340), 1,
      anon_sym_implies,
    ACTIONS(334), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(332), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(342), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(346), 7,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
  [2714] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_and,
    ACTIONS(340), 1,
      anon_sym_implies,
    ACTIONS(350), 1,
      anon_sym_is,
    ACTIONS(353), 1,
      anon_sym_as,
    ACTIONS(356), 1,
      anon_sym_properly,
    ACTIONS(359), 1,
      anon_sym_between,
    ACTIONS(334), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(332), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(342), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2765] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_and,
    ACTIONS(340), 1,
      anon_sym_implies,
    ACTIONS(364), 1,
      anon_sym_is,
    ACTIONS(366), 1,
      anon_sym_as,
    ACTIONS(368), 1,
      anon_sym_properly,
    ACTIONS(370), 1,
      anon_sym_between,
    ACTIONS(334), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(362), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(332), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(342), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2816] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_and,
    ACTIONS(340), 1,
      anon_sym_implies,
    ACTIONS(364), 1,
      anon_sym_is,
    ACTIONS(366), 1,
      anon_sym_as,
    ACTIONS(368), 1,
      anon_sym_properly,
    ACTIONS(370), 1,
      anon_sym_between,
    ACTIONS(334), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(372), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(332), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(342), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 9,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
    ACTIONS(198), 14,
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
  [2898] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_default_identifier,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 8,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
    ACTIONS(212), 13,
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
  [2933] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_is,
    ACTIONS(366), 1,
      anon_sym_as,
    ACTIONS(368), 1,
      anon_sym_properly,
    ACTIONS(370), 1,
      anon_sym_between,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    ACTIONS(376), 1,
      anon_sym_and,
    ACTIONS(386), 1,
      anon_sym_implies,
    ACTIONS(380), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(378), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(388), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2982] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_and,
    ACTIONS(386), 1,
      anon_sym_implies,
    ACTIONS(380), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(378), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(388), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(346), 5,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
  [3023] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    ACTIONS(318), 1,
      anon_sym_is,
    ACTIONS(321), 1,
      anon_sym_as,
    ACTIONS(324), 1,
      anon_sym_properly,
    ACTIONS(327), 1,
      anon_sym_between,
    ACTIONS(376), 1,
      anon_sym_and,
    ACTIONS(386), 1,
      anon_sym_implies,
    ACTIONS(380), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(378), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(388), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3072] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    ACTIONS(350), 1,
      anon_sym_is,
    ACTIONS(353), 1,
      anon_sym_as,
    ACTIONS(356), 1,
      anon_sym_properly,
    ACTIONS(359), 1,
      anon_sym_between,
    ACTIONS(376), 1,
      anon_sym_and,
    ACTIONS(386), 1,
      anon_sym_implies,
    ACTIONS(380), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(378), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(388), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3121] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_is,
    ACTIONS(368), 1,
      anon_sym_properly,
    ACTIONS(370), 1,
      anon_sym_between,
    ACTIONS(376), 1,
      anon_sym_and,
    ACTIONS(386), 1,
      anon_sym_implies,
    ACTIONS(390), 1,
      anon_sym_as,
    ACTIONS(380), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(378), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(388), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3167] = 11,
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
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    STATE(116), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(126), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(149), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(178), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [3207] = 11,
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
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    STATE(116), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(124), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(149), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(178), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [3247] = 11,
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
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    STATE(113), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(124), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(149), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(178), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [3287] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      anon_sym_include,
    ACTIONS(404), 1,
      anon_sym_valueset,
    STATE(116), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    ACTIONS(396), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    STATE(149), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
  [3314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DOT,
    ACTIONS(407), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [3332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DOT,
    ACTIONS(411), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [3350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_called,
    ACTIONS(417), 1,
      anon_sym_version,
    STATE(139), 1,
      sym_version_specifier,
    ACTIONS(413), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3371] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_version,
    ACTIONS(421), 1,
      anon_sym_called,
    STATE(129), 1,
      sym_version_specifier,
    ACTIONS(419), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(220), 1,
      sym_plural_date_time_precision,
    ACTIONS(423), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [3409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(196), 1,
      sym_plural_date_time_precision,
    ACTIONS(423), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [3426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_version,
    STATE(144), 1,
      sym_version_specifier,
    ACTIONS(425), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    STATE(128), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(178), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [3466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_version,
    STATE(146), 1,
      sym_version_specifier,
    ACTIONS(427), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3484] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    STATE(128), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(178), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [3506] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    STATE(128), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(178), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [3528] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 1,
      anon_sym_context,
    ACTIONS(436), 1,
      anon_sym_define,
    STATE(128), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(178), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [3550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_called,
    ACTIONS(439), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3565] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_literal_token1,
    ACTIONS(445), 1,
      anon_sym_null,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_term,
    STATE(75), 1,
      sym_expression_term,
    STATE(83), 1,
      sym_literal,
    STATE(87), 1,
      sym_string,
  [3590] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_literal_token1,
    ACTIONS(445), 1,
      anon_sym_null,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_term,
    STATE(83), 1,
      sym_literal,
    STATE(87), 1,
      sym_string,
    STATE(98), 1,
      sym_expression_term,
  [3615] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_literal_token1,
    ACTIONS(445), 1,
      anon_sym_null,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_term,
    STATE(83), 1,
      sym_literal,
    STATE(87), 1,
      sym_string,
    STATE(89), 1,
      sym_expression_term,
  [3640] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_literal_token1,
    ACTIONS(445), 1,
      anon_sym_null,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_term,
    STATE(83), 1,
      sym_literal,
    STATE(87), 1,
      sym_string,
    STATE(205), 1,
      sym_expression_term,
  [3665] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_literal_token1,
    ACTIONS(445), 1,
      anon_sym_null,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_term,
    STATE(83), 1,
      sym_literal,
    STATE(84), 1,
      sym_expression_term,
    STATE(87), 1,
      sym_string,
  [3690] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_literal_token1,
    ACTIONS(445), 1,
      anon_sym_null,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_term,
    STATE(83), 1,
      sym_literal,
    STATE(87), 1,
      sym_string,
    STATE(202), 1,
      sym_expression_term,
  [3715] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_literal_token1,
    ACTIONS(445), 1,
      anon_sym_null,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_term,
    STATE(83), 1,
      sym_literal,
    STATE(87), 1,
      sym_string,
    STATE(213), 1,
      sym_expression_term,
  [3740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 7,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3753] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_literal_token1,
    ACTIONS(445), 1,
      anon_sym_null,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_term,
    STATE(83), 1,
      sym_literal,
    STATE(87), 1,
      sym_string,
    STATE(215), 1,
      sym_expression_term,
  [3778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_called,
    ACTIONS(451), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3793] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_literal_token1,
    ACTIONS(445), 1,
      anon_sym_null,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_term,
    STATE(77), 1,
      sym_expression_term,
    STATE(83), 1,
      sym_literal,
    STATE(87), 1,
      sym_string,
  [3818] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_literal_token1,
    ACTIONS(445), 1,
      anon_sym_null,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_term,
    STATE(83), 1,
      sym_literal,
    STATE(87), 1,
      sym_string,
    STATE(207), 1,
      sym_expression_term,
  [3843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3879] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(125), 1,
      sym_qualified_identifier,
    STATE(157), 1,
      aux_sym_named_type_specifier_repeat1,
  [3901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3913] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(157), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(219), 1,
      sym_qualified_identifier,
  [3935] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(119), 1,
      sym_qualified_identifier,
    STATE(157), 1,
      aux_sym_named_type_specifier_repeat1,
  [3957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [3981] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(120), 1,
      sym_qualified_identifier,
    STATE(157), 1,
      aux_sym_named_type_specifier_repeat1,
  [4003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [4015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4026] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(471), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(154), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(210), 1,
      sym_identifier,
  [4045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4056] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_default_identifier,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_function,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(218), 1,
      sym_identifier,
  [4075] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(118), 1,
      sym_identifier,
    STATE(154), 1,
      aux_sym_named_type_specifier_repeat1,
  [4094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DOT,
    ACTIONS(478), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4106] = 4,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(482), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [4120] = 4,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_SQUOTE,
    STATE(160), 1,
      aux_sym_string_repeat1,
    ACTIONS(488), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [4134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(211), 1,
      sym_identifier,
  [4150] = 4,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(493), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [4164] = 4,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    STATE(160), 1,
      aux_sym_string_repeat1,
    ACTIONS(497), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [4178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(499), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [4190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(65), 1,
      sym_identifier,
  [4206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DOT,
    ACTIONS(503), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4218] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(164), 1,
      sym_identifier,
  [4234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(142), 1,
      sym_identifier,
  [4250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(143), 1,
      sym_identifier,
  [4266] = 4,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_SQUOTE,
    STATE(163), 1,
      aux_sym_string_repeat1,
    ACTIONS(507), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [4280] = 4,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(511), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [4294] = 4,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(493), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [4308] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(177), 1,
      sym_identifier,
  [4324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(152), 1,
      sym_identifier,
  [4340] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_default_identifier,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(150), 1,
      sym_identifier,
  [4356] = 4,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(518), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [4370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [4379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [4388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [4433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(137), 1,
      sym_string,
  [4459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    STATE(123), 1,
      sym_string,
  [4469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_COLON,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
  [4479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
  [4497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
  [4507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [4523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_between,
  [4530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_in,
  [4537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_between,
  [4544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RBRACK,
  [4551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
  [4558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [4565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_of,
  [4572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_of,
  [4579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_and,
  [4586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COLON,
  [4593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_between,
  [4600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_and,
  [4607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_in,
  [4614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_and,
  [4621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_between,
  [4628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [4635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DOT,
  [4642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
  [4649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RBRACK,
  [4656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_and,
  [4663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
  [4670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_and,
  [4677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_DOT,
  [4684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DOT,
  [4691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_COLON,
  [4698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_COLON,
  [4705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_between,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(39)] = 0,
  [SMALL_STATE(40)] = 91,
  [SMALL_STATE(41)] = 182,
  [SMALL_STATE(42)] = 267,
  [SMALL_STATE(43)] = 352,
  [SMALL_STATE(44)] = 437,
  [SMALL_STATE(45)] = 516,
  [SMALL_STATE(46)] = 595,
  [SMALL_STATE(47)] = 672,
  [SMALL_STATE(48)] = 751,
  [SMALL_STATE(49)] = 815,
  [SMALL_STATE(50)] = 877,
  [SMALL_STATE(51)] = 920,
  [SMALL_STATE(52)] = 963,
  [SMALL_STATE(53)] = 1006,
  [SMALL_STATE(54)] = 1043,
  [SMALL_STATE(55)] = 1080,
  [SMALL_STATE(56)] = 1117,
  [SMALL_STATE(57)] = 1156,
  [SMALL_STATE(58)] = 1195,
  [SMALL_STATE(59)] = 1234,
  [SMALL_STATE(60)] = 1273,
  [SMALL_STATE(61)] = 1312,
  [SMALL_STATE(62)] = 1346,
  [SMALL_STATE(63)] = 1380,
  [SMALL_STATE(64)] = 1414,
  [SMALL_STATE(65)] = 1448,
  [SMALL_STATE(66)] = 1482,
  [SMALL_STATE(67)] = 1516,
  [SMALL_STATE(68)] = 1550,
  [SMALL_STATE(69)] = 1583,
  [SMALL_STATE(70)] = 1616,
  [SMALL_STATE(71)] = 1653,
  [SMALL_STATE(72)] = 1690,
  [SMALL_STATE(73)] = 1722,
  [SMALL_STATE(74)] = 1754,
  [SMALL_STATE(75)] = 1786,
  [SMALL_STATE(76)] = 1818,
  [SMALL_STATE(77)] = 1850,
  [SMALL_STATE(78)] = 1882,
  [SMALL_STATE(79)] = 1914,
  [SMALL_STATE(80)] = 1946,
  [SMALL_STATE(81)] = 1978,
  [SMALL_STATE(82)] = 2010,
  [SMALL_STATE(83)] = 2042,
  [SMALL_STATE(84)] = 2074,
  [SMALL_STATE(85)] = 2106,
  [SMALL_STATE(86)] = 2138,
  [SMALL_STATE(87)] = 2170,
  [SMALL_STATE(88)] = 2202,
  [SMALL_STATE(89)] = 2234,
  [SMALL_STATE(90)] = 2266,
  [SMALL_STATE(91)] = 2298,
  [SMALL_STATE(92)] = 2330,
  [SMALL_STATE(93)] = 2362,
  [SMALL_STATE(94)] = 2394,
  [SMALL_STATE(95)] = 2426,
  [SMALL_STATE(96)] = 2458,
  [SMALL_STATE(97)] = 2490,
  [SMALL_STATE(98)] = 2522,
  [SMALL_STATE(99)] = 2554,
  [SMALL_STATE(100)] = 2605,
  [SMALL_STATE(101)] = 2640,
  [SMALL_STATE(102)] = 2671,
  [SMALL_STATE(103)] = 2714,
  [SMALL_STATE(104)] = 2765,
  [SMALL_STATE(105)] = 2816,
  [SMALL_STATE(106)] = 2867,
  [SMALL_STATE(107)] = 2898,
  [SMALL_STATE(108)] = 2933,
  [SMALL_STATE(109)] = 2982,
  [SMALL_STATE(110)] = 3023,
  [SMALL_STATE(111)] = 3072,
  [SMALL_STATE(112)] = 3121,
  [SMALL_STATE(113)] = 3167,
  [SMALL_STATE(114)] = 3207,
  [SMALL_STATE(115)] = 3247,
  [SMALL_STATE(116)] = 3287,
  [SMALL_STATE(117)] = 3314,
  [SMALL_STATE(118)] = 3332,
  [SMALL_STATE(119)] = 3350,
  [SMALL_STATE(120)] = 3371,
  [SMALL_STATE(121)] = 3392,
  [SMALL_STATE(122)] = 3409,
  [SMALL_STATE(123)] = 3426,
  [SMALL_STATE(124)] = 3444,
  [SMALL_STATE(125)] = 3466,
  [SMALL_STATE(126)] = 3484,
  [SMALL_STATE(127)] = 3506,
  [SMALL_STATE(128)] = 3528,
  [SMALL_STATE(129)] = 3550,
  [SMALL_STATE(130)] = 3565,
  [SMALL_STATE(131)] = 3590,
  [SMALL_STATE(132)] = 3615,
  [SMALL_STATE(133)] = 3640,
  [SMALL_STATE(134)] = 3665,
  [SMALL_STATE(135)] = 3690,
  [SMALL_STATE(136)] = 3715,
  [SMALL_STATE(137)] = 3740,
  [SMALL_STATE(138)] = 3753,
  [SMALL_STATE(139)] = 3778,
  [SMALL_STATE(140)] = 3793,
  [SMALL_STATE(141)] = 3818,
  [SMALL_STATE(142)] = 3843,
  [SMALL_STATE(143)] = 3855,
  [SMALL_STATE(144)] = 3867,
  [SMALL_STATE(145)] = 3879,
  [SMALL_STATE(146)] = 3901,
  [SMALL_STATE(147)] = 3913,
  [SMALL_STATE(148)] = 3935,
  [SMALL_STATE(149)] = 3957,
  [SMALL_STATE(150)] = 3969,
  [SMALL_STATE(151)] = 3981,
  [SMALL_STATE(152)] = 4003,
  [SMALL_STATE(153)] = 4015,
  [SMALL_STATE(154)] = 4026,
  [SMALL_STATE(155)] = 4045,
  [SMALL_STATE(156)] = 4056,
  [SMALL_STATE(157)] = 4075,
  [SMALL_STATE(158)] = 4094,
  [SMALL_STATE(159)] = 4106,
  [SMALL_STATE(160)] = 4120,
  [SMALL_STATE(161)] = 4134,
  [SMALL_STATE(162)] = 4150,
  [SMALL_STATE(163)] = 4164,
  [SMALL_STATE(164)] = 4178,
  [SMALL_STATE(165)] = 4190,
  [SMALL_STATE(166)] = 4206,
  [SMALL_STATE(167)] = 4218,
  [SMALL_STATE(168)] = 4234,
  [SMALL_STATE(169)] = 4250,
  [SMALL_STATE(170)] = 4266,
  [SMALL_STATE(171)] = 4280,
  [SMALL_STATE(172)] = 4294,
  [SMALL_STATE(173)] = 4308,
  [SMALL_STATE(174)] = 4324,
  [SMALL_STATE(175)] = 4340,
  [SMALL_STATE(176)] = 4356,
  [SMALL_STATE(177)] = 4370,
  [SMALL_STATE(178)] = 4379,
  [SMALL_STATE(179)] = 4388,
  [SMALL_STATE(180)] = 4397,
  [SMALL_STATE(181)] = 4406,
  [SMALL_STATE(182)] = 4415,
  [SMALL_STATE(183)] = 4424,
  [SMALL_STATE(184)] = 4433,
  [SMALL_STATE(185)] = 4441,
  [SMALL_STATE(186)] = 4449,
  [SMALL_STATE(187)] = 4459,
  [SMALL_STATE(188)] = 4469,
  [SMALL_STATE(189)] = 4479,
  [SMALL_STATE(190)] = 4487,
  [SMALL_STATE(191)] = 4497,
  [SMALL_STATE(192)] = 4507,
  [SMALL_STATE(193)] = 4515,
  [SMALL_STATE(194)] = 4523,
  [SMALL_STATE(195)] = 4530,
  [SMALL_STATE(196)] = 4537,
  [SMALL_STATE(197)] = 4544,
  [SMALL_STATE(198)] = 4551,
  [SMALL_STATE(199)] = 4558,
  [SMALL_STATE(200)] = 4565,
  [SMALL_STATE(201)] = 4572,
  [SMALL_STATE(202)] = 4579,
  [SMALL_STATE(203)] = 4586,
  [SMALL_STATE(204)] = 4593,
  [SMALL_STATE(205)] = 4600,
  [SMALL_STATE(206)] = 4607,
  [SMALL_STATE(207)] = 4614,
  [SMALL_STATE(208)] = 4621,
  [SMALL_STATE(209)] = 4628,
  [SMALL_STATE(210)] = 4635,
  [SMALL_STATE(211)] = 4642,
  [SMALL_STATE(212)] = 4649,
  [SMALL_STATE(213)] = 4656,
  [SMALL_STATE(214)] = 4663,
  [SMALL_STATE(215)] = 4670,
  [SMALL_STATE(216)] = 4677,
  [SMALL_STATE(217)] = 4684,
  [SMALL_STATE(218)] = 4691,
  [SMALL_STATE(219)] = 4698,
  [SMALL_STATE(220)] = 4705,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_identifier, 1), SHIFT(179),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_identifier, 1), SHIFT(176),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_time_precision_specifier, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision_specifier, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(155),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(52),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(159),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(155),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(52),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(159),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 9),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 9),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_identifier, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_identifier, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2), SHIFT_REPEAT(34),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_identifier, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name_identifier, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliased_query_source, 2, .production_id = 8),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aliased_query_source, 2, .production_id = 8),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_term, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_term, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_fix_set_expression, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_fix_set_expression, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_identifier, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_difference_between_expression, 7),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_difference_between_expression, 7),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 7),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 6),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 6),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 5),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implies_expression, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implies_expression, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_expression, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inequality_expression, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inequality_expression, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_expression, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_expression, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_expression, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expression, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_existence_expression, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_existence_expression, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_specifier, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(31),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(33),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(194),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(133),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 3),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(31),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(33),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(194),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(133),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 10),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_definition, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(151),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(148),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(147),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(167),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(156),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2, .production_id = 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 5, .production_id = 7),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 7),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 4, .production_id = 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 4, .production_id = 3),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(52),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(160),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(171),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, .production_id = 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminology, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [552] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plural_date_time_precision, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
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
