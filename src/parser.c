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
#define STATE_COUNT 263
#define LARGE_STATE_COUNT 56
#define SYMBOL_COUNT 180
#define ALIAS_COUNT 9
#define TOKEN_COUNT 119
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
  anon_sym_orbefore = 66,
  anon_sym_orafter = 67,
  anon_sym_starts = 68,
  anon_sym_ends = 69,
  anon_sym_occurs = 70,
  anon_sym_same = 71,
  anon_sym_start = 72,
  anon_sym_end = 73,
  anon_sym_includes = 74,
  anon_sym_during = 75,
  anon_sym_includedin = 76,
  anon_sym_meets = 77,
  anon_sym_before = 78,
  anon_sym_after = 79,
  anon_sym_overlaps = 80,
  anon_sym_where = 81,
  anon_sym_from = 82,
  anon_sym_COMMA = 83,
  anon_sym_LBRACK = 84,
  anon_sym_RBRACK = 85,
  anon_sym_version = 86,
  sym_default_identifier = 87,
  anon_sym_DQUOTE = 88,
  anon_sym_Code = 89,
  anon_sym_Concept = 90,
  anon_sym_asc = 91,
  anon_sym_ascending = 92,
  anon_sym_by = 93,
  anon_sym_code = 94,
  anon_sym_codesystem = 95,
  anon_sym_codesystems = 96,
  anon_sym_concept = 97,
  anon_sym_default = 98,
  anon_sym_desc = 99,
  anon_sym_descending = 100,
  anon_sym_display = 101,
  anon_sym_div = 102,
  anon_sym_fluent = 103,
  anon_sym_mod = 104,
  anon_sym_orless = 105,
  anon_sym_ormore = 106,
  anon_sym_parameter = 107,
  anon_sym_predecessor = 108,
  anon_sym_private = 109,
  anon_sym_public = 110,
  anon_sym_starting = 111,
  anon_sym_successor = 112,
  anon_sym_width = 113,
  anon_sym_SQUOTE = 114,
  sym_single_quote_string_fragment = 115,
  sym_double_quote_string_fragment = 116,
  sym_escape_sequence = 117,
  sym_comment = 118,
  sym_cql_library = 119,
  sym_definition = 120,
  sym_library_definition = 121,
  sym_using_definition = 122,
  sym_include_definition = 123,
  sym_valueset_definition = 124,
  sym_statement = 125,
  sym_context_definition = 126,
  sym_function_definition = 127,
  sym_expression_definition = 128,
  sym_expression = 129,
  sym_expression_term = 130,
  sym_term = 131,
  sym_literal = 132,
  sym_qualified_identifier_expression = 133,
  sym_boolean_expression = 134,
  sym_type_expression = 135,
  sym_cast_expression = 136,
  sym_not_expression = 137,
  sym_existence_expression = 138,
  sym_between_expression = 139,
  sym_equality_expression = 140,
  sym_inequality_expression = 141,
  sym_and_expression = 142,
  sym_or_expression = 143,
  sym_implies_expression = 144,
  sym_in_fix_set_expression = 145,
  sym_date_time_precision = 146,
  sym_plural_date_time_precision = 147,
  sym_duration_between_expression = 148,
  sym_difference_between_expression = 149,
  sym_date_time_precision_specifier = 150,
  sym_membership_expression = 151,
  sym_relative_qualifier = 152,
  sym_interval_operator_phrase = 153,
  sym_timing_expression = 154,
  sym_query = 155,
  sym_where_clause = 156,
  sym_query_source = 157,
  sym_aliased_query_source = 158,
  sym_query_source_clause = 159,
  sym_retrieve = 160,
  sym_terminology = 161,
  sym_type_specifier = 162,
  sym_named_type_specifier = 163,
  sym_version_specifier = 164,
  sym_identifier = 165,
  sym_qualified_identifier = 166,
  sym_quoted_identifier = 167,
  sym_referential_identifier = 168,
  sym_type_name_identifier = 169,
  sym_referential_or_type_name_identifier = 170,
  sym_keyword_identifier = 171,
  sym_string = 172,
  aux_sym_cql_library_repeat1 = 173,
  aux_sym_cql_library_repeat2 = 174,
  aux_sym_qualified_identifier_expression_repeat1 = 175,
  aux_sym_query_source_clause_repeat1 = 176,
  aux_sym_named_type_specifier_repeat1 = 177,
  aux_sym_quoted_identifier_repeat1 = 178,
  aux_sym_string_repeat1 = 179,
  alias_sym_function_body = 180,
  alias_sym_local_identifier = 181,
  alias_sym_model_identifier = 182,
  alias_sym_null_literal = 183,
  alias_sym_qualifier = 184,
  alias_sym_qualifier_expression = 185,
  alias_sym_query_alias = 186,
  alias_sym_string_literal = 187,
  alias_sym_version = 188,
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
  [anon_sym_orbefore] = "or before",
  [anon_sym_orafter] = "or after",
  [anon_sym_starts] = "starts",
  [anon_sym_ends] = "ends",
  [anon_sym_occurs] = "occurs",
  [anon_sym_same] = "same",
  [anon_sym_start] = "start",
  [anon_sym_end] = "end",
  [anon_sym_includes] = "includes",
  [anon_sym_during] = "during",
  [anon_sym_includedin] = "included in",
  [anon_sym_meets] = "meets",
  [anon_sym_before] = "before",
  [anon_sym_after] = "after",
  [anon_sym_overlaps] = "overlaps",
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
  [anon_sym_fluent] = "fluent",
  [anon_sym_mod] = "mod",
  [anon_sym_orless] = "or less",
  [anon_sym_ormore] = "or more",
  [anon_sym_parameter] = "parameter",
  [anon_sym_predecessor] = "predecessor",
  [anon_sym_private] = "private",
  [anon_sym_public] = "public",
  [anon_sym_starting] = "starting",
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
  [sym_relative_qualifier] = "relative_qualifier",
  [sym_interval_operator_phrase] = "interval_operator_phrase",
  [sym_timing_expression] = "timing_expression",
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
  [anon_sym_orbefore] = anon_sym_orbefore,
  [anon_sym_orafter] = anon_sym_orafter,
  [anon_sym_starts] = anon_sym_starts,
  [anon_sym_ends] = anon_sym_ends,
  [anon_sym_occurs] = anon_sym_occurs,
  [anon_sym_same] = anon_sym_same,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_during] = anon_sym_during,
  [anon_sym_includedin] = anon_sym_includedin,
  [anon_sym_meets] = anon_sym_meets,
  [anon_sym_before] = anon_sym_before,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_overlaps] = anon_sym_overlaps,
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
  [anon_sym_fluent] = anon_sym_fluent,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_orless] = anon_sym_orless,
  [anon_sym_ormore] = anon_sym_ormore,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_predecessor] = anon_sym_predecessor,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_starting] = anon_sym_starting,
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
  [sym_relative_qualifier] = sym_relative_qualifier,
  [sym_interval_operator_phrase] = sym_interval_operator_phrase,
  [sym_timing_expression] = sym_timing_expression,
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
  [anon_sym_orbefore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orafter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_starts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_occurs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_same] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_during] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includedin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_before] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_after] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlaps] = {
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
  [anon_sym_fluent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
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
  [anon_sym_starting] = {
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
  [sym_relative_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_interval_operator_phrase] = {
    .visible = true,
    .named = true,
  },
  [sym_timing_expression] = {
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
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 7,
  [20] = 9,
  [21] = 16,
  [22] = 22,
  [23] = 23,
  [24] = 11,
  [25] = 12,
  [26] = 13,
  [27] = 14,
  [28] = 17,
  [29] = 15,
  [30] = 22,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
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
  [54] = 53,
  [55] = 53,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 58,
  [60] = 58,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 62,
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
  [122] = 86,
  [123] = 83,
  [124] = 85,
  [125] = 84,
  [126] = 126,
  [127] = 116,
  [128] = 104,
  [129] = 109,
  [130] = 110,
  [131] = 111,
  [132] = 121,
  [133] = 118,
  [134] = 112,
  [135] = 97,
  [136] = 113,
  [137] = 114,
  [138] = 103,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 67,
  [146] = 68,
  [147] = 75,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 117,
  [152] = 152,
  [153] = 153,
  [154] = 107,
  [155] = 155,
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
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 63,
  [188] = 88,
  [189] = 98,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
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
  [208] = 197,
  [209] = 209,
  [210] = 200,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 195,
  [216] = 207,
  [217] = 197,
  [218] = 218,
  [219] = 195,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 75,
  [224] = 67,
  [225] = 225,
  [226] = 68,
  [227] = 83,
  [228] = 86,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 65,
  [234] = 234,
  [235] = 231,
  [236] = 231,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 241,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 250,
  [253] = 253,
  [254] = 250,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
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
      if (eof) ADVANCE(374);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(969);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(396);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '<') ADVANCE(428);
      if (lookahead == '=') ADVANCE(423);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == 'C') ADVANCE(237);
      if (lookahead == '[') ADVANCE(535);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == ']') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == 'y') ADVANCE(131);
      if (lookahead == '|') ADVANCE(437);
      if (lookahead == '~') ADVANCE(425);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(371)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == ')') ADVANCE(396);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '<') ADVANCE(428);
      if (lookahead == '=') ADVANCE(423);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == 'a') ADVANCE(769);
      if (lookahead == 'b') ADVANCE(662);
      if (lookahead == 'd') ADVANCE(905);
      if (lookahead == 'e') ADVANCE(776);
      if (lookahead == 'i') ADVANCE(742);
      if (lookahead == 'm') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(579);
      if (lookahead == 'p') ADVANCE(819);
      if (lookahead == 's') ADVANCE(565);
      if (lookahead == 'u') ADVANCE(758);
      if (lookahead == 'x') ADVANCE(783);
      if (lookahead == '|') ADVANCE(437);
      if (lookahead == '~') ADVANCE(425);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(970);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '[') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'b') ADVANCE(916);
      if (lookahead == 'c') ADVANCE(541);
      if (lookahead == 'd') ADVANCE(542);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == 'f') ADVANCE(544);
      if (lookahead == 'h') ADVANCE(780);
      if (lookahead == 'i') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead == 's') ADVANCE(637);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == 'v') ADVANCE(547);
      if (lookahead == 'w') ADVANCE(644);
      if (lookahead == 'x') ADVANCE(783);
      if (lookahead == 'y') ADVANCE(666);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(970);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '[') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'b') ADVANCE(916);
      if (lookahead == 'c') ADVANCE(541);
      if (lookahead == 'd') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == 'f') ADVANCE(544);
      if (lookahead == 'h') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == 'm') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == 'v') ADVANCE(547);
      if (lookahead == 'w') ADVANCE(663);
      if (lookahead == 'x') ADVANCE(783);
      if (lookahead == 'y') ADVANCE(673);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(970);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '[') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'b') ADVANCE(916);
      if (lookahead == 'c') ADVANCE(541);
      if (lookahead == 'd') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 'f') ADVANCE(544);
      if (lookahead == 'h') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == 'm') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == 'v') ADVANCE(547);
      if (lookahead == 'w') ADVANCE(663);
      if (lookahead == 'x') ADVANCE(783);
      if (lookahead == 'y') ADVANCE(673);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(970);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '[') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'b') ADVANCE(916);
      if (lookahead == 'c') ADVANCE(541);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == 'f') ADVANCE(544);
      if (lookahead == 'h') ADVANCE(780);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead == 's') ADVANCE(564);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == 'v') ADVANCE(547);
      if (lookahead == 'w') ADVANCE(644);
      if (lookahead == 'x') ADVANCE(783);
      if (lookahead == 'y') ADVANCE(666);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(970);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '[') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(686);
      if (lookahead == 'b') ADVANCE(645);
      if (lookahead == 'c') ADVANCE(541);
      if (lookahead == 'd') ADVANCE(542);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == 'f') ADVANCE(544);
      if (lookahead == 'h') ADVANCE(780);
      if (lookahead == 'i') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead == 's') ADVANCE(637);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == 'v') ADVANCE(547);
      if (lookahead == 'w') ADVANCE(644);
      if (lookahead == 'x') ADVANCE(783);
      if (lookahead == 'y') ADVANCE(666);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '[') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'b') ADVANCE(916);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead == 'f') ADVANCE(716);
      if (lookahead == 'i') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == 'm') ADVANCE(635);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead == 's') ADVANCE(866);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == 'v') ADVANCE(547);
      if (lookahead == 'w') ADVANCE(695);
      if (lookahead == 'x') ADVANCE(783);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == ']') ADVANCE(536);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'C') ADVANCE(782);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'b') ADVANCE(916);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead == 'f') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == 'm') ADVANCE(635);
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead == 's') ADVANCE(866);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == 'v') ADVANCE(547);
      if (lookahead == 'w') ADVANCE(695);
      if (lookahead == 'x') ADVANCE(783);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'C') ADVANCE(782);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'b') ADVANCE(916);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead == 'f') ADVANCE(716);
      if (lookahead == 'i') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == 'm') ADVANCE(635);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead == 's') ADVANCE(866);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == 'v') ADVANCE(547);
      if (lookahead == 'w') ADVANCE(695);
      if (lookahead == 'x') ADVANCE(783);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(898);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '/') ADVANCE(978);
      if (lookahead == '\\') ADVANCE(343);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(981);
      if (lookahead != 0) ADVANCE(982);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(969);
      if (lookahead == '/') ADVANCE(972);
      if (lookahead == '\\') ADVANCE(343);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(975);
      if (lookahead != 0) ADVANCE(976);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(921);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(987);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(986);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == 't') ADVANCE(288);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(424);
      if (lookahead == '~') ADVANCE(426);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(290);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(500);
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(942);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(961);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(516);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(951);
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(929);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(954);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(338);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(500);
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == 'v') ADVANCE(947);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 150:
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 152:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 153:
      if (lookahead == 'f') ADVANCE(308);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(255);
      END_STATE();
    case 155:
      if (lookahead == 'f') ADVANCE(340);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(377);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(519);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(963);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(943);
      END_STATE();
    case 160:
      if (lookahead == 'h') ADVANCE(449);
      END_STATE();
    case 161:
      if (lookahead == 'h') ADVANCE(967);
      END_STATE();
    case 162:
      if (lookahead == 'h') ADVANCE(447);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 179:
      if (lookahead == 'k') ADVANCE(452);
      END_STATE();
    case 180:
      if (lookahead == 'k') ADVANCE(450);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(349);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(257);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(532);
      END_STATE();
    case 204:
      if (lookahead == 'm') ADVANCE(934);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(521);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 257:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 258:
      if (lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 259:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 260:
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 261:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 262:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 263:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(955);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(965);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(957);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 296:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 297:
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 298:
      if (lookahead == 's') ADVANCE(953);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 300:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 301:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 302:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 303:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 304:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 305:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 310:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 311:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 312:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 313:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 314:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(949);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(925);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(937);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(939);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == 'y') ADVANCE(455);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 343:
      if (lookahead == 'u') ADVANCE(365);
      if (lookahead == 'x') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(985);
      if (lookahead != 0) ADVANCE(983);
      END_STATE();
    case 344:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 345:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 346:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 347:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 348:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 349:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 350:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 351:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 352:
      if (lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 353:
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 354:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 355:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 356:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 357:
      if (lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 358:
      if (lookahead == 'w') ADVANCE(127);
      END_STATE();
    case 359:
      if (lookahead == 'x') ADVANCE(323);
      END_STATE();
    case 360:
      if (lookahead == 'y') ADVANCE(945);
      END_STATE();
    case 361:
      if (lookahead == 'y') ADVANCE(375);
      END_STATE();
    case 362:
      if (lookahead == 'y') ADVANCE(417);
      END_STATE();
    case 363:
      if (lookahead == 'y') ADVANCE(453);
      END_STATE();
    case 364:
      if (lookahead == 'y') ADVANCE(310);
      END_STATE();
    case 365:
      if (lookahead == '{') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 366:
      if (lookahead == '}') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 367:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 368:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 369:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 370:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      END_STATE();
    case 371:
      if (eof) ADVANCE(374);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(969);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(396);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '<') ADVANCE(428);
      if (lookahead == '=') ADVANCE(423);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == 'C') ADVANCE(237);
      if (lookahead == '[') ADVANCE(535);
      if (lookahead == ']') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == 'y') ADVANCE(131);
      if (lookahead == '|') ADVANCE(437);
      if (lookahead == '~') ADVANCE(425);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(371)
      END_STATE();
    case 372:
      if (eof) ADVANCE(374);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '<') ADVANCE(428);
      if (lookahead == '=') ADVANCE(423);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == 'a') ADVANCE(769);
      if (lookahead == 'b') ADVANCE(662);
      if (lookahead == 'c') ADVANCE(794);
      if (lookahead == 'd') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(776);
      if (lookahead == 'i') ADVANCE(742);
      if (lookahead == 'm') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(579);
      if (lookahead == 'p') ADVANCE(819);
      if (lookahead == 's') ADVANCE(565);
      if (lookahead == 'u') ADVANCE(758);
      if (lookahead == 'x') ADVANCE(783);
      if (lookahead == '|') ADVANCE(437);
      if (lookahead == '~') ADVANCE(425);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(372)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 373:
      if (eof) ADVANCE(374);
      if (lookahead == '\'') ADVANCE(969);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == ']') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(299);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == 'y') ADVANCE(138);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(373)
      END_STATE();
    case 374:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_called);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_called);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 's') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_valueset);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_cast);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_cast);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_exists);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_properly);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_properly);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_between);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_between);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(430);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_implies);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_implies);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_intersect);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_intersect);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_month);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_week);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_day);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(474);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_hour);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_minute);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == 's') ADVANCE(478);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_second);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == 's') ADVANCE(480);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_millisecond);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == 's') ADVANCE(482);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_years);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_months);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_weeks);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_days);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_hours);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_minutes);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_seconds);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'z') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(921);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'z') ADVANCE(252);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(726);
      if (lookahead == 't') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(735);
      if (lookahead == 't') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_difference);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_difference);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_orbefore);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_orafter);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_starts);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_starts);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_ends);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_ends);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_occurs);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_occurs);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_same);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_same);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead == 's') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 's') ADVANCE(507);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_during);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_during);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_includedin);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_meets);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_meets);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_before);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_after);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_overlaps);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_overlaps);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(721);
      if (lookahead == 'o') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(885);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead == 'i') ADVANCE(680);
      if (lookahead == 'u') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(885);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead == 'i') ADVANCE(680);
      if (lookahead == 'u') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(719);
      if (lookahead == 'l') ADVANCE(901);
      if (lookahead == 'r') ADVANCE(781);
      if (lookahead == 'u') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead == 'i') ADVANCE(680);
      if (lookahead == 'u') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(733);
      if (lookahead == 'e') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(903);
      if (lookahead == 'i') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(896);
      if (lookahead == 'i') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(887);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead == 'i') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(641);
      if (lookahead == 'u') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead == 'o') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 't') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(734);
      if (lookahead == 'l') ADVANCE(901);
      if (lookahead == 'u') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(726);
      if (lookahead == 't') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(638);
      if (lookahead == 'i') ADVANCE(858);
      if (lookahead == 't') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(638);
      if (lookahead == 'i') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'r') ADVANCE(432);
      if (lookahead == 'v') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(668);
      if (lookahead == 't') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(736);
      if (lookahead == 't') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(952);
      if (lookahead == 'n') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(952);
      if (lookahead == 'n') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 's') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(614);
      if (lookahead == 'n') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(629);
      if (lookahead == 'n') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead == 'i') ADVANCE(729);
      if (lookahead == 'o') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead == 'i') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead == 'o') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(913);
      if (lookahead == 'o') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(613);
      if (lookahead == 'h') ADVANCE(651);
      if (lookahead == 'i') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'y') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead == 'h') ADVANCE(651);
      if (lookahead == 'i') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(549);
      if (lookahead == 's') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(683);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 'v') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(895);
      if (lookahead == 's') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(651);
      if (lookahead == 'i') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(745);
      if (lookahead == 'r') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(745);
      if (lookahead == 'r') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'k') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'k') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(901);
      if (lookahead == 'u') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(731);
      if (lookahead == 's') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(725);
      if (lookahead == 'n') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(799);
      if (lookahead == 'n') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(799);
      if (lookahead == 'n') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(799);
      if (lookahead == 'n') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(799);
      if (lookahead == 'n') ADVANCE(588);
      if (lookahead == 's') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(592);
      if (lookahead == 'x') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(592);
      if (lookahead == 'x') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(592);
      if (lookahead == 'x') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead == 's') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(599);
      if (lookahead == 's') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead == 'x') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(867);
      if (lookahead == 'u') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(539);
      if (lookahead == 'v') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 'v') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead == 'y') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead == 'y') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 't') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_Code);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_Code);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_Concept);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_Concept);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_asc);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_ascending);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 's') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == 's') ADVANCE(935);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_codesystems);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_codesystems);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_concept);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_concept);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_descending);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_descending);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_display);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_display);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_fluent);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_fluent);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_orless);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_ormore);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_predecessor);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_predecessor);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_starting);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_starting);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_successor);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_successor);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_width);
      if (lookahead == '\'') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(971);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(974);
      if (lookahead == '/') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(976);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '/') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(974);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(974);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '/') ADVANCE(972);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(976);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(976);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(977);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(980);
      if (lookahead == '/') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(982);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(979);
      if (lookahead == '/') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(980);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(980);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(978);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(982);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(982);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(983);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(984);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(987);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 373},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
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
  [83] = {.lex_state = 372},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 372},
  [86] = {.lex_state = 372},
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
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 373},
  [141] = {.lex_state = 373},
  [142] = {.lex_state = 373},
  [143] = {.lex_state = 373},
  [144] = {.lex_state = 373},
  [145] = {.lex_state = 373},
  [146] = {.lex_state = 373},
  [147] = {.lex_state = 373},
  [148] = {.lex_state = 373},
  [149] = {.lex_state = 373},
  [150] = {.lex_state = 373},
  [151] = {.lex_state = 373},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 373},
  [155] = {.lex_state = 373},
  [156] = {.lex_state = 373},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 373},
  [160] = {.lex_state = 373},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 373},
  [164] = {.lex_state = 373},
  [165] = {.lex_state = 373},
  [166] = {.lex_state = 373},
  [167] = {.lex_state = 373},
  [168] = {.lex_state = 373},
  [169] = {.lex_state = 373},
  [170] = {.lex_state = 373},
  [171] = {.lex_state = 373},
  [172] = {.lex_state = 373},
  [173] = {.lex_state = 373},
  [174] = {.lex_state = 373},
  [175] = {.lex_state = 373},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 373},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 373},
  [180] = {.lex_state = 373},
  [181] = {.lex_state = 373},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 373},
  [185] = {.lex_state = 373},
  [186] = {.lex_state = 373},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 13},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 373},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 373},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 14},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 373},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 15},
  [217] = {.lex_state = 14},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 14},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 20},
  [259] = {.lex_state = 20},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
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
    [anon_sym_starts] = ACTIONS(1),
    [anon_sym_ends] = ACTIONS(1),
    [anon_sym_occurs] = ACTIONS(1),
    [anon_sym_same] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_includes] = ACTIONS(1),
    [anon_sym_during] = ACTIONS(1),
    [anon_sym_includedin] = ACTIONS(1),
    [anon_sym_meets] = ACTIONS(1),
    [anon_sym_before] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
    [anon_sym_overlaps] = ACTIONS(1),
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
    [anon_sym_fluent] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_predecessor] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_starting] = ACTIONS(1),
    [anon_sym_successor] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_cql_library] = STATE(240),
    [sym_definition] = STATE(140),
    [sym_library_definition] = STATE(142),
    [sym_using_definition] = STATE(185),
    [sym_include_definition] = STATE(185),
    [sym_valueset_definition] = STATE(185),
    [sym_statement] = STATE(157),
    [sym_context_definition] = STATE(225),
    [sym_function_definition] = STATE(225),
    [sym_expression_definition] = STATE(225),
    [aux_sym_cql_library_repeat1] = STATE(140),
    [aux_sym_cql_library_repeat2] = STATE(157),
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
    [sym_expression] = STATE(132),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_date_time_precision] = STATE(244),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_date_time_precision_specifier] = STATE(16),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(56),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(121),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_date_time_precision] = STATE(244),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_date_time_precision_specifier] = STATE(21),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(56),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(121),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_date_time_precision] = STATE(244),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_date_time_precision_specifier] = STATE(21),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(132),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_date_time_precision] = STATE(244),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_date_time_precision_specifier] = STATE(16),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(93),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(127),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(109),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(128),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(129),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(130),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(131),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(134),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(136),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(137),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(138),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(133),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(99),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_expression] = STATE(116),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_expression] = STATE(104),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_expression] = STATE(103),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_expression] = STATE(135),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_expression] = STATE(126),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_expression] = STATE(110),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_expression] = STATE(111),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_expression] = STATE(112),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_expression] = STATE(113),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_expression] = STATE(118),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_expression] = STATE(114),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_expression] = STATE(97),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(84),
    [sym_retrieve] = STATE(85),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_expression] = STATE(139),
    [sym_expression_term] = STATE(100),
    [sym_term] = STATE(101),
    [sym_literal] = STATE(102),
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_boolean_expression] = STATE(100),
    [sym_type_expression] = STATE(100),
    [sym_cast_expression] = STATE(100),
    [sym_not_expression] = STATE(100),
    [sym_existence_expression] = STATE(100),
    [sym_between_expression] = STATE(100),
    [sym_equality_expression] = STATE(100),
    [sym_inequality_expression] = STATE(100),
    [sym_and_expression] = STATE(100),
    [sym_or_expression] = STATE(100),
    [sym_implies_expression] = STATE(100),
    [sym_in_fix_set_expression] = STATE(100),
    [sym_plural_date_time_precision] = STATE(256),
    [sym_duration_between_expression] = STATE(100),
    [sym_difference_between_expression] = STATE(100),
    [sym_membership_expression] = STATE(100),
    [sym_timing_expression] = STATE(100),
    [sym_query] = STATE(100),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(73),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(124),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [sym_string] = STATE(108),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_date_time_precision] = STATE(244),
    [sym_date_time_precision_specifier] = STATE(42),
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
    [anon_sym_properly] = ACTIONS(81),
    [anon_sym_xor] = ACTIONS(77),
    [anon_sym_implies] = ACTIONS(77),
    [anon_sym_union] = ACTIONS(77),
    [anon_sym_intersect] = ACTIONS(77),
    [anon_sym_except] = ACTIONS(77),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
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
    [anon_sym_orbefore] = ACTIONS(79),
    [anon_sym_orafter] = ACTIONS(79),
    [anon_sym_starts] = ACTIONS(77),
    [anon_sym_ends] = ACTIONS(77),
    [anon_sym_same] = ACTIONS(83),
    [anon_sym_start] = ACTIONS(77),
    [anon_sym_end] = ACTIONS(77),
    [anon_sym_includes] = ACTIONS(77),
    [anon_sym_during] = ACTIONS(85),
    [anon_sym_includedin] = ACTIONS(87),
    [anon_sym_meets] = ACTIONS(77),
    [anon_sym_overlaps] = ACTIONS(77),
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
    [anon_sym_fluent] = ACTIONS(77),
    [anon_sym_mod] = ACTIONS(77),
    [anon_sym_orless] = ACTIONS(79),
    [anon_sym_ormore] = ACTIONS(79),
    [anon_sym_parameter] = ACTIONS(77),
    [anon_sym_predecessor] = ACTIONS(77),
    [anon_sym_private] = ACTIONS(77),
    [anon_sym_public] = ACTIONS(77),
    [anon_sym_starting] = ACTIONS(77),
    [anon_sym_successor] = ACTIONS(77),
    [anon_sym_width] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_date_time_precision] = STATE(244),
    [sym_date_time_precision_specifier] = STATE(42),
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
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
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
    [anon_sym_orbefore] = ACTIONS(79),
    [anon_sym_orafter] = ACTIONS(79),
    [anon_sym_starts] = ACTIONS(77),
    [anon_sym_ends] = ACTIONS(77),
    [anon_sym_start] = ACTIONS(77),
    [anon_sym_end] = ACTIONS(77),
    [anon_sym_includes] = ACTIONS(77),
    [anon_sym_meets] = ACTIONS(77),
    [anon_sym_before] = ACTIONS(85),
    [anon_sym_after] = ACTIONS(85),
    [anon_sym_overlaps] = ACTIONS(77),
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
    [anon_sym_fluent] = ACTIONS(77),
    [anon_sym_mod] = ACTIONS(77),
    [anon_sym_orless] = ACTIONS(79),
    [anon_sym_ormore] = ACTIONS(79),
    [anon_sym_parameter] = ACTIONS(77),
    [anon_sym_predecessor] = ACTIONS(77),
    [anon_sym_private] = ACTIONS(77),
    [anon_sym_public] = ACTIONS(77),
    [anon_sym_starting] = ACTIONS(77),
    [anon_sym_successor] = ACTIONS(77),
    [anon_sym_width] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_date_time_precision] = STATE(244),
    [sym_date_time_precision_specifier] = STATE(46),
    [anon_sym_library] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_called] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_valueset] = ACTIONS(89),
    [anon_sym_context] = ACTIONS(89),
    [anon_sym_define] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [aux_sym_literal_token1] = ACTIONS(89),
    [anon_sym_null] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_exists] = ACTIONS(89),
    [anon_sym_xor] = ACTIONS(89),
    [anon_sym_implies] = ACTIONS(89),
    [anon_sym_union] = ACTIONS(89),
    [anon_sym_intersect] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(89),
    [anon_sym_months] = ACTIONS(89),
    [anon_sym_weeks] = ACTIONS(89),
    [anon_sym_days] = ACTIONS(89),
    [anon_sym_hours] = ACTIONS(89),
    [anon_sym_minutes] = ACTIONS(89),
    [anon_sym_seconds] = ACTIONS(89),
    [anon_sym_milliseconds] = ACTIONS(89),
    [anon_sym_date] = ACTIONS(89),
    [anon_sym_time] = ACTIONS(89),
    [anon_sym_timezone] = ACTIONS(89),
    [anon_sym_timezoneoffset] = ACTIONS(89),
    [anon_sym_duration] = ACTIONS(89),
    [anon_sym_in] = ACTIONS(89),
    [anon_sym_difference] = ACTIONS(89),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(91),
    [anon_sym_orafter] = ACTIONS(91),
    [anon_sym_starts] = ACTIONS(89),
    [anon_sym_ends] = ACTIONS(89),
    [anon_sym_start] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_includes] = ACTIONS(89),
    [anon_sym_meets] = ACTIONS(89),
    [anon_sym_overlaps] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
    [anon_sym_from] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(89),
    [sym_default_identifier] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_asc] = ACTIONS(89),
    [anon_sym_ascending] = ACTIONS(89),
    [anon_sym_by] = ACTIONS(89),
    [anon_sym_code] = ACTIONS(89),
    [anon_sym_codesystem] = ACTIONS(89),
    [anon_sym_codesystems] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_default] = ACTIONS(89),
    [anon_sym_desc] = ACTIONS(89),
    [anon_sym_descending] = ACTIONS(89),
    [anon_sym_display] = ACTIONS(89),
    [anon_sym_div] = ACTIONS(89),
    [anon_sym_fluent] = ACTIONS(89),
    [anon_sym_mod] = ACTIONS(89),
    [anon_sym_orless] = ACTIONS(91),
    [anon_sym_ormore] = ACTIONS(91),
    [anon_sym_parameter] = ACTIONS(89),
    [anon_sym_predecessor] = ACTIONS(89),
    [anon_sym_private] = ACTIONS(89),
    [anon_sym_public] = ACTIONS(89),
    [anon_sym_starting] = ACTIONS(89),
    [anon_sym_successor] = ACTIONS(89),
    [anon_sym_width] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_date_time_precision] = STATE(244),
    [sym_date_time_precision_specifier] = STATE(41),
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
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
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
    [anon_sym_orbefore] = ACTIONS(79),
    [anon_sym_orafter] = ACTIONS(79),
    [anon_sym_starts] = ACTIONS(77),
    [anon_sym_ends] = ACTIONS(77),
    [anon_sym_start] = ACTIONS(93),
    [anon_sym_end] = ACTIONS(93),
    [anon_sym_includes] = ACTIONS(77),
    [anon_sym_meets] = ACTIONS(77),
    [anon_sym_overlaps] = ACTIONS(77),
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
    [anon_sym_fluent] = ACTIONS(77),
    [anon_sym_mod] = ACTIONS(77),
    [anon_sym_orless] = ACTIONS(79),
    [anon_sym_ormore] = ACTIONS(79),
    [anon_sym_parameter] = ACTIONS(77),
    [anon_sym_predecessor] = ACTIONS(77),
    [anon_sym_private] = ACTIONS(77),
    [anon_sym_public] = ACTIONS(77),
    [anon_sym_starting] = ACTIONS(77),
    [anon_sym_successor] = ACTIONS(77),
    [anon_sym_width] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_date_time_precision] = STATE(244),
    [sym_date_time_precision_specifier] = STATE(40),
    [anon_sym_library] = ACTIONS(96),
    [anon_sym_using] = ACTIONS(96),
    [anon_sym_called] = ACTIONS(96),
    [anon_sym_include] = ACTIONS(96),
    [anon_sym_valueset] = ACTIONS(96),
    [anon_sym_context] = ACTIONS(96),
    [anon_sym_define] = ACTIONS(96),
    [anon_sym_function] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(98),
    [aux_sym_literal_token1] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(96),
    [anon_sym_not] = ACTIONS(96),
    [anon_sym_cast] = ACTIONS(96),
    [anon_sym_exists] = ACTIONS(96),
    [anon_sym_xor] = ACTIONS(96),
    [anon_sym_implies] = ACTIONS(96),
    [anon_sym_union] = ACTIONS(96),
    [anon_sym_intersect] = ACTIONS(96),
    [anon_sym_except] = ACTIONS(96),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(96),
    [anon_sym_months] = ACTIONS(96),
    [anon_sym_weeks] = ACTIONS(96),
    [anon_sym_days] = ACTIONS(96),
    [anon_sym_hours] = ACTIONS(96),
    [anon_sym_minutes] = ACTIONS(96),
    [anon_sym_seconds] = ACTIONS(96),
    [anon_sym_milliseconds] = ACTIONS(96),
    [anon_sym_date] = ACTIONS(96),
    [anon_sym_time] = ACTIONS(96),
    [anon_sym_timezone] = ACTIONS(96),
    [anon_sym_timezoneoffset] = ACTIONS(96),
    [anon_sym_duration] = ACTIONS(96),
    [anon_sym_in] = ACTIONS(96),
    [anon_sym_difference] = ACTIONS(96),
    [anon_sym_contains] = ACTIONS(96),
    [anon_sym_orbefore] = ACTIONS(98),
    [anon_sym_orafter] = ACTIONS(98),
    [anon_sym_starts] = ACTIONS(96),
    [anon_sym_ends] = ACTIONS(96),
    [anon_sym_start] = ACTIONS(96),
    [anon_sym_end] = ACTIONS(96),
    [anon_sym_includes] = ACTIONS(96),
    [anon_sym_meets] = ACTIONS(96),
    [anon_sym_overlaps] = ACTIONS(96),
    [anon_sym_where] = ACTIONS(96),
    [anon_sym_from] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_version] = ACTIONS(96),
    [sym_default_identifier] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_asc] = ACTIONS(96),
    [anon_sym_ascending] = ACTIONS(96),
    [anon_sym_by] = ACTIONS(96),
    [anon_sym_code] = ACTIONS(96),
    [anon_sym_codesystem] = ACTIONS(96),
    [anon_sym_codesystems] = ACTIONS(96),
    [anon_sym_concept] = ACTIONS(96),
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_desc] = ACTIONS(96),
    [anon_sym_descending] = ACTIONS(96),
    [anon_sym_display] = ACTIONS(96),
    [anon_sym_div] = ACTIONS(96),
    [anon_sym_fluent] = ACTIONS(96),
    [anon_sym_mod] = ACTIONS(96),
    [anon_sym_orless] = ACTIONS(98),
    [anon_sym_ormore] = ACTIONS(98),
    [anon_sym_parameter] = ACTIONS(96),
    [anon_sym_predecessor] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_starting] = ACTIONS(96),
    [anon_sym_successor] = ACTIONS(96),
    [anon_sym_width] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_date_time_precision] = STATE(244),
    [sym_date_time_precision_specifier] = STATE(39),
    [anon_sym_library] = ACTIONS(96),
    [anon_sym_using] = ACTIONS(96),
    [anon_sym_called] = ACTIONS(96),
    [anon_sym_include] = ACTIONS(96),
    [anon_sym_valueset] = ACTIONS(96),
    [anon_sym_context] = ACTIONS(96),
    [anon_sym_define] = ACTIONS(96),
    [anon_sym_function] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(98),
    [aux_sym_literal_token1] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(96),
    [anon_sym_not] = ACTIONS(96),
    [anon_sym_cast] = ACTIONS(96),
    [anon_sym_exists] = ACTIONS(96),
    [anon_sym_xor] = ACTIONS(96),
    [anon_sym_implies] = ACTIONS(96),
    [anon_sym_union] = ACTIONS(96),
    [anon_sym_intersect] = ACTIONS(96),
    [anon_sym_except] = ACTIONS(96),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(96),
    [anon_sym_months] = ACTIONS(96),
    [anon_sym_weeks] = ACTIONS(96),
    [anon_sym_days] = ACTIONS(96),
    [anon_sym_hours] = ACTIONS(96),
    [anon_sym_minutes] = ACTIONS(96),
    [anon_sym_seconds] = ACTIONS(96),
    [anon_sym_milliseconds] = ACTIONS(96),
    [anon_sym_date] = ACTIONS(96),
    [anon_sym_time] = ACTIONS(96),
    [anon_sym_timezone] = ACTIONS(96),
    [anon_sym_timezoneoffset] = ACTIONS(96),
    [anon_sym_duration] = ACTIONS(96),
    [anon_sym_in] = ACTIONS(96),
    [anon_sym_difference] = ACTIONS(96),
    [anon_sym_contains] = ACTIONS(96),
    [anon_sym_orbefore] = ACTIONS(98),
    [anon_sym_orafter] = ACTIONS(98),
    [anon_sym_starts] = ACTIONS(96),
    [anon_sym_ends] = ACTIONS(96),
    [anon_sym_start] = ACTIONS(100),
    [anon_sym_end] = ACTIONS(100),
    [anon_sym_includes] = ACTIONS(96),
    [anon_sym_meets] = ACTIONS(96),
    [anon_sym_overlaps] = ACTIONS(96),
    [anon_sym_where] = ACTIONS(96),
    [anon_sym_from] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_version] = ACTIONS(96),
    [sym_default_identifier] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_asc] = ACTIONS(96),
    [anon_sym_ascending] = ACTIONS(96),
    [anon_sym_by] = ACTIONS(96),
    [anon_sym_code] = ACTIONS(96),
    [anon_sym_codesystem] = ACTIONS(96),
    [anon_sym_codesystems] = ACTIONS(96),
    [anon_sym_concept] = ACTIONS(96),
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_desc] = ACTIONS(96),
    [anon_sym_descending] = ACTIONS(96),
    [anon_sym_display] = ACTIONS(96),
    [anon_sym_div] = ACTIONS(96),
    [anon_sym_fluent] = ACTIONS(96),
    [anon_sym_mod] = ACTIONS(96),
    [anon_sym_orless] = ACTIONS(98),
    [anon_sym_ormore] = ACTIONS(98),
    [anon_sym_parameter] = ACTIONS(96),
    [anon_sym_predecessor] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_starting] = ACTIONS(96),
    [anon_sym_successor] = ACTIONS(96),
    [anon_sym_width] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_date_time_precision] = STATE(244),
    [sym_date_time_precision_specifier] = STATE(42),
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
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
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
    [anon_sym_orbefore] = ACTIONS(79),
    [anon_sym_orafter] = ACTIONS(79),
    [anon_sym_starts] = ACTIONS(77),
    [anon_sym_ends] = ACTIONS(77),
    [anon_sym_start] = ACTIONS(77),
    [anon_sym_end] = ACTIONS(77),
    [anon_sym_includes] = ACTIONS(77),
    [anon_sym_meets] = ACTIONS(77),
    [anon_sym_overlaps] = ACTIONS(77),
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
    [anon_sym_fluent] = ACTIONS(77),
    [anon_sym_mod] = ACTIONS(77),
    [anon_sym_orless] = ACTIONS(79),
    [anon_sym_ormore] = ACTIONS(79),
    [anon_sym_parameter] = ACTIONS(77),
    [anon_sym_predecessor] = ACTIONS(77),
    [anon_sym_private] = ACTIONS(77),
    [anon_sym_public] = ACTIONS(77),
    [anon_sym_starting] = ACTIONS(77),
    [anon_sym_successor] = ACTIONS(77),
    [anon_sym_width] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [anon_sym_library] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_called] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_valueset] = ACTIONS(89),
    [anon_sym_context] = ACTIONS(89),
    [anon_sym_define] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [aux_sym_literal_token1] = ACTIONS(89),
    [anon_sym_null] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_exists] = ACTIONS(89),
    [anon_sym_xor] = ACTIONS(89),
    [anon_sym_implies] = ACTIONS(89),
    [anon_sym_union] = ACTIONS(89),
    [anon_sym_intersect] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_years] = ACTIONS(89),
    [anon_sym_months] = ACTIONS(89),
    [anon_sym_weeks] = ACTIONS(89),
    [anon_sym_days] = ACTIONS(89),
    [anon_sym_hours] = ACTIONS(89),
    [anon_sym_minutes] = ACTIONS(89),
    [anon_sym_seconds] = ACTIONS(89),
    [anon_sym_milliseconds] = ACTIONS(89),
    [anon_sym_date] = ACTIONS(89),
    [anon_sym_time] = ACTIONS(89),
    [anon_sym_timezone] = ACTIONS(89),
    [anon_sym_timezoneoffset] = ACTIONS(89),
    [anon_sym_duration] = ACTIONS(89),
    [anon_sym_in] = ACTIONS(89),
    [anon_sym_difference] = ACTIONS(89),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(91),
    [anon_sym_orafter] = ACTIONS(91),
    [anon_sym_starts] = ACTIONS(89),
    [anon_sym_ends] = ACTIONS(89),
    [anon_sym_start] = ACTIONS(103),
    [anon_sym_end] = ACTIONS(103),
    [anon_sym_includes] = ACTIONS(89),
    [anon_sym_meets] = ACTIONS(89),
    [anon_sym_overlaps] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
    [anon_sym_from] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(89),
    [sym_default_identifier] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_asc] = ACTIONS(89),
    [anon_sym_ascending] = ACTIONS(89),
    [anon_sym_by] = ACTIONS(89),
    [anon_sym_code] = ACTIONS(89),
    [anon_sym_codesystem] = ACTIONS(89),
    [anon_sym_codesystems] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_default] = ACTIONS(89),
    [anon_sym_desc] = ACTIONS(89),
    [anon_sym_descending] = ACTIONS(89),
    [anon_sym_display] = ACTIONS(89),
    [anon_sym_div] = ACTIONS(89),
    [anon_sym_fluent] = ACTIONS(89),
    [anon_sym_mod] = ACTIONS(89),
    [anon_sym_orless] = ACTIONS(91),
    [anon_sym_ormore] = ACTIONS(91),
    [anon_sym_parameter] = ACTIONS(89),
    [anon_sym_predecessor] = ACTIONS(89),
    [anon_sym_private] = ACTIONS(89),
    [anon_sym_public] = ACTIONS(89),
    [anon_sym_starting] = ACTIONS(89),
    [anon_sym_successor] = ACTIONS(89),
    [anon_sym_width] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [anon_sym_library] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_called] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_valueset] = ACTIONS(89),
    [anon_sym_context] = ACTIONS(89),
    [anon_sym_define] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [aux_sym_literal_token1] = ACTIONS(89),
    [anon_sym_null] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_exists] = ACTIONS(89),
    [anon_sym_xor] = ACTIONS(89),
    [anon_sym_implies] = ACTIONS(89),
    [anon_sym_union] = ACTIONS(89),
    [anon_sym_intersect] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_years] = ACTIONS(89),
    [anon_sym_months] = ACTIONS(89),
    [anon_sym_weeks] = ACTIONS(89),
    [anon_sym_days] = ACTIONS(89),
    [anon_sym_hours] = ACTIONS(89),
    [anon_sym_minutes] = ACTIONS(89),
    [anon_sym_seconds] = ACTIONS(89),
    [anon_sym_milliseconds] = ACTIONS(89),
    [anon_sym_date] = ACTIONS(89),
    [anon_sym_time] = ACTIONS(89),
    [anon_sym_timezone] = ACTIONS(89),
    [anon_sym_timezoneoffset] = ACTIONS(89),
    [anon_sym_duration] = ACTIONS(89),
    [anon_sym_in] = ACTIONS(89),
    [anon_sym_difference] = ACTIONS(89),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(91),
    [anon_sym_orafter] = ACTIONS(91),
    [anon_sym_starts] = ACTIONS(89),
    [anon_sym_ends] = ACTIONS(89),
    [anon_sym_start] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_includes] = ACTIONS(89),
    [anon_sym_meets] = ACTIONS(89),
    [anon_sym_overlaps] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
    [anon_sym_from] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(89),
    [sym_default_identifier] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_asc] = ACTIONS(89),
    [anon_sym_ascending] = ACTIONS(89),
    [anon_sym_by] = ACTIONS(89),
    [anon_sym_code] = ACTIONS(89),
    [anon_sym_codesystem] = ACTIONS(89),
    [anon_sym_codesystems] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_default] = ACTIONS(89),
    [anon_sym_desc] = ACTIONS(89),
    [anon_sym_descending] = ACTIONS(89),
    [anon_sym_display] = ACTIONS(89),
    [anon_sym_div] = ACTIONS(89),
    [anon_sym_fluent] = ACTIONS(89),
    [anon_sym_mod] = ACTIONS(89),
    [anon_sym_orless] = ACTIONS(91),
    [anon_sym_ormore] = ACTIONS(91),
    [anon_sym_parameter] = ACTIONS(89),
    [anon_sym_predecessor] = ACTIONS(89),
    [anon_sym_private] = ACTIONS(89),
    [anon_sym_public] = ACTIONS(89),
    [anon_sym_starting] = ACTIONS(89),
    [anon_sym_successor] = ACTIONS(89),
    [anon_sym_width] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_library] = ACTIONS(96),
    [anon_sym_using] = ACTIONS(96),
    [anon_sym_called] = ACTIONS(96),
    [anon_sym_include] = ACTIONS(96),
    [anon_sym_valueset] = ACTIONS(96),
    [anon_sym_context] = ACTIONS(96),
    [anon_sym_define] = ACTIONS(96),
    [anon_sym_function] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(98),
    [aux_sym_literal_token1] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(96),
    [anon_sym_not] = ACTIONS(96),
    [anon_sym_cast] = ACTIONS(96),
    [anon_sym_exists] = ACTIONS(96),
    [anon_sym_xor] = ACTIONS(96),
    [anon_sym_implies] = ACTIONS(96),
    [anon_sym_union] = ACTIONS(96),
    [anon_sym_intersect] = ACTIONS(96),
    [anon_sym_except] = ACTIONS(96),
    [anon_sym_years] = ACTIONS(96),
    [anon_sym_months] = ACTIONS(96),
    [anon_sym_weeks] = ACTIONS(96),
    [anon_sym_days] = ACTIONS(96),
    [anon_sym_hours] = ACTIONS(96),
    [anon_sym_minutes] = ACTIONS(96),
    [anon_sym_seconds] = ACTIONS(96),
    [anon_sym_milliseconds] = ACTIONS(96),
    [anon_sym_date] = ACTIONS(96),
    [anon_sym_time] = ACTIONS(96),
    [anon_sym_timezone] = ACTIONS(96),
    [anon_sym_timezoneoffset] = ACTIONS(96),
    [anon_sym_duration] = ACTIONS(96),
    [anon_sym_in] = ACTIONS(96),
    [anon_sym_difference] = ACTIONS(96),
    [anon_sym_contains] = ACTIONS(96),
    [anon_sym_orbefore] = ACTIONS(98),
    [anon_sym_orafter] = ACTIONS(98),
    [anon_sym_starts] = ACTIONS(96),
    [anon_sym_ends] = ACTIONS(96),
    [anon_sym_start] = ACTIONS(100),
    [anon_sym_end] = ACTIONS(100),
    [anon_sym_includes] = ACTIONS(96),
    [anon_sym_meets] = ACTIONS(96),
    [anon_sym_overlaps] = ACTIONS(96),
    [anon_sym_where] = ACTIONS(96),
    [anon_sym_from] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_version] = ACTIONS(96),
    [sym_default_identifier] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_asc] = ACTIONS(96),
    [anon_sym_ascending] = ACTIONS(96),
    [anon_sym_by] = ACTIONS(96),
    [anon_sym_code] = ACTIONS(96),
    [anon_sym_codesystem] = ACTIONS(96),
    [anon_sym_codesystems] = ACTIONS(96),
    [anon_sym_concept] = ACTIONS(96),
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_desc] = ACTIONS(96),
    [anon_sym_descending] = ACTIONS(96),
    [anon_sym_display] = ACTIONS(96),
    [anon_sym_div] = ACTIONS(96),
    [anon_sym_fluent] = ACTIONS(96),
    [anon_sym_mod] = ACTIONS(96),
    [anon_sym_orless] = ACTIONS(98),
    [anon_sym_ormore] = ACTIONS(98),
    [anon_sym_parameter] = ACTIONS(96),
    [anon_sym_predecessor] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_starting] = ACTIONS(96),
    [anon_sym_successor] = ACTIONS(96),
    [anon_sym_width] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_library] = ACTIONS(96),
    [anon_sym_using] = ACTIONS(96),
    [anon_sym_called] = ACTIONS(96),
    [anon_sym_include] = ACTIONS(96),
    [anon_sym_valueset] = ACTIONS(96),
    [anon_sym_context] = ACTIONS(96),
    [anon_sym_define] = ACTIONS(96),
    [anon_sym_function] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(98),
    [aux_sym_literal_token1] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(96),
    [anon_sym_not] = ACTIONS(96),
    [anon_sym_cast] = ACTIONS(96),
    [anon_sym_exists] = ACTIONS(96),
    [anon_sym_xor] = ACTIONS(96),
    [anon_sym_implies] = ACTIONS(96),
    [anon_sym_union] = ACTIONS(96),
    [anon_sym_intersect] = ACTIONS(96),
    [anon_sym_except] = ACTIONS(96),
    [anon_sym_years] = ACTIONS(96),
    [anon_sym_months] = ACTIONS(96),
    [anon_sym_weeks] = ACTIONS(96),
    [anon_sym_days] = ACTIONS(96),
    [anon_sym_hours] = ACTIONS(96),
    [anon_sym_minutes] = ACTIONS(96),
    [anon_sym_seconds] = ACTIONS(96),
    [anon_sym_milliseconds] = ACTIONS(96),
    [anon_sym_date] = ACTIONS(96),
    [anon_sym_time] = ACTIONS(96),
    [anon_sym_timezone] = ACTIONS(96),
    [anon_sym_timezoneoffset] = ACTIONS(96),
    [anon_sym_duration] = ACTIONS(96),
    [anon_sym_in] = ACTIONS(96),
    [anon_sym_difference] = ACTIONS(96),
    [anon_sym_contains] = ACTIONS(96),
    [anon_sym_orbefore] = ACTIONS(98),
    [anon_sym_orafter] = ACTIONS(98),
    [anon_sym_starts] = ACTIONS(96),
    [anon_sym_ends] = ACTIONS(96),
    [anon_sym_start] = ACTIONS(96),
    [anon_sym_end] = ACTIONS(96),
    [anon_sym_includes] = ACTIONS(96),
    [anon_sym_meets] = ACTIONS(96),
    [anon_sym_overlaps] = ACTIONS(96),
    [anon_sym_where] = ACTIONS(96),
    [anon_sym_from] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_version] = ACTIONS(96),
    [sym_default_identifier] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_asc] = ACTIONS(96),
    [anon_sym_ascending] = ACTIONS(96),
    [anon_sym_by] = ACTIONS(96),
    [anon_sym_code] = ACTIONS(96),
    [anon_sym_codesystem] = ACTIONS(96),
    [anon_sym_codesystems] = ACTIONS(96),
    [anon_sym_concept] = ACTIONS(96),
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_desc] = ACTIONS(96),
    [anon_sym_descending] = ACTIONS(96),
    [anon_sym_display] = ACTIONS(96),
    [anon_sym_div] = ACTIONS(96),
    [anon_sym_fluent] = ACTIONS(96),
    [anon_sym_mod] = ACTIONS(96),
    [anon_sym_orless] = ACTIONS(98),
    [anon_sym_ormore] = ACTIONS(98),
    [anon_sym_parameter] = ACTIONS(96),
    [anon_sym_predecessor] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_starting] = ACTIONS(96),
    [anon_sym_successor] = ACTIONS(96),
    [anon_sym_width] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [anon_sym_library] = ACTIONS(106),
    [anon_sym_using] = ACTIONS(106),
    [anon_sym_called] = ACTIONS(106),
    [anon_sym_include] = ACTIONS(106),
    [anon_sym_valueset] = ACTIONS(106),
    [anon_sym_context] = ACTIONS(106),
    [anon_sym_define] = ACTIONS(106),
    [anon_sym_function] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(108),
    [aux_sym_literal_token1] = ACTIONS(106),
    [anon_sym_null] = ACTIONS(106),
    [anon_sym_not] = ACTIONS(106),
    [anon_sym_cast] = ACTIONS(106),
    [anon_sym_exists] = ACTIONS(106),
    [anon_sym_xor] = ACTIONS(106),
    [anon_sym_implies] = ACTIONS(106),
    [anon_sym_union] = ACTIONS(106),
    [anon_sym_intersect] = ACTIONS(106),
    [anon_sym_except] = ACTIONS(106),
    [anon_sym_years] = ACTIONS(106),
    [anon_sym_months] = ACTIONS(106),
    [anon_sym_weeks] = ACTIONS(106),
    [anon_sym_days] = ACTIONS(106),
    [anon_sym_hours] = ACTIONS(106),
    [anon_sym_minutes] = ACTIONS(106),
    [anon_sym_seconds] = ACTIONS(106),
    [anon_sym_milliseconds] = ACTIONS(106),
    [anon_sym_date] = ACTIONS(106),
    [anon_sym_time] = ACTIONS(106),
    [anon_sym_timezone] = ACTIONS(106),
    [anon_sym_timezoneoffset] = ACTIONS(106),
    [anon_sym_duration] = ACTIONS(106),
    [anon_sym_in] = ACTIONS(106),
    [anon_sym_difference] = ACTIONS(106),
    [anon_sym_contains] = ACTIONS(106),
    [anon_sym_orbefore] = ACTIONS(108),
    [anon_sym_orafter] = ACTIONS(108),
    [anon_sym_starts] = ACTIONS(106),
    [anon_sym_ends] = ACTIONS(106),
    [anon_sym_start] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(106),
    [anon_sym_includes] = ACTIONS(106),
    [anon_sym_meets] = ACTIONS(106),
    [anon_sym_overlaps] = ACTIONS(106),
    [anon_sym_where] = ACTIONS(106),
    [anon_sym_from] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_version] = ACTIONS(106),
    [sym_default_identifier] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [anon_sym_asc] = ACTIONS(106),
    [anon_sym_ascending] = ACTIONS(106),
    [anon_sym_by] = ACTIONS(106),
    [anon_sym_code] = ACTIONS(106),
    [anon_sym_codesystem] = ACTIONS(106),
    [anon_sym_codesystems] = ACTIONS(106),
    [anon_sym_concept] = ACTIONS(106),
    [anon_sym_default] = ACTIONS(106),
    [anon_sym_desc] = ACTIONS(106),
    [anon_sym_descending] = ACTIONS(106),
    [anon_sym_display] = ACTIONS(106),
    [anon_sym_div] = ACTIONS(106),
    [anon_sym_fluent] = ACTIONS(106),
    [anon_sym_mod] = ACTIONS(106),
    [anon_sym_orless] = ACTIONS(108),
    [anon_sym_ormore] = ACTIONS(108),
    [anon_sym_parameter] = ACTIONS(106),
    [anon_sym_predecessor] = ACTIONS(106),
    [anon_sym_private] = ACTIONS(106),
    [anon_sym_public] = ACTIONS(106),
    [anon_sym_starting] = ACTIONS(106),
    [anon_sym_successor] = ACTIONS(106),
    [anon_sym_width] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_library] = ACTIONS(110),
    [anon_sym_using] = ACTIONS(110),
    [anon_sym_called] = ACTIONS(110),
    [anon_sym_include] = ACTIONS(110),
    [anon_sym_valueset] = ACTIONS(110),
    [anon_sym_context] = ACTIONS(110),
    [anon_sym_define] = ACTIONS(110),
    [anon_sym_function] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [aux_sym_literal_token1] = ACTIONS(110),
    [anon_sym_null] = ACTIONS(110),
    [anon_sym_not] = ACTIONS(110),
    [anon_sym_cast] = ACTIONS(110),
    [anon_sym_exists] = ACTIONS(110),
    [anon_sym_xor] = ACTIONS(110),
    [anon_sym_implies] = ACTIONS(110),
    [anon_sym_union] = ACTIONS(110),
    [anon_sym_intersect] = ACTIONS(110),
    [anon_sym_except] = ACTIONS(110),
    [anon_sym_years] = ACTIONS(110),
    [anon_sym_months] = ACTIONS(110),
    [anon_sym_weeks] = ACTIONS(110),
    [anon_sym_days] = ACTIONS(110),
    [anon_sym_hours] = ACTIONS(110),
    [anon_sym_minutes] = ACTIONS(110),
    [anon_sym_seconds] = ACTIONS(110),
    [anon_sym_milliseconds] = ACTIONS(110),
    [anon_sym_date] = ACTIONS(110),
    [anon_sym_time] = ACTIONS(110),
    [anon_sym_timezone] = ACTIONS(110),
    [anon_sym_timezoneoffset] = ACTIONS(110),
    [anon_sym_duration] = ACTIONS(110),
    [anon_sym_in] = ACTIONS(110),
    [anon_sym_difference] = ACTIONS(110),
    [anon_sym_contains] = ACTIONS(110),
    [anon_sym_orbefore] = ACTIONS(112),
    [anon_sym_orafter] = ACTIONS(112),
    [anon_sym_starts] = ACTIONS(110),
    [anon_sym_ends] = ACTIONS(110),
    [anon_sym_start] = ACTIONS(114),
    [anon_sym_end] = ACTIONS(114),
    [anon_sym_includes] = ACTIONS(110),
    [anon_sym_meets] = ACTIONS(110),
    [anon_sym_overlaps] = ACTIONS(110),
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_from] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_version] = ACTIONS(110),
    [sym_default_identifier] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_asc] = ACTIONS(110),
    [anon_sym_ascending] = ACTIONS(110),
    [anon_sym_by] = ACTIONS(110),
    [anon_sym_code] = ACTIONS(110),
    [anon_sym_codesystem] = ACTIONS(110),
    [anon_sym_codesystems] = ACTIONS(110),
    [anon_sym_concept] = ACTIONS(110),
    [anon_sym_default] = ACTIONS(110),
    [anon_sym_desc] = ACTIONS(110),
    [anon_sym_descending] = ACTIONS(110),
    [anon_sym_display] = ACTIONS(110),
    [anon_sym_div] = ACTIONS(110),
    [anon_sym_fluent] = ACTIONS(110),
    [anon_sym_mod] = ACTIONS(110),
    [anon_sym_orless] = ACTIONS(112),
    [anon_sym_ormore] = ACTIONS(112),
    [anon_sym_parameter] = ACTIONS(110),
    [anon_sym_predecessor] = ACTIONS(110),
    [anon_sym_private] = ACTIONS(110),
    [anon_sym_public] = ACTIONS(110),
    [anon_sym_starting] = ACTIONS(110),
    [anon_sym_successor] = ACTIONS(110),
    [anon_sym_width] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_library] = ACTIONS(117),
    [anon_sym_using] = ACTIONS(117),
    [anon_sym_called] = ACTIONS(117),
    [anon_sym_include] = ACTIONS(117),
    [anon_sym_valueset] = ACTIONS(117),
    [anon_sym_context] = ACTIONS(117),
    [anon_sym_define] = ACTIONS(117),
    [anon_sym_function] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(119),
    [aux_sym_literal_token1] = ACTIONS(117),
    [anon_sym_null] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_cast] = ACTIONS(117),
    [anon_sym_exists] = ACTIONS(117),
    [anon_sym_xor] = ACTIONS(117),
    [anon_sym_implies] = ACTIONS(117),
    [anon_sym_union] = ACTIONS(117),
    [anon_sym_intersect] = ACTIONS(117),
    [anon_sym_except] = ACTIONS(117),
    [anon_sym_years] = ACTIONS(117),
    [anon_sym_months] = ACTIONS(117),
    [anon_sym_weeks] = ACTIONS(117),
    [anon_sym_days] = ACTIONS(117),
    [anon_sym_hours] = ACTIONS(117),
    [anon_sym_minutes] = ACTIONS(117),
    [anon_sym_seconds] = ACTIONS(117),
    [anon_sym_milliseconds] = ACTIONS(117),
    [anon_sym_date] = ACTIONS(117),
    [anon_sym_time] = ACTIONS(117),
    [anon_sym_timezone] = ACTIONS(117),
    [anon_sym_timezoneoffset] = ACTIONS(117),
    [anon_sym_duration] = ACTIONS(117),
    [anon_sym_in] = ACTIONS(117),
    [anon_sym_difference] = ACTIONS(117),
    [anon_sym_contains] = ACTIONS(117),
    [anon_sym_orbefore] = ACTIONS(119),
    [anon_sym_orafter] = ACTIONS(119),
    [anon_sym_starts] = ACTIONS(117),
    [anon_sym_ends] = ACTIONS(117),
    [anon_sym_start] = ACTIONS(117),
    [anon_sym_end] = ACTIONS(117),
    [anon_sym_includes] = ACTIONS(117),
    [anon_sym_meets] = ACTIONS(117),
    [anon_sym_overlaps] = ACTIONS(117),
    [anon_sym_where] = ACTIONS(117),
    [anon_sym_from] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_version] = ACTIONS(117),
    [sym_default_identifier] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_asc] = ACTIONS(117),
    [anon_sym_ascending] = ACTIONS(117),
    [anon_sym_by] = ACTIONS(117),
    [anon_sym_code] = ACTIONS(117),
    [anon_sym_codesystem] = ACTIONS(117),
    [anon_sym_codesystems] = ACTIONS(117),
    [anon_sym_concept] = ACTIONS(117),
    [anon_sym_default] = ACTIONS(117),
    [anon_sym_desc] = ACTIONS(117),
    [anon_sym_descending] = ACTIONS(117),
    [anon_sym_display] = ACTIONS(117),
    [anon_sym_div] = ACTIONS(117),
    [anon_sym_fluent] = ACTIONS(117),
    [anon_sym_mod] = ACTIONS(117),
    [anon_sym_orless] = ACTIONS(119),
    [anon_sym_ormore] = ACTIONS(119),
    [anon_sym_parameter] = ACTIONS(117),
    [anon_sym_predecessor] = ACTIONS(117),
    [anon_sym_private] = ACTIONS(117),
    [anon_sym_public] = ACTIONS(117),
    [anon_sym_starting] = ACTIONS(117),
    [anon_sym_successor] = ACTIONS(117),
    [anon_sym_width] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_library] = ACTIONS(110),
    [anon_sym_using] = ACTIONS(110),
    [anon_sym_called] = ACTIONS(110),
    [anon_sym_include] = ACTIONS(110),
    [anon_sym_valueset] = ACTIONS(110),
    [anon_sym_context] = ACTIONS(110),
    [anon_sym_define] = ACTIONS(110),
    [anon_sym_function] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [aux_sym_literal_token1] = ACTIONS(110),
    [anon_sym_null] = ACTIONS(110),
    [anon_sym_not] = ACTIONS(110),
    [anon_sym_cast] = ACTIONS(110),
    [anon_sym_exists] = ACTIONS(110),
    [anon_sym_xor] = ACTIONS(110),
    [anon_sym_implies] = ACTIONS(110),
    [anon_sym_union] = ACTIONS(110),
    [anon_sym_intersect] = ACTIONS(110),
    [anon_sym_except] = ACTIONS(110),
    [anon_sym_years] = ACTIONS(110),
    [anon_sym_months] = ACTIONS(110),
    [anon_sym_weeks] = ACTIONS(110),
    [anon_sym_days] = ACTIONS(110),
    [anon_sym_hours] = ACTIONS(110),
    [anon_sym_minutes] = ACTIONS(110),
    [anon_sym_seconds] = ACTIONS(110),
    [anon_sym_milliseconds] = ACTIONS(110),
    [anon_sym_date] = ACTIONS(110),
    [anon_sym_time] = ACTIONS(110),
    [anon_sym_timezone] = ACTIONS(110),
    [anon_sym_timezoneoffset] = ACTIONS(110),
    [anon_sym_duration] = ACTIONS(110),
    [anon_sym_in] = ACTIONS(110),
    [anon_sym_difference] = ACTIONS(110),
    [anon_sym_contains] = ACTIONS(110),
    [anon_sym_orbefore] = ACTIONS(112),
    [anon_sym_orafter] = ACTIONS(112),
    [anon_sym_starts] = ACTIONS(110),
    [anon_sym_ends] = ACTIONS(110),
    [anon_sym_start] = ACTIONS(110),
    [anon_sym_end] = ACTIONS(110),
    [anon_sym_includes] = ACTIONS(110),
    [anon_sym_meets] = ACTIONS(110),
    [anon_sym_overlaps] = ACTIONS(110),
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_from] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_version] = ACTIONS(110),
    [sym_default_identifier] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_asc] = ACTIONS(110),
    [anon_sym_ascending] = ACTIONS(110),
    [anon_sym_by] = ACTIONS(110),
    [anon_sym_code] = ACTIONS(110),
    [anon_sym_codesystem] = ACTIONS(110),
    [anon_sym_codesystems] = ACTIONS(110),
    [anon_sym_concept] = ACTIONS(110),
    [anon_sym_default] = ACTIONS(110),
    [anon_sym_desc] = ACTIONS(110),
    [anon_sym_descending] = ACTIONS(110),
    [anon_sym_display] = ACTIONS(110),
    [anon_sym_div] = ACTIONS(110),
    [anon_sym_fluent] = ACTIONS(110),
    [anon_sym_mod] = ACTIONS(110),
    [anon_sym_orless] = ACTIONS(112),
    [anon_sym_ormore] = ACTIONS(112),
    [anon_sym_parameter] = ACTIONS(110),
    [anon_sym_predecessor] = ACTIONS(110),
    [anon_sym_private] = ACTIONS(110),
    [anon_sym_public] = ACTIONS(110),
    [anon_sym_starting] = ACTIONS(110),
    [anon_sym_successor] = ACTIONS(110),
    [anon_sym_width] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [anon_sym_library] = ACTIONS(121),
    [anon_sym_using] = ACTIONS(121),
    [anon_sym_called] = ACTIONS(121),
    [anon_sym_include] = ACTIONS(121),
    [anon_sym_valueset] = ACTIONS(121),
    [anon_sym_context] = ACTIONS(121),
    [anon_sym_define] = ACTIONS(121),
    [anon_sym_function] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(123),
    [aux_sym_literal_token1] = ACTIONS(121),
    [anon_sym_null] = ACTIONS(121),
    [anon_sym_not] = ACTIONS(121),
    [anon_sym_cast] = ACTIONS(121),
    [anon_sym_exists] = ACTIONS(121),
    [anon_sym_xor] = ACTIONS(121),
    [anon_sym_implies] = ACTIONS(121),
    [anon_sym_union] = ACTIONS(121),
    [anon_sym_intersect] = ACTIONS(121),
    [anon_sym_except] = ACTIONS(121),
    [anon_sym_years] = ACTIONS(121),
    [anon_sym_months] = ACTIONS(121),
    [anon_sym_weeks] = ACTIONS(121),
    [anon_sym_days] = ACTIONS(121),
    [anon_sym_hours] = ACTIONS(121),
    [anon_sym_minutes] = ACTIONS(121),
    [anon_sym_seconds] = ACTIONS(121),
    [anon_sym_milliseconds] = ACTIONS(121),
    [anon_sym_date] = ACTIONS(121),
    [anon_sym_time] = ACTIONS(121),
    [anon_sym_timezone] = ACTIONS(121),
    [anon_sym_timezoneoffset] = ACTIONS(121),
    [anon_sym_duration] = ACTIONS(121),
    [anon_sym_in] = ACTIONS(121),
    [anon_sym_difference] = ACTIONS(121),
    [anon_sym_contains] = ACTIONS(121),
    [anon_sym_orbefore] = ACTIONS(123),
    [anon_sym_orafter] = ACTIONS(123),
    [anon_sym_starts] = ACTIONS(121),
    [anon_sym_ends] = ACTIONS(121),
    [anon_sym_start] = ACTIONS(121),
    [anon_sym_end] = ACTIONS(121),
    [anon_sym_includes] = ACTIONS(121),
    [anon_sym_meets] = ACTIONS(121),
    [anon_sym_overlaps] = ACTIONS(121),
    [anon_sym_where] = ACTIONS(121),
    [anon_sym_from] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_version] = ACTIONS(121),
    [sym_default_identifier] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_asc] = ACTIONS(121),
    [anon_sym_ascending] = ACTIONS(121),
    [anon_sym_by] = ACTIONS(121),
    [anon_sym_code] = ACTIONS(121),
    [anon_sym_codesystem] = ACTIONS(121),
    [anon_sym_codesystems] = ACTIONS(121),
    [anon_sym_concept] = ACTIONS(121),
    [anon_sym_default] = ACTIONS(121),
    [anon_sym_desc] = ACTIONS(121),
    [anon_sym_descending] = ACTIONS(121),
    [anon_sym_display] = ACTIONS(121),
    [anon_sym_div] = ACTIONS(121),
    [anon_sym_fluent] = ACTIONS(121),
    [anon_sym_mod] = ACTIONS(121),
    [anon_sym_orless] = ACTIONS(123),
    [anon_sym_ormore] = ACTIONS(123),
    [anon_sym_parameter] = ACTIONS(121),
    [anon_sym_predecessor] = ACTIONS(121),
    [anon_sym_private] = ACTIONS(121),
    [anon_sym_public] = ACTIONS(121),
    [anon_sym_starting] = ACTIONS(121),
    [anon_sym_successor] = ACTIONS(121),
    [anon_sym_width] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_type_specifier] = STATE(119),
    [sym_named_type_specifier] = STATE(120),
    [sym_identifier] = STATE(72),
    [sym_quoted_identifier] = STATE(75),
    [sym_referential_identifier] = STATE(80),
    [sym_type_name_identifier] = STATE(80),
    [sym_referential_or_type_name_identifier] = STATE(81),
    [sym_keyword_identifier] = STATE(88),
    [aux_sym_named_type_specifier_repeat1] = STATE(57),
    [anon_sym_library] = ACTIONS(125),
    [anon_sym_using] = ACTIONS(125),
    [anon_sym_called] = ACTIONS(125),
    [anon_sym_include] = ACTIONS(125),
    [anon_sym_valueset] = ACTIONS(125),
    [anon_sym_context] = ACTIONS(125),
    [anon_sym_define] = ACTIONS(125),
    [anon_sym_function] = ACTIONS(125),
    [anon_sym_null] = ACTIONS(127),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
    [anon_sym_xor] = ACTIONS(125),
    [anon_sym_implies] = ACTIONS(125),
    [anon_sym_union] = ACTIONS(125),
    [anon_sym_intersect] = ACTIONS(125),
    [anon_sym_except] = ACTIONS(125),
    [anon_sym_date] = ACTIONS(131),
    [anon_sym_time] = ACTIONS(131),
    [anon_sym_timezone] = ACTIONS(125),
    [anon_sym_timezoneoffset] = ACTIONS(125),
    [anon_sym_contains] = ACTIONS(125),
    [anon_sym_orbefore] = ACTIONS(133),
    [anon_sym_orafter] = ACTIONS(133),
    [anon_sym_starts] = ACTIONS(125),
    [anon_sym_ends] = ACTIONS(125),
    [anon_sym_start] = ACTIONS(125),
    [anon_sym_end] = ACTIONS(125),
    [anon_sym_includes] = ACTIONS(125),
    [anon_sym_meets] = ACTIONS(125),
    [anon_sym_overlaps] = ACTIONS(125),
    [anon_sym_where] = ACTIONS(125),
    [anon_sym_version] = ACTIONS(125),
    [sym_default_identifier] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_Code] = ACTIONS(139),
    [anon_sym_Concept] = ACTIONS(139),
    [anon_sym_asc] = ACTIONS(125),
    [anon_sym_ascending] = ACTIONS(125),
    [anon_sym_by] = ACTIONS(125),
    [anon_sym_code] = ACTIONS(125),
    [anon_sym_codesystem] = ACTIONS(125),
    [anon_sym_codesystems] = ACTIONS(125),
    [anon_sym_concept] = ACTIONS(125),
    [anon_sym_default] = ACTIONS(125),
    [anon_sym_desc] = ACTIONS(125),
    [anon_sym_descending] = ACTIONS(125),
    [anon_sym_display] = ACTIONS(125),
    [anon_sym_div] = ACTIONS(125),
    [anon_sym_fluent] = ACTIONS(125),
    [anon_sym_mod] = ACTIONS(125),
    [anon_sym_orless] = ACTIONS(133),
    [anon_sym_ormore] = ACTIONS(133),
    [anon_sym_parameter] = ACTIONS(125),
    [anon_sym_predecessor] = ACTIONS(125),
    [anon_sym_private] = ACTIONS(125),
    [anon_sym_public] = ACTIONS(125),
    [anon_sym_starting] = ACTIONS(125),
    [anon_sym_successor] = ACTIONS(125),
    [anon_sym_width] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(71),
    [sym_retrieve] = STATE(229),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(141),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [sym_type_specifier] = STATE(92),
    [sym_named_type_specifier] = STATE(120),
    [sym_identifier] = STATE(72),
    [sym_quoted_identifier] = STATE(75),
    [sym_referential_identifier] = STATE(80),
    [sym_type_name_identifier] = STATE(80),
    [sym_referential_or_type_name_identifier] = STATE(81),
    [sym_keyword_identifier] = STATE(88),
    [aux_sym_named_type_specifier_repeat1] = STATE(57),
    [anon_sym_library] = ACTIONS(125),
    [anon_sym_using] = ACTIONS(125),
    [anon_sym_called] = ACTIONS(125),
    [anon_sym_include] = ACTIONS(125),
    [anon_sym_valueset] = ACTIONS(125),
    [anon_sym_context] = ACTIONS(125),
    [anon_sym_define] = ACTIONS(125),
    [anon_sym_function] = ACTIONS(125),
    [anon_sym_xor] = ACTIONS(125),
    [anon_sym_implies] = ACTIONS(125),
    [anon_sym_union] = ACTIONS(125),
    [anon_sym_intersect] = ACTIONS(125),
    [anon_sym_except] = ACTIONS(125),
    [anon_sym_date] = ACTIONS(131),
    [anon_sym_time] = ACTIONS(131),
    [anon_sym_timezone] = ACTIONS(125),
    [anon_sym_timezoneoffset] = ACTIONS(125),
    [anon_sym_contains] = ACTIONS(125),
    [anon_sym_orbefore] = ACTIONS(133),
    [anon_sym_orafter] = ACTIONS(133),
    [anon_sym_starts] = ACTIONS(125),
    [anon_sym_ends] = ACTIONS(125),
    [anon_sym_start] = ACTIONS(125),
    [anon_sym_end] = ACTIONS(125),
    [anon_sym_includes] = ACTIONS(125),
    [anon_sym_meets] = ACTIONS(125),
    [anon_sym_overlaps] = ACTIONS(125),
    [anon_sym_where] = ACTIONS(125),
    [anon_sym_version] = ACTIONS(125),
    [sym_default_identifier] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_Code] = ACTIONS(139),
    [anon_sym_Concept] = ACTIONS(139),
    [anon_sym_asc] = ACTIONS(125),
    [anon_sym_ascending] = ACTIONS(125),
    [anon_sym_by] = ACTIONS(125),
    [anon_sym_code] = ACTIONS(125),
    [anon_sym_codesystem] = ACTIONS(125),
    [anon_sym_codesystems] = ACTIONS(125),
    [anon_sym_concept] = ACTIONS(125),
    [anon_sym_default] = ACTIONS(125),
    [anon_sym_desc] = ACTIONS(125),
    [anon_sym_descending] = ACTIONS(125),
    [anon_sym_display] = ACTIONS(125),
    [anon_sym_div] = ACTIONS(125),
    [anon_sym_fluent] = ACTIONS(125),
    [anon_sym_mod] = ACTIONS(125),
    [anon_sym_orless] = ACTIONS(133),
    [anon_sym_ormore] = ACTIONS(133),
    [anon_sym_parameter] = ACTIONS(125),
    [anon_sym_predecessor] = ACTIONS(125),
    [anon_sym_private] = ACTIONS(125),
    [anon_sym_public] = ACTIONS(125),
    [anon_sym_starting] = ACTIONS(125),
    [anon_sym_successor] = ACTIONS(125),
    [anon_sym_width] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [sym_type_specifier] = STATE(119),
    [sym_named_type_specifier] = STATE(120),
    [sym_identifier] = STATE(72),
    [sym_quoted_identifier] = STATE(75),
    [sym_referential_identifier] = STATE(80),
    [sym_type_name_identifier] = STATE(80),
    [sym_referential_or_type_name_identifier] = STATE(81),
    [sym_keyword_identifier] = STATE(88),
    [aux_sym_named_type_specifier_repeat1] = STATE(57),
    [anon_sym_library] = ACTIONS(125),
    [anon_sym_using] = ACTIONS(125),
    [anon_sym_called] = ACTIONS(125),
    [anon_sym_include] = ACTIONS(125),
    [anon_sym_valueset] = ACTIONS(125),
    [anon_sym_context] = ACTIONS(125),
    [anon_sym_define] = ACTIONS(125),
    [anon_sym_function] = ACTIONS(125),
    [anon_sym_xor] = ACTIONS(125),
    [anon_sym_implies] = ACTIONS(125),
    [anon_sym_union] = ACTIONS(125),
    [anon_sym_intersect] = ACTIONS(125),
    [anon_sym_except] = ACTIONS(125),
    [anon_sym_date] = ACTIONS(131),
    [anon_sym_time] = ACTIONS(131),
    [anon_sym_timezone] = ACTIONS(125),
    [anon_sym_timezoneoffset] = ACTIONS(125),
    [anon_sym_contains] = ACTIONS(125),
    [anon_sym_orbefore] = ACTIONS(133),
    [anon_sym_orafter] = ACTIONS(133),
    [anon_sym_starts] = ACTIONS(125),
    [anon_sym_ends] = ACTIONS(125),
    [anon_sym_start] = ACTIONS(125),
    [anon_sym_end] = ACTIONS(125),
    [anon_sym_includes] = ACTIONS(125),
    [anon_sym_meets] = ACTIONS(125),
    [anon_sym_overlaps] = ACTIONS(125),
    [anon_sym_where] = ACTIONS(125),
    [anon_sym_version] = ACTIONS(125),
    [sym_default_identifier] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_Code] = ACTIONS(139),
    [anon_sym_Concept] = ACTIONS(139),
    [anon_sym_asc] = ACTIONS(125),
    [anon_sym_ascending] = ACTIONS(125),
    [anon_sym_by] = ACTIONS(125),
    [anon_sym_code] = ACTIONS(125),
    [anon_sym_codesystem] = ACTIONS(125),
    [anon_sym_codesystems] = ACTIONS(125),
    [anon_sym_concept] = ACTIONS(125),
    [anon_sym_default] = ACTIONS(125),
    [anon_sym_desc] = ACTIONS(125),
    [anon_sym_descending] = ACTIONS(125),
    [anon_sym_display] = ACTIONS(125),
    [anon_sym_div] = ACTIONS(125),
    [anon_sym_fluent] = ACTIONS(125),
    [anon_sym_mod] = ACTIONS(125),
    [anon_sym_orless] = ACTIONS(133),
    [anon_sym_ormore] = ACTIONS(133),
    [anon_sym_parameter] = ACTIONS(125),
    [anon_sym_predecessor] = ACTIONS(125),
    [anon_sym_private] = ACTIONS(125),
    [anon_sym_public] = ACTIONS(125),
    [anon_sym_starting] = ACTIONS(125),
    [anon_sym_successor] = ACTIONS(125),
    [anon_sym_width] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym_qualified_identifier_expression] = STATE(229),
    [sym_query_source] = STATE(198),
    [sym_aliased_query_source] = STATE(82),
    [sym_retrieve] = STATE(229),
    [sym_identifier] = STATE(188),
    [sym_quoted_identifier] = STATE(223),
    [sym_referential_identifier] = STATE(199),
    [sym_keyword_identifier] = STATE(188),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(62),
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
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(141),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [sym_named_type_specifier] = STATE(236),
    [sym_identifier] = STATE(72),
    [sym_quoted_identifier] = STATE(147),
    [sym_referential_identifier] = STATE(80),
    [sym_type_name_identifier] = STATE(80),
    [sym_referential_or_type_name_identifier] = STATE(81),
    [sym_keyword_identifier] = STATE(188),
    [aux_sym_named_type_specifier_repeat1] = STATE(56),
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
    [anon_sym_date] = ACTIONS(131),
    [anon_sym_time] = ACTIONS(131),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [anon_sym_Code] = ACTIONS(139),
    [anon_sym_Concept] = ACTIONS(139),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_named_type_specifier] = STATE(235),
    [sym_identifier] = STATE(72),
    [sym_quoted_identifier] = STATE(147),
    [sym_referential_identifier] = STATE(80),
    [sym_type_name_identifier] = STATE(80),
    [sym_referential_or_type_name_identifier] = STATE(81),
    [sym_keyword_identifier] = STATE(188),
    [aux_sym_named_type_specifier_repeat1] = STATE(56),
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
    [anon_sym_date] = ACTIONS(131),
    [anon_sym_time] = ACTIONS(131),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [anon_sym_Code] = ACTIONS(139),
    [anon_sym_Concept] = ACTIONS(139),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym_named_type_specifier] = STATE(231),
    [sym_identifier] = STATE(72),
    [sym_quoted_identifier] = STATE(147),
    [sym_referential_identifier] = STATE(80),
    [sym_type_name_identifier] = STATE(80),
    [sym_referential_or_type_name_identifier] = STATE(81),
    [sym_keyword_identifier] = STATE(188),
    [aux_sym_named_type_specifier_repeat1] = STATE(56),
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
    [anon_sym_date] = ACTIONS(131),
    [anon_sym_time] = ACTIONS(131),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [anon_sym_Code] = ACTIONS(139),
    [anon_sym_Concept] = ACTIONS(139),
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
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_default_identifier,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(72), 1,
      sym_identifier,
    STATE(79), 1,
      sym_referential_or_type_name_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(188), 1,
      sym_keyword_identifier,
    ACTIONS(131), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(139), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(80), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
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
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [91] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_default_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(72), 1,
      sym_identifier,
    STATE(75), 1,
      sym_quoted_identifier,
    STATE(79), 1,
      sym_referential_or_type_name_identifier,
    STATE(88), 1,
      sym_keyword_identifier,
    ACTIONS(131), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(139), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(80), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(133), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(125), 46,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
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
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [182] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_default_identifier,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(199), 1,
      sym_referential_identifier,
    STATE(247), 1,
      sym_qualified_identifier_expression,
    STATE(254), 1,
      sym_terminology,
    STATE(188), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
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
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [267] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_default_identifier,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(199), 1,
      sym_referential_identifier,
    STATE(247), 1,
      sym_qualified_identifier_expression,
    STATE(252), 1,
      sym_terminology,
    STATE(188), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
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
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [352] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_default_identifier,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(199), 1,
      sym_referential_identifier,
    STATE(247), 1,
      sym_qualified_identifier_expression,
    STATE(250), 1,
      sym_terminology,
    STATE(188), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
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
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [437] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_default_identifier,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(251), 1,
      sym_referential_identifier,
    STATE(188), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(150), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(147), 48,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
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
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [516] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_default_identifier,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(205), 1,
      sym_referential_identifier,
    STATE(223), 1,
      sym_quoted_identifier,
    STATE(188), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
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
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [595] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_default_identifier,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(245), 1,
      sym_identifier,
    ACTIONS(161), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(159), 50,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
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
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [672] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_default_identifier,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(205), 1,
      sym_referential_identifier,
    STATE(188), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
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
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_DQUOTE,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(169), 51,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
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
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 5,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_DQUOTE,
      anon_sym_orless,
      anon_sym_ormore,
    ACTIONS(173), 49,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
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
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_private,
      anon_sym_public,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 34,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_DOT,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_COMMA,
  [921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 34,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_DOT,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_COMMA,
  [965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(187), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 32,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
  [1013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 32,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
  [1061] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(187), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 32,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
  [1109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(199), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 33,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_RBRACK,
  [1155] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(203), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 32,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
  [1203] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 32,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
  [1251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(212), 34,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_DOT,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_COMMA,
  [1295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(216), 33,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_COMMA,
  [1338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(220), 33,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_RBRACK,
  [1381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(220), 33,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_RBRACK,
  [1424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 33,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_RBRACK,
  [1467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(228), 33,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_RBRACK,
  [1510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 33,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_RBRACK,
  [1553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 33,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_COMMA,
  [1596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_includedin,
      anon_sym_DQUOTE,
    ACTIONS(238), 24,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      sym_default_identifier,
  [1638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_where,
    STATE(106), 1,
      sym_where_clause,
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(240), 30,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [1684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_default_identifier,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_includedin,
    ACTIONS(248), 23,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
  [1730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_includedin,
      anon_sym_DQUOTE,
    ACTIONS(256), 24,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      sym_default_identifier,
  [1772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [1813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [1854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(262), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [1895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(266), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [1936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [1977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2018] = 20,
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
    ACTIONS(304), 1,
      anon_sym_occurs,
    ACTIONS(306), 1,
      anon_sym_same,
    ACTIONS(308), 1,
      anon_sym_includes,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(292), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(302), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(310), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(312), 2,
      anon_sym_meets,
      anon_sym_overlaps,
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
  [2093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(314), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(322), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2216] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_and,
    ACTIONS(298), 1,
      anon_sym_implies,
    STATE(20), 1,
      sym_interval_operator_phrase,
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
    ACTIONS(326), 16,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2312] = 20,
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
    ACTIONS(304), 1,
      anon_sym_occurs,
    ACTIONS(306), 1,
      anon_sym_same,
    ACTIONS(308), 1,
      anon_sym_includes,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(292), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(302), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(310), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(312), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(330), 3,
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
  [2387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2510] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_and,
    ACTIONS(298), 1,
      anon_sym_implies,
    ACTIONS(342), 1,
      anon_sym_is,
    ACTIONS(345), 1,
      anon_sym_as,
    ACTIONS(348), 1,
      anon_sym_properly,
    ACTIONS(351), 1,
      anon_sym_between,
    ACTIONS(357), 1,
      anon_sym_occurs,
    ACTIONS(360), 1,
      anon_sym_same,
    ACTIONS(363), 1,
      anon_sym_includes,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(292), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(354), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(366), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(369), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(340), 3,
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
  [2585] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_and,
    ACTIONS(298), 1,
      anon_sym_implies,
    ACTIONS(374), 1,
      anon_sym_is,
    ACTIONS(377), 1,
      anon_sym_as,
    ACTIONS(380), 1,
      anon_sym_properly,
    ACTIONS(383), 1,
      anon_sym_between,
    ACTIONS(389), 1,
      anon_sym_occurs,
    ACTIONS(392), 1,
      anon_sym_same,
    ACTIONS(395), 1,
      anon_sym_includes,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(292), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(386), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(398), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(401), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(372), 3,
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
  [2660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(404), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(408), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(416), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(422), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(420), 30,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(426), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(424), 30,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(428), 30,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(432), 30,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [2996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(438), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(436), 30,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(442), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(440), 30,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(444), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(450), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 30,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(458), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(456), 30,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(460), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(464), 31,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3332] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_and,
    ACTIONS(298), 1,
      anon_sym_implies,
    ACTIONS(470), 1,
      anon_sym_is,
    ACTIONS(473), 1,
      anon_sym_as,
    ACTIONS(476), 1,
      anon_sym_properly,
    ACTIONS(479), 1,
      anon_sym_between,
    ACTIONS(485), 1,
      anon_sym_occurs,
    ACTIONS(488), 1,
      anon_sym_same,
    ACTIONS(491), 1,
      anon_sym_includes,
    STATE(20), 1,
      sym_interval_operator_phrase,
    ACTIONS(292), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(482), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(494), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(497), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(468), 3,
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
  [3407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 10,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_includedin,
      anon_sym_DQUOTE,
    ACTIONS(256), 22,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      sym_default_identifier,
  [3447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 10,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_includedin,
      anon_sym_DQUOTE,
    ACTIONS(238), 22,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      sym_default_identifier,
  [3487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_default_identifier,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 9,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_includedin,
    ACTIONS(248), 21,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
  [3531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_where,
    STATE(106), 1,
      sym_where_clause,
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(240), 28,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3575] = 20,
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
    ACTIONS(304), 1,
      anon_sym_occurs,
    ACTIONS(306), 1,
      anon_sym_same,
    ACTIONS(308), 1,
      anon_sym_includes,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 1,
      anon_sym_and,
    ACTIONS(514), 1,
      anon_sym_implies,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(302), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(310), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(312), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(508), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(510), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(506), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(516), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(450), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 28,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3689] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      anon_sym_is,
    ACTIONS(377), 1,
      anon_sym_as,
    ACTIONS(380), 1,
      anon_sym_properly,
    ACTIONS(383), 1,
      anon_sym_between,
    ACTIONS(389), 1,
      anon_sym_occurs,
    ACTIONS(392), 1,
      anon_sym_same,
    ACTIONS(395), 1,
      anon_sym_includes,
    ACTIONS(504), 1,
      anon_sym_and,
    ACTIONS(514), 1,
      anon_sym_implies,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(386), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(398), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(401), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(508), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(510), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(506), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(516), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(422), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(420), 28,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(426), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(424), 28,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(428), 28,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3885] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    ACTIONS(470), 1,
      anon_sym_is,
    ACTIONS(473), 1,
      anon_sym_as,
    ACTIONS(476), 1,
      anon_sym_properly,
    ACTIONS(479), 1,
      anon_sym_between,
    ACTIONS(485), 1,
      anon_sym_occurs,
    ACTIONS(488), 1,
      anon_sym_same,
    ACTIONS(491), 1,
      anon_sym_includes,
    ACTIONS(504), 1,
      anon_sym_and,
    ACTIONS(514), 1,
      anon_sym_implies,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(482), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(494), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(497), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(508), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(510), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(506), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(516), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(458), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(456), 28,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [3999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(432), 28,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [4040] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_and,
    ACTIONS(514), 1,
      anon_sym_implies,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(508), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(510), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(506), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(516), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(326), 14,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [4093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(438), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(436), 28,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [4134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(442), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(440), 28,
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
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
  [4175] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(342), 1,
      anon_sym_is,
    ACTIONS(345), 1,
      anon_sym_as,
    ACTIONS(348), 1,
      anon_sym_properly,
    ACTIONS(351), 1,
      anon_sym_between,
    ACTIONS(357), 1,
      anon_sym_occurs,
    ACTIONS(360), 1,
      anon_sym_same,
    ACTIONS(363), 1,
      anon_sym_includes,
    ACTIONS(504), 1,
      anon_sym_and,
    ACTIONS(514), 1,
      anon_sym_implies,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(354), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(366), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(369), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(508), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(510), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(506), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(516), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [4248] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_is,
    ACTIONS(284), 1,
      anon_sym_properly,
    ACTIONS(286), 1,
      anon_sym_between,
    ACTIONS(304), 1,
      anon_sym_occurs,
    ACTIONS(306), 1,
      anon_sym_same,
    ACTIONS(308), 1,
      anon_sym_includes,
    ACTIONS(504), 1,
      anon_sym_and,
    ACTIONS(514), 1,
      anon_sym_implies,
    ACTIONS(518), 1,
      anon_sym_as,
    STATE(9), 1,
      sym_interval_operator_phrase,
    ACTIONS(302), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(310), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(312), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(508), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(510), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(512), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(506), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(516), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [4318] = 11,
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
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    STATE(148), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(161), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(185), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(225), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [4358] = 11,
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
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    STATE(148), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(162), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(185), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(225), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [4398] = 11,
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
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    STATE(141), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(161), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(185), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(225), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [4438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_as,
    STATE(41), 1,
      sym_relative_qualifier,
    STATE(211), 1,
      sym_date_time_precision,
    ACTIONS(528), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
    ACTIONS(526), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
  [4465] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_as,
    STATE(39), 1,
      sym_relative_qualifier,
    STATE(196), 1,
      sym_date_time_precision,
    ACTIONS(528), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
    ACTIONS(526), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
  [4492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 12,
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
      anon_sym_RBRACK,
      anon_sym_version,
  [4510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 12,
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
      anon_sym_RBRACK,
      anon_sym_version,
  [4528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 12,
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
      anon_sym_RBRACK,
      anon_sym_version,
  [4546] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_using,
    ACTIONS(537), 1,
      anon_sym_include,
    ACTIONS(540), 1,
      anon_sym_valueset,
    STATE(148), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    ACTIONS(532), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    STATE(185), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
  [4573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DOT,
    ACTIONS(543), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [4591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DOT,
    ACTIONS(547), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [4609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_and,
      anon_sym_version,
  [4624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(253), 1,
      sym_plural_date_time_precision,
    ACTIONS(549), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [4641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(243), 1,
      sym_plural_date_time_precision,
    ACTIONS(549), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [4658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_and,
      anon_sym_version,
  [4673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_called,
    ACTIONS(555), 1,
      anon_sym_version,
    STATE(167), 1,
      sym_version_specifier,
    ACTIONS(551), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [4694] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_version,
    ACTIONS(559), 1,
      anon_sym_called,
    STATE(165), 1,
      sym_version_specifier,
    ACTIONS(557), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [4715] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    STATE(158), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(225), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [4737] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
    ACTIONS(563), 1,
      anon_sym_context,
    ACTIONS(566), 1,
      anon_sym_define,
    STATE(158), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(225), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [4759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_version,
    STATE(179), 1,
      sym_version_specifier,
    ACTIONS(569), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [4777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_version,
    STATE(181), 1,
      sym_version_specifier,
    ACTIONS(571), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [4795] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    STATE(158), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(225), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [4817] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
    STATE(158), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(225), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [4839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 7,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [4852] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_literal_token1,
    ACTIONS(579), 1,
      anon_sym_null,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      sym_expression_term,
    STATE(101), 1,
      sym_term,
    STATE(102), 1,
      sym_literal,
    STATE(108), 1,
      sym_string,
  [4877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_called,
    ACTIONS(583), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [4892] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_literal_token1,
    ACTIONS(579), 1,
      anon_sym_null,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      sym_expression_term,
    STATE(101), 1,
      sym_term,
    STATE(102), 1,
      sym_literal,
    STATE(108), 1,
      sym_string,
  [4917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_called,
    ACTIONS(587), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [4932] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_literal_token1,
    ACTIONS(579), 1,
      anon_sym_null,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym_term,
    STATE(102), 1,
      sym_literal,
    STATE(108), 1,
      sym_string,
    STATE(238), 1,
      sym_expression_term,
  [4957] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_literal_token1,
    ACTIONS(579), 1,
      anon_sym_null,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym_term,
    STATE(102), 1,
      sym_literal,
    STATE(108), 1,
      sym_string,
    STATE(262), 1,
      sym_expression_term,
  [4982] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_literal_token1,
    ACTIONS(579), 1,
      anon_sym_null,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym_term,
    STATE(102), 1,
      sym_literal,
    STATE(108), 1,
      sym_string,
    STATE(257), 1,
      sym_expression_term,
  [5007] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_literal_token1,
    ACTIONS(579), 1,
      anon_sym_null,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      sym_expression_term,
    STATE(101), 1,
      sym_term,
    STATE(102), 1,
      sym_literal,
    STATE(108), 1,
      sym_string,
  [5032] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_literal_token1,
    ACTIONS(579), 1,
      anon_sym_null,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym_term,
    STATE(102), 1,
      sym_literal,
    STATE(108), 1,
      sym_string,
    STATE(115), 1,
      sym_expression_term,
  [5057] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_literal_token1,
    ACTIONS(579), 1,
      anon_sym_null,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym_term,
    STATE(102), 1,
      sym_literal,
    STATE(108), 1,
      sym_string,
    STATE(239), 1,
      sym_expression_term,
  [5082] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_literal_token1,
    ACTIONS(579), 1,
      anon_sym_null,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym_term,
    STATE(102), 1,
      sym_literal,
    STATE(108), 1,
      sym_string,
    STATE(249), 1,
      sym_expression_term,
  [5107] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_literal_token1,
    ACTIONS(579), 1,
      anon_sym_null,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      sym_expression_term,
    STATE(101), 1,
      sym_term,
    STATE(102), 1,
      sym_literal,
    STATE(108), 1,
      sym_string,
  [5132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(149), 1,
      sym_identifier,
    STATE(156), 1,
      sym_qualified_identifier,
    STATE(191), 1,
      aux_sym_named_type_specifier_repeat1,
  [5154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [5166] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(149), 1,
      sym_identifier,
    STATE(191), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(242), 1,
      sym_qualified_identifier,
  [5188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [5200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [5212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [5224] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(149), 1,
      sym_identifier,
    STATE(155), 1,
      sym_qualified_identifier,
    STATE(191), 1,
      aux_sym_named_type_specifier_repeat1,
  [5246] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(149), 1,
      sym_identifier,
    STATE(159), 1,
      sym_qualified_identifier,
    STATE(191), 1,
      aux_sym_named_type_specifier_repeat1,
  [5268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [5280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [5292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [5304] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(609), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(187), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(241), 1,
      sym_identifier,
  [5323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5345] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_default_identifier,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_function,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(248), 1,
      sym_identifier,
  [5364] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(150), 1,
      sym_identifier,
    STATE(187), 1,
      aux_sym_named_type_specifier_repeat1,
  [5383] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(177), 1,
      sym_identifier,
  [5399] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(222), 1,
      sym_identifier,
  [5415] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(218), 1,
      sym_identifier,
  [5431] = 4,
    ACTIONS(614), 1,
      anon_sym_DQUOTE,
    ACTIONS(618), 1,
      sym_comment,
    STATE(212), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(616), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [5445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_as,
    STATE(44), 1,
      sym_relative_qualifier,
    ACTIONS(528), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
  [5459] = 4,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(624), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [5473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym_default_identifier,
    STATE(75), 1,
      sym_quoted_identifier,
    STATE(76), 1,
      sym_identifier,
  [5489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_DOT,
    ACTIONS(630), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5501] = 4,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    STATE(206), 1,
      aux_sym_string_repeat1,
    ACTIONS(634), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [5515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 4,
      anon_sym_as,
      anon_sym_of,
      anon_sym_orbefore,
      anon_sym_orafter,
  [5525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(180), 1,
      sym_identifier,
  [5541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_between,
    ACTIONS(640), 1,
      anon_sym_includes,
    ACTIONS(87), 2,
      anon_sym_during,
      anon_sym_includedin,
  [5555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_properly,
    ACTIONS(644), 1,
      anon_sym_same,
    ACTIONS(87), 2,
      anon_sym_during,
      anon_sym_includedin,
  [5569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_DOT,
    ACTIONS(646), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5581] = 4,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_SQUOTE,
    STATE(206), 1,
      aux_sym_string_repeat1,
    ACTIONS(650), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [5595] = 4,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SQUOTE,
    STATE(200), 1,
      aux_sym_string_repeat1,
    ACTIONS(655), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [5609] = 4,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    STATE(215), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(659), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [5623] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(184), 1,
      sym_identifier,
  [5639] = 4,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_SQUOTE,
    STATE(206), 1,
      aux_sym_string_repeat1,
    ACTIONS(634), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [5653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_as,
    STATE(39), 1,
      sym_relative_qualifier,
    ACTIONS(528), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
  [5667] = 4,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(665), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [5681] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(186), 1,
      sym_identifier,
  [5697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym_default_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
    STATE(255), 1,
      sym_identifier,
  [5713] = 4,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(616), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [5727] = 4,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_SQUOTE,
    STATE(210), 1,
      aux_sym_string_repeat1,
    ACTIONS(672), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [5741] = 4,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(676), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [5755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_DOT,
    ACTIONS(678), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [5767] = 4,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(616), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [5781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [5790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [5799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [5808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [5835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
    STATE(163), 1,
      sym_string,
  [5878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COLON,
    ACTIONS(694), 1,
      anon_sym_RBRACK,
  [5888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_during,
      anon_sym_includedin,
  [5896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
    STATE(160), 1,
      sym_string,
  [5914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_COLON,
    ACTIONS(700), 1,
      anon_sym_RBRACK,
  [5924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_COLON,
    ACTIONS(704), 1,
      anon_sym_RBRACK,
  [5934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [5942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_and,
  [5949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_and,
  [5956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
  [5963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DOT,
  [5970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_COLON,
  [5977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_between,
  [5984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_of,
  [5991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DOT,
  [5998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_COLON,
  [6005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RBRACK,
  [6012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_COLON,
  [6019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_and,
  [6026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACK,
  [6033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_DOT,
  [6040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RBRACK,
  [6047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_between,
  [6054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
  [6061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
  [6068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_between,
  [6075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_and,
  [6082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_in,
  [6089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_in,
  [6096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_between,
  [6103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
  [6110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_and,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(56)] = 0,
  [SMALL_STATE(57)] = 91,
  [SMALL_STATE(58)] = 182,
  [SMALL_STATE(59)] = 267,
  [SMALL_STATE(60)] = 352,
  [SMALL_STATE(61)] = 437,
  [SMALL_STATE(62)] = 516,
  [SMALL_STATE(63)] = 595,
  [SMALL_STATE(64)] = 672,
  [SMALL_STATE(65)] = 751,
  [SMALL_STATE(66)] = 815,
  [SMALL_STATE(67)] = 877,
  [SMALL_STATE(68)] = 921,
  [SMALL_STATE(69)] = 965,
  [SMALL_STATE(70)] = 1013,
  [SMALL_STATE(71)] = 1061,
  [SMALL_STATE(72)] = 1109,
  [SMALL_STATE(73)] = 1155,
  [SMALL_STATE(74)] = 1203,
  [SMALL_STATE(75)] = 1251,
  [SMALL_STATE(76)] = 1295,
  [SMALL_STATE(77)] = 1338,
  [SMALL_STATE(78)] = 1381,
  [SMALL_STATE(79)] = 1424,
  [SMALL_STATE(80)] = 1467,
  [SMALL_STATE(81)] = 1510,
  [SMALL_STATE(82)] = 1553,
  [SMALL_STATE(83)] = 1596,
  [SMALL_STATE(84)] = 1638,
  [SMALL_STATE(85)] = 1684,
  [SMALL_STATE(86)] = 1730,
  [SMALL_STATE(87)] = 1772,
  [SMALL_STATE(88)] = 1813,
  [SMALL_STATE(89)] = 1854,
  [SMALL_STATE(90)] = 1895,
  [SMALL_STATE(91)] = 1936,
  [SMALL_STATE(92)] = 1977,
  [SMALL_STATE(93)] = 2018,
  [SMALL_STATE(94)] = 2093,
  [SMALL_STATE(95)] = 2134,
  [SMALL_STATE(96)] = 2175,
  [SMALL_STATE(97)] = 2216,
  [SMALL_STATE(98)] = 2271,
  [SMALL_STATE(99)] = 2312,
  [SMALL_STATE(100)] = 2387,
  [SMALL_STATE(101)] = 2428,
  [SMALL_STATE(102)] = 2469,
  [SMALL_STATE(103)] = 2510,
  [SMALL_STATE(104)] = 2585,
  [SMALL_STATE(105)] = 2660,
  [SMALL_STATE(106)] = 2701,
  [SMALL_STATE(107)] = 2742,
  [SMALL_STATE(108)] = 2783,
  [SMALL_STATE(109)] = 2824,
  [SMALL_STATE(110)] = 2867,
  [SMALL_STATE(111)] = 2910,
  [SMALL_STATE(112)] = 2953,
  [SMALL_STATE(113)] = 2996,
  [SMALL_STATE(114)] = 3039,
  [SMALL_STATE(115)] = 3082,
  [SMALL_STATE(116)] = 3123,
  [SMALL_STATE(117)] = 3166,
  [SMALL_STATE(118)] = 3207,
  [SMALL_STATE(119)] = 3250,
  [SMALL_STATE(120)] = 3291,
  [SMALL_STATE(121)] = 3332,
  [SMALL_STATE(122)] = 3407,
  [SMALL_STATE(123)] = 3447,
  [SMALL_STATE(124)] = 3487,
  [SMALL_STATE(125)] = 3531,
  [SMALL_STATE(126)] = 3575,
  [SMALL_STATE(127)] = 3648,
  [SMALL_STATE(128)] = 3689,
  [SMALL_STATE(129)] = 3762,
  [SMALL_STATE(130)] = 3803,
  [SMALL_STATE(131)] = 3844,
  [SMALL_STATE(132)] = 3885,
  [SMALL_STATE(133)] = 3958,
  [SMALL_STATE(134)] = 3999,
  [SMALL_STATE(135)] = 4040,
  [SMALL_STATE(136)] = 4093,
  [SMALL_STATE(137)] = 4134,
  [SMALL_STATE(138)] = 4175,
  [SMALL_STATE(139)] = 4248,
  [SMALL_STATE(140)] = 4318,
  [SMALL_STATE(141)] = 4358,
  [SMALL_STATE(142)] = 4398,
  [SMALL_STATE(143)] = 4438,
  [SMALL_STATE(144)] = 4465,
  [SMALL_STATE(145)] = 4492,
  [SMALL_STATE(146)] = 4510,
  [SMALL_STATE(147)] = 4528,
  [SMALL_STATE(148)] = 4546,
  [SMALL_STATE(149)] = 4573,
  [SMALL_STATE(150)] = 4591,
  [SMALL_STATE(151)] = 4609,
  [SMALL_STATE(152)] = 4624,
  [SMALL_STATE(153)] = 4641,
  [SMALL_STATE(154)] = 4658,
  [SMALL_STATE(155)] = 4673,
  [SMALL_STATE(156)] = 4694,
  [SMALL_STATE(157)] = 4715,
  [SMALL_STATE(158)] = 4737,
  [SMALL_STATE(159)] = 4759,
  [SMALL_STATE(160)] = 4777,
  [SMALL_STATE(161)] = 4795,
  [SMALL_STATE(162)] = 4817,
  [SMALL_STATE(163)] = 4839,
  [SMALL_STATE(164)] = 4852,
  [SMALL_STATE(165)] = 4877,
  [SMALL_STATE(166)] = 4892,
  [SMALL_STATE(167)] = 4917,
  [SMALL_STATE(168)] = 4932,
  [SMALL_STATE(169)] = 4957,
  [SMALL_STATE(170)] = 4982,
  [SMALL_STATE(171)] = 5007,
  [SMALL_STATE(172)] = 5032,
  [SMALL_STATE(173)] = 5057,
  [SMALL_STATE(174)] = 5082,
  [SMALL_STATE(175)] = 5107,
  [SMALL_STATE(176)] = 5132,
  [SMALL_STATE(177)] = 5154,
  [SMALL_STATE(178)] = 5166,
  [SMALL_STATE(179)] = 5188,
  [SMALL_STATE(180)] = 5200,
  [SMALL_STATE(181)] = 5212,
  [SMALL_STATE(182)] = 5224,
  [SMALL_STATE(183)] = 5246,
  [SMALL_STATE(184)] = 5268,
  [SMALL_STATE(185)] = 5280,
  [SMALL_STATE(186)] = 5292,
  [SMALL_STATE(187)] = 5304,
  [SMALL_STATE(188)] = 5323,
  [SMALL_STATE(189)] = 5334,
  [SMALL_STATE(190)] = 5345,
  [SMALL_STATE(191)] = 5364,
  [SMALL_STATE(192)] = 5383,
  [SMALL_STATE(193)] = 5399,
  [SMALL_STATE(194)] = 5415,
  [SMALL_STATE(195)] = 5431,
  [SMALL_STATE(196)] = 5445,
  [SMALL_STATE(197)] = 5459,
  [SMALL_STATE(198)] = 5473,
  [SMALL_STATE(199)] = 5489,
  [SMALL_STATE(200)] = 5501,
  [SMALL_STATE(201)] = 5515,
  [SMALL_STATE(202)] = 5525,
  [SMALL_STATE(203)] = 5541,
  [SMALL_STATE(204)] = 5555,
  [SMALL_STATE(205)] = 5569,
  [SMALL_STATE(206)] = 5581,
  [SMALL_STATE(207)] = 5595,
  [SMALL_STATE(208)] = 5609,
  [SMALL_STATE(209)] = 5623,
  [SMALL_STATE(210)] = 5639,
  [SMALL_STATE(211)] = 5653,
  [SMALL_STATE(212)] = 5667,
  [SMALL_STATE(213)] = 5681,
  [SMALL_STATE(214)] = 5697,
  [SMALL_STATE(215)] = 5713,
  [SMALL_STATE(216)] = 5727,
  [SMALL_STATE(217)] = 5741,
  [SMALL_STATE(218)] = 5755,
  [SMALL_STATE(219)] = 5767,
  [SMALL_STATE(220)] = 5781,
  [SMALL_STATE(221)] = 5790,
  [SMALL_STATE(222)] = 5799,
  [SMALL_STATE(223)] = 5808,
  [SMALL_STATE(224)] = 5817,
  [SMALL_STATE(225)] = 5826,
  [SMALL_STATE(226)] = 5835,
  [SMALL_STATE(227)] = 5844,
  [SMALL_STATE(228)] = 5852,
  [SMALL_STATE(229)] = 5860,
  [SMALL_STATE(230)] = 5868,
  [SMALL_STATE(231)] = 5878,
  [SMALL_STATE(232)] = 5888,
  [SMALL_STATE(233)] = 5896,
  [SMALL_STATE(234)] = 5904,
  [SMALL_STATE(235)] = 5914,
  [SMALL_STATE(236)] = 5924,
  [SMALL_STATE(237)] = 5934,
  [SMALL_STATE(238)] = 5942,
  [SMALL_STATE(239)] = 5949,
  [SMALL_STATE(240)] = 5956,
  [SMALL_STATE(241)] = 5963,
  [SMALL_STATE(242)] = 5970,
  [SMALL_STATE(243)] = 5977,
  [SMALL_STATE(244)] = 5984,
  [SMALL_STATE(245)] = 5991,
  [SMALL_STATE(246)] = 5998,
  [SMALL_STATE(247)] = 6005,
  [SMALL_STATE(248)] = 6012,
  [SMALL_STATE(249)] = 6019,
  [SMALL_STATE(250)] = 6026,
  [SMALL_STATE(251)] = 6033,
  [SMALL_STATE(252)] = 6040,
  [SMALL_STATE(253)] = 6047,
  [SMALL_STATE(254)] = 6054,
  [SMALL_STATE(255)] = 6061,
  [SMALL_STATE(256)] = 6068,
  [SMALL_STATE(257)] = 6075,
  [SMALL_STATE(258)] = 6082,
  [SMALL_STATE(259)] = 6089,
  [SMALL_STATE(260)] = 6096,
  [SMALL_STATE(261)] = 6103,
  [SMALL_STATE(262)] = 6110,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_identifier, 1), SHIFT(223),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_identifier, 1), SHIFT(217),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 3),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 1), SHIFT(42),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 2), SHIFT(40),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 3), SHIFT(46),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 4),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 4), SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_time_precision_specifier, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision_specifier, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative_qualifier, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_qualifier, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(189),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(189),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(147),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(208),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(147),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(208),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 9),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 9),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_identifier, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_identifier, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2), SHIFT_REPEAT(52),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliased_query_source, 2, .production_id = 8),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aliased_query_source, 2, .production_id = 8),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_identifier, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name_identifier, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 5),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 5),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 6),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 6),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 10),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 5),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_difference_between_expression, 7),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_difference_between_expression, 7),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_identifier, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_definition, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_term, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_term, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 3),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(48),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(51),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(203),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(170),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(32),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(204),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(143),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(35),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(38),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(33),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timing_expression, 3),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(48),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(51),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(203),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(170),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(32),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(204),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(143),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(35),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(38),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(33),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 6),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 6),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_fix_set_expression, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_fix_set_expression, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implies_expression, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implies_expression, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_expression, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inequality_expression, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inequality_expression, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_expression, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_expression, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expression, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 7),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 7),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_expression, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_existence_expression, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_existence_expression, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_specifier, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 2),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(48),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(51),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(203),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(170),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(32),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(204),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(143),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(35),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(38),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(33),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(176),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(182),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(178),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(194),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(190),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2, .production_id = 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 7),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 5, .production_id = 7),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 5),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 4, .production_id = 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 4, .production_id = 3),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(147),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 1),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 2),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(206),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(212),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, .production_id = 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [712] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminology, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plural_date_time_precision, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
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
