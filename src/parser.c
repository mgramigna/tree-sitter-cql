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
#define STATE_COUNT 441
#define LARGE_STATE_COUNT 84
#define SYMBOL_COUNT 204
#define ALIAS_COUNT 16
#define TOKEN_COUNT 127
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 23

enum {
  anon_sym_library = 1,
  anon_sym_using = 2,
  anon_sym_called = 3,
  anon_sym_include = 4,
  anon_sym_valueset = 5,
  anon_sym_COLON = 6,
  anon_sym_codesystems = 7,
  anon_sym_LBRACE = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACE = 10,
  anon_sym_codesystem = 11,
  anon_sym_code = 12,
  anon_sym_from = 13,
  anon_sym_concept = 14,
  anon_sym_parameter = 15,
  anon_sym_default = 16,
  anon_sym_public = 17,
  anon_sym_private = 18,
  anon_sym_context = 19,
  anon_sym_DOT = 20,
  anon_sym_define = 21,
  anon_sym_function = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_external = 25,
  aux_sym_literal_token1 = 26,
  anon_sym_null = 27,
  anon_sym_is = 28,
  anon_sym_not = 29,
  anon_sym_true = 30,
  anon_sym_false = 31,
  anon_sym_as = 32,
  anon_sym_cast = 33,
  anon_sym_exists = 34,
  anon_sym_properly = 35,
  anon_sym_between = 36,
  anon_sym_and = 37,
  anon_sym_EQ = 38,
  anon_sym_BANG_EQ = 39,
  anon_sym_TILDE = 40,
  anon_sym_BANG_TILDE = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_LT = 43,
  anon_sym_GT = 44,
  anon_sym_GT_EQ = 45,
  anon_sym_or = 46,
  anon_sym_xor = 47,
  anon_sym_implies = 48,
  anon_sym_PIPE = 49,
  anon_sym_union = 50,
  anon_sym_intersect = 51,
  anon_sym_except = 52,
  anon_sym_year = 53,
  anon_sym_month = 54,
  anon_sym_week = 55,
  anon_sym_day = 56,
  anon_sym_hour = 57,
  anon_sym_minute = 58,
  anon_sym_second = 59,
  anon_sym_millisecond = 60,
  anon_sym_years = 61,
  anon_sym_months = 62,
  anon_sym_weeks = 63,
  anon_sym_days = 64,
  anon_sym_hours = 65,
  anon_sym_minutes = 66,
  anon_sym_seconds = 67,
  anon_sym_milliseconds = 68,
  anon_sym_date = 69,
  anon_sym_time = 70,
  anon_sym_timezone = 71,
  anon_sym_timezoneoffset = 72,
  anon_sym_duration = 73,
  anon_sym_in = 74,
  anon_sym_difference = 75,
  anon_sym_of = 76,
  anon_sym_contains = 77,
  anon_sym_orbefore = 78,
  anon_sym_orafter = 79,
  anon_sym_ormore = 80,
  anon_sym_orless = 81,
  anon_sym_lessthan = 82,
  anon_sym_morethan = 83,
  anon_sym_onor = 84,
  anon_sym_before = 85,
  anon_sym_after = 86,
  anon_sym_oron = 87,
  anon_sym_starts = 88,
  anon_sym_ends = 89,
  anon_sym_occurs = 90,
  anon_sym_same = 91,
  anon_sym_start = 92,
  anon_sym_end = 93,
  anon_sym_includes = 94,
  anon_sym_during = 95,
  anon_sym_includedin = 96,
  anon_sym_meets = 97,
  anon_sym_overlaps = 98,
  anon_sym_within = 99,
  anon_sym_where = 100,
  anon_sym_LBRACK = 101,
  anon_sym_RBRACK = 102,
  anon_sym_version = 103,
  sym_default_identifier = 104,
  anon_sym_DQUOTE = 105,
  anon_sym_Code = 106,
  anon_sym_Concept = 107,
  anon_sym_asc = 108,
  anon_sym_ascending = 109,
  anon_sym_by = 110,
  anon_sym_desc = 111,
  anon_sym_descending = 112,
  anon_sym_display = 113,
  anon_sym_div = 114,
  anon_sym_fluent = 115,
  anon_sym_mod = 116,
  anon_sym_predecessor = 117,
  anon_sym_starting = 118,
  anon_sym_successor = 119,
  anon_sym_width = 120,
  anon_sym_SQUOTE = 121,
  sym_single_quote_string_fragment = 122,
  sym_double_quote_string_fragment = 123,
  sym_escape_sequence = 124,
  sym_number = 125,
  sym_comment = 126,
  sym_cql_library = 127,
  sym_definition = 128,
  sym_library_definition = 129,
  sym_using_definition = 130,
  sym_include_definition = 131,
  sym_valueset_definition = 132,
  sym_codesystems = 133,
  sym_codesystem_definition = 134,
  sym_code_definition = 135,
  sym_concept_definition = 136,
  sym_parameter_definition = 137,
  sym_access_modifier = 138,
  sym_statement = 139,
  sym_context_definition = 140,
  sym_function_definition = 141,
  sym_expression_definition = 142,
  sym_expression = 143,
  sym_expression_term = 144,
  sym_term = 145,
  sym_quantity = 146,
  sym_literal = 147,
  sym_qualified_identifier_expression = 148,
  sym_boolean_expression = 149,
  sym_type_expression = 150,
  sym_cast_expression = 151,
  sym_not_expression = 152,
  sym_existence_expression = 153,
  sym_between_expression = 154,
  sym_equality_expression = 155,
  sym_inequality_expression = 156,
  sym_and_expression = 157,
  sym_or_expression = 158,
  sym_implies_expression = 159,
  sym_in_fix_set_expression = 160,
  sym_date_time_precision = 161,
  sym_plural_date_time_precision = 162,
  sym_duration_between_expression = 163,
  sym_difference_between_expression = 164,
  sym_date_time_precision_specifier = 165,
  sym_membership_expression = 166,
  sym_relative_qualifier = 167,
  sym_offset_relative_qualifier = 168,
  sym_exclusive_relative_qualifier = 169,
  sym_quantity_offset = 170,
  sym_temporal_relationship = 171,
  sym_interval_operator_phrase = 172,
  sym_timing_expression = 173,
  sym_query = 174,
  sym_where_clause = 175,
  sym_query_source = 176,
  sym_aliased_query_source = 177,
  sym_query_source_clause = 178,
  sym_retrieve = 179,
  sym_terminology = 180,
  sym_type_specifier = 181,
  sym_named_type_specifier = 182,
  sym_version_specifier = 183,
  sym_identifier = 184,
  sym_code_or_codesystem_identifier = 185,
  sym_qualified_identifier = 186,
  sym_quoted_identifier = 187,
  sym_referential_identifier = 188,
  sym_type_name_identifier = 189,
  sym_referential_or_type_name_identifier = 190,
  sym_keyword_identifier = 191,
  sym_string = 192,
  sym_unit = 193,
  sym_display_clause = 194,
  aux_sym_cql_library_repeat1 = 195,
  aux_sym_cql_library_repeat2 = 196,
  aux_sym_codesystems_repeat1 = 197,
  aux_sym_concept_definition_repeat1 = 198,
  aux_sym_qualified_identifier_expression_repeat1 = 199,
  aux_sym_query_source_clause_repeat1 = 200,
  aux_sym_named_type_specifier_repeat1 = 201,
  aux_sym_quoted_identifier_repeat1 = 202,
  aux_sym_string_repeat1 = 203,
  alias_sym_code_id = 204,
  alias_sym_codesystem_id = 205,
  alias_sym_codesystem_identifier = 206,
  alias_sym_function_body = 207,
  alias_sym_library_identifier = 208,
  alias_sym_local_identifier = 209,
  alias_sym_model_identifier = 210,
  alias_sym_null_literal = 211,
  alias_sym_number_literal = 212,
  alias_sym_qualifier = 213,
  alias_sym_qualifier_expression = 214,
  alias_sym_quantity_literal = 215,
  alias_sym_query_alias = 216,
  alias_sym_string_literal = 217,
  alias_sym_valueset_id = 218,
  alias_sym_version = 219,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_library] = "library",
  [anon_sym_using] = "using",
  [anon_sym_called] = "called",
  [anon_sym_include] = "include",
  [anon_sym_valueset] = "valueset",
  [anon_sym_COLON] = ":",
  [anon_sym_codesystems] = "codesystems",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_codesystem] = "codesystem",
  [anon_sym_code] = "code",
  [anon_sym_from] = "from",
  [anon_sym_concept] = "concept",
  [anon_sym_parameter] = "parameter",
  [anon_sym_default] = "default",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
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
  [anon_sym_ormore] = "or more",
  [anon_sym_orless] = "or less",
  [anon_sym_lessthan] = "less than",
  [anon_sym_morethan] = "more than",
  [anon_sym_onor] = "on or",
  [anon_sym_before] = "before",
  [anon_sym_after] = "after",
  [anon_sym_oron] = "or on",
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
  [anon_sym_overlaps] = "overlaps",
  [anon_sym_within] = "within",
  [anon_sym_where] = "where",
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
  [anon_sym_desc] = "desc",
  [anon_sym_descending] = "descending",
  [anon_sym_display] = "display",
  [anon_sym_div] = "div",
  [anon_sym_fluent] = "fluent",
  [anon_sym_mod] = "mod",
  [anon_sym_predecessor] = "predecessor",
  [anon_sym_starting] = "starting",
  [anon_sym_successor] = "successor",
  [anon_sym_width] = "width",
  [anon_sym_SQUOTE] = "'",
  [sym_single_quote_string_fragment] = "single_quote_string_fragment",
  [sym_double_quote_string_fragment] = "double_quote_string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_cql_library] = "cql_library",
  [sym_definition] = "definition",
  [sym_library_definition] = "library_definition",
  [sym_using_definition] = "using_definition",
  [sym_include_definition] = "include_definition",
  [sym_valueset_definition] = "valueset_definition",
  [sym_codesystems] = "codesystems",
  [sym_codesystem_definition] = "codesystem_definition",
  [sym_code_definition] = "code_definition",
  [sym_concept_definition] = "concept_definition",
  [sym_parameter_definition] = "parameter_definition",
  [sym_access_modifier] = "access_modifier",
  [sym_statement] = "statement",
  [sym_context_definition] = "context_definition",
  [sym_function_definition] = "function_definition",
  [sym_expression_definition] = "expression_definition",
  [sym_expression] = "expression",
  [sym_expression_term] = "expression_term",
  [sym_term] = "term",
  [sym_quantity] = "quantity",
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
  [sym_offset_relative_qualifier] = "offset_relative_qualifier",
  [sym_exclusive_relative_qualifier] = "exclusive_relative_qualifier",
  [sym_quantity_offset] = "quantity_offset",
  [sym_temporal_relationship] = "temporal_relationship",
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
  [sym_code_or_codesystem_identifier] = "code_identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_quoted_identifier] = "quoted_identifier",
  [sym_referential_identifier] = "referential_identifier",
  [sym_type_name_identifier] = "type_name_identifier",
  [sym_referential_or_type_name_identifier] = "referential_or_type_name_identifier",
  [sym_keyword_identifier] = "keyword_identifier",
  [sym_string] = "string",
  [sym_unit] = "unit",
  [sym_display_clause] = "display_clause",
  [aux_sym_cql_library_repeat1] = "cql_library_repeat1",
  [aux_sym_cql_library_repeat2] = "cql_library_repeat2",
  [aux_sym_codesystems_repeat1] = "codesystems_repeat1",
  [aux_sym_concept_definition_repeat1] = "concept_definition_repeat1",
  [aux_sym_qualified_identifier_expression_repeat1] = "qualified_identifier_expression_repeat1",
  [aux_sym_query_source_clause_repeat1] = "query_source_clause_repeat1",
  [aux_sym_named_type_specifier_repeat1] = "named_type_specifier_repeat1",
  [aux_sym_quoted_identifier_repeat1] = "quoted_identifier_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_code_id] = "code_id",
  [alias_sym_codesystem_id] = "codesystem_id",
  [alias_sym_codesystem_identifier] = "codesystem_identifier",
  [alias_sym_function_body] = "function_body",
  [alias_sym_library_identifier] = "library_identifier",
  [alias_sym_local_identifier] = "local_identifier",
  [alias_sym_model_identifier] = "model_identifier",
  [alias_sym_null_literal] = "null_literal",
  [alias_sym_number_literal] = "number_literal",
  [alias_sym_qualifier] = "qualifier",
  [alias_sym_qualifier_expression] = "qualifier_expression",
  [alias_sym_quantity_literal] = "quantity_literal",
  [alias_sym_query_alias] = "query_alias",
  [alias_sym_string_literal] = "string_literal",
  [alias_sym_valueset_id] = "valueset_id",
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
  [anon_sym_codesystems] = anon_sym_codesystems,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_codesystem] = anon_sym_codesystem,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_concept] = anon_sym_concept,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
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
  [anon_sym_ormore] = anon_sym_ormore,
  [anon_sym_orless] = anon_sym_orless,
  [anon_sym_lessthan] = anon_sym_lessthan,
  [anon_sym_morethan] = anon_sym_morethan,
  [anon_sym_onor] = anon_sym_onor,
  [anon_sym_before] = anon_sym_before,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_oron] = anon_sym_oron,
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
  [anon_sym_overlaps] = anon_sym_overlaps,
  [anon_sym_within] = anon_sym_within,
  [anon_sym_where] = anon_sym_where,
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
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_descending] = anon_sym_descending,
  [anon_sym_display] = anon_sym_display,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_fluent] = anon_sym_fluent,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_predecessor] = anon_sym_predecessor,
  [anon_sym_starting] = anon_sym_starting,
  [anon_sym_successor] = anon_sym_successor,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_single_quote_string_fragment] = sym_single_quote_string_fragment,
  [sym_double_quote_string_fragment] = sym_double_quote_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_cql_library] = sym_cql_library,
  [sym_definition] = sym_definition,
  [sym_library_definition] = sym_library_definition,
  [sym_using_definition] = sym_using_definition,
  [sym_include_definition] = sym_include_definition,
  [sym_valueset_definition] = sym_valueset_definition,
  [sym_codesystems] = sym_codesystems,
  [sym_codesystem_definition] = sym_codesystem_definition,
  [sym_code_definition] = sym_code_definition,
  [sym_concept_definition] = sym_concept_definition,
  [sym_parameter_definition] = sym_parameter_definition,
  [sym_access_modifier] = sym_access_modifier,
  [sym_statement] = sym_statement,
  [sym_context_definition] = sym_context_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_expression_definition] = sym_expression_definition,
  [sym_expression] = sym_expression,
  [sym_expression_term] = sym_expression_term,
  [sym_term] = sym_term,
  [sym_quantity] = sym_quantity,
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
  [sym_offset_relative_qualifier] = sym_offset_relative_qualifier,
  [sym_exclusive_relative_qualifier] = sym_exclusive_relative_qualifier,
  [sym_quantity_offset] = sym_quantity_offset,
  [sym_temporal_relationship] = sym_temporal_relationship,
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
  [sym_code_or_codesystem_identifier] = sym_code_or_codesystem_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_quoted_identifier] = sym_quoted_identifier,
  [sym_referential_identifier] = sym_referential_identifier,
  [sym_type_name_identifier] = sym_type_name_identifier,
  [sym_referential_or_type_name_identifier] = sym_referential_or_type_name_identifier,
  [sym_keyword_identifier] = sym_keyword_identifier,
  [sym_string] = sym_string,
  [sym_unit] = sym_unit,
  [sym_display_clause] = sym_display_clause,
  [aux_sym_cql_library_repeat1] = aux_sym_cql_library_repeat1,
  [aux_sym_cql_library_repeat2] = aux_sym_cql_library_repeat2,
  [aux_sym_codesystems_repeat1] = aux_sym_codesystems_repeat1,
  [aux_sym_concept_definition_repeat1] = aux_sym_concept_definition_repeat1,
  [aux_sym_qualified_identifier_expression_repeat1] = aux_sym_qualified_identifier_expression_repeat1,
  [aux_sym_query_source_clause_repeat1] = aux_sym_query_source_clause_repeat1,
  [aux_sym_named_type_specifier_repeat1] = aux_sym_named_type_specifier_repeat1,
  [aux_sym_quoted_identifier_repeat1] = aux_sym_quoted_identifier_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_code_id] = alias_sym_code_id,
  [alias_sym_codesystem_id] = alias_sym_codesystem_id,
  [alias_sym_codesystem_identifier] = alias_sym_codesystem_identifier,
  [alias_sym_function_body] = alias_sym_function_body,
  [alias_sym_library_identifier] = alias_sym_library_identifier,
  [alias_sym_local_identifier] = alias_sym_local_identifier,
  [alias_sym_model_identifier] = alias_sym_model_identifier,
  [alias_sym_null_literal] = alias_sym_null_literal,
  [alias_sym_number_literal] = alias_sym_number_literal,
  [alias_sym_qualifier] = alias_sym_qualifier,
  [alias_sym_qualifier_expression] = alias_sym_qualifier_expression,
  [alias_sym_quantity_literal] = alias_sym_quantity_literal,
  [alias_sym_query_alias] = alias_sym_query_alias,
  [alias_sym_string_literal] = alias_sym_string_literal,
  [alias_sym_valueset_id] = alias_sym_valueset_id,
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
  [anon_sym_codesystems] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codesystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
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
  [anon_sym_ormore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessthan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_morethan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_onor] = {
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
  [anon_sym_oron] = {
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
  [anon_sym_overlaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_within] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
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
  [anon_sym_predecessor] = {
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
  [sym_number] = {
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
  [sym_codesystems] = {
    .visible = true,
    .named = true,
  },
  [sym_codesystem_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_code_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_concept_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_access_modifier] = {
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
  [sym_quantity] = {
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
  [sym_offset_relative_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_exclusive_relative_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_temporal_relationship] = {
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
  [sym_code_or_codesystem_identifier] = {
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
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_display_clause] = {
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
  [aux_sym_codesystems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concept_definition_repeat1] = {
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
  [alias_sym_code_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_codesystem_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_codesystem_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_library_identifier] = {
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
  [alias_sym_number_literal] = {
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
  [alias_sym_quantity_literal] = {
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
  [alias_sym_valueset_id] = {
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
    [3] = alias_sym_valueset_id,
  },
  [5] = {
    [3] = alias_sym_codesystem_id,
  },
  [6] = {
    [0] = alias_sym_null_literal,
  },
  [7] = {
    [0] = alias_sym_number_literal,
  },
  [8] = {
    [0] = alias_sym_quantity_literal,
  },
  [9] = {
    [0] = alias_sym_string_literal,
  },
  [10] = {
    [1] = alias_sym_model_identifier,
  },
  [11] = {
    [4] = alias_sym_local_identifier,
  },
  [12] = {
    [1] = alias_sym_query_alias,
  },
  [13] = {
    [0] = alias_sym_qualifier_expression,
  },
  [14] = {
    [4] = alias_sym_valueset_id,
  },
  [15] = {
    [4] = alias_sym_codesystem_id,
  },
  [16] = {
    [3] = alias_sym_code_id,
    [5] = alias_sym_codesystem_identifier,
  },
  [17] = {
    [0] = alias_sym_library_identifier,
  },
  [18] = {
    [6] = alias_sym_function_body,
  },
  [19] = {
    [4] = alias_sym_code_id,
    [6] = alias_sym_codesystem_identifier,
  },
  [20] = {
    [2] = alias_sym_codesystem_identifier,
  },
  [21] = {
    [7] = alias_sym_function_body,
  },
  [22] = {
    [1] = alias_sym_codesystem_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_expression, 2,
    sym_expression,
    alias_sym_function_body,
  sym_quantity, 2,
    sym_quantity,
    alias_sym_quantity_literal,
  sym_identifier, 6,
    sym_identifier,
    alias_sym_library_identifier,
    alias_sym_local_identifier,
    alias_sym_model_identifier,
    alias_sym_qualifier,
    alias_sym_query_alias,
  sym_code_or_codesystem_identifier, 2,
    sym_code_or_codesystem_identifier,
    alias_sym_codesystem_identifier,
  sym_referential_identifier, 2,
    sym_referential_identifier,
    alias_sym_qualifier_expression,
  sym_string, 6,
    sym_string,
    alias_sym_code_id,
    alias_sym_codesystem_id,
    alias_sym_string_literal,
    alias_sym_valueset_id,
    alias_sym_version,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 13,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 14,
  [26] = 15,
  [27] = 16,
  [28] = 17,
  [29] = 18,
  [30] = 19,
  [31] = 22,
  [32] = 21,
  [33] = 22,
  [34] = 23,
  [35] = 13,
  [36] = 24,
  [37] = 14,
  [38] = 38,
  [39] = 39,
  [40] = 23,
  [41] = 21,
  [42] = 16,
  [43] = 15,
  [44] = 44,
  [45] = 45,
  [46] = 19,
  [47] = 47,
  [48] = 24,
  [49] = 17,
  [50] = 18,
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
  [81] = 80,
  [82] = 80,
  [83] = 80,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 86,
  [88] = 86,
  [89] = 86,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 92,
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
  [118] = 94,
  [119] = 96,
  [120] = 95,
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
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 103,
  [163] = 107,
  [164] = 112,
  [165] = 111,
  [166] = 110,
  [167] = 108,
  [168] = 113,
  [169] = 169,
  [170] = 170,
  [171] = 106,
  [172] = 104,
  [173] = 102,
  [174] = 99,
  [175] = 105,
  [176] = 108,
  [177] = 177,
  [178] = 105,
  [179] = 102,
  [180] = 99,
  [181] = 104,
  [182] = 107,
  [183] = 112,
  [184] = 106,
  [185] = 113,
  [186] = 110,
  [187] = 103,
  [188] = 111,
  [189] = 125,
  [190] = 126,
  [191] = 191,
  [192] = 127,
  [193] = 124,
  [194] = 126,
  [195] = 124,
  [196] = 127,
  [197] = 125,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 201,
  [203] = 96,
  [204] = 94,
  [205] = 205,
  [206] = 95,
  [207] = 72,
  [208] = 151,
  [209] = 153,
  [210] = 148,
  [211] = 149,
  [212] = 212,
  [213] = 130,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 134,
  [222] = 139,
  [223] = 223,
  [224] = 137,
  [225] = 135,
  [226] = 144,
  [227] = 227,
  [228] = 228,
  [229] = 153,
  [230] = 151,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 242,
  [246] = 138,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 131,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 129,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 132,
  [298] = 298,
  [299] = 299,
  [300] = 90,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 128,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 315,
  [318] = 318,
  [319] = 308,
  [320] = 320,
  [321] = 313,
  [322] = 320,
  [323] = 308,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 313,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 320,
  [334] = 334,
  [335] = 335,
  [336] = 320,
  [337] = 337,
  [338] = 313,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 315,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 95,
  [352] = 352,
  [353] = 353,
  [354] = 94,
  [355] = 355,
  [356] = 356,
  [357] = 96,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 149,
  [362] = 362,
  [363] = 363,
  [364] = 148,
  [365] = 365,
  [366] = 302,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 372,
  [377] = 377,
  [378] = 378,
  [379] = 372,
  [380] = 375,
  [381] = 381,
  [382] = 97,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 372,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 127,
  [392] = 124,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 396,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 396,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 396,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 398,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
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
      if (eof) ADVANCE(451);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(1095);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == ',') ADVANCE(468);
      if (lookahead == '.') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(464);
      if (lookahead == '<') ADVANCE(530);
      if (lookahead == '=') ADVANCE(525);
      if (lookahead == '>') ADVANCE(531);
      if (lookahead == 'C') ADVANCE(287);
      if (lookahead == '[') ADVANCE(642);
      if (lookahead == '\\') ADVANCE(411);
      if (lookahead == ']') ADVANCE(643);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(292);
      if (lookahead == 'y') ADVANCE(160);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '|') ADVANCE(539);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '~') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(443)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(437);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(394);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(408);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '<') ADVANCE(530);
      if (lookahead == '=') ADVANCE(525);
      if (lookahead == '>') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead == 'b') ADVANCE(750);
      if (lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(911);
      if (lookahead == 'i') ADVANCE(875);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead == 'm') ADVANCE(756);
      if (lookahead == 'o') ADVANCE(692);
      if (lookahead == 'p') ADVANCE(957);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(893);
      if (lookahead == 'w') ADVANCE(840);
      if (lookahead == 'x') ADVANCE(918);
      if (lookahead == '|') ADVANCE(539);
      if (lookahead == '~') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(1096);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '.') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(973);
      if (lookahead == 'b') ADVANCE(1059);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead == 'd') ADVANCE(653);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == 'f') ADVANCE(655);
      if (lookahead == 'h') ADVANCE(915);
      if (lookahead == 'i') ADVANCE(871);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(753);
      if (lookahead == 'n') ADVANCE(914);
      if (lookahead == 'o') ADVANCE(942);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 's') ADVANCE(757);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(892);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == 'w') ADVANCE(765);
      if (lookahead == 'x') ADVANCE(918);
      if (lookahead == 'y') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(1096);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(973);
      if (lookahead == 'b') ADVANCE(1059);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead == 'd') ADVANCE(653);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == 'f') ADVANCE(655);
      if (lookahead == 'h') ADVANCE(915);
      if (lookahead == 'i') ADVANCE(871);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(753);
      if (lookahead == 'n') ADVANCE(914);
      if (lookahead == 'o') ADVANCE(955);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 's') ADVANCE(757);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(892);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == 'w') ADVANCE(765);
      if (lookahead == 'x') ADVANCE(918);
      if (lookahead == 'y') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(1096);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(973);
      if (lookahead == 'b') ADVANCE(1059);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead == 'd') ADVANCE(656);
      if (lookahead == 'e') ADVANCE(883);
      if (lookahead == 'f') ADVANCE(655);
      if (lookahead == 'h') ADVANCE(920);
      if (lookahead == 'i') ADVANCE(871);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(754);
      if (lookahead == 'n') ADVANCE(914);
      if (lookahead == 'o') ADVANCE(942);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 's') ADVANCE(800);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(892);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == 'w') ADVANCE(784);
      if (lookahead == 'x') ADVANCE(918);
      if (lookahead == 'y') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(1096);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(813);
      if (lookahead == 'b') ADVANCE(767);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead == 'd') ADVANCE(653);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == 'f') ADVANCE(655);
      if (lookahead == 'h') ADVANCE(915);
      if (lookahead == 'i') ADVANCE(871);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(753);
      if (lookahead == 'n') ADVANCE(914);
      if (lookahead == 'o') ADVANCE(942);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 's') ADVANCE(757);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(892);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == 'w') ADVANCE(765);
      if (lookahead == 'x') ADVANCE(918);
      if (lookahead == 'y') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(1096);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(813);
      if (lookahead == 'b') ADVANCE(767);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead == 'd') ADVANCE(654);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == 'f') ADVANCE(655);
      if (lookahead == 'h') ADVANCE(915);
      if (lookahead == 'i') ADVANCE(873);
      if (lookahead == 'l') ADVANCE(792);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(914);
      if (lookahead == 'o') ADVANCE(894);
      if (lookahead == 'p') ADVANCE(673);
      if (lookahead == 's') ADVANCE(677);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(892);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == 'w') ADVANCE(764);
      if (lookahead == 'x') ADVANCE(918);
      if (lookahead == 'y') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(973);
      if (lookahead == 'b') ADVANCE(1059);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(670);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == 'f') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(872);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(755);
      if (lookahead == 'o') ADVANCE(942);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 's') ADVANCE(1008);
      if (lookahead == 't') ADVANCE(827);
      if (lookahead == 'u') ADVANCE(892);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == 'w') ADVANCE(822);
      if (lookahead == 'x') ADVANCE(918);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '.') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ']') ADVANCE(643);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(917);
      if (lookahead == 'a') ADVANCE(973);
      if (lookahead == 'b') ADVANCE(1059);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(670);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == 'f') ADVANCE(680);
      if (lookahead == 'i') ADVANCE(872);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(755);
      if (lookahead == 'n') ADVANCE(914);
      if (lookahead == 'o') ADVANCE(942);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 's') ADVANCE(1008);
      if (lookahead == 't') ADVANCE(826);
      if (lookahead == 'u') ADVANCE(892);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == 'w') ADVANCE(822);
      if (lookahead == 'x') ADVANCE(918);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(1041);
      if (lookahead == 'p') ADVANCE(958);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(1041);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '\\') ADVANCE(411);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1107);
      if (lookahead != 0) ADVANCE(1108);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(1095);
      if (lookahead == '/') ADVANCE(1098);
      if (lookahead == '\\') ADVANCE(411);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1101);
      if (lookahead != 0) ADVANCE(1102);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(1065);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(1);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(1115);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(1114);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(265);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(526);
      if (lookahead == '~') ADVANCE(528);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(290);
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(346);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(235);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(1076);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(486);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(303);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(628);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(1085);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(566);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(569);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(564);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(567);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'y') ADVANCE(1073);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 178:
      if (lookahead == 'f') ADVANCE(405);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 179:
      if (lookahead == 'f') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 180:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 181:
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 182:
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 'v') ADVANCE(1081);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(188);
      END_STATE();
    case 184:
      if (lookahead == 'f') ADVANCE(206);
      END_STATE();
    case 185:
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 186:
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 187:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 188:
      if (lookahead == 'f') ADVANCE(371);
      END_STATE();
    case 189:
      if (lookahead == 'f') ADVANCE(407);
      END_STATE();
    case 190:
      if (lookahead == 'f') ADVANCE(308);
      END_STATE();
    case 191:
      if (lookahead == 'g') ADVANCE(454);
      END_STATE();
    case 192:
      if (lookahead == 'g') ADVANCE(631);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(1089);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(1077);
      END_STATE();
    case 195:
      if (lookahead == 'h') ADVANCE(551);
      END_STATE();
    case 196:
      if (lookahead == 'h') ADVANCE(1093);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(549);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 199:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 222:
      if (lookahead == 'k') ADVANCE(554);
      END_STATE();
    case 223:
      if (lookahead == 'k') ADVANCE(552);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(367);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 245:
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'n') ADVANCE(599);
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 247:
      if (lookahead == 'm') ADVANCE(478);
      END_STATE();
    case 248:
      if (lookahead == 'm') ADVANCE(473);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(470);
      END_STATE();
    case 250:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 252:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(540);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(638);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(521);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(633);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(70);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 310:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 311:
      if (lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 312:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 313:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 314:
      if (lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 315:
      if (lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 316:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(614);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(1091);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(1087);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 351:
      if (lookahead == 's') ADVANCE(634);
      END_STATE();
    case 352:
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 353:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 354:
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 355:
      if (lookahead == 's') ADVANCE(537);
      END_STATE();
    case 356:
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 357:
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 358:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 359:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 360:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 361:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 362:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 363:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 364:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 366:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 367:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 368:
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 370:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(626);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(544);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(1083);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(1069);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'y') ADVANCE(557);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 403:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 404:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 411:
      if (lookahead == 'u') ADVANCE(435);
      if (lookahead == 'x') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1111);
      if (lookahead != 0) ADVANCE(1109);
      END_STATE();
    case 412:
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 413:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 414:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 415:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 416:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 417:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 418:
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 419:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 420:
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 421:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 422:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 423:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 424:
      if (lookahead == 'u') ADVANCE(404);
      END_STATE();
    case 425:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 426:
      if (lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 427:
      if (lookahead == 'x') ADVANCE(387);
      END_STATE();
    case 428:
      if (lookahead == 'y') ADVANCE(557);
      END_STATE();
    case 429:
      if (lookahead == 'y') ADVANCE(1079);
      END_STATE();
    case 430:
      if (lookahead == 'y') ADVANCE(452);
      END_STATE();
    case 431:
      if (lookahead == 'y') ADVANCE(519);
      END_STATE();
    case 432:
      if (lookahead == 'y') ADVANCE(555);
      END_STATE();
    case 433:
      if (lookahead == 'y') ADVANCE(372);
      END_STATE();
    case 434:
      if (lookahead == 'y') ADVANCE(374);
      END_STATE();
    case 435:
      if (lookahead == '{') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
      END_STATE();
    case 436:
      if (lookahead == '}') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 437:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1113);
      END_STATE();
    case 438:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
      END_STATE();
    case 439:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1109);
      END_STATE();
    case 440:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 441:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 442:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 443:
      if (eof) ADVANCE(451);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(1095);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == ',') ADVANCE(468);
      if (lookahead == '.') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(464);
      if (lookahead == '<') ADVANCE(530);
      if (lookahead == '=') ADVANCE(525);
      if (lookahead == '>') ADVANCE(531);
      if (lookahead == 'C') ADVANCE(287);
      if (lookahead == '[') ADVANCE(642);
      if (lookahead == ']') ADVANCE(643);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(292);
      if (lookahead == 'y') ADVANCE(160);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '|') ADVANCE(539);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '~') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(443)
      END_STATE();
    case 444:
      if (eof) ADVANCE(451);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '<') ADVANCE(530);
      if (lookahead == '=') ADVANCE(525);
      if (lookahead == '>') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead == 'b') ADVANCE(750);
      if (lookahead == 'c') ADVANCE(927);
      if (lookahead == 'd') ADVANCE(771);
      if (lookahead == 'e') ADVANCE(911);
      if (lookahead == 'i') ADVANCE(874);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead == 'm') ADVANCE(756);
      if (lookahead == 'o') ADVANCE(692);
      if (lookahead == 'p') ADVANCE(672);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(892);
      if (lookahead == 'v') ADVANCE(659);
      if (lookahead == 'w') ADVANCE(840);
      if (lookahead == 'x') ADVANCE(918);
      if (lookahead == '|') ADVANCE(539);
      if (lookahead == '~') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(444)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 445:
      if (eof) ADVANCE(451);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '<') ADVANCE(530);
      if (lookahead == '=') ADVANCE(525);
      if (lookahead == '>') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead == 'b') ADVANCE(750);
      if (lookahead == 'c') ADVANCE(930);
      if (lookahead == 'd') ADVANCE(771);
      if (lookahead == 'e') ADVANCE(911);
      if (lookahead == 'i') ADVANCE(875);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead == 'm') ADVANCE(756);
      if (lookahead == 'o') ADVANCE(692);
      if (lookahead == 'p') ADVANCE(957);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(893);
      if (lookahead == 'w') ADVANCE(840);
      if (lookahead == 'x') ADVANCE(918);
      if (lookahead == '|') ADVANCE(539);
      if (lookahead == '~') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(445)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 446:
      if (eof) ADVANCE(451);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(1095);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == ',') ADVANCE(468);
      if (lookahead == '.') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '<') ADVANCE(530);
      if (lookahead == '=') ADVANCE(525);
      if (lookahead == '>') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(292);
      if (lookahead == 'y') ADVANCE(160);
      if (lookahead == '|') ADVANCE(539);
      if (lookahead == '~') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(446)
      END_STATE();
    case 447:
      if (eof) ADVANCE(451);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(1096);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(973);
      if (lookahead == 'b') ADVANCE(1059);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead == 'd') ADVANCE(656);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == 'f') ADVANCE(655);
      if (lookahead == 'h') ADVANCE(920);
      if (lookahead == 'i') ADVANCE(871);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(754);
      if (lookahead == 'n') ADVANCE(914);
      if (lookahead == 'o') ADVANCE(942);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 's') ADVANCE(800);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(892);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == 'w') ADVANCE(784);
      if (lookahead == 'x') ADVANCE(918);
      if (lookahead == 'y') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(447)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 448:
      if (eof) ADVANCE(451);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(917);
      if (lookahead == 'a') ADVANCE(973);
      if (lookahead == 'b') ADVANCE(1059);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(670);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == 'f') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(872);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(755);
      if (lookahead == 'o') ADVANCE(942);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 's') ADVANCE(1008);
      if (lookahead == 't') ADVANCE(827);
      if (lookahead == 'u') ADVANCE(892);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == 'w') ADVANCE(822);
      if (lookahead == 'x') ADVANCE(918);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(448)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 449:
      if (eof) ADVANCE(451);
      if (lookahead == '\'') ADVANCE(1095);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ',') ADVANCE(468);
      if (lookahead == '.') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(464);
      if (lookahead == ']') ADVANCE(643);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == 'u') ADVANCE(360);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(137);
      if (lookahead == 'y') ADVANCE(160);
      if (lookahead == '}') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(449)
      END_STATE();
    case 450:
      if (eof) ADVANCE(451);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(360);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(157);
      if (lookahead == 'y') ADVANCE(168);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(450)
      END_STATE();
    case 451:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_called);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_called);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(650);
      if (lookahead == 's') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 's') ADVANCE(629);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_valueset);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_codesystems);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_codesystems);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_codesystem);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_concept);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_concept);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_cast);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_cast);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_exists);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_properly);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_properly);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_between);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_between);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(529);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(532);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_implies);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_implies);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_intersect);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_intersect);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(570);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_month);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == 's') ADVANCE(572);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_week);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(574);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_day);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_hour);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_minute);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == 's') ADVANCE(580);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_second);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_millisecond);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == 's') ADVANCE(584);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_years);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_months);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_weeks);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_days);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_hours);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_minutes);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_seconds);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'z') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1065);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'z') ADVANCE(304);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(858);
      if (lookahead == 't') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(867);
      if (lookahead == 't') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_difference);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_difference);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_orbefore);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_orafter);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_ormore);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_orless);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_lessthan);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_morethan);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_onor);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_before);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_after);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_oron);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_starts);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_starts);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_ends);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_ends);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_occurs);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_occurs);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_same);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_same);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(895);
      if (lookahead == 's') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_during);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_during);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_includedin);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_meets);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_meets);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_overlaps);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_overlaps);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_within);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1027);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead == 'i') ADVANCE(805);
      if (lookahead == 'u') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1027);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead == 'i') ADVANCE(805);
      if (lookahead == 'u') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(851);
      if (lookahead == 'l') ADVANCE(1044);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == 'u') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1028);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead == 'i') ADVANCE(805);
      if (lookahead == 'u') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(865);
      if (lookahead == 'e') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1046);
      if (lookahead == 'i') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1039);
      if (lookahead == 'i') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'e') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead == 'i') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(952);
      if (lookahead == 'r') ADVANCE(761);
      if (lookahead == 'u') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(952);
      if (lookahead == 'r') ADVANCE(828);
      if (lookahead == 'u') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(952);
      if (lookahead == 'r') ADVANCE(760);
      if (lookahead == 'u') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(854);
      if (lookahead == 'o') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(880);
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == 'u') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(880);
      if (lookahead == 't') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(866);
      if (lookahead == 'l') ADVANCE(1044);
      if (lookahead == 'u') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(858);
      if (lookahead == 't') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'i') ADVANCE(999);
      if (lookahead == 't') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'i') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead == 'v') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(789);
      if (lookahead == 't') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(789);
      if (lookahead == 't') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(867);
      if (lookahead == 't') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(868);
      if (lookahead == 't') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1086);
      if (lookahead == 'n') ADVANCE(1011);
      if (lookahead == 'r') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1086);
      if (lookahead == 'n') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1086);
      if (lookahead == 'n') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(650);
      if (lookahead == 's') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1022);
      if (lookahead == 't') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(802);
      if (lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'i') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'i') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == 'o') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'o') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'o') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == 'u') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead == 'h') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead == 'h') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == 'y') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead == 'u') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead == 'h') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(993);
      if (lookahead == 'i') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == 'u') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(661);
      if (lookahead == 's') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 's') ADVANCE(937);
      if (lookahead == 'v') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(932);
      if (lookahead == 't') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(1038);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead == 's') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(1038);
      if (lookahead == 's') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(879);
      if (lookahead == 'r') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(879);
      if (lookahead == 'r') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'k') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'k') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1044);
      if (lookahead == 'u') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 's') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(869);
      if (lookahead == 'n') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(935);
      if (lookahead == 'n') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(935);
      if (lookahead == 'n') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(935);
      if (lookahead == 'n') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(935);
      if (lookahead == 'n') ADVANCE(700);
      if (lookahead == 's') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(935);
      if (lookahead == 'n') ADVANCE(703);
      if (lookahead == 's') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead == 'x') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead == 'x') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead == 'x') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(832);
      if (lookahead == 's') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(646);
      if (lookahead == 'v') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(724);
      if (lookahead == 'x') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(1009);
      if (lookahead == 'u') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(646);
      if (lookahead == 'v') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(647);
      if (lookahead == 'v') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(829);
      if (lookahead == 'u') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(937);
      if (lookahead == 'v') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == 'u') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(733);
      if (lookahead == 'y') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(733);
      if (lookahead == 'y') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'v') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_Code);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_Code);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_Concept);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_Concept);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_asc);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_ascending);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_descending);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_descending);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_display);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_display);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_fluent);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_fluent);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_predecessor);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_predecessor);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_starting);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_starting);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_successor);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_successor);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_width);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1097);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1100);
      if (lookahead == '/') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1102);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1099);
      if (lookahead == '/') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1100);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1100);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '/') ADVANCE(1098);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1102);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1102);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1103);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1106);
      if (lookahead == '/') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1108);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1106);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1106);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(1104);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1108);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1108);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1109);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1110);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\'') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1112);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1113);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1115);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 449},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 447},
  [10] = {.lex_state = 447},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 447},
  [13] = {.lex_state = 447},
  [14] = {.lex_state = 447},
  [15] = {.lex_state = 447},
  [16] = {.lex_state = 447},
  [17] = {.lex_state = 447},
  [18] = {.lex_state = 447},
  [19] = {.lex_state = 447},
  [20] = {.lex_state = 447},
  [21] = {.lex_state = 447},
  [22] = {.lex_state = 447},
  [23] = {.lex_state = 447},
  [24] = {.lex_state = 447},
  [25] = {.lex_state = 447},
  [26] = {.lex_state = 447},
  [27] = {.lex_state = 447},
  [28] = {.lex_state = 447},
  [29] = {.lex_state = 447},
  [30] = {.lex_state = 447},
  [31] = {.lex_state = 447},
  [32] = {.lex_state = 447},
  [33] = {.lex_state = 447},
  [34] = {.lex_state = 447},
  [35] = {.lex_state = 447},
  [36] = {.lex_state = 447},
  [37] = {.lex_state = 447},
  [38] = {.lex_state = 447},
  [39] = {.lex_state = 447},
  [40] = {.lex_state = 447},
  [41] = {.lex_state = 447},
  [42] = {.lex_state = 447},
  [43] = {.lex_state = 447},
  [44] = {.lex_state = 447},
  [45] = {.lex_state = 447},
  [46] = {.lex_state = 447},
  [47] = {.lex_state = 447},
  [48] = {.lex_state = 447},
  [49] = {.lex_state = 447},
  [50] = {.lex_state = 447},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 447},
  [62] = {.lex_state = 447},
  [63] = {.lex_state = 447},
  [64] = {.lex_state = 447},
  [65] = {.lex_state = 447},
  [66] = {.lex_state = 447},
  [67] = {.lex_state = 447},
  [68] = {.lex_state = 447},
  [69] = {.lex_state = 447},
  [70] = {.lex_state = 447},
  [71] = {.lex_state = 447},
  [72] = {.lex_state = 446},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 448},
  [75] = {.lex_state = 448},
  [76] = {.lex_state = 448},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 448},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 448},
  [81] = {.lex_state = 448},
  [82] = {.lex_state = 448},
  [83] = {.lex_state = 448},
  [84] = {.lex_state = 448},
  [85] = {.lex_state = 448},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 448},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 448},
  [95] = {.lex_state = 448},
  [96] = {.lex_state = 448},
  [97] = {.lex_state = 448},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 446},
  [100] = {.lex_state = 446},
  [101] = {.lex_state = 446},
  [102] = {.lex_state = 446},
  [103] = {.lex_state = 446},
  [104] = {.lex_state = 446},
  [105] = {.lex_state = 446},
  [106] = {.lex_state = 446},
  [107] = {.lex_state = 446},
  [108] = {.lex_state = 446},
  [109] = {.lex_state = 446},
  [110] = {.lex_state = 446},
  [111] = {.lex_state = 446},
  [112] = {.lex_state = 446},
  [113] = {.lex_state = 446},
  [114] = {.lex_state = 446},
  [115] = {.lex_state = 446},
  [116] = {.lex_state = 446},
  [117] = {.lex_state = 446},
  [118] = {.lex_state = 446},
  [119] = {.lex_state = 446},
  [120] = {.lex_state = 446},
  [121] = {.lex_state = 446},
  [122] = {.lex_state = 446},
  [123] = {.lex_state = 446},
  [124] = {.lex_state = 444},
  [125] = {.lex_state = 446},
  [126] = {.lex_state = 444},
  [127] = {.lex_state = 444},
  [128] = {.lex_state = 446},
  [129] = {.lex_state = 446},
  [130] = {.lex_state = 446},
  [131] = {.lex_state = 446},
  [132] = {.lex_state = 446},
  [133] = {.lex_state = 446},
  [134] = {.lex_state = 446},
  [135] = {.lex_state = 446},
  [136] = {.lex_state = 446},
  [137] = {.lex_state = 446},
  [138] = {.lex_state = 446},
  [139] = {.lex_state = 446},
  [140] = {.lex_state = 446},
  [141] = {.lex_state = 446},
  [142] = {.lex_state = 446},
  [143] = {.lex_state = 446},
  [144] = {.lex_state = 446},
  [145] = {.lex_state = 446},
  [146] = {.lex_state = 446},
  [147] = {.lex_state = 446},
  [148] = {.lex_state = 446},
  [149] = {.lex_state = 446},
  [150] = {.lex_state = 446},
  [151] = {.lex_state = 446},
  [152] = {.lex_state = 446},
  [153] = {.lex_state = 446},
  [154] = {.lex_state = 446},
  [155] = {.lex_state = 446},
  [156] = {.lex_state = 446},
  [157] = {.lex_state = 446},
  [158] = {.lex_state = 446},
  [159] = {.lex_state = 446},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 445},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 445},
  [193] = {.lex_state = 445},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 449},
  [199] = {.lex_state = 449},
  [200] = {.lex_state = 449},
  [201] = {.lex_state = 449},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 449},
  [204] = {.lex_state = 449},
  [205] = {.lex_state = 449},
  [206] = {.lex_state = 449},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 449},
  [209] = {.lex_state = 449},
  [210] = {.lex_state = 449},
  [211] = {.lex_state = 449},
  [212] = {.lex_state = 450},
  [213] = {.lex_state = 449},
  [214] = {.lex_state = 449},
  [215] = {.lex_state = 450},
  [216] = {.lex_state = 449},
  [217] = {.lex_state = 449},
  [218] = {.lex_state = 449},
  [219] = {.lex_state = 449},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 449},
  [222] = {.lex_state = 449},
  [223] = {.lex_state = 449},
  [224] = {.lex_state = 449},
  [225] = {.lex_state = 449},
  [226] = {.lex_state = 449},
  [227] = {.lex_state = 449},
  [228] = {.lex_state = 449},
  [229] = {.lex_state = 450},
  [230] = {.lex_state = 450},
  [231] = {.lex_state = 449},
  [232] = {.lex_state = 449},
  [233] = {.lex_state = 450},
  [234] = {.lex_state = 449},
  [235] = {.lex_state = 449},
  [236] = {.lex_state = 449},
  [237] = {.lex_state = 449},
  [238] = {.lex_state = 450},
  [239] = {.lex_state = 449},
  [240] = {.lex_state = 449},
  [241] = {.lex_state = 449},
  [242] = {.lex_state = 450},
  [243] = {.lex_state = 450},
  [244] = {.lex_state = 450},
  [245] = {.lex_state = 449},
  [246] = {.lex_state = 449},
  [247] = {.lex_state = 449},
  [248] = {.lex_state = 449},
  [249] = {.lex_state = 449},
  [250] = {.lex_state = 449},
  [251] = {.lex_state = 449},
  [252] = {.lex_state = 449},
  [253] = {.lex_state = 449},
  [254] = {.lex_state = 449},
  [255] = {.lex_state = 449},
  [256] = {.lex_state = 449},
  [257] = {.lex_state = 449},
  [258] = {.lex_state = 449},
  [259] = {.lex_state = 449},
  [260] = {.lex_state = 449},
  [261] = {.lex_state = 449},
  [262] = {.lex_state = 449},
  [263] = {.lex_state = 449},
  [264] = {.lex_state = 449},
  [265] = {.lex_state = 449},
  [266] = {.lex_state = 449},
  [267] = {.lex_state = 449},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 449},
  [270] = {.lex_state = 449},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 449},
  [273] = {.lex_state = 449},
  [274] = {.lex_state = 449},
  [275] = {.lex_state = 449},
  [276] = {.lex_state = 449},
  [277] = {.lex_state = 449},
  [278] = {.lex_state = 449},
  [279] = {.lex_state = 449},
  [280] = {.lex_state = 17},
  [281] = {.lex_state = 449},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 449},
  [287] = {.lex_state = 15},
  [288] = {.lex_state = 15},
  [289] = {.lex_state = 15},
  [290] = {.lex_state = 15},
  [291] = {.lex_state = 15},
  [292] = {.lex_state = 449},
  [293] = {.lex_state = 15},
  [294] = {.lex_state = 15},
  [295] = {.lex_state = 15},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 449},
  [298] = {.lex_state = 18},
  [299] = {.lex_state = 15},
  [300] = {.lex_state = 15},
  [301] = {.lex_state = 449},
  [302] = {.lex_state = 449},
  [303] = {.lex_state = 15},
  [304] = {.lex_state = 15},
  [305] = {.lex_state = 449},
  [306] = {.lex_state = 15},
  [307] = {.lex_state = 15},
  [308] = {.lex_state = 20},
  [309] = {.lex_state = 15},
  [310] = {.lex_state = 15},
  [311] = {.lex_state = 15},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 19},
  [314] = {.lex_state = 15},
  [315] = {.lex_state = 20},
  [316] = {.lex_state = 15},
  [317] = {.lex_state = 20},
  [318] = {.lex_state = 19},
  [319] = {.lex_state = 20},
  [320] = {.lex_state = 19},
  [321] = {.lex_state = 19},
  [322] = {.lex_state = 19},
  [323] = {.lex_state = 20},
  [324] = {.lex_state = 15},
  [325] = {.lex_state = 15},
  [326] = {.lex_state = 15},
  [327] = {.lex_state = 449},
  [328] = {.lex_state = 19},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 15},
  [331] = {.lex_state = 15},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 19},
  [334] = {.lex_state = 15},
  [335] = {.lex_state = 15},
  [336] = {.lex_state = 19},
  [337] = {.lex_state = 15},
  [338] = {.lex_state = 19},
  [339] = {.lex_state = 15},
  [340] = {.lex_state = 15},
  [341] = {.lex_state = 20},
  [342] = {.lex_state = 449},
  [343] = {.lex_state = 20},
  [344] = {.lex_state = 15},
  [345] = {.lex_state = 15},
  [346] = {.lex_state = 15},
  [347] = {.lex_state = 15},
  [348] = {.lex_state = 15},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 15},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 15},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 15},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 15},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 15},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 18},
  [367] = {.lex_state = 446},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 15},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 15},
  [389] = {.lex_state = 15},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 15},
  [392] = {.lex_state = 15},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 26},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 26},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
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
    [anon_sym_codesystems] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_codesystem] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_concept] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
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
    [anon_sym_lessthan] = ACTIONS(1),
    [anon_sym_morethan] = ACTIONS(1),
    [anon_sym_onor] = ACTIONS(1),
    [anon_sym_before] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
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
    [anon_sym_overlaps] = ACTIONS(1),
    [anon_sym_within] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_Code] = ACTIONS(1),
    [anon_sym_Concept] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_descending] = ACTIONS(1),
    [anon_sym_display] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_fluent] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_predecessor] = ACTIONS(1),
    [anon_sym_starting] = ACTIONS(1),
    [anon_sym_successor] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_cql_library] = STATE(408),
    [sym_definition] = STATE(198),
    [sym_library_definition] = STATE(200),
    [sym_using_definition] = STATE(267),
    [sym_include_definition] = STATE(267),
    [sym_valueset_definition] = STATE(267),
    [sym_codesystem_definition] = STATE(267),
    [sym_code_definition] = STATE(267),
    [sym_concept_definition] = STATE(267),
    [sym_parameter_definition] = STATE(267),
    [sym_access_modifier] = STATE(301),
    [sym_statement] = STATE(282),
    [sym_context_definition] = STATE(365),
    [sym_function_definition] = STATE(365),
    [sym_expression_definition] = STATE(365),
    [aux_sym_cql_library_repeat1] = STATE(198),
    [aux_sym_cql_library_repeat2] = STATE(282),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_library] = ACTIONS(7),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_valueset] = ACTIONS(13),
    [anon_sym_codesystem] = ACTIONS(15),
    [anon_sym_code] = ACTIONS(17),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(23),
    [anon_sym_private] = ACTIONS(23),
    [anon_sym_context] = ACTIONS(25),
    [anon_sym_define] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(103),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_date_time_precision] = STATE(416),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_date_time_precision_specifier] = STATE(40),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(162),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_date_time_precision] = STATE(416),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_date_time_precision_specifier] = STATE(34),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(187),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_date_time_precision] = STATE(416),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_date_time_precision_specifier] = STATE(23),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(103),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_date_time_precision] = STATE(416),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_date_time_precision_specifier] = STATE(40),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(162),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_date_time_precision] = STATE(416),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_date_time_precision_specifier] = STATE(34),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(187),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_date_time_precision] = STATE(416),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_date_time_precision_specifier] = STATE(23),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(161),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_external] = ACTIONS(97),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(101),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(109),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(170),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_external] = ACTIONS(99),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(191),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(168),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(102),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(182),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(183),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(188),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(186),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_expression] = STATE(176),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_expression] = STATE(185),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_expression] = STATE(184),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_expression] = STATE(181),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_expression] = STATE(180),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_expression] = STATE(178),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_expression] = STATE(179),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_expression] = STATE(163),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_expression] = STATE(164),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_expression] = STATE(165),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_expression] = STATE(166),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_expression] = STATE(167),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_expression] = STATE(104),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_expression] = STATE(171),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_expression] = STATE(172),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_expression] = STATE(174),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_expression] = STATE(113),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_expression] = STATE(175),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_expression] = STATE(173),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_expression] = STATE(177),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(197),
    [sym_retrieve] = STATE(194),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_expression] = STATE(169),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_expression] = STATE(99),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_expression] = STATE(106),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_expression] = STATE(112),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym_expression] = STATE(107),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_expression] = STATE(101),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_expression] = STATE(100),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [sym_expression] = STATE(108),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [sym_expression] = STATE(160),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(190),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_expression] = STATE(105),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_expression] = STATE(111),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [sym_expression] = STATE(110),
    [sym_expression_term] = STATE(133),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(143),
    [sym_literal] = STATE(145),
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_boolean_expression] = STATE(133),
    [sym_type_expression] = STATE(133),
    [sym_cast_expression] = STATE(133),
    [sym_not_expression] = STATE(133),
    [sym_existence_expression] = STATE(133),
    [sym_between_expression] = STATE(133),
    [sym_equality_expression] = STATE(133),
    [sym_inequality_expression] = STATE(133),
    [sym_and_expression] = STATE(133),
    [sym_or_expression] = STATE(133),
    [sym_implies_expression] = STATE(133),
    [sym_in_fix_set_expression] = STATE(133),
    [sym_plural_date_time_precision] = STATE(403),
    [sym_duration_between_expression] = STATE(133),
    [sym_difference_between_expression] = STATE(133),
    [sym_membership_expression] = STATE(133),
    [sym_timing_expression] = STATE(133),
    [sym_query] = STATE(133),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(115),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [sym_string] = STATE(147),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [sym_quantity] = STATE(286),
    [sym_date_time_precision] = STATE(416),
    [sym_date_time_precision_specifier] = STATE(67),
    [sym_exclusive_relative_qualifier] = STATE(385),
    [sym_quantity_offset] = STATE(332),
    [sym_temporal_relationship] = STATE(53),
    [anon_sym_library] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(101),
    [anon_sym_called] = ACTIONS(101),
    [anon_sym_include] = ACTIONS(101),
    [anon_sym_valueset] = ACTIONS(101),
    [anon_sym_codesystems] = ACTIONS(101),
    [anon_sym_codesystem] = ACTIONS(101),
    [anon_sym_code] = ACTIONS(101),
    [anon_sym_from] = ACTIONS(101),
    [anon_sym_concept] = ACTIONS(101),
    [anon_sym_parameter] = ACTIONS(101),
    [anon_sym_default] = ACTIONS(101),
    [anon_sym_public] = ACTIONS(101),
    [anon_sym_private] = ACTIONS(101),
    [anon_sym_context] = ACTIONS(101),
    [anon_sym_define] = ACTIONS(101),
    [anon_sym_function] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [aux_sym_literal_token1] = ACTIONS(101),
    [anon_sym_null] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_cast] = ACTIONS(101),
    [anon_sym_exists] = ACTIONS(101),
    [anon_sym_properly] = ACTIONS(105),
    [anon_sym_xor] = ACTIONS(101),
    [anon_sym_implies] = ACTIONS(101),
    [anon_sym_union] = ACTIONS(101),
    [anon_sym_intersect] = ACTIONS(101),
    [anon_sym_except] = ACTIONS(101),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(101),
    [anon_sym_months] = ACTIONS(101),
    [anon_sym_weeks] = ACTIONS(101),
    [anon_sym_days] = ACTIONS(101),
    [anon_sym_hours] = ACTIONS(101),
    [anon_sym_minutes] = ACTIONS(101),
    [anon_sym_seconds] = ACTIONS(101),
    [anon_sym_milliseconds] = ACTIONS(101),
    [anon_sym_date] = ACTIONS(101),
    [anon_sym_time] = ACTIONS(101),
    [anon_sym_timezone] = ACTIONS(101),
    [anon_sym_timezoneoffset] = ACTIONS(101),
    [anon_sym_duration] = ACTIONS(101),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_difference] = ACTIONS(101),
    [anon_sym_contains] = ACTIONS(101),
    [anon_sym_orbefore] = ACTIONS(103),
    [anon_sym_orafter] = ACTIONS(103),
    [anon_sym_ormore] = ACTIONS(103),
    [anon_sym_orless] = ACTIONS(103),
    [anon_sym_lessthan] = ACTIONS(107),
    [anon_sym_morethan] = ACTIONS(107),
    [anon_sym_onor] = ACTIONS(109),
    [anon_sym_before] = ACTIONS(111),
    [anon_sym_after] = ACTIONS(111),
    [anon_sym_starts] = ACTIONS(101),
    [anon_sym_ends] = ACTIONS(101),
    [anon_sym_same] = ACTIONS(113),
    [anon_sym_start] = ACTIONS(101),
    [anon_sym_end] = ACTIONS(101),
    [anon_sym_includes] = ACTIONS(101),
    [anon_sym_during] = ACTIONS(115),
    [anon_sym_includedin] = ACTIONS(117),
    [anon_sym_meets] = ACTIONS(101),
    [anon_sym_overlaps] = ACTIONS(101),
    [anon_sym_within] = ACTIONS(119),
    [anon_sym_where] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_version] = ACTIONS(101),
    [sym_default_identifier] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_asc] = ACTIONS(101),
    [anon_sym_ascending] = ACTIONS(101),
    [anon_sym_by] = ACTIONS(101),
    [anon_sym_desc] = ACTIONS(101),
    [anon_sym_descending] = ACTIONS(101),
    [anon_sym_display] = ACTIONS(101),
    [anon_sym_div] = ACTIONS(101),
    [anon_sym_fluent] = ACTIONS(101),
    [anon_sym_mod] = ACTIONS(101),
    [anon_sym_predecessor] = ACTIONS(101),
    [anon_sym_starting] = ACTIONS(101),
    [anon_sym_successor] = ACTIONS(101),
    [anon_sym_width] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [sym_number] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym_date_time_precision] = STATE(416),
    [sym_date_time_precision_specifier] = STATE(67),
    [anon_sym_library] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(101),
    [anon_sym_called] = ACTIONS(101),
    [anon_sym_include] = ACTIONS(101),
    [anon_sym_valueset] = ACTIONS(101),
    [anon_sym_codesystems] = ACTIONS(101),
    [anon_sym_codesystem] = ACTIONS(101),
    [anon_sym_code] = ACTIONS(101),
    [anon_sym_from] = ACTIONS(101),
    [anon_sym_concept] = ACTIONS(101),
    [anon_sym_parameter] = ACTIONS(101),
    [anon_sym_default] = ACTIONS(101),
    [anon_sym_public] = ACTIONS(101),
    [anon_sym_private] = ACTIONS(101),
    [anon_sym_context] = ACTIONS(101),
    [anon_sym_define] = ACTIONS(101),
    [anon_sym_function] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [aux_sym_literal_token1] = ACTIONS(101),
    [anon_sym_null] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_cast] = ACTIONS(101),
    [anon_sym_exists] = ACTIONS(101),
    [anon_sym_xor] = ACTIONS(101),
    [anon_sym_implies] = ACTIONS(101),
    [anon_sym_union] = ACTIONS(101),
    [anon_sym_intersect] = ACTIONS(101),
    [anon_sym_except] = ACTIONS(101),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(101),
    [anon_sym_months] = ACTIONS(101),
    [anon_sym_weeks] = ACTIONS(101),
    [anon_sym_days] = ACTIONS(101),
    [anon_sym_hours] = ACTIONS(101),
    [anon_sym_minutes] = ACTIONS(101),
    [anon_sym_seconds] = ACTIONS(101),
    [anon_sym_milliseconds] = ACTIONS(101),
    [anon_sym_date] = ACTIONS(101),
    [anon_sym_time] = ACTIONS(101),
    [anon_sym_timezone] = ACTIONS(101),
    [anon_sym_timezoneoffset] = ACTIONS(101),
    [anon_sym_duration] = ACTIONS(101),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_difference] = ACTIONS(101),
    [anon_sym_contains] = ACTIONS(101),
    [anon_sym_orbefore] = ACTIONS(103),
    [anon_sym_orafter] = ACTIONS(103),
    [anon_sym_ormore] = ACTIONS(103),
    [anon_sym_orless] = ACTIONS(103),
    [anon_sym_before] = ACTIONS(115),
    [anon_sym_after] = ACTIONS(115),
    [anon_sym_starts] = ACTIONS(101),
    [anon_sym_ends] = ACTIONS(101),
    [anon_sym_start] = ACTIONS(101),
    [anon_sym_end] = ACTIONS(101),
    [anon_sym_includes] = ACTIONS(101),
    [anon_sym_meets] = ACTIONS(101),
    [anon_sym_overlaps] = ACTIONS(101),
    [anon_sym_where] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_version] = ACTIONS(101),
    [sym_default_identifier] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_asc] = ACTIONS(101),
    [anon_sym_ascending] = ACTIONS(101),
    [anon_sym_by] = ACTIONS(101),
    [anon_sym_desc] = ACTIONS(101),
    [anon_sym_descending] = ACTIONS(101),
    [anon_sym_display] = ACTIONS(101),
    [anon_sym_div] = ACTIONS(101),
    [anon_sym_fluent] = ACTIONS(101),
    [anon_sym_mod] = ACTIONS(101),
    [anon_sym_predecessor] = ACTIONS(101),
    [anon_sym_starting] = ACTIONS(101),
    [anon_sym_successor] = ACTIONS(101),
    [anon_sym_width] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [sym_date_time_precision] = STATE(416),
    [sym_date_time_precision_specifier] = STATE(62),
    [anon_sym_library] = ACTIONS(124),
    [anon_sym_using] = ACTIONS(124),
    [anon_sym_called] = ACTIONS(124),
    [anon_sym_include] = ACTIONS(124),
    [anon_sym_valueset] = ACTIONS(124),
    [anon_sym_codesystems] = ACTIONS(124),
    [anon_sym_codesystem] = ACTIONS(124),
    [anon_sym_code] = ACTIONS(124),
    [anon_sym_from] = ACTIONS(124),
    [anon_sym_concept] = ACTIONS(124),
    [anon_sym_parameter] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
    [anon_sym_public] = ACTIONS(124),
    [anon_sym_private] = ACTIONS(124),
    [anon_sym_context] = ACTIONS(124),
    [anon_sym_define] = ACTIONS(124),
    [anon_sym_function] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [aux_sym_literal_token1] = ACTIONS(124),
    [anon_sym_null] = ACTIONS(124),
    [anon_sym_not] = ACTIONS(124),
    [anon_sym_cast] = ACTIONS(124),
    [anon_sym_exists] = ACTIONS(124),
    [anon_sym_xor] = ACTIONS(124),
    [anon_sym_implies] = ACTIONS(124),
    [anon_sym_union] = ACTIONS(124),
    [anon_sym_intersect] = ACTIONS(124),
    [anon_sym_except] = ACTIONS(124),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(124),
    [anon_sym_months] = ACTIONS(124),
    [anon_sym_weeks] = ACTIONS(124),
    [anon_sym_days] = ACTIONS(124),
    [anon_sym_hours] = ACTIONS(124),
    [anon_sym_minutes] = ACTIONS(124),
    [anon_sym_seconds] = ACTIONS(124),
    [anon_sym_milliseconds] = ACTIONS(124),
    [anon_sym_date] = ACTIONS(124),
    [anon_sym_time] = ACTIONS(124),
    [anon_sym_timezone] = ACTIONS(124),
    [anon_sym_timezoneoffset] = ACTIONS(124),
    [anon_sym_duration] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_difference] = ACTIONS(124),
    [anon_sym_contains] = ACTIONS(124),
    [anon_sym_orbefore] = ACTIONS(126),
    [anon_sym_orafter] = ACTIONS(126),
    [anon_sym_ormore] = ACTIONS(126),
    [anon_sym_orless] = ACTIONS(126),
    [anon_sym_starts] = ACTIONS(124),
    [anon_sym_ends] = ACTIONS(124),
    [anon_sym_start] = ACTIONS(128),
    [anon_sym_end] = ACTIONS(128),
    [anon_sym_includes] = ACTIONS(124),
    [anon_sym_meets] = ACTIONS(124),
    [anon_sym_overlaps] = ACTIONS(124),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_version] = ACTIONS(124),
    [sym_default_identifier] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_asc] = ACTIONS(124),
    [anon_sym_ascending] = ACTIONS(124),
    [anon_sym_by] = ACTIONS(124),
    [anon_sym_desc] = ACTIONS(124),
    [anon_sym_descending] = ACTIONS(124),
    [anon_sym_display] = ACTIONS(124),
    [anon_sym_div] = ACTIONS(124),
    [anon_sym_fluent] = ACTIONS(124),
    [anon_sym_mod] = ACTIONS(124),
    [anon_sym_predecessor] = ACTIONS(124),
    [anon_sym_starting] = ACTIONS(124),
    [anon_sym_successor] = ACTIONS(124),
    [anon_sym_width] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_date_time_precision] = STATE(416),
    [sym_date_time_precision_specifier] = STATE(68),
    [anon_sym_library] = ACTIONS(124),
    [anon_sym_using] = ACTIONS(124),
    [anon_sym_called] = ACTIONS(124),
    [anon_sym_include] = ACTIONS(124),
    [anon_sym_valueset] = ACTIONS(124),
    [anon_sym_codesystems] = ACTIONS(124),
    [anon_sym_codesystem] = ACTIONS(124),
    [anon_sym_code] = ACTIONS(124),
    [anon_sym_from] = ACTIONS(124),
    [anon_sym_concept] = ACTIONS(124),
    [anon_sym_parameter] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
    [anon_sym_public] = ACTIONS(124),
    [anon_sym_private] = ACTIONS(124),
    [anon_sym_context] = ACTIONS(124),
    [anon_sym_define] = ACTIONS(124),
    [anon_sym_function] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [aux_sym_literal_token1] = ACTIONS(124),
    [anon_sym_null] = ACTIONS(124),
    [anon_sym_not] = ACTIONS(124),
    [anon_sym_cast] = ACTIONS(124),
    [anon_sym_exists] = ACTIONS(124),
    [anon_sym_xor] = ACTIONS(124),
    [anon_sym_implies] = ACTIONS(124),
    [anon_sym_union] = ACTIONS(124),
    [anon_sym_intersect] = ACTIONS(124),
    [anon_sym_except] = ACTIONS(124),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(124),
    [anon_sym_months] = ACTIONS(124),
    [anon_sym_weeks] = ACTIONS(124),
    [anon_sym_days] = ACTIONS(124),
    [anon_sym_hours] = ACTIONS(124),
    [anon_sym_minutes] = ACTIONS(124),
    [anon_sym_seconds] = ACTIONS(124),
    [anon_sym_milliseconds] = ACTIONS(124),
    [anon_sym_date] = ACTIONS(124),
    [anon_sym_time] = ACTIONS(124),
    [anon_sym_timezone] = ACTIONS(124),
    [anon_sym_timezoneoffset] = ACTIONS(124),
    [anon_sym_duration] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_difference] = ACTIONS(124),
    [anon_sym_contains] = ACTIONS(124),
    [anon_sym_orbefore] = ACTIONS(126),
    [anon_sym_orafter] = ACTIONS(126),
    [anon_sym_ormore] = ACTIONS(126),
    [anon_sym_orless] = ACTIONS(126),
    [anon_sym_starts] = ACTIONS(124),
    [anon_sym_ends] = ACTIONS(124),
    [anon_sym_start] = ACTIONS(124),
    [anon_sym_end] = ACTIONS(124),
    [anon_sym_includes] = ACTIONS(124),
    [anon_sym_meets] = ACTIONS(124),
    [anon_sym_overlaps] = ACTIONS(124),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_version] = ACTIONS(124),
    [sym_default_identifier] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_asc] = ACTIONS(124),
    [anon_sym_ascending] = ACTIONS(124),
    [anon_sym_by] = ACTIONS(124),
    [anon_sym_desc] = ACTIONS(124),
    [anon_sym_descending] = ACTIONS(124),
    [anon_sym_display] = ACTIONS(124),
    [anon_sym_div] = ACTIONS(124),
    [anon_sym_fluent] = ACTIONS(124),
    [anon_sym_mod] = ACTIONS(124),
    [anon_sym_predecessor] = ACTIONS(124),
    [anon_sym_starting] = ACTIONS(124),
    [anon_sym_successor] = ACTIONS(124),
    [anon_sym_width] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym_date_time_precision] = STATE(416),
    [sym_date_time_precision_specifier] = STATE(66),
    [anon_sym_library] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(101),
    [anon_sym_called] = ACTIONS(101),
    [anon_sym_include] = ACTIONS(101),
    [anon_sym_valueset] = ACTIONS(101),
    [anon_sym_codesystems] = ACTIONS(101),
    [anon_sym_codesystem] = ACTIONS(101),
    [anon_sym_code] = ACTIONS(101),
    [anon_sym_from] = ACTIONS(101),
    [anon_sym_concept] = ACTIONS(101),
    [anon_sym_parameter] = ACTIONS(101),
    [anon_sym_default] = ACTIONS(101),
    [anon_sym_public] = ACTIONS(101),
    [anon_sym_private] = ACTIONS(101),
    [anon_sym_context] = ACTIONS(101),
    [anon_sym_define] = ACTIONS(101),
    [anon_sym_function] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [aux_sym_literal_token1] = ACTIONS(101),
    [anon_sym_null] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_cast] = ACTIONS(101),
    [anon_sym_exists] = ACTIONS(101),
    [anon_sym_xor] = ACTIONS(101),
    [anon_sym_implies] = ACTIONS(101),
    [anon_sym_union] = ACTIONS(101),
    [anon_sym_intersect] = ACTIONS(101),
    [anon_sym_except] = ACTIONS(101),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(101),
    [anon_sym_months] = ACTIONS(101),
    [anon_sym_weeks] = ACTIONS(101),
    [anon_sym_days] = ACTIONS(101),
    [anon_sym_hours] = ACTIONS(101),
    [anon_sym_minutes] = ACTIONS(101),
    [anon_sym_seconds] = ACTIONS(101),
    [anon_sym_milliseconds] = ACTIONS(101),
    [anon_sym_date] = ACTIONS(101),
    [anon_sym_time] = ACTIONS(101),
    [anon_sym_timezone] = ACTIONS(101),
    [anon_sym_timezoneoffset] = ACTIONS(101),
    [anon_sym_duration] = ACTIONS(101),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_difference] = ACTIONS(101),
    [anon_sym_contains] = ACTIONS(101),
    [anon_sym_orbefore] = ACTIONS(103),
    [anon_sym_orafter] = ACTIONS(103),
    [anon_sym_ormore] = ACTIONS(103),
    [anon_sym_orless] = ACTIONS(103),
    [anon_sym_starts] = ACTIONS(101),
    [anon_sym_ends] = ACTIONS(101),
    [anon_sym_start] = ACTIONS(131),
    [anon_sym_end] = ACTIONS(131),
    [anon_sym_includes] = ACTIONS(101),
    [anon_sym_meets] = ACTIONS(101),
    [anon_sym_overlaps] = ACTIONS(101),
    [anon_sym_where] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_version] = ACTIONS(101),
    [sym_default_identifier] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_asc] = ACTIONS(101),
    [anon_sym_ascending] = ACTIONS(101),
    [anon_sym_by] = ACTIONS(101),
    [anon_sym_desc] = ACTIONS(101),
    [anon_sym_descending] = ACTIONS(101),
    [anon_sym_display] = ACTIONS(101),
    [anon_sym_div] = ACTIONS(101),
    [anon_sym_fluent] = ACTIONS(101),
    [anon_sym_mod] = ACTIONS(101),
    [anon_sym_predecessor] = ACTIONS(101),
    [anon_sym_starting] = ACTIONS(101),
    [anon_sym_successor] = ACTIONS(101),
    [anon_sym_width] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym_date_time_precision] = STATE(416),
    [sym_date_time_precision_specifier] = STATE(70),
    [anon_sym_library] = ACTIONS(134),
    [anon_sym_using] = ACTIONS(134),
    [anon_sym_called] = ACTIONS(134),
    [anon_sym_include] = ACTIONS(134),
    [anon_sym_valueset] = ACTIONS(134),
    [anon_sym_codesystems] = ACTIONS(134),
    [anon_sym_codesystem] = ACTIONS(134),
    [anon_sym_code] = ACTIONS(134),
    [anon_sym_from] = ACTIONS(134),
    [anon_sym_concept] = ACTIONS(134),
    [anon_sym_parameter] = ACTIONS(134),
    [anon_sym_default] = ACTIONS(134),
    [anon_sym_public] = ACTIONS(134),
    [anon_sym_private] = ACTIONS(134),
    [anon_sym_context] = ACTIONS(134),
    [anon_sym_define] = ACTIONS(134),
    [anon_sym_function] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(136),
    [aux_sym_literal_token1] = ACTIONS(134),
    [anon_sym_null] = ACTIONS(134),
    [anon_sym_not] = ACTIONS(134),
    [anon_sym_cast] = ACTIONS(134),
    [anon_sym_exists] = ACTIONS(134),
    [anon_sym_xor] = ACTIONS(134),
    [anon_sym_implies] = ACTIONS(134),
    [anon_sym_union] = ACTIONS(134),
    [anon_sym_intersect] = ACTIONS(134),
    [anon_sym_except] = ACTIONS(134),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(134),
    [anon_sym_months] = ACTIONS(134),
    [anon_sym_weeks] = ACTIONS(134),
    [anon_sym_days] = ACTIONS(134),
    [anon_sym_hours] = ACTIONS(134),
    [anon_sym_minutes] = ACTIONS(134),
    [anon_sym_seconds] = ACTIONS(134),
    [anon_sym_milliseconds] = ACTIONS(134),
    [anon_sym_date] = ACTIONS(134),
    [anon_sym_time] = ACTIONS(134),
    [anon_sym_timezone] = ACTIONS(134),
    [anon_sym_timezoneoffset] = ACTIONS(134),
    [anon_sym_duration] = ACTIONS(134),
    [anon_sym_in] = ACTIONS(134),
    [anon_sym_difference] = ACTIONS(134),
    [anon_sym_contains] = ACTIONS(134),
    [anon_sym_orbefore] = ACTIONS(136),
    [anon_sym_orafter] = ACTIONS(136),
    [anon_sym_ormore] = ACTIONS(136),
    [anon_sym_orless] = ACTIONS(136),
    [anon_sym_starts] = ACTIONS(134),
    [anon_sym_ends] = ACTIONS(134),
    [anon_sym_start] = ACTIONS(138),
    [anon_sym_end] = ACTIONS(138),
    [anon_sym_includes] = ACTIONS(134),
    [anon_sym_meets] = ACTIONS(134),
    [anon_sym_overlaps] = ACTIONS(134),
    [anon_sym_where] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_version] = ACTIONS(134),
    [sym_default_identifier] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_asc] = ACTIONS(134),
    [anon_sym_ascending] = ACTIONS(134),
    [anon_sym_by] = ACTIONS(134),
    [anon_sym_desc] = ACTIONS(134),
    [anon_sym_descending] = ACTIONS(134),
    [anon_sym_display] = ACTIONS(134),
    [anon_sym_div] = ACTIONS(134),
    [anon_sym_fluent] = ACTIONS(134),
    [anon_sym_mod] = ACTIONS(134),
    [anon_sym_predecessor] = ACTIONS(134),
    [anon_sym_starting] = ACTIONS(134),
    [anon_sym_successor] = ACTIONS(134),
    [anon_sym_width] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [sym_number] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_date_time_precision] = STATE(416),
    [sym_date_time_precision_specifier] = STATE(64),
    [anon_sym_library] = ACTIONS(134),
    [anon_sym_using] = ACTIONS(134),
    [anon_sym_called] = ACTIONS(134),
    [anon_sym_include] = ACTIONS(134),
    [anon_sym_valueset] = ACTIONS(134),
    [anon_sym_codesystems] = ACTIONS(134),
    [anon_sym_codesystem] = ACTIONS(134),
    [anon_sym_code] = ACTIONS(134),
    [anon_sym_from] = ACTIONS(134),
    [anon_sym_concept] = ACTIONS(134),
    [anon_sym_parameter] = ACTIONS(134),
    [anon_sym_default] = ACTIONS(134),
    [anon_sym_public] = ACTIONS(134),
    [anon_sym_private] = ACTIONS(134),
    [anon_sym_context] = ACTIONS(134),
    [anon_sym_define] = ACTIONS(134),
    [anon_sym_function] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(136),
    [aux_sym_literal_token1] = ACTIONS(134),
    [anon_sym_null] = ACTIONS(134),
    [anon_sym_not] = ACTIONS(134),
    [anon_sym_cast] = ACTIONS(134),
    [anon_sym_exists] = ACTIONS(134),
    [anon_sym_xor] = ACTIONS(134),
    [anon_sym_implies] = ACTIONS(134),
    [anon_sym_union] = ACTIONS(134),
    [anon_sym_intersect] = ACTIONS(134),
    [anon_sym_except] = ACTIONS(134),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(134),
    [anon_sym_months] = ACTIONS(134),
    [anon_sym_weeks] = ACTIONS(134),
    [anon_sym_days] = ACTIONS(134),
    [anon_sym_hours] = ACTIONS(134),
    [anon_sym_minutes] = ACTIONS(134),
    [anon_sym_seconds] = ACTIONS(134),
    [anon_sym_milliseconds] = ACTIONS(134),
    [anon_sym_date] = ACTIONS(134),
    [anon_sym_time] = ACTIONS(134),
    [anon_sym_timezone] = ACTIONS(134),
    [anon_sym_timezoneoffset] = ACTIONS(134),
    [anon_sym_duration] = ACTIONS(134),
    [anon_sym_in] = ACTIONS(134),
    [anon_sym_difference] = ACTIONS(134),
    [anon_sym_contains] = ACTIONS(134),
    [anon_sym_orbefore] = ACTIONS(136),
    [anon_sym_orafter] = ACTIONS(136),
    [anon_sym_ormore] = ACTIONS(136),
    [anon_sym_orless] = ACTIONS(136),
    [anon_sym_starts] = ACTIONS(134),
    [anon_sym_ends] = ACTIONS(134),
    [anon_sym_start] = ACTIONS(134),
    [anon_sym_end] = ACTIONS(134),
    [anon_sym_includes] = ACTIONS(134),
    [anon_sym_meets] = ACTIONS(134),
    [anon_sym_overlaps] = ACTIONS(134),
    [anon_sym_where] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_version] = ACTIONS(134),
    [sym_default_identifier] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_asc] = ACTIONS(134),
    [anon_sym_ascending] = ACTIONS(134),
    [anon_sym_by] = ACTIONS(134),
    [anon_sym_desc] = ACTIONS(134),
    [anon_sym_descending] = ACTIONS(134),
    [anon_sym_display] = ACTIONS(134),
    [anon_sym_div] = ACTIONS(134),
    [anon_sym_fluent] = ACTIONS(134),
    [anon_sym_mod] = ACTIONS(134),
    [anon_sym_predecessor] = ACTIONS(134),
    [anon_sym_starting] = ACTIONS(134),
    [anon_sym_successor] = ACTIONS(134),
    [anon_sym_width] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [sym_number] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym_date_time_precision] = STATE(416),
    [sym_date_time_precision_specifier] = STATE(67),
    [anon_sym_library] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(101),
    [anon_sym_called] = ACTIONS(101),
    [anon_sym_include] = ACTIONS(101),
    [anon_sym_valueset] = ACTIONS(101),
    [anon_sym_codesystems] = ACTIONS(101),
    [anon_sym_codesystem] = ACTIONS(101),
    [anon_sym_code] = ACTIONS(101),
    [anon_sym_from] = ACTIONS(101),
    [anon_sym_concept] = ACTIONS(101),
    [anon_sym_parameter] = ACTIONS(101),
    [anon_sym_default] = ACTIONS(101),
    [anon_sym_public] = ACTIONS(101),
    [anon_sym_private] = ACTIONS(101),
    [anon_sym_context] = ACTIONS(101),
    [anon_sym_define] = ACTIONS(101),
    [anon_sym_function] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [aux_sym_literal_token1] = ACTIONS(101),
    [anon_sym_null] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_cast] = ACTIONS(101),
    [anon_sym_exists] = ACTIONS(101),
    [anon_sym_xor] = ACTIONS(101),
    [anon_sym_implies] = ACTIONS(101),
    [anon_sym_union] = ACTIONS(101),
    [anon_sym_intersect] = ACTIONS(101),
    [anon_sym_except] = ACTIONS(101),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(101),
    [anon_sym_months] = ACTIONS(101),
    [anon_sym_weeks] = ACTIONS(101),
    [anon_sym_days] = ACTIONS(101),
    [anon_sym_hours] = ACTIONS(101),
    [anon_sym_minutes] = ACTIONS(101),
    [anon_sym_seconds] = ACTIONS(101),
    [anon_sym_milliseconds] = ACTIONS(101),
    [anon_sym_date] = ACTIONS(101),
    [anon_sym_time] = ACTIONS(101),
    [anon_sym_timezone] = ACTIONS(101),
    [anon_sym_timezoneoffset] = ACTIONS(101),
    [anon_sym_duration] = ACTIONS(101),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_difference] = ACTIONS(101),
    [anon_sym_contains] = ACTIONS(101),
    [anon_sym_orbefore] = ACTIONS(103),
    [anon_sym_orafter] = ACTIONS(103),
    [anon_sym_ormore] = ACTIONS(103),
    [anon_sym_orless] = ACTIONS(103),
    [anon_sym_starts] = ACTIONS(101),
    [anon_sym_ends] = ACTIONS(101),
    [anon_sym_start] = ACTIONS(101),
    [anon_sym_end] = ACTIONS(101),
    [anon_sym_includes] = ACTIONS(101),
    [anon_sym_meets] = ACTIONS(101),
    [anon_sym_overlaps] = ACTIONS(101),
    [anon_sym_where] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_version] = ACTIONS(101),
    [sym_default_identifier] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_asc] = ACTIONS(101),
    [anon_sym_ascending] = ACTIONS(101),
    [anon_sym_by] = ACTIONS(101),
    [anon_sym_desc] = ACTIONS(101),
    [anon_sym_descending] = ACTIONS(101),
    [anon_sym_display] = ACTIONS(101),
    [anon_sym_div] = ACTIONS(101),
    [anon_sym_fluent] = ACTIONS(101),
    [anon_sym_mod] = ACTIONS(101),
    [anon_sym_predecessor] = ACTIONS(101),
    [anon_sym_starting] = ACTIONS(101),
    [anon_sym_successor] = ACTIONS(101),
    [anon_sym_width] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_library] = ACTIONS(141),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_called] = ACTIONS(141),
    [anon_sym_include] = ACTIONS(141),
    [anon_sym_valueset] = ACTIONS(141),
    [anon_sym_codesystems] = ACTIONS(141),
    [anon_sym_codesystem] = ACTIONS(141),
    [anon_sym_code] = ACTIONS(141),
    [anon_sym_from] = ACTIONS(141),
    [anon_sym_concept] = ACTIONS(141),
    [anon_sym_parameter] = ACTIONS(141),
    [anon_sym_default] = ACTIONS(141),
    [anon_sym_public] = ACTIONS(141),
    [anon_sym_private] = ACTIONS(141),
    [anon_sym_context] = ACTIONS(141),
    [anon_sym_define] = ACTIONS(141),
    [anon_sym_function] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [aux_sym_literal_token1] = ACTIONS(141),
    [anon_sym_null] = ACTIONS(141),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_cast] = ACTIONS(141),
    [anon_sym_exists] = ACTIONS(141),
    [anon_sym_xor] = ACTIONS(141),
    [anon_sym_implies] = ACTIONS(141),
    [anon_sym_union] = ACTIONS(141),
    [anon_sym_intersect] = ACTIONS(141),
    [anon_sym_except] = ACTIONS(141),
    [anon_sym_year] = ACTIONS(141),
    [anon_sym_month] = ACTIONS(141),
    [anon_sym_week] = ACTIONS(141),
    [anon_sym_day] = ACTIONS(141),
    [anon_sym_hour] = ACTIONS(141),
    [anon_sym_minute] = ACTIONS(141),
    [anon_sym_second] = ACTIONS(141),
    [anon_sym_millisecond] = ACTIONS(141),
    [anon_sym_years] = ACTIONS(141),
    [anon_sym_months] = ACTIONS(141),
    [anon_sym_weeks] = ACTIONS(141),
    [anon_sym_days] = ACTIONS(141),
    [anon_sym_hours] = ACTIONS(141),
    [anon_sym_minutes] = ACTIONS(141),
    [anon_sym_seconds] = ACTIONS(141),
    [anon_sym_milliseconds] = ACTIONS(141),
    [anon_sym_date] = ACTIONS(141),
    [anon_sym_time] = ACTIONS(141),
    [anon_sym_timezone] = ACTIONS(141),
    [anon_sym_timezoneoffset] = ACTIONS(141),
    [anon_sym_duration] = ACTIONS(141),
    [anon_sym_in] = ACTIONS(141),
    [anon_sym_difference] = ACTIONS(141),
    [anon_sym_contains] = ACTIONS(141),
    [anon_sym_orbefore] = ACTIONS(143),
    [anon_sym_orafter] = ACTIONS(143),
    [anon_sym_ormore] = ACTIONS(143),
    [anon_sym_orless] = ACTIONS(143),
    [anon_sym_oron] = ACTIONS(145),
    [anon_sym_starts] = ACTIONS(141),
    [anon_sym_ends] = ACTIONS(141),
    [anon_sym_start] = ACTIONS(141),
    [anon_sym_end] = ACTIONS(141),
    [anon_sym_includes] = ACTIONS(141),
    [anon_sym_meets] = ACTIONS(141),
    [anon_sym_overlaps] = ACTIONS(141),
    [anon_sym_where] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_version] = ACTIONS(141),
    [sym_default_identifier] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_asc] = ACTIONS(141),
    [anon_sym_ascending] = ACTIONS(141),
    [anon_sym_by] = ACTIONS(141),
    [anon_sym_desc] = ACTIONS(141),
    [anon_sym_descending] = ACTIONS(141),
    [anon_sym_display] = ACTIONS(141),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_fluent] = ACTIONS(141),
    [anon_sym_mod] = ACTIONS(141),
    [anon_sym_predecessor] = ACTIONS(141),
    [anon_sym_starting] = ACTIONS(141),
    [anon_sym_successor] = ACTIONS(141),
    [anon_sym_width] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [sym_number] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_library] = ACTIONS(147),
    [anon_sym_using] = ACTIONS(147),
    [anon_sym_called] = ACTIONS(147),
    [anon_sym_include] = ACTIONS(147),
    [anon_sym_valueset] = ACTIONS(147),
    [anon_sym_codesystems] = ACTIONS(147),
    [anon_sym_codesystem] = ACTIONS(147),
    [anon_sym_code] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_concept] = ACTIONS(147),
    [anon_sym_parameter] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
    [anon_sym_public] = ACTIONS(147),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_context] = ACTIONS(147),
    [anon_sym_define] = ACTIONS(147),
    [anon_sym_function] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [aux_sym_literal_token1] = ACTIONS(147),
    [anon_sym_null] = ACTIONS(147),
    [anon_sym_not] = ACTIONS(147),
    [anon_sym_cast] = ACTIONS(147),
    [anon_sym_exists] = ACTIONS(147),
    [anon_sym_xor] = ACTIONS(147),
    [anon_sym_implies] = ACTIONS(147),
    [anon_sym_union] = ACTIONS(147),
    [anon_sym_intersect] = ACTIONS(147),
    [anon_sym_except] = ACTIONS(147),
    [anon_sym_year] = ACTIONS(147),
    [anon_sym_month] = ACTIONS(147),
    [anon_sym_week] = ACTIONS(147),
    [anon_sym_day] = ACTIONS(147),
    [anon_sym_hour] = ACTIONS(147),
    [anon_sym_minute] = ACTIONS(147),
    [anon_sym_second] = ACTIONS(147),
    [anon_sym_millisecond] = ACTIONS(147),
    [anon_sym_years] = ACTIONS(147),
    [anon_sym_months] = ACTIONS(147),
    [anon_sym_weeks] = ACTIONS(147),
    [anon_sym_days] = ACTIONS(147),
    [anon_sym_hours] = ACTIONS(147),
    [anon_sym_minutes] = ACTIONS(147),
    [anon_sym_seconds] = ACTIONS(147),
    [anon_sym_milliseconds] = ACTIONS(147),
    [anon_sym_date] = ACTIONS(147),
    [anon_sym_time] = ACTIONS(147),
    [anon_sym_timezone] = ACTIONS(147),
    [anon_sym_timezoneoffset] = ACTIONS(147),
    [anon_sym_duration] = ACTIONS(147),
    [anon_sym_in] = ACTIONS(147),
    [anon_sym_difference] = ACTIONS(147),
    [anon_sym_contains] = ACTIONS(147),
    [anon_sym_orbefore] = ACTIONS(149),
    [anon_sym_orafter] = ACTIONS(149),
    [anon_sym_ormore] = ACTIONS(149),
    [anon_sym_orless] = ACTIONS(149),
    [anon_sym_starts] = ACTIONS(147),
    [anon_sym_ends] = ACTIONS(147),
    [anon_sym_start] = ACTIONS(147),
    [anon_sym_end] = ACTIONS(147),
    [anon_sym_includes] = ACTIONS(147),
    [anon_sym_meets] = ACTIONS(147),
    [anon_sym_overlaps] = ACTIONS(147),
    [anon_sym_where] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_version] = ACTIONS(147),
    [sym_default_identifier] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_asc] = ACTIONS(147),
    [anon_sym_ascending] = ACTIONS(147),
    [anon_sym_by] = ACTIONS(147),
    [anon_sym_desc] = ACTIONS(147),
    [anon_sym_descending] = ACTIONS(147),
    [anon_sym_display] = ACTIONS(147),
    [anon_sym_div] = ACTIONS(147),
    [anon_sym_fluent] = ACTIONS(147),
    [anon_sym_mod] = ACTIONS(147),
    [anon_sym_predecessor] = ACTIONS(147),
    [anon_sym_starting] = ACTIONS(147),
    [anon_sym_successor] = ACTIONS(147),
    [anon_sym_width] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [sym_number] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [anon_sym_library] = ACTIONS(151),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_called] = ACTIONS(151),
    [anon_sym_include] = ACTIONS(151),
    [anon_sym_valueset] = ACTIONS(151),
    [anon_sym_codesystems] = ACTIONS(151),
    [anon_sym_codesystem] = ACTIONS(151),
    [anon_sym_code] = ACTIONS(151),
    [anon_sym_from] = ACTIONS(151),
    [anon_sym_concept] = ACTIONS(151),
    [anon_sym_parameter] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_public] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_context] = ACTIONS(151),
    [anon_sym_define] = ACTIONS(151),
    [anon_sym_function] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [aux_sym_literal_token1] = ACTIONS(151),
    [anon_sym_null] = ACTIONS(151),
    [anon_sym_not] = ACTIONS(151),
    [anon_sym_cast] = ACTIONS(151),
    [anon_sym_exists] = ACTIONS(151),
    [anon_sym_xor] = ACTIONS(151),
    [anon_sym_implies] = ACTIONS(151),
    [anon_sym_union] = ACTIONS(151),
    [anon_sym_intersect] = ACTIONS(151),
    [anon_sym_except] = ACTIONS(151),
    [anon_sym_years] = ACTIONS(151),
    [anon_sym_months] = ACTIONS(151),
    [anon_sym_weeks] = ACTIONS(151),
    [anon_sym_days] = ACTIONS(151),
    [anon_sym_hours] = ACTIONS(151),
    [anon_sym_minutes] = ACTIONS(151),
    [anon_sym_seconds] = ACTIONS(151),
    [anon_sym_milliseconds] = ACTIONS(151),
    [anon_sym_date] = ACTIONS(151),
    [anon_sym_time] = ACTIONS(151),
    [anon_sym_timezone] = ACTIONS(151),
    [anon_sym_timezoneoffset] = ACTIONS(151),
    [anon_sym_duration] = ACTIONS(151),
    [anon_sym_in] = ACTIONS(151),
    [anon_sym_difference] = ACTIONS(151),
    [anon_sym_contains] = ACTIONS(151),
    [anon_sym_orbefore] = ACTIONS(153),
    [anon_sym_orafter] = ACTIONS(153),
    [anon_sym_ormore] = ACTIONS(153),
    [anon_sym_orless] = ACTIONS(153),
    [anon_sym_starts] = ACTIONS(151),
    [anon_sym_ends] = ACTIONS(151),
    [anon_sym_start] = ACTIONS(155),
    [anon_sym_end] = ACTIONS(155),
    [anon_sym_includes] = ACTIONS(151),
    [anon_sym_meets] = ACTIONS(151),
    [anon_sym_overlaps] = ACTIONS(151),
    [anon_sym_where] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_version] = ACTIONS(151),
    [sym_default_identifier] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_asc] = ACTIONS(151),
    [anon_sym_ascending] = ACTIONS(151),
    [anon_sym_by] = ACTIONS(151),
    [anon_sym_desc] = ACTIONS(151),
    [anon_sym_descending] = ACTIONS(151),
    [anon_sym_display] = ACTIONS(151),
    [anon_sym_div] = ACTIONS(151),
    [anon_sym_fluent] = ACTIONS(151),
    [anon_sym_mod] = ACTIONS(151),
    [anon_sym_predecessor] = ACTIONS(151),
    [anon_sym_starting] = ACTIONS(151),
    [anon_sym_successor] = ACTIONS(151),
    [anon_sym_width] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [anon_sym_library] = ACTIONS(134),
    [anon_sym_using] = ACTIONS(134),
    [anon_sym_called] = ACTIONS(134),
    [anon_sym_include] = ACTIONS(134),
    [anon_sym_valueset] = ACTIONS(134),
    [anon_sym_codesystems] = ACTIONS(134),
    [anon_sym_codesystem] = ACTIONS(134),
    [anon_sym_code] = ACTIONS(134),
    [anon_sym_from] = ACTIONS(134),
    [anon_sym_concept] = ACTIONS(134),
    [anon_sym_parameter] = ACTIONS(134),
    [anon_sym_default] = ACTIONS(134),
    [anon_sym_public] = ACTIONS(134),
    [anon_sym_private] = ACTIONS(134),
    [anon_sym_context] = ACTIONS(134),
    [anon_sym_define] = ACTIONS(134),
    [anon_sym_function] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(136),
    [aux_sym_literal_token1] = ACTIONS(134),
    [anon_sym_null] = ACTIONS(134),
    [anon_sym_not] = ACTIONS(134),
    [anon_sym_cast] = ACTIONS(134),
    [anon_sym_exists] = ACTIONS(134),
    [anon_sym_xor] = ACTIONS(134),
    [anon_sym_implies] = ACTIONS(134),
    [anon_sym_union] = ACTIONS(134),
    [anon_sym_intersect] = ACTIONS(134),
    [anon_sym_except] = ACTIONS(134),
    [anon_sym_years] = ACTIONS(134),
    [anon_sym_months] = ACTIONS(134),
    [anon_sym_weeks] = ACTIONS(134),
    [anon_sym_days] = ACTIONS(134),
    [anon_sym_hours] = ACTIONS(134),
    [anon_sym_minutes] = ACTIONS(134),
    [anon_sym_seconds] = ACTIONS(134),
    [anon_sym_milliseconds] = ACTIONS(134),
    [anon_sym_date] = ACTIONS(134),
    [anon_sym_time] = ACTIONS(134),
    [anon_sym_timezone] = ACTIONS(134),
    [anon_sym_timezoneoffset] = ACTIONS(134),
    [anon_sym_duration] = ACTIONS(134),
    [anon_sym_in] = ACTIONS(134),
    [anon_sym_difference] = ACTIONS(134),
    [anon_sym_contains] = ACTIONS(134),
    [anon_sym_orbefore] = ACTIONS(136),
    [anon_sym_orafter] = ACTIONS(136),
    [anon_sym_ormore] = ACTIONS(136),
    [anon_sym_orless] = ACTIONS(136),
    [anon_sym_starts] = ACTIONS(134),
    [anon_sym_ends] = ACTIONS(134),
    [anon_sym_start] = ACTIONS(138),
    [anon_sym_end] = ACTIONS(138),
    [anon_sym_includes] = ACTIONS(134),
    [anon_sym_meets] = ACTIONS(134),
    [anon_sym_overlaps] = ACTIONS(134),
    [anon_sym_where] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_version] = ACTIONS(134),
    [sym_default_identifier] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_asc] = ACTIONS(134),
    [anon_sym_ascending] = ACTIONS(134),
    [anon_sym_by] = ACTIONS(134),
    [anon_sym_desc] = ACTIONS(134),
    [anon_sym_descending] = ACTIONS(134),
    [anon_sym_display] = ACTIONS(134),
    [anon_sym_div] = ACTIONS(134),
    [anon_sym_fluent] = ACTIONS(134),
    [anon_sym_mod] = ACTIONS(134),
    [anon_sym_predecessor] = ACTIONS(134),
    [anon_sym_starting] = ACTIONS(134),
    [anon_sym_successor] = ACTIONS(134),
    [anon_sym_width] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [sym_number] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_library] = ACTIONS(158),
    [anon_sym_using] = ACTIONS(158),
    [anon_sym_called] = ACTIONS(158),
    [anon_sym_include] = ACTIONS(158),
    [anon_sym_valueset] = ACTIONS(158),
    [anon_sym_codesystems] = ACTIONS(158),
    [anon_sym_codesystem] = ACTIONS(158),
    [anon_sym_code] = ACTIONS(158),
    [anon_sym_from] = ACTIONS(158),
    [anon_sym_concept] = ACTIONS(158),
    [anon_sym_parameter] = ACTIONS(158),
    [anon_sym_default] = ACTIONS(158),
    [anon_sym_public] = ACTIONS(158),
    [anon_sym_private] = ACTIONS(158),
    [anon_sym_context] = ACTIONS(158),
    [anon_sym_define] = ACTIONS(158),
    [anon_sym_function] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(160),
    [aux_sym_literal_token1] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(158),
    [anon_sym_not] = ACTIONS(158),
    [anon_sym_cast] = ACTIONS(158),
    [anon_sym_exists] = ACTIONS(158),
    [anon_sym_xor] = ACTIONS(158),
    [anon_sym_implies] = ACTIONS(158),
    [anon_sym_union] = ACTIONS(158),
    [anon_sym_intersect] = ACTIONS(158),
    [anon_sym_except] = ACTIONS(158),
    [anon_sym_years] = ACTIONS(158),
    [anon_sym_months] = ACTIONS(158),
    [anon_sym_weeks] = ACTIONS(158),
    [anon_sym_days] = ACTIONS(158),
    [anon_sym_hours] = ACTIONS(158),
    [anon_sym_minutes] = ACTIONS(158),
    [anon_sym_seconds] = ACTIONS(158),
    [anon_sym_milliseconds] = ACTIONS(158),
    [anon_sym_date] = ACTIONS(158),
    [anon_sym_time] = ACTIONS(158),
    [anon_sym_timezone] = ACTIONS(158),
    [anon_sym_timezoneoffset] = ACTIONS(158),
    [anon_sym_duration] = ACTIONS(158),
    [anon_sym_in] = ACTIONS(158),
    [anon_sym_difference] = ACTIONS(158),
    [anon_sym_contains] = ACTIONS(158),
    [anon_sym_orbefore] = ACTIONS(160),
    [anon_sym_orafter] = ACTIONS(160),
    [anon_sym_ormore] = ACTIONS(160),
    [anon_sym_orless] = ACTIONS(160),
    [anon_sym_starts] = ACTIONS(158),
    [anon_sym_ends] = ACTIONS(158),
    [anon_sym_start] = ACTIONS(158),
    [anon_sym_end] = ACTIONS(158),
    [anon_sym_includes] = ACTIONS(158),
    [anon_sym_meets] = ACTIONS(158),
    [anon_sym_overlaps] = ACTIONS(158),
    [anon_sym_where] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_version] = ACTIONS(158),
    [sym_default_identifier] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_asc] = ACTIONS(158),
    [anon_sym_ascending] = ACTIONS(158),
    [anon_sym_by] = ACTIONS(158),
    [anon_sym_desc] = ACTIONS(158),
    [anon_sym_descending] = ACTIONS(158),
    [anon_sym_display] = ACTIONS(158),
    [anon_sym_div] = ACTIONS(158),
    [anon_sym_fluent] = ACTIONS(158),
    [anon_sym_mod] = ACTIONS(158),
    [anon_sym_predecessor] = ACTIONS(158),
    [anon_sym_starting] = ACTIONS(158),
    [anon_sym_successor] = ACTIONS(158),
    [anon_sym_width] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [sym_number] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [anon_sym_library] = ACTIONS(162),
    [anon_sym_using] = ACTIONS(162),
    [anon_sym_called] = ACTIONS(162),
    [anon_sym_include] = ACTIONS(162),
    [anon_sym_valueset] = ACTIONS(162),
    [anon_sym_codesystems] = ACTIONS(162),
    [anon_sym_codesystem] = ACTIONS(162),
    [anon_sym_code] = ACTIONS(162),
    [anon_sym_from] = ACTIONS(162),
    [anon_sym_concept] = ACTIONS(162),
    [anon_sym_parameter] = ACTIONS(162),
    [anon_sym_default] = ACTIONS(162),
    [anon_sym_public] = ACTIONS(162),
    [anon_sym_private] = ACTIONS(162),
    [anon_sym_context] = ACTIONS(162),
    [anon_sym_define] = ACTIONS(162),
    [anon_sym_function] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(164),
    [aux_sym_literal_token1] = ACTIONS(162),
    [anon_sym_null] = ACTIONS(162),
    [anon_sym_not] = ACTIONS(162),
    [anon_sym_cast] = ACTIONS(162),
    [anon_sym_exists] = ACTIONS(162),
    [anon_sym_xor] = ACTIONS(162),
    [anon_sym_implies] = ACTIONS(162),
    [anon_sym_union] = ACTIONS(162),
    [anon_sym_intersect] = ACTIONS(162),
    [anon_sym_except] = ACTIONS(162),
    [anon_sym_years] = ACTIONS(162),
    [anon_sym_months] = ACTIONS(162),
    [anon_sym_weeks] = ACTIONS(162),
    [anon_sym_days] = ACTIONS(162),
    [anon_sym_hours] = ACTIONS(162),
    [anon_sym_minutes] = ACTIONS(162),
    [anon_sym_seconds] = ACTIONS(162),
    [anon_sym_milliseconds] = ACTIONS(162),
    [anon_sym_date] = ACTIONS(162),
    [anon_sym_time] = ACTIONS(162),
    [anon_sym_timezone] = ACTIONS(162),
    [anon_sym_timezoneoffset] = ACTIONS(162),
    [anon_sym_duration] = ACTIONS(162),
    [anon_sym_in] = ACTIONS(162),
    [anon_sym_difference] = ACTIONS(162),
    [anon_sym_contains] = ACTIONS(162),
    [anon_sym_orbefore] = ACTIONS(164),
    [anon_sym_orafter] = ACTIONS(164),
    [anon_sym_ormore] = ACTIONS(164),
    [anon_sym_orless] = ACTIONS(164),
    [anon_sym_starts] = ACTIONS(162),
    [anon_sym_ends] = ACTIONS(162),
    [anon_sym_start] = ACTIONS(162),
    [anon_sym_end] = ACTIONS(162),
    [anon_sym_includes] = ACTIONS(162),
    [anon_sym_meets] = ACTIONS(162),
    [anon_sym_overlaps] = ACTIONS(162),
    [anon_sym_where] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_version] = ACTIONS(162),
    [sym_default_identifier] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_asc] = ACTIONS(162),
    [anon_sym_ascending] = ACTIONS(162),
    [anon_sym_by] = ACTIONS(162),
    [anon_sym_desc] = ACTIONS(162),
    [anon_sym_descending] = ACTIONS(162),
    [anon_sym_display] = ACTIONS(162),
    [anon_sym_div] = ACTIONS(162),
    [anon_sym_fluent] = ACTIONS(162),
    [anon_sym_mod] = ACTIONS(162),
    [anon_sym_predecessor] = ACTIONS(162),
    [anon_sym_starting] = ACTIONS(162),
    [anon_sym_successor] = ACTIONS(162),
    [anon_sym_width] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [sym_number] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [anon_sym_library] = ACTIONS(166),
    [anon_sym_using] = ACTIONS(166),
    [anon_sym_called] = ACTIONS(166),
    [anon_sym_include] = ACTIONS(166),
    [anon_sym_valueset] = ACTIONS(166),
    [anon_sym_codesystems] = ACTIONS(166),
    [anon_sym_codesystem] = ACTIONS(166),
    [anon_sym_code] = ACTIONS(166),
    [anon_sym_from] = ACTIONS(166),
    [anon_sym_concept] = ACTIONS(166),
    [anon_sym_parameter] = ACTIONS(166),
    [anon_sym_default] = ACTIONS(166),
    [anon_sym_public] = ACTIONS(166),
    [anon_sym_private] = ACTIONS(166),
    [anon_sym_context] = ACTIONS(166),
    [anon_sym_define] = ACTIONS(166),
    [anon_sym_function] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(168),
    [aux_sym_literal_token1] = ACTIONS(166),
    [anon_sym_null] = ACTIONS(166),
    [anon_sym_not] = ACTIONS(166),
    [anon_sym_cast] = ACTIONS(166),
    [anon_sym_exists] = ACTIONS(166),
    [anon_sym_xor] = ACTIONS(166),
    [anon_sym_implies] = ACTIONS(166),
    [anon_sym_union] = ACTIONS(166),
    [anon_sym_intersect] = ACTIONS(166),
    [anon_sym_except] = ACTIONS(166),
    [anon_sym_years] = ACTIONS(166),
    [anon_sym_months] = ACTIONS(166),
    [anon_sym_weeks] = ACTIONS(166),
    [anon_sym_days] = ACTIONS(166),
    [anon_sym_hours] = ACTIONS(166),
    [anon_sym_minutes] = ACTIONS(166),
    [anon_sym_seconds] = ACTIONS(166),
    [anon_sym_milliseconds] = ACTIONS(166),
    [anon_sym_date] = ACTIONS(166),
    [anon_sym_time] = ACTIONS(166),
    [anon_sym_timezone] = ACTIONS(166),
    [anon_sym_timezoneoffset] = ACTIONS(166),
    [anon_sym_duration] = ACTIONS(166),
    [anon_sym_in] = ACTIONS(166),
    [anon_sym_difference] = ACTIONS(166),
    [anon_sym_contains] = ACTIONS(166),
    [anon_sym_orbefore] = ACTIONS(168),
    [anon_sym_orafter] = ACTIONS(168),
    [anon_sym_ormore] = ACTIONS(168),
    [anon_sym_orless] = ACTIONS(168),
    [anon_sym_starts] = ACTIONS(166),
    [anon_sym_ends] = ACTIONS(166),
    [anon_sym_start] = ACTIONS(166),
    [anon_sym_end] = ACTIONS(166),
    [anon_sym_includes] = ACTIONS(166),
    [anon_sym_meets] = ACTIONS(166),
    [anon_sym_overlaps] = ACTIONS(166),
    [anon_sym_where] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_version] = ACTIONS(166),
    [sym_default_identifier] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [anon_sym_asc] = ACTIONS(166),
    [anon_sym_ascending] = ACTIONS(166),
    [anon_sym_by] = ACTIONS(166),
    [anon_sym_desc] = ACTIONS(166),
    [anon_sym_descending] = ACTIONS(166),
    [anon_sym_display] = ACTIONS(166),
    [anon_sym_div] = ACTIONS(166),
    [anon_sym_fluent] = ACTIONS(166),
    [anon_sym_mod] = ACTIONS(166),
    [anon_sym_predecessor] = ACTIONS(166),
    [anon_sym_starting] = ACTIONS(166),
    [anon_sym_successor] = ACTIONS(166),
    [anon_sym_width] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [anon_sym_library] = ACTIONS(124),
    [anon_sym_using] = ACTIONS(124),
    [anon_sym_called] = ACTIONS(124),
    [anon_sym_include] = ACTIONS(124),
    [anon_sym_valueset] = ACTIONS(124),
    [anon_sym_codesystems] = ACTIONS(124),
    [anon_sym_codesystem] = ACTIONS(124),
    [anon_sym_code] = ACTIONS(124),
    [anon_sym_from] = ACTIONS(124),
    [anon_sym_concept] = ACTIONS(124),
    [anon_sym_parameter] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
    [anon_sym_public] = ACTIONS(124),
    [anon_sym_private] = ACTIONS(124),
    [anon_sym_context] = ACTIONS(124),
    [anon_sym_define] = ACTIONS(124),
    [anon_sym_function] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [aux_sym_literal_token1] = ACTIONS(124),
    [anon_sym_null] = ACTIONS(124),
    [anon_sym_not] = ACTIONS(124),
    [anon_sym_cast] = ACTIONS(124),
    [anon_sym_exists] = ACTIONS(124),
    [anon_sym_xor] = ACTIONS(124),
    [anon_sym_implies] = ACTIONS(124),
    [anon_sym_union] = ACTIONS(124),
    [anon_sym_intersect] = ACTIONS(124),
    [anon_sym_except] = ACTIONS(124),
    [anon_sym_years] = ACTIONS(124),
    [anon_sym_months] = ACTIONS(124),
    [anon_sym_weeks] = ACTIONS(124),
    [anon_sym_days] = ACTIONS(124),
    [anon_sym_hours] = ACTIONS(124),
    [anon_sym_minutes] = ACTIONS(124),
    [anon_sym_seconds] = ACTIONS(124),
    [anon_sym_milliseconds] = ACTIONS(124),
    [anon_sym_date] = ACTIONS(124),
    [anon_sym_time] = ACTIONS(124),
    [anon_sym_timezone] = ACTIONS(124),
    [anon_sym_timezoneoffset] = ACTIONS(124),
    [anon_sym_duration] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_difference] = ACTIONS(124),
    [anon_sym_contains] = ACTIONS(124),
    [anon_sym_orbefore] = ACTIONS(126),
    [anon_sym_orafter] = ACTIONS(126),
    [anon_sym_ormore] = ACTIONS(126),
    [anon_sym_orless] = ACTIONS(126),
    [anon_sym_starts] = ACTIONS(124),
    [anon_sym_ends] = ACTIONS(124),
    [anon_sym_start] = ACTIONS(128),
    [anon_sym_end] = ACTIONS(128),
    [anon_sym_includes] = ACTIONS(124),
    [anon_sym_meets] = ACTIONS(124),
    [anon_sym_overlaps] = ACTIONS(124),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_version] = ACTIONS(124),
    [sym_default_identifier] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_asc] = ACTIONS(124),
    [anon_sym_ascending] = ACTIONS(124),
    [anon_sym_by] = ACTIONS(124),
    [anon_sym_desc] = ACTIONS(124),
    [anon_sym_descending] = ACTIONS(124),
    [anon_sym_display] = ACTIONS(124),
    [anon_sym_div] = ACTIONS(124),
    [anon_sym_fluent] = ACTIONS(124),
    [anon_sym_mod] = ACTIONS(124),
    [anon_sym_predecessor] = ACTIONS(124),
    [anon_sym_starting] = ACTIONS(124),
    [anon_sym_successor] = ACTIONS(124),
    [anon_sym_width] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_library] = ACTIONS(124),
    [anon_sym_using] = ACTIONS(124),
    [anon_sym_called] = ACTIONS(124),
    [anon_sym_include] = ACTIONS(124),
    [anon_sym_valueset] = ACTIONS(124),
    [anon_sym_codesystems] = ACTIONS(124),
    [anon_sym_codesystem] = ACTIONS(124),
    [anon_sym_code] = ACTIONS(124),
    [anon_sym_from] = ACTIONS(124),
    [anon_sym_concept] = ACTIONS(124),
    [anon_sym_parameter] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
    [anon_sym_public] = ACTIONS(124),
    [anon_sym_private] = ACTIONS(124),
    [anon_sym_context] = ACTIONS(124),
    [anon_sym_define] = ACTIONS(124),
    [anon_sym_function] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [aux_sym_literal_token1] = ACTIONS(124),
    [anon_sym_null] = ACTIONS(124),
    [anon_sym_not] = ACTIONS(124),
    [anon_sym_cast] = ACTIONS(124),
    [anon_sym_exists] = ACTIONS(124),
    [anon_sym_xor] = ACTIONS(124),
    [anon_sym_implies] = ACTIONS(124),
    [anon_sym_union] = ACTIONS(124),
    [anon_sym_intersect] = ACTIONS(124),
    [anon_sym_except] = ACTIONS(124),
    [anon_sym_years] = ACTIONS(124),
    [anon_sym_months] = ACTIONS(124),
    [anon_sym_weeks] = ACTIONS(124),
    [anon_sym_days] = ACTIONS(124),
    [anon_sym_hours] = ACTIONS(124),
    [anon_sym_minutes] = ACTIONS(124),
    [anon_sym_seconds] = ACTIONS(124),
    [anon_sym_milliseconds] = ACTIONS(124),
    [anon_sym_date] = ACTIONS(124),
    [anon_sym_time] = ACTIONS(124),
    [anon_sym_timezone] = ACTIONS(124),
    [anon_sym_timezoneoffset] = ACTIONS(124),
    [anon_sym_duration] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_difference] = ACTIONS(124),
    [anon_sym_contains] = ACTIONS(124),
    [anon_sym_orbefore] = ACTIONS(126),
    [anon_sym_orafter] = ACTIONS(126),
    [anon_sym_ormore] = ACTIONS(126),
    [anon_sym_orless] = ACTIONS(126),
    [anon_sym_starts] = ACTIONS(124),
    [anon_sym_ends] = ACTIONS(124),
    [anon_sym_start] = ACTIONS(124),
    [anon_sym_end] = ACTIONS(124),
    [anon_sym_includes] = ACTIONS(124),
    [anon_sym_meets] = ACTIONS(124),
    [anon_sym_overlaps] = ACTIONS(124),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_version] = ACTIONS(124),
    [sym_default_identifier] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_asc] = ACTIONS(124),
    [anon_sym_ascending] = ACTIONS(124),
    [anon_sym_by] = ACTIONS(124),
    [anon_sym_desc] = ACTIONS(124),
    [anon_sym_descending] = ACTIONS(124),
    [anon_sym_display] = ACTIONS(124),
    [anon_sym_div] = ACTIONS(124),
    [anon_sym_fluent] = ACTIONS(124),
    [anon_sym_mod] = ACTIONS(124),
    [anon_sym_predecessor] = ACTIONS(124),
    [anon_sym_starting] = ACTIONS(124),
    [anon_sym_successor] = ACTIONS(124),
    [anon_sym_width] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [anon_sym_library] = ACTIONS(134),
    [anon_sym_using] = ACTIONS(134),
    [anon_sym_called] = ACTIONS(134),
    [anon_sym_include] = ACTIONS(134),
    [anon_sym_valueset] = ACTIONS(134),
    [anon_sym_codesystems] = ACTIONS(134),
    [anon_sym_codesystem] = ACTIONS(134),
    [anon_sym_code] = ACTIONS(134),
    [anon_sym_from] = ACTIONS(134),
    [anon_sym_concept] = ACTIONS(134),
    [anon_sym_parameter] = ACTIONS(134),
    [anon_sym_default] = ACTIONS(134),
    [anon_sym_public] = ACTIONS(134),
    [anon_sym_private] = ACTIONS(134),
    [anon_sym_context] = ACTIONS(134),
    [anon_sym_define] = ACTIONS(134),
    [anon_sym_function] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(136),
    [aux_sym_literal_token1] = ACTIONS(134),
    [anon_sym_null] = ACTIONS(134),
    [anon_sym_not] = ACTIONS(134),
    [anon_sym_cast] = ACTIONS(134),
    [anon_sym_exists] = ACTIONS(134),
    [anon_sym_xor] = ACTIONS(134),
    [anon_sym_implies] = ACTIONS(134),
    [anon_sym_union] = ACTIONS(134),
    [anon_sym_intersect] = ACTIONS(134),
    [anon_sym_except] = ACTIONS(134),
    [anon_sym_years] = ACTIONS(134),
    [anon_sym_months] = ACTIONS(134),
    [anon_sym_weeks] = ACTIONS(134),
    [anon_sym_days] = ACTIONS(134),
    [anon_sym_hours] = ACTIONS(134),
    [anon_sym_minutes] = ACTIONS(134),
    [anon_sym_seconds] = ACTIONS(134),
    [anon_sym_milliseconds] = ACTIONS(134),
    [anon_sym_date] = ACTIONS(134),
    [anon_sym_time] = ACTIONS(134),
    [anon_sym_timezone] = ACTIONS(134),
    [anon_sym_timezoneoffset] = ACTIONS(134),
    [anon_sym_duration] = ACTIONS(134),
    [anon_sym_in] = ACTIONS(134),
    [anon_sym_difference] = ACTIONS(134),
    [anon_sym_contains] = ACTIONS(134),
    [anon_sym_orbefore] = ACTIONS(136),
    [anon_sym_orafter] = ACTIONS(136),
    [anon_sym_ormore] = ACTIONS(136),
    [anon_sym_orless] = ACTIONS(136),
    [anon_sym_starts] = ACTIONS(134),
    [anon_sym_ends] = ACTIONS(134),
    [anon_sym_start] = ACTIONS(134),
    [anon_sym_end] = ACTIONS(134),
    [anon_sym_includes] = ACTIONS(134),
    [anon_sym_meets] = ACTIONS(134),
    [anon_sym_overlaps] = ACTIONS(134),
    [anon_sym_where] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_version] = ACTIONS(134),
    [sym_default_identifier] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_asc] = ACTIONS(134),
    [anon_sym_ascending] = ACTIONS(134),
    [anon_sym_by] = ACTIONS(134),
    [anon_sym_desc] = ACTIONS(134),
    [anon_sym_descending] = ACTIONS(134),
    [anon_sym_display] = ACTIONS(134),
    [anon_sym_div] = ACTIONS(134),
    [anon_sym_fluent] = ACTIONS(134),
    [anon_sym_mod] = ACTIONS(134),
    [anon_sym_predecessor] = ACTIONS(134),
    [anon_sym_starting] = ACTIONS(134),
    [anon_sym_successor] = ACTIONS(134),
    [anon_sym_width] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [sym_number] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [anon_sym_library] = ACTIONS(170),
    [anon_sym_using] = ACTIONS(170),
    [anon_sym_called] = ACTIONS(170),
    [anon_sym_include] = ACTIONS(170),
    [anon_sym_valueset] = ACTIONS(170),
    [anon_sym_codesystems] = ACTIONS(170),
    [anon_sym_codesystem] = ACTIONS(170),
    [anon_sym_code] = ACTIONS(170),
    [anon_sym_from] = ACTIONS(170),
    [anon_sym_concept] = ACTIONS(170),
    [anon_sym_parameter] = ACTIONS(170),
    [anon_sym_default] = ACTIONS(170),
    [anon_sym_public] = ACTIONS(170),
    [anon_sym_private] = ACTIONS(170),
    [anon_sym_context] = ACTIONS(170),
    [anon_sym_define] = ACTIONS(170),
    [anon_sym_function] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [aux_sym_literal_token1] = ACTIONS(170),
    [anon_sym_null] = ACTIONS(170),
    [anon_sym_not] = ACTIONS(170),
    [anon_sym_cast] = ACTIONS(170),
    [anon_sym_exists] = ACTIONS(170),
    [anon_sym_xor] = ACTIONS(170),
    [anon_sym_implies] = ACTIONS(170),
    [anon_sym_union] = ACTIONS(170),
    [anon_sym_intersect] = ACTIONS(170),
    [anon_sym_except] = ACTIONS(170),
    [anon_sym_years] = ACTIONS(170),
    [anon_sym_months] = ACTIONS(170),
    [anon_sym_weeks] = ACTIONS(170),
    [anon_sym_days] = ACTIONS(170),
    [anon_sym_hours] = ACTIONS(170),
    [anon_sym_minutes] = ACTIONS(170),
    [anon_sym_seconds] = ACTIONS(170),
    [anon_sym_milliseconds] = ACTIONS(170),
    [anon_sym_date] = ACTIONS(170),
    [anon_sym_time] = ACTIONS(170),
    [anon_sym_timezone] = ACTIONS(170),
    [anon_sym_timezoneoffset] = ACTIONS(170),
    [anon_sym_duration] = ACTIONS(170),
    [anon_sym_in] = ACTIONS(170),
    [anon_sym_difference] = ACTIONS(170),
    [anon_sym_contains] = ACTIONS(170),
    [anon_sym_orbefore] = ACTIONS(172),
    [anon_sym_orafter] = ACTIONS(172),
    [anon_sym_ormore] = ACTIONS(172),
    [anon_sym_orless] = ACTIONS(172),
    [anon_sym_starts] = ACTIONS(170),
    [anon_sym_ends] = ACTIONS(170),
    [anon_sym_start] = ACTIONS(170),
    [anon_sym_end] = ACTIONS(170),
    [anon_sym_includes] = ACTIONS(170),
    [anon_sym_meets] = ACTIONS(170),
    [anon_sym_overlaps] = ACTIONS(170),
    [anon_sym_where] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_version] = ACTIONS(170),
    [sym_default_identifier] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_asc] = ACTIONS(170),
    [anon_sym_ascending] = ACTIONS(170),
    [anon_sym_by] = ACTIONS(170),
    [anon_sym_desc] = ACTIONS(170),
    [anon_sym_descending] = ACTIONS(170),
    [anon_sym_display] = ACTIONS(170),
    [anon_sym_div] = ACTIONS(170),
    [anon_sym_fluent] = ACTIONS(170),
    [anon_sym_mod] = ACTIONS(170),
    [anon_sym_predecessor] = ACTIONS(170),
    [anon_sym_starting] = ACTIONS(170),
    [anon_sym_successor] = ACTIONS(170),
    [anon_sym_width] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [sym_number] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [anon_sym_library] = ACTIONS(162),
    [anon_sym_using] = ACTIONS(162),
    [anon_sym_called] = ACTIONS(162),
    [anon_sym_include] = ACTIONS(162),
    [anon_sym_valueset] = ACTIONS(162),
    [anon_sym_codesystems] = ACTIONS(162),
    [anon_sym_codesystem] = ACTIONS(162),
    [anon_sym_code] = ACTIONS(162),
    [anon_sym_from] = ACTIONS(162),
    [anon_sym_concept] = ACTIONS(162),
    [anon_sym_parameter] = ACTIONS(162),
    [anon_sym_default] = ACTIONS(162),
    [anon_sym_public] = ACTIONS(162),
    [anon_sym_private] = ACTIONS(162),
    [anon_sym_context] = ACTIONS(162),
    [anon_sym_define] = ACTIONS(162),
    [anon_sym_function] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(164),
    [aux_sym_literal_token1] = ACTIONS(162),
    [anon_sym_null] = ACTIONS(162),
    [anon_sym_not] = ACTIONS(162),
    [anon_sym_cast] = ACTIONS(162),
    [anon_sym_exists] = ACTIONS(162),
    [anon_sym_xor] = ACTIONS(162),
    [anon_sym_implies] = ACTIONS(162),
    [anon_sym_union] = ACTIONS(162),
    [anon_sym_intersect] = ACTIONS(162),
    [anon_sym_except] = ACTIONS(162),
    [anon_sym_years] = ACTIONS(162),
    [anon_sym_months] = ACTIONS(162),
    [anon_sym_weeks] = ACTIONS(162),
    [anon_sym_days] = ACTIONS(162),
    [anon_sym_hours] = ACTIONS(162),
    [anon_sym_minutes] = ACTIONS(162),
    [anon_sym_seconds] = ACTIONS(162),
    [anon_sym_milliseconds] = ACTIONS(162),
    [anon_sym_date] = ACTIONS(162),
    [anon_sym_time] = ACTIONS(162),
    [anon_sym_timezone] = ACTIONS(162),
    [anon_sym_timezoneoffset] = ACTIONS(162),
    [anon_sym_duration] = ACTIONS(162),
    [anon_sym_in] = ACTIONS(162),
    [anon_sym_difference] = ACTIONS(162),
    [anon_sym_contains] = ACTIONS(162),
    [anon_sym_orbefore] = ACTIONS(164),
    [anon_sym_orafter] = ACTIONS(164),
    [anon_sym_ormore] = ACTIONS(164),
    [anon_sym_orless] = ACTIONS(164),
    [anon_sym_starts] = ACTIONS(162),
    [anon_sym_ends] = ACTIONS(162),
    [anon_sym_start] = ACTIONS(174),
    [anon_sym_end] = ACTIONS(174),
    [anon_sym_includes] = ACTIONS(162),
    [anon_sym_meets] = ACTIONS(162),
    [anon_sym_overlaps] = ACTIONS(162),
    [anon_sym_where] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_version] = ACTIONS(162),
    [sym_default_identifier] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_asc] = ACTIONS(162),
    [anon_sym_ascending] = ACTIONS(162),
    [anon_sym_by] = ACTIONS(162),
    [anon_sym_desc] = ACTIONS(162),
    [anon_sym_descending] = ACTIONS(162),
    [anon_sym_display] = ACTIONS(162),
    [anon_sym_div] = ACTIONS(162),
    [anon_sym_fluent] = ACTIONS(162),
    [anon_sym_mod] = ACTIONS(162),
    [anon_sym_predecessor] = ACTIONS(162),
    [anon_sym_starting] = ACTIONS(162),
    [anon_sym_successor] = ACTIONS(162),
    [anon_sym_width] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [sym_number] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [anon_sym_library] = ACTIONS(151),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_called] = ACTIONS(151),
    [anon_sym_include] = ACTIONS(151),
    [anon_sym_valueset] = ACTIONS(151),
    [anon_sym_codesystems] = ACTIONS(151),
    [anon_sym_codesystem] = ACTIONS(151),
    [anon_sym_code] = ACTIONS(151),
    [anon_sym_from] = ACTIONS(151),
    [anon_sym_concept] = ACTIONS(151),
    [anon_sym_parameter] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_public] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_context] = ACTIONS(151),
    [anon_sym_define] = ACTIONS(151),
    [anon_sym_function] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [aux_sym_literal_token1] = ACTIONS(151),
    [anon_sym_null] = ACTIONS(151),
    [anon_sym_not] = ACTIONS(151),
    [anon_sym_cast] = ACTIONS(151),
    [anon_sym_exists] = ACTIONS(151),
    [anon_sym_xor] = ACTIONS(151),
    [anon_sym_implies] = ACTIONS(151),
    [anon_sym_union] = ACTIONS(151),
    [anon_sym_intersect] = ACTIONS(151),
    [anon_sym_except] = ACTIONS(151),
    [anon_sym_years] = ACTIONS(151),
    [anon_sym_months] = ACTIONS(151),
    [anon_sym_weeks] = ACTIONS(151),
    [anon_sym_days] = ACTIONS(151),
    [anon_sym_hours] = ACTIONS(151),
    [anon_sym_minutes] = ACTIONS(151),
    [anon_sym_seconds] = ACTIONS(151),
    [anon_sym_milliseconds] = ACTIONS(151),
    [anon_sym_date] = ACTIONS(151),
    [anon_sym_time] = ACTIONS(151),
    [anon_sym_timezone] = ACTIONS(151),
    [anon_sym_timezoneoffset] = ACTIONS(151),
    [anon_sym_duration] = ACTIONS(151),
    [anon_sym_in] = ACTIONS(151),
    [anon_sym_difference] = ACTIONS(151),
    [anon_sym_contains] = ACTIONS(151),
    [anon_sym_orbefore] = ACTIONS(153),
    [anon_sym_orafter] = ACTIONS(153),
    [anon_sym_ormore] = ACTIONS(153),
    [anon_sym_orless] = ACTIONS(153),
    [anon_sym_starts] = ACTIONS(151),
    [anon_sym_ends] = ACTIONS(151),
    [anon_sym_start] = ACTIONS(151),
    [anon_sym_end] = ACTIONS(151),
    [anon_sym_includes] = ACTIONS(151),
    [anon_sym_meets] = ACTIONS(151),
    [anon_sym_overlaps] = ACTIONS(151),
    [anon_sym_where] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_version] = ACTIONS(151),
    [sym_default_identifier] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_asc] = ACTIONS(151),
    [anon_sym_ascending] = ACTIONS(151),
    [anon_sym_by] = ACTIONS(151),
    [anon_sym_desc] = ACTIONS(151),
    [anon_sym_descending] = ACTIONS(151),
    [anon_sym_display] = ACTIONS(151),
    [anon_sym_div] = ACTIONS(151),
    [anon_sym_fluent] = ACTIONS(151),
    [anon_sym_mod] = ACTIONS(151),
    [anon_sym_predecessor] = ACTIONS(151),
    [anon_sym_starting] = ACTIONS(151),
    [anon_sym_successor] = ACTIONS(151),
    [anon_sym_width] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [sym_date_time_precision] = STATE(129),
    [sym_plural_date_time_precision] = STATE(129),
    [sym_string] = STATE(129),
    [sym_unit] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_using] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(180),
    [anon_sym_valueset] = ACTIONS(177),
    [anon_sym_codesystem] = ACTIONS(177),
    [anon_sym_code] = ACTIONS(180),
    [anon_sym_concept] = ACTIONS(177),
    [anon_sym_parameter] = ACTIONS(177),
    [anon_sym_public] = ACTIONS(177),
    [anon_sym_private] = ACTIONS(177),
    [anon_sym_context] = ACTIONS(177),
    [anon_sym_define] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_is] = ACTIONS(177),
    [anon_sym_as] = ACTIONS(177),
    [anon_sym_properly] = ACTIONS(177),
    [anon_sym_between] = ACTIONS(177),
    [anon_sym_and] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_BANG_TILDE] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_or] = ACTIONS(177),
    [anon_sym_xor] = ACTIONS(177),
    [anon_sym_implies] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_union] = ACTIONS(177),
    [anon_sym_intersect] = ACTIONS(177),
    [anon_sym_except] = ACTIONS(177),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(183),
    [anon_sym_months] = ACTIONS(183),
    [anon_sym_weeks] = ACTIONS(183),
    [anon_sym_days] = ACTIONS(183),
    [anon_sym_hours] = ACTIONS(183),
    [anon_sym_minutes] = ACTIONS(183),
    [anon_sym_seconds] = ACTIONS(183),
    [anon_sym_milliseconds] = ACTIONS(183),
    [anon_sym_lessthan] = ACTIONS(177),
    [anon_sym_morethan] = ACTIONS(177),
    [anon_sym_onor] = ACTIONS(177),
    [anon_sym_before] = ACTIONS(177),
    [anon_sym_after] = ACTIONS(177),
    [anon_sym_starts] = ACTIONS(177),
    [anon_sym_ends] = ACTIONS(177),
    [anon_sym_occurs] = ACTIONS(177),
    [anon_sym_same] = ACTIONS(177),
    [anon_sym_includes] = ACTIONS(177),
    [anon_sym_during] = ACTIONS(177),
    [anon_sym_includedin] = ACTIONS(177),
    [anon_sym_meets] = ACTIONS(177),
    [anon_sym_overlaps] = ACTIONS(177),
    [anon_sym_within] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [sym_number] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym_type_specifier] = STATE(159),
    [sym_named_type_specifier] = STATE(138),
    [sym_identifier] = STATE(130),
    [sym_quoted_identifier] = STATE(119),
    [sym_referential_identifier] = STATE(139),
    [sym_type_name_identifier] = STATE(139),
    [sym_referential_or_type_name_identifier] = STATE(144),
    [sym_keyword_identifier] = STATE(149),
    [aux_sym_named_type_specifier_repeat1] = STATE(85),
    [anon_sym_library] = ACTIONS(187),
    [anon_sym_using] = ACTIONS(187),
    [anon_sym_called] = ACTIONS(187),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_valueset] = ACTIONS(187),
    [anon_sym_codesystems] = ACTIONS(187),
    [anon_sym_codesystem] = ACTIONS(187),
    [anon_sym_code] = ACTIONS(187),
    [anon_sym_concept] = ACTIONS(187),
    [anon_sym_parameter] = ACTIONS(187),
    [anon_sym_default] = ACTIONS(187),
    [anon_sym_public] = ACTIONS(187),
    [anon_sym_private] = ACTIONS(187),
    [anon_sym_context] = ACTIONS(187),
    [anon_sym_define] = ACTIONS(187),
    [anon_sym_function] = ACTIONS(187),
    [anon_sym_null] = ACTIONS(189),
    [anon_sym_not] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_xor] = ACTIONS(187),
    [anon_sym_implies] = ACTIONS(187),
    [anon_sym_union] = ACTIONS(187),
    [anon_sym_intersect] = ACTIONS(187),
    [anon_sym_except] = ACTIONS(187),
    [anon_sym_date] = ACTIONS(193),
    [anon_sym_time] = ACTIONS(193),
    [anon_sym_timezone] = ACTIONS(187),
    [anon_sym_timezoneoffset] = ACTIONS(187),
    [anon_sym_contains] = ACTIONS(187),
    [anon_sym_orbefore] = ACTIONS(195),
    [anon_sym_orafter] = ACTIONS(195),
    [anon_sym_ormore] = ACTIONS(195),
    [anon_sym_orless] = ACTIONS(195),
    [anon_sym_starts] = ACTIONS(187),
    [anon_sym_ends] = ACTIONS(187),
    [anon_sym_start] = ACTIONS(187),
    [anon_sym_end] = ACTIONS(187),
    [anon_sym_includes] = ACTIONS(187),
    [anon_sym_meets] = ACTIONS(187),
    [anon_sym_overlaps] = ACTIONS(187),
    [anon_sym_where] = ACTIONS(187),
    [anon_sym_version] = ACTIONS(187),
    [sym_default_identifier] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_Code] = ACTIONS(201),
    [anon_sym_Concept] = ACTIONS(201),
    [anon_sym_asc] = ACTIONS(187),
    [anon_sym_ascending] = ACTIONS(187),
    [anon_sym_by] = ACTIONS(187),
    [anon_sym_desc] = ACTIONS(187),
    [anon_sym_descending] = ACTIONS(187),
    [anon_sym_display] = ACTIONS(187),
    [anon_sym_div] = ACTIONS(187),
    [anon_sym_fluent] = ACTIONS(187),
    [anon_sym_mod] = ACTIONS(187),
    [anon_sym_predecessor] = ACTIONS(187),
    [anon_sym_starting] = ACTIONS(187),
    [anon_sym_successor] = ACTIONS(187),
    [anon_sym_width] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym_type_specifier] = STATE(240),
    [sym_named_type_specifier] = STATE(246),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(203),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(226),
    [sym_keyword_identifier] = STATE(211),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(207),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [sym_type_specifier] = STATE(247),
    [sym_named_type_specifier] = STATE(246),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(203),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(226),
    [sym_keyword_identifier] = STATE(211),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(221),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [sym_type_specifier] = STATE(159),
    [sym_named_type_specifier] = STATE(138),
    [sym_identifier] = STATE(130),
    [sym_quoted_identifier] = STATE(119),
    [sym_referential_identifier] = STATE(139),
    [sym_type_name_identifier] = STATE(139),
    [sym_referential_or_type_name_identifier] = STATE(144),
    [sym_keyword_identifier] = STATE(149),
    [aux_sym_named_type_specifier_repeat1] = STATE(85),
    [anon_sym_library] = ACTIONS(187),
    [anon_sym_using] = ACTIONS(187),
    [anon_sym_called] = ACTIONS(187),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_valueset] = ACTIONS(187),
    [anon_sym_codesystems] = ACTIONS(187),
    [anon_sym_codesystem] = ACTIONS(187),
    [anon_sym_code] = ACTIONS(187),
    [anon_sym_concept] = ACTIONS(187),
    [anon_sym_parameter] = ACTIONS(187),
    [anon_sym_default] = ACTIONS(187),
    [anon_sym_public] = ACTIONS(187),
    [anon_sym_private] = ACTIONS(187),
    [anon_sym_context] = ACTIONS(187),
    [anon_sym_define] = ACTIONS(187),
    [anon_sym_function] = ACTIONS(187),
    [anon_sym_xor] = ACTIONS(187),
    [anon_sym_implies] = ACTIONS(187),
    [anon_sym_union] = ACTIONS(187),
    [anon_sym_intersect] = ACTIONS(187),
    [anon_sym_except] = ACTIONS(187),
    [anon_sym_date] = ACTIONS(193),
    [anon_sym_time] = ACTIONS(193),
    [anon_sym_timezone] = ACTIONS(187),
    [anon_sym_timezoneoffset] = ACTIONS(187),
    [anon_sym_contains] = ACTIONS(187),
    [anon_sym_orbefore] = ACTIONS(195),
    [anon_sym_orafter] = ACTIONS(195),
    [anon_sym_ormore] = ACTIONS(195),
    [anon_sym_orless] = ACTIONS(195),
    [anon_sym_starts] = ACTIONS(187),
    [anon_sym_ends] = ACTIONS(187),
    [anon_sym_start] = ACTIONS(187),
    [anon_sym_end] = ACTIONS(187),
    [anon_sym_includes] = ACTIONS(187),
    [anon_sym_meets] = ACTIONS(187),
    [anon_sym_overlaps] = ACTIONS(187),
    [anon_sym_where] = ACTIONS(187),
    [anon_sym_version] = ACTIONS(187),
    [sym_default_identifier] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_Code] = ACTIONS(201),
    [anon_sym_Concept] = ACTIONS(201),
    [anon_sym_asc] = ACTIONS(187),
    [anon_sym_ascending] = ACTIONS(187),
    [anon_sym_by] = ACTIONS(187),
    [anon_sym_desc] = ACTIONS(187),
    [anon_sym_descending] = ACTIONS(187),
    [anon_sym_display] = ACTIONS(187),
    [anon_sym_div] = ACTIONS(187),
    [anon_sym_fluent] = ACTIONS(187),
    [anon_sym_mod] = ACTIONS(187),
    [anon_sym_predecessor] = ACTIONS(187),
    [anon_sym_starting] = ACTIONS(187),
    [anon_sym_successor] = ACTIONS(187),
    [anon_sym_width] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(122),
    [sym_retrieve] = STATE(389),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_contains] = ACTIONS(29),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym_type_specifier] = STATE(136),
    [sym_named_type_specifier] = STATE(138),
    [sym_identifier] = STATE(130),
    [sym_quoted_identifier] = STATE(119),
    [sym_referential_identifier] = STATE(139),
    [sym_type_name_identifier] = STATE(139),
    [sym_referential_or_type_name_identifier] = STATE(144),
    [sym_keyword_identifier] = STATE(149),
    [aux_sym_named_type_specifier_repeat1] = STATE(85),
    [anon_sym_library] = ACTIONS(187),
    [anon_sym_using] = ACTIONS(187),
    [anon_sym_called] = ACTIONS(187),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_valueset] = ACTIONS(187),
    [anon_sym_codesystems] = ACTIONS(187),
    [anon_sym_codesystem] = ACTIONS(187),
    [anon_sym_code] = ACTIONS(187),
    [anon_sym_concept] = ACTIONS(187),
    [anon_sym_parameter] = ACTIONS(187),
    [anon_sym_default] = ACTIONS(187),
    [anon_sym_public] = ACTIONS(187),
    [anon_sym_private] = ACTIONS(187),
    [anon_sym_context] = ACTIONS(187),
    [anon_sym_define] = ACTIONS(187),
    [anon_sym_function] = ACTIONS(187),
    [anon_sym_xor] = ACTIONS(187),
    [anon_sym_implies] = ACTIONS(187),
    [anon_sym_union] = ACTIONS(187),
    [anon_sym_intersect] = ACTIONS(187),
    [anon_sym_except] = ACTIONS(187),
    [anon_sym_date] = ACTIONS(193),
    [anon_sym_time] = ACTIONS(193),
    [anon_sym_timezone] = ACTIONS(187),
    [anon_sym_timezoneoffset] = ACTIONS(187),
    [anon_sym_contains] = ACTIONS(187),
    [anon_sym_orbefore] = ACTIONS(195),
    [anon_sym_orafter] = ACTIONS(195),
    [anon_sym_ormore] = ACTIONS(195),
    [anon_sym_orless] = ACTIONS(195),
    [anon_sym_starts] = ACTIONS(187),
    [anon_sym_ends] = ACTIONS(187),
    [anon_sym_start] = ACTIONS(187),
    [anon_sym_end] = ACTIONS(187),
    [anon_sym_includes] = ACTIONS(187),
    [anon_sym_meets] = ACTIONS(187),
    [anon_sym_overlaps] = ACTIONS(187),
    [anon_sym_where] = ACTIONS(187),
    [anon_sym_version] = ACTIONS(187),
    [sym_default_identifier] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_Code] = ACTIONS(201),
    [anon_sym_Concept] = ACTIONS(201),
    [anon_sym_asc] = ACTIONS(187),
    [anon_sym_ascending] = ACTIONS(187),
    [anon_sym_by] = ACTIONS(187),
    [anon_sym_desc] = ACTIONS(187),
    [anon_sym_descending] = ACTIONS(187),
    [anon_sym_display] = ACTIONS(187),
    [anon_sym_div] = ACTIONS(187),
    [anon_sym_fluent] = ACTIONS(187),
    [anon_sym_mod] = ACTIONS(187),
    [anon_sym_predecessor] = ACTIONS(187),
    [anon_sym_starting] = ACTIONS(187),
    [anon_sym_successor] = ACTIONS(187),
    [anon_sym_width] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [sym_qualified_identifier_expression] = STATE(389),
    [sym_query_source] = STATE(316),
    [sym_aliased_query_source] = STATE(121),
    [sym_retrieve] = STATE(389),
    [sym_identifier] = STATE(361),
    [sym_quoted_identifier] = STATE(357),
    [sym_referential_identifier] = STATE(325),
    [sym_keyword_identifier] = STATE(361),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(93),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_contains] = ACTIONS(29),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [sym_named_type_specifier] = STATE(386),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(203),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(226),
    [sym_keyword_identifier] = STATE(211),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(205),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym_named_type_specifier] = STATE(376),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(203),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(226),
    [sym_keyword_identifier] = STATE(211),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(205),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [sym_named_type_specifier] = STATE(372),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(203),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(226),
    [sym_keyword_identifier] = STATE(211),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(205),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [sym_named_type_specifier] = STATE(379),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(203),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(226),
    [sym_keyword_identifier] = STATE(211),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(205),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(211), 1,
      sym_keyword_identifier,
    STATE(213), 1,
      sym_identifier,
    STATE(221), 1,
      sym_referential_or_type_name_identifier,
    ACTIONS(209), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(217), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(222), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 46,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [91] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_default_identifier,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(119), 1,
      sym_quoted_identifier,
    STATE(130), 1,
      sym_identifier,
    STATE(134), 1,
      sym_referential_or_type_name_identifier,
    STATE(149), 1,
      sym_keyword_identifier,
    ACTIONS(193), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(201), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(139), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(195), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(187), 46,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [182] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(325), 1,
      sym_referential_identifier,
    STATE(414), 1,
      sym_qualified_identifier_expression,
    STATE(422), 1,
      sym_terminology,
    STATE(211), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [267] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(325), 1,
      sym_referential_identifier,
    STATE(414), 1,
      sym_qualified_identifier_expression,
    STATE(426), 1,
      sym_terminology,
    STATE(211), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [352] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(325), 1,
      sym_referential_identifier,
    STATE(396), 1,
      sym_terminology,
    STATE(414), 1,
      sym_qualified_identifier_expression,
    STATE(211), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [437] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(325), 1,
      sym_referential_identifier,
    STATE(412), 1,
      sym_terminology,
    STATE(414), 1,
      sym_qualified_identifier_expression,
    STATE(211), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [522] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_default_identifier,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(430), 1,
      sym_identifier,
    ACTIONS(227), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(225), 50,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [599] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_default_identifier,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(435), 1,
      sym_referential_identifier,
    STATE(211), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(238), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(235), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [678] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(348), 1,
      sym_referential_identifier,
    STATE(211), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [757] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_default_identifier,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(348), 1,
      sym_referential_identifier,
    STATE(357), 1,
      sym_quoted_identifier,
    STATE(361), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(59), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(29), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(249), 51,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(253), 51,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 6,
      ts_builtin_sym_end,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(257), 51,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [1031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 5,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(259), 51,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [1095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 5,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(263), 49,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [1157] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_is,
    ACTIONS(274), 1,
      anon_sym_as,
    ACTIONS(277), 1,
      anon_sym_properly,
    ACTIONS(280), 1,
      anon_sym_between,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(300), 1,
      anon_sym_onor,
    ACTIONS(309), 1,
      anon_sym_occurs,
    ACTIONS(312), 1,
      anon_sym_same,
    ACTIONS(315), 1,
      anon_sym_includes,
    ACTIONS(324), 1,
      anon_sym_within,
    ACTIONS(327), 1,
      sym_number,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(269), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(297), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(303), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(306), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(318), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(321), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(267), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [1272] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(334), 1,
      anon_sym_is,
    ACTIONS(336), 1,
      anon_sym_as,
    ACTIONS(338), 1,
      anon_sym_properly,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      anon_sym_occurs,
    ACTIONS(348), 1,
      anon_sym_same,
    ACTIONS(350), 1,
      anon_sym_includes,
    ACTIONS(356), 1,
      anon_sym_within,
    ACTIONS(358), 1,
      sym_number,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(332), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(352), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(354), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(330), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [1387] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(334), 1,
      anon_sym_is,
    ACTIONS(336), 1,
      anon_sym_as,
    ACTIONS(338), 1,
      anon_sym_properly,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      anon_sym_occurs,
    ACTIONS(348), 1,
      anon_sym_same,
    ACTIONS(350), 1,
      anon_sym_includes,
    ACTIONS(356), 1,
      anon_sym_within,
    ACTIONS(358), 1,
      sym_number,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(352), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(354), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(362), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(360), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [1502] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(366), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [1573] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(372), 1,
      anon_sym_is,
    ACTIONS(375), 1,
      anon_sym_as,
    ACTIONS(378), 1,
      anon_sym_properly,
    ACTIONS(381), 1,
      anon_sym_between,
    ACTIONS(387), 1,
      anon_sym_onor,
    ACTIONS(396), 1,
      anon_sym_occurs,
    ACTIONS(399), 1,
      anon_sym_same,
    ACTIONS(402), 1,
      anon_sym_includes,
    ACTIONS(411), 1,
      anon_sym_within,
    ACTIONS(414), 1,
      sym_number,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(370), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(384), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(393), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(405), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(408), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(368), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [1688] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(419), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(417), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [1759] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(423), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [1830] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(427), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(425), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [1901] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(431), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(429), 30,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [1986] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(435), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(433), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [2057] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(334), 1,
      anon_sym_is,
    ACTIONS(336), 1,
      anon_sym_as,
    ACTIONS(338), 1,
      anon_sym_properly,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      anon_sym_occurs,
    ACTIONS(348), 1,
      anon_sym_same,
    ACTIONS(350), 1,
      anon_sym_includes,
    ACTIONS(356), 1,
      anon_sym_within,
    ACTIONS(358), 1,
      sym_number,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(352), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(354), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(439), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(437), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [2172] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(443), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(441), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [2243] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(447), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(445), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [2314] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(453), 1,
      anon_sym_is,
    ACTIONS(456), 1,
      anon_sym_as,
    ACTIONS(459), 1,
      anon_sym_properly,
    ACTIONS(462), 1,
      anon_sym_between,
    ACTIONS(468), 1,
      anon_sym_onor,
    ACTIONS(477), 1,
      anon_sym_occurs,
    ACTIONS(480), 1,
      anon_sym_same,
    ACTIONS(483), 1,
      anon_sym_includes,
    ACTIONS(492), 1,
      anon_sym_within,
    ACTIONS(495), 1,
      sym_number,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(451), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(465), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(471), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(474), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(486), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(489), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(449), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [2429] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(500), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(498), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [2500] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(504), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(502), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(511), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(509), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2628] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(517), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(515), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(521), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 48,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_COMMA,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 48,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_COMMA,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(251), 48,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_COMMA,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(521), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(502), 47,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_COMMA,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [3059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(523), 47,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_COMMA,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [3118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(529), 36,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [3176] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_where,
    STATE(150), 1,
      sym_where_clause,
    ACTIONS(533), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3238] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_default_identifier,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      sym_number,
    ACTIONS(539), 35,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
  [3300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(547), 36,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [3358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_of,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(553), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_of,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_DOT,
    ACTIONS(559), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(557), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(563), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_of,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(567), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_of,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(537), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(571), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(575), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(579), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(575), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(583), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(587), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(591), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(595), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(599), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(603), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(607), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(611), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(615), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(619), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(557), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(625), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(629), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(633), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(637), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(641), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(645), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(649), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(653), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(657), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(661), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5189] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(334), 1,
      anon_sym_is,
    ACTIONS(336), 1,
      anon_sym_as,
    ACTIONS(338), 1,
      anon_sym_properly,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      anon_sym_occurs,
    ACTIONS(348), 1,
      anon_sym_same,
    ACTIONS(350), 1,
      anon_sym_includes,
    ACTIONS(356), 1,
      anon_sym_within,
    ACTIONS(358), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(352), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(354), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(665), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [5293] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(334), 1,
      anon_sym_is,
    ACTIONS(336), 1,
      anon_sym_as,
    ACTIONS(338), 1,
      anon_sym_properly,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      anon_sym_occurs,
    ACTIONS(348), 1,
      anon_sym_same,
    ACTIONS(350), 1,
      anon_sym_includes,
    ACTIONS(356), 1,
      anon_sym_within,
    ACTIONS(358), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(352), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(354), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(681), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [5397] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_is,
    ACTIONS(375), 1,
      anon_sym_as,
    ACTIONS(378), 1,
      anon_sym_properly,
    ACTIONS(381), 1,
      anon_sym_between,
    ACTIONS(387), 1,
      anon_sym_onor,
    ACTIONS(396), 1,
      anon_sym_occurs,
    ACTIONS(399), 1,
      anon_sym_same,
    ACTIONS(402), 1,
      anon_sym_includes,
    ACTIONS(411), 1,
      anon_sym_within,
    ACTIONS(414), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(384), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(393), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(405), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(408), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(368), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [5501] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(429), 23,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5575] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_is,
    ACTIONS(456), 1,
      anon_sym_as,
    ACTIONS(459), 1,
      anon_sym_properly,
    ACTIONS(462), 1,
      anon_sym_between,
    ACTIONS(468), 1,
      anon_sym_onor,
    ACTIONS(477), 1,
      anon_sym_occurs,
    ACTIONS(480), 1,
      anon_sym_same,
    ACTIONS(483), 1,
      anon_sym_includes,
    ACTIONS(492), 1,
      anon_sym_within,
    ACTIONS(495), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(465), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(471), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(474), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(486), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(489), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(449), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [5679] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(447), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(445), 37,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5741] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(443), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(441), 37,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5803] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(435), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(433), 37,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5865] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(500), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(498), 37,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5927] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(334), 1,
      anon_sym_is,
    ACTIONS(336), 1,
      anon_sym_as,
    ACTIONS(338), 1,
      anon_sym_properly,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      anon_sym_occurs,
    ACTIONS(348), 1,
      anon_sym_same,
    ACTIONS(350), 1,
      anon_sym_includes,
    ACTIONS(356), 1,
      anon_sym_within,
    ACTIONS(358), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(352), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(354), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(683), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [6031] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(334), 1,
      anon_sym_is,
    ACTIONS(336), 1,
      anon_sym_as,
    ACTIONS(338), 1,
      anon_sym_properly,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      anon_sym_occurs,
    ACTIONS(348), 1,
      anon_sym_same,
    ACTIONS(350), 1,
      anon_sym_includes,
    ACTIONS(356), 1,
      anon_sym_within,
    ACTIONS(358), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(352), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(354), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(685), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [6135] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(427), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(425), 37,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6197] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(417), 37,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6259] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(366), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 37,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6321] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_is,
    ACTIONS(274), 1,
      anon_sym_as,
    ACTIONS(277), 1,
      anon_sym_properly,
    ACTIONS(280), 1,
      anon_sym_between,
    ACTIONS(300), 1,
      anon_sym_onor,
    ACTIONS(309), 1,
      anon_sym_occurs,
    ACTIONS(312), 1,
      anon_sym_same,
    ACTIONS(315), 1,
      anon_sym_includes,
    ACTIONS(324), 1,
      anon_sym_within,
    ACTIONS(327), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(297), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(303), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(306), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(318), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(321), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [6425] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(423), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 37,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6487] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(435), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(433), 35,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6547] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(334), 1,
      anon_sym_is,
    ACTIONS(336), 1,
      anon_sym_as,
    ACTIONS(338), 1,
      anon_sym_properly,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      anon_sym_occurs,
    ACTIONS(348), 1,
      anon_sym_same,
    ACTIONS(350), 1,
      anon_sym_includes,
    ACTIONS(356), 1,
      anon_sym_within,
    ACTIONS(358), 1,
      sym_number,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    ACTIONS(689), 1,
      anon_sym_and,
    ACTIONS(699), 1,
      anon_sym_implies,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(352), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(354), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(693), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(695), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(697), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(691), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(701), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [6649] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(423), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 35,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6709] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(366), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 35,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6769] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(271), 1,
      anon_sym_is,
    ACTIONS(274), 1,
      anon_sym_as,
    ACTIONS(277), 1,
      anon_sym_properly,
    ACTIONS(280), 1,
      anon_sym_between,
    ACTIONS(300), 1,
      anon_sym_onor,
    ACTIONS(309), 1,
      anon_sym_occurs,
    ACTIONS(312), 1,
      anon_sym_same,
    ACTIONS(315), 1,
      anon_sym_includes,
    ACTIONS(324), 1,
      anon_sym_within,
    ACTIONS(327), 1,
      sym_number,
    ACTIONS(689), 1,
      anon_sym_and,
    ACTIONS(699), 1,
      anon_sym_implies,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(297), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(303), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(306), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(318), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(321), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(693), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(695), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(697), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(691), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(701), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [6871] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(417), 35,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6931] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_and,
    ACTIONS(699), 1,
      anon_sym_implies,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(693), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(695), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(697), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(691), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(701), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(429), 21,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7003] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      anon_sym_is,
    ACTIONS(456), 1,
      anon_sym_as,
    ACTIONS(459), 1,
      anon_sym_properly,
    ACTIONS(462), 1,
      anon_sym_between,
    ACTIONS(468), 1,
      anon_sym_onor,
    ACTIONS(477), 1,
      anon_sym_occurs,
    ACTIONS(480), 1,
      anon_sym_same,
    ACTIONS(483), 1,
      anon_sym_includes,
    ACTIONS(492), 1,
      anon_sym_within,
    ACTIONS(495), 1,
      sym_number,
    ACTIONS(689), 1,
      anon_sym_and,
    ACTIONS(699), 1,
      anon_sym_implies,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(465), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(471), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(474), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(486), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(489), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(693), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(695), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(697), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(691), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(701), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [7105] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(427), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(425), 35,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7165] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(500), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(498), 35,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7225] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(443), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(441), 35,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7285] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      anon_sym_is,
    ACTIONS(375), 1,
      anon_sym_as,
    ACTIONS(378), 1,
      anon_sym_properly,
    ACTIONS(381), 1,
      anon_sym_between,
    ACTIONS(387), 1,
      anon_sym_onor,
    ACTIONS(396), 1,
      anon_sym_occurs,
    ACTIONS(399), 1,
      anon_sym_same,
    ACTIONS(402), 1,
      anon_sym_includes,
    ACTIONS(411), 1,
      anon_sym_within,
    ACTIONS(414), 1,
      sym_number,
    ACTIONS(689), 1,
      anon_sym_and,
    ACTIONS(699), 1,
      anon_sym_implies,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(384), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(393), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(405), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(408), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(693), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(695), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(697), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(691), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(701), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [7387] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(447), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(445), 35,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_where,
    STATE(150), 1,
      sym_where_clause,
    ACTIONS(533), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 37,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7500] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_default_identifier,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      sym_number,
    ACTIONS(539), 26,
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
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
  [7553] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(334), 1,
      anon_sym_is,
    ACTIONS(338), 1,
      anon_sym_properly,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      anon_sym_occurs,
    ACTIONS(348), 1,
      anon_sym_same,
    ACTIONS(350), 1,
      anon_sym_includes,
    ACTIONS(356), 1,
      anon_sym_within,
    ACTIONS(358), 1,
      sym_number,
    ACTIONS(689), 1,
      anon_sym_and,
    ACTIONS(699), 1,
      anon_sym_implies,
    ACTIONS(705), 1,
      anon_sym_as,
    STATE(16), 1,
      sym_interval_operator_phrase,
    STATE(55), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(312), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(352), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(354), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(693), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(695), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(697), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(691), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(701), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [7652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(547), 27,
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
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [7701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(529), 27,
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
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [7750] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_default_identifier,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 13,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      sym_number,
    ACTIONS(539), 24,
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
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
  [7801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 14,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(529), 25,
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
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [7848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 14,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(547), 25,
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
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [7895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_where,
    STATE(150), 1,
      sym_where_clause,
    ACTIONS(533), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 35,
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
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7946] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_codesystem,
    ACTIONS(17), 1,
      anon_sym_code,
    ACTIONS(19), 1,
      anon_sym_concept,
    ACTIONS(21), 1,
      anon_sym_parameter,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(709), 1,
      ts_builtin_sym_end,
    STATE(301), 1,
      sym_access_modifier,
    ACTIONS(23), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(205), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(284), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(365), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
    STATE(267), 7,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
      sym_codesystem_definition,
      sym_code_definition,
      sym_concept_definition,
      sym_parameter_definition,
  [8009] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_codesystem,
    ACTIONS(17), 1,
      anon_sym_code,
    ACTIONS(19), 1,
      anon_sym_concept,
    ACTIONS(21), 1,
      anon_sym_parameter,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    STATE(301), 1,
      sym_access_modifier,
    ACTIONS(23), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(205), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(285), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(365), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
    STATE(267), 7,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
      sym_codesystem_definition,
      sym_code_definition,
      sym_concept_definition,
      sym_parameter_definition,
  [8072] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_codesystem,
    ACTIONS(17), 1,
      anon_sym_code,
    ACTIONS(19), 1,
      anon_sym_concept,
    ACTIONS(21), 1,
      anon_sym_parameter,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(709), 1,
      ts_builtin_sym_end,
    STATE(301), 1,
      sym_access_modifier,
    ACTIONS(23), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(199), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(284), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(365), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
    STATE(267), 7,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
      sym_codesystem_definition,
      sym_code_definition,
      sym_concept_definition,
      sym_parameter_definition,
  [8135] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(305), 1,
      sym_unit,
    STATE(292), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(717), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(713), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
    ACTIONS(715), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [8177] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(128), 1,
      sym_unit,
    STATE(129), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(717), 4,
      anon_sym_of,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(47), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
    ACTIONS(183), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [8218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_code,
    ACTIONS(255), 21,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
      anon_sym_display,
  [8248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_code,
    ACTIONS(247), 21,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
      anon_sym_display,
  [8278] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_using,
    ACTIONS(726), 1,
      anon_sym_include,
    ACTIONS(729), 1,
      anon_sym_valueset,
    ACTIONS(732), 1,
      anon_sym_codesystem,
    ACTIONS(735), 1,
      anon_sym_code,
    ACTIONS(738), 1,
      anon_sym_concept,
    ACTIONS(741), 1,
      anon_sym_parameter,
    STATE(301), 1,
      sym_access_modifier,
    ACTIONS(744), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(205), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    ACTIONS(721), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    STATE(267), 7,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
      sym_codesystem_definition,
      sym_code_definition,
      sym_concept_definition,
      sym_parameter_definition,
  [8328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_code,
    ACTIONS(251), 21,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
      anon_sym_display,
  [8358] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(128), 1,
      sym_unit,
    STATE(129), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(47), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
    ACTIONS(183), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [8396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_code,
    ACTIONS(629), 21,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_from,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_and,
      anon_sym_of,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_version,
  [8426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_code,
    ACTIONS(637), 21,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_from,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_and,
      anon_sym_of,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_version,
  [8456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_code,
    ACTIONS(33), 15,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_RBRACK,
  [8480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_code,
    ACTIONS(557), 15,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_RBRACK,
  [8504] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_codesystems,
    ACTIONS(753), 1,
      anon_sym_version,
    STATE(238), 1,
      sym_version_specifier,
    STATE(256), 1,
      sym_codesystems,
    ACTIONS(751), 2,
      anon_sym_codesystem,
      anon_sym_code,
    ACTIONS(747), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_code,
    ACTIONS(561), 1,
      anon_sym_DOT,
    ACTIONS(557), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_code,
    ACTIONS(759), 1,
      anon_sym_DOT,
    ACTIONS(755), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_display,
  [8588] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_codesystems,
    ACTIONS(753), 1,
      anon_sym_version,
    STATE(233), 1,
      sym_version_specifier,
    STATE(255), 1,
      sym_codesystems,
    ACTIONS(763), 2,
      anon_sym_codesystem,
      anon_sym_code,
    ACTIONS(761), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_code,
    ACTIONS(769), 1,
      anon_sym_DOT,
    ACTIONS(765), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [8646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DOT,
    ACTIONS(773), 1,
      anon_sym_code,
    ACTIONS(771), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [8672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_called,
    ACTIONS(779), 1,
      anon_sym_code,
    ACTIONS(781), 1,
      anon_sym_version,
    STATE(239), 1,
      sym_version_specifier,
    ACTIONS(775), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8701] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_version,
    ACTIONS(785), 1,
      anon_sym_called,
    ACTIONS(787), 1,
      anon_sym_code,
    STATE(241), 1,
      sym_version_specifier,
    ACTIONS(783), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8730] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(358), 1,
      sym_number,
    ACTIONS(789), 1,
      anon_sym_properly,
    ACTIONS(791), 1,
      anon_sym_same,
    ACTIONS(793), 1,
      anon_sym_within,
    STATE(53), 1,
      sym_temporal_relationship,
    STATE(286), 1,
      sym_quantity,
    STATE(332), 1,
      sym_quantity_offset,
    STATE(385), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(117), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
  [8773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_code,
    ACTIONS(571), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_code,
    ACTIONS(587), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_code,
    ACTIONS(795), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_display,
  [8842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_code,
    ACTIONS(575), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_code,
    ACTIONS(575), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_code,
    ACTIONS(607), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_code,
    ACTIONS(803), 1,
      anon_sym_display,
    STATE(250), 1,
      sym_display_clause,
    ACTIONS(799), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_version,
    ACTIONS(807), 1,
      anon_sym_code,
    STATE(249), 1,
      sym_version_specifier,
    ACTIONS(805), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 2,
      anon_sym_codesystem,
      anon_sym_code,
    ACTIONS(637), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [8985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_codesystem,
      anon_sym_code,
    ACTIONS(629), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [9007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_display,
    ACTIONS(811), 1,
      anon_sym_code,
    STATE(248), 1,
      sym_display_clause,
    ACTIONS(809), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_display,
    ACTIONS(815), 1,
      anon_sym_code,
    STATE(266), 1,
      sym_display_clause,
    ACTIONS(813), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_codesystems,
    STATE(262), 1,
      sym_codesystems,
    ACTIONS(819), 2,
      anon_sym_codesystem,
      anon_sym_code,
    ACTIONS(817), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9085] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_display,
    ACTIONS(823), 1,
      anon_sym_code,
    STATE(260), 1,
      sym_display_clause,
    ACTIONS(821), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9111] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_version,
    ACTIONS(827), 1,
      anon_sym_code,
    STATE(257), 1,
      sym_version_specifier,
    ACTIONS(825), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_display,
    ACTIONS(831), 1,
      anon_sym_code,
    STATE(263), 1,
      sym_display_clause,
    ACTIONS(829), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9163] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_version,
    ACTIONS(835), 1,
      anon_sym_code,
    STATE(259), 1,
      sym_version_specifier,
    ACTIONS(833), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9189] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_codesystems,
    STATE(265), 1,
      sym_codesystems,
    ACTIONS(839), 2,
      anon_sym_codesystem,
      anon_sym_code,
    ACTIONS(837), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_called,
    ACTIONS(845), 1,
      anon_sym_code,
    ACTIONS(841), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_code,
    ACTIONS(849), 1,
      anon_sym_default,
    ACTIONS(219), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_called,
    ACTIONS(855), 1,
      anon_sym_code,
    ACTIONS(851), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 2,
      anon_sym_codesystem,
      anon_sym_code,
    ACTIONS(857), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9305] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_as,
    STATE(66), 1,
      sym_relative_qualifier,
    STATE(327), 1,
      sym_date_time_precision,
    ACTIONS(865), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
    ACTIONS(863), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
  [9332] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_as,
    STATE(62), 1,
      sym_relative_qualifier,
    STATE(342), 1,
      sym_date_time_precision,
    ACTIONS(865), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
    ACTIONS(863), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
  [9359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_code,
    ACTIONS(857), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_code,
    ACTIONS(583), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_code,
    ACTIONS(869), 1,
      anon_sym_default,
    ACTIONS(437), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_code,
    ACTIONS(871), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_code,
    ACTIONS(875), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_code,
    ACTIONS(879), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_code,
    ACTIONS(883), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_code,
    ACTIONS(887), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_code,
    ACTIONS(891), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_code,
    ACTIONS(895), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_code,
    ACTIONS(817), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_code,
    ACTIONS(837), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_code,
    ACTIONS(899), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_code,
    ACTIONS(903), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_code,
    ACTIONS(907), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_code,
    ACTIONS(799), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_code,
    ACTIONS(911), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_code,
    ACTIONS(915), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_code,
    ACTIONS(919), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_code,
    ACTIONS(923), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_code,
    ACTIONS(927), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_code,
    ACTIONS(821), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_code,
    ACTIONS(931), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(424), 1,
      sym_plural_date_time_precision,
    ACTIONS(183), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [9841] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      aux_sym_literal_token1,
    ACTIONS(937), 1,
      anon_sym_null,
    STATE(141), 1,
      sym_term,
    STATE(143), 1,
      sym_quantity,
    STATE(145), 1,
      sym_literal,
    STATE(147), 1,
      sym_string,
    STATE(156), 1,
      sym_expression_term,
  [9872] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      aux_sym_literal_token1,
    ACTIONS(937), 1,
      anon_sym_null,
    STATE(141), 1,
      sym_term,
    STATE(143), 1,
      sym_quantity,
    STATE(145), 1,
      sym_literal,
    STATE(147), 1,
      sym_string,
    STATE(152), 1,
      sym_expression_term,
  [9903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(427), 1,
      sym_plural_date_time_precision,
    ACTIONS(183), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [9920] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      aux_sym_literal_token1,
    ACTIONS(937), 1,
      anon_sym_null,
    ACTIONS(939), 1,
      sym_number,
    STATE(141), 1,
      sym_term,
    STATE(143), 1,
      sym_quantity,
    STATE(145), 1,
      sym_literal,
    STATE(147), 1,
      sym_string,
    STATE(436), 1,
      sym_expression_term,
  [9951] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      aux_sym_literal_token1,
    ACTIONS(937), 1,
      anon_sym_null,
    STATE(141), 1,
      sym_term,
    STATE(143), 1,
      sym_quantity,
    STATE(145), 1,
      sym_literal,
    STATE(147), 1,
      sym_string,
    STATE(154), 1,
      sym_expression_term,
  [9982] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      aux_sym_literal_token1,
    ACTIONS(937), 1,
      anon_sym_null,
    ACTIONS(939), 1,
      sym_number,
    STATE(141), 1,
      sym_term,
    STATE(143), 1,
      sym_quantity,
    STATE(145), 1,
      sym_literal,
    STATE(147), 1,
      sym_string,
    STATE(399), 1,
      sym_expression_term,
  [10013] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      aux_sym_literal_token1,
    ACTIONS(937), 1,
      anon_sym_null,
    ACTIONS(939), 1,
      sym_number,
    STATE(141), 1,
      sym_term,
    STATE(143), 1,
      sym_quantity,
    STATE(145), 1,
      sym_literal,
    STATE(147), 1,
      sym_string,
    STATE(400), 1,
      sym_expression_term,
  [10044] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      aux_sym_literal_token1,
    ACTIONS(937), 1,
      anon_sym_null,
    ACTIONS(939), 1,
      sym_number,
    STATE(141), 1,
      sym_term,
    STATE(143), 1,
      sym_quantity,
    STATE(145), 1,
      sym_literal,
    STATE(147), 1,
      sym_string,
    STATE(410), 1,
      sym_expression_term,
  [10075] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      aux_sym_literal_token1,
    ACTIONS(937), 1,
      anon_sym_null,
    ACTIONS(939), 1,
      sym_number,
    STATE(141), 1,
      sym_term,
    STATE(143), 1,
      sym_quantity,
    STATE(145), 1,
      sym_literal,
    STATE(147), 1,
      sym_string,
    STATE(411), 1,
      sym_expression_term,
  [10106] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      aux_sym_literal_token1,
    ACTIONS(937), 1,
      anon_sym_null,
    STATE(141), 1,
      sym_term,
    STATE(143), 1,
      sym_quantity,
    STATE(145), 1,
      sym_literal,
    STATE(147), 1,
      sym_string,
    STATE(155), 1,
      sym_expression_term,
  [10137] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      aux_sym_literal_token1,
    ACTIONS(937), 1,
      anon_sym_null,
    STATE(141), 1,
      sym_term,
    STATE(143), 1,
      sym_quantity,
    STATE(145), 1,
      sym_literal,
    STATE(146), 1,
      sym_expression_term,
    STATE(147), 1,
      sym_string,
  [10168] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(943), 1,
      anon_sym_function,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(298), 1,
      sym_access_modifier,
    STATE(428), 1,
      sym_identifier,
    ACTIONS(941), 2,
      anon_sym_public,
      anon_sym_private,
  [10194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 8,
      anon_sym_as,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [10208] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(709), 1,
      ts_builtin_sym_end,
    STATE(283), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(365), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [10230] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      ts_builtin_sym_end,
    ACTIONS(947), 1,
      anon_sym_context,
    ACTIONS(950), 1,
      anon_sym_define,
    STATE(283), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(365), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [10252] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    STATE(283), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(365), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [10274] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(953), 1,
      ts_builtin_sym_end,
    STATE(283), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(365), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [10296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(355), 1,
      sym_offset_relative_qualifier,
    ACTIONS(955), 2,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(957), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [10312] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(217), 1,
      sym_identifier,
    STATE(218), 1,
      sym_qualified_identifier,
    STATE(304), 1,
      aux_sym_named_type_specifier_repeat1,
  [10334] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(217), 1,
      sym_identifier,
    STATE(228), 1,
      sym_qualified_identifier,
    STATE(304), 1,
      aux_sym_named_type_specifier_repeat1,
  [10356] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(217), 1,
      sym_identifier,
    STATE(304), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(417), 1,
      sym_qualified_identifier,
  [10378] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(217), 1,
      sym_identifier,
    STATE(219), 1,
      sym_qualified_identifier,
    STATE(304), 1,
      aux_sym_named_type_specifier_repeat1,
  [10400] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(217), 1,
      sym_identifier,
    STATE(304), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(397), 1,
      sym_qualified_identifier,
  [10422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [10433] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(374), 1,
      sym_code_or_codesystem_identifier,
  [10452] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(373), 1,
      sym_code_or_codesystem_identifier,
  [10471] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(356), 1,
      sym_code_or_codesystem_identifier,
  [10490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_within,
    ACTIONS(961), 1,
      anon_sym_between,
    ACTIONS(963), 1,
      anon_sym_includes,
    ACTIONS(117), 2,
      anon_sym_during,
      anon_sym_includedin,
  [10507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [10518] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(965), 1,
      anon_sym_function,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(418), 1,
      sym_identifier,
  [10537] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(360), 1,
      sym_code_or_codesystem_identifier,
  [10556] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(967), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(300), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(398), 1,
      sym_identifier,
  [10575] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_valueset,
    ACTIONS(972), 1,
      anon_sym_codesystem,
    ACTIONS(974), 1,
      anon_sym_code,
    ACTIONS(976), 1,
      anon_sym_concept,
    ACTIONS(978), 1,
      anon_sym_parameter,
  [10594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_code,
    ACTIONS(980), 4,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
  [10607] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(236), 1,
      sym_code_or_codesystem_identifier,
  [10626] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(216), 1,
      sym_identifier,
    STATE(300), 1,
      aux_sym_named_type_specifier_repeat1,
  [10645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [10656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(362), 1,
      sym_code_or_codesystem_identifier,
  [10675] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(231), 1,
      sym_code_or_codesystem_identifier,
  [10694] = 4,
    ACTIONS(984), 1,
      anon_sym_SQUOTE,
    ACTIONS(988), 1,
      sym_comment,
    STATE(343), 1,
      aux_sym_string_repeat1,
    ACTIONS(986), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [10708] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(415), 1,
      sym_identifier,
  [10724] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(421), 1,
      sym_identifier,
  [10740] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(431), 1,
      sym_identifier,
  [10756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    STATE(53), 1,
      sym_temporal_relationship,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
  [10770] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    STATE(336), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(992), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(420), 1,
      sym_identifier,
  [10800] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_SQUOTE,
    STATE(341), 1,
      aux_sym_string_repeat1,
    ACTIONS(996), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [10814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(998), 1,
      sym_default_identifier,
    STATE(119), 1,
      sym_quoted_identifier,
    STATE(123), 1,
      sym_identifier,
  [10830] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_SQUOTE,
    STATE(341), 1,
      aux_sym_string_repeat1,
    ACTIONS(996), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [10844] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_DQUOTE,
    STATE(318), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(1004), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10858] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_SQUOTE,
    STATE(315), 1,
      aux_sym_string_repeat1,
    ACTIONS(1009), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [10872] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_DQUOTE,
    STATE(318), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(1013), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10886] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_DQUOTE,
    STATE(320), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(1017), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10900] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_DQUOTE,
    STATE(318), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(1013), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10914] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_SQUOTE,
    STATE(317), 1,
      aux_sym_string_repeat1,
    ACTIONS(1023), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [10928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(258), 1,
      sym_identifier,
  [10944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_DOT,
    ACTIONS(1027), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [10956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(423), 1,
      sym_identifier,
  [10972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_as,
    STATE(62), 1,
      sym_relative_qualifier,
    ACTIONS(865), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
  [10986] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    STATE(333), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(1031), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [11000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_DOT,
    ACTIONS(1033), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [11012] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym_default_identifier,
    ACTIONS(1039), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_identifier,
    STATE(96), 1,
      sym_quoted_identifier,
  [11028] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(223), 1,
      sym_identifier,
  [11044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    STATE(56), 1,
      sym_temporal_relationship,
    ACTIONS(342), 2,
      anon_sym_before,
      anon_sym_after,
  [11058] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_DQUOTE,
    STATE(318), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(1013), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [11072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(425), 1,
      sym_identifier,
  [11088] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(413), 1,
      sym_identifier,
  [11104] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_DQUOTE,
    STATE(318), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(1013), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [11118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(252), 1,
      sym_identifier,
  [11134] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(1047), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [11148] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(254), 1,
      sym_identifier,
  [11164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(401), 1,
      sym_identifier,
  [11180] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    STATE(341), 1,
      aux_sym_string_repeat1,
    ACTIONS(1051), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [11194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_as,
    STATE(70), 1,
      sym_relative_qualifier,
    ACTIONS(865), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
  [11208] = 4,
    ACTIONS(988), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_SQUOTE,
    STATE(341), 1,
      aux_sym_string_repeat1,
    ACTIONS(996), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [11222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(329), 1,
      sym_identifier,
  [11238] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym_default_identifier,
    ACTIONS(1039), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_identifier,
    STATE(96), 1,
      sym_quoted_identifier,
  [11254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(359), 1,
      sym_identifier,
  [11270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      sym_default_identifier,
    STATE(203), 1,
      sym_quoted_identifier,
    STATE(251), 1,
      sym_identifier,
  [11286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_DOT,
    ACTIONS(1058), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      aux_sym_concept_definition_repeat1,
  [11311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_codesystems_repeat1,
  [11324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_within,
    ACTIONS(1069), 2,
      anon_sym_during,
      anon_sym_includedin,
  [11344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [11353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [11371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1077), 1,
      anon_sym_RBRACE,
    STATE(349), 1,
      aux_sym_concept_definition_repeat1,
  [11384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [11402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [11411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
    ACTIONS(1085), 1,
      anon_sym_RBRACE,
    STATE(370), 1,
      aux_sym_codesystems_repeat1,
  [11424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_RBRACE,
    STATE(363), 1,
      aux_sym_concept_definition_repeat1,
  [11446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1077), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      aux_sym_concept_definition_repeat1,
  [11459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [11477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    ACTIONS(982), 2,
      anon_sym_function,
      sym_default_identifier,
  [11488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [11497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [11506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    ACTIONS(1098), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      aux_sym_concept_definition_repeat1,
  [11519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
    ACTIONS(1100), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_codesystems_repeat1,
  [11532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym_number,
    STATE(439), 1,
      sym_quantity,
  [11542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_COLON,
    ACTIONS(1106), 1,
      anon_sym_RBRACK,
  [11552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(245), 1,
      sym_string,
  [11578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_COLON,
    ACTIONS(1112), 1,
      anon_sym_RBRACK,
  [11588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(440), 1,
      sym_string,
  [11598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(261), 1,
      sym_string,
  [11608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_COLON,
    ACTIONS(1116), 1,
      anon_sym_RBRACK,
  [11618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_SQUOTE,
    STATE(242), 1,
      sym_string,
  [11628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym_string,
  [11638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_string,
  [11656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      sym_string,
  [11666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym_number,
    STATE(355), 1,
      sym_quantity,
  [11676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_COLON,
    ACTIONS(1122), 1,
      anon_sym_RBRACK,
  [11686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_before,
      anon_sym_after,
  [11694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym_number,
    STATE(402), 1,
      sym_quantity,
  [11720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym_number,
    STATE(405), 1,
      sym_quantity,
  [11746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(429), 1,
      sym_string,
  [11756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_SQUOTE,
    STATE(212), 1,
      sym_string,
  [11766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_RBRACK,
  [11773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_COLON,
  [11780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DOT,
  [11787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_and,
  [11794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_and,
  [11801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_COLON,
  [11808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_of,
  [11815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_between,
  [11822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      sym_number,
  [11829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_of,
  [11836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_in,
  [11843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
  [11850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      ts_builtin_sym_end,
  [11857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_in,
  [11864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_and,
  [11871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_and,
  [11878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_RBRACK,
  [11885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_COLON,
  [11892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_RBRACK,
  [11899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_LPAREN,
  [11906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_of,
  [11913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_COLON,
  [11920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_COLON,
  [11927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_LBRACE,
  [11934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_COLON,
  [11941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_COLON,
  [11948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_RBRACK,
  [11955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_COLON,
  [11962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_between,
  [11969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_COLON,
  [11976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_RBRACK,
  [11983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      anon_sym_between,
  [11990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_COLON,
  [11997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_from,
  [12004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_DOT,
  [12011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_LPAREN,
  [12018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_COLON,
  [12025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_LBRACE,
  [12032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_LBRACE,
  [12039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_DOT,
  [12046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_and,
  [12053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_COLON,
  [12060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
  [12067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_of,
  [12074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(84)] = 0,
  [SMALL_STATE(85)] = 91,
  [SMALL_STATE(86)] = 182,
  [SMALL_STATE(87)] = 267,
  [SMALL_STATE(88)] = 352,
  [SMALL_STATE(89)] = 437,
  [SMALL_STATE(90)] = 522,
  [SMALL_STATE(91)] = 599,
  [SMALL_STATE(92)] = 678,
  [SMALL_STATE(93)] = 757,
  [SMALL_STATE(94)] = 836,
  [SMALL_STATE(95)] = 901,
  [SMALL_STATE(96)] = 966,
  [SMALL_STATE(97)] = 1031,
  [SMALL_STATE(98)] = 1095,
  [SMALL_STATE(99)] = 1157,
  [SMALL_STATE(100)] = 1272,
  [SMALL_STATE(101)] = 1387,
  [SMALL_STATE(102)] = 1502,
  [SMALL_STATE(103)] = 1573,
  [SMALL_STATE(104)] = 1688,
  [SMALL_STATE(105)] = 1759,
  [SMALL_STATE(106)] = 1830,
  [SMALL_STATE(107)] = 1901,
  [SMALL_STATE(108)] = 1986,
  [SMALL_STATE(109)] = 2057,
  [SMALL_STATE(110)] = 2172,
  [SMALL_STATE(111)] = 2243,
  [SMALL_STATE(112)] = 2314,
  [SMALL_STATE(113)] = 2429,
  [SMALL_STATE(114)] = 2500,
  [SMALL_STATE(115)] = 2564,
  [SMALL_STATE(116)] = 2628,
  [SMALL_STATE(117)] = 2692,
  [SMALL_STATE(118)] = 2756,
  [SMALL_STATE(119)] = 2816,
  [SMALL_STATE(120)] = 2876,
  [SMALL_STATE(121)] = 2936,
  [SMALL_STATE(122)] = 3000,
  [SMALL_STATE(123)] = 3059,
  [SMALL_STATE(124)] = 3118,
  [SMALL_STATE(125)] = 3176,
  [SMALL_STATE(126)] = 3238,
  [SMALL_STATE(127)] = 3300,
  [SMALL_STATE(128)] = 3358,
  [SMALL_STATE(129)] = 3416,
  [SMALL_STATE(130)] = 3474,
  [SMALL_STATE(131)] = 3534,
  [SMALL_STATE(132)] = 3592,
  [SMALL_STATE(133)] = 3650,
  [SMALL_STATE(134)] = 3707,
  [SMALL_STATE(135)] = 3764,
  [SMALL_STATE(136)] = 3821,
  [SMALL_STATE(137)] = 3878,
  [SMALL_STATE(138)] = 3935,
  [SMALL_STATE(139)] = 3992,
  [SMALL_STATE(140)] = 4049,
  [SMALL_STATE(141)] = 4106,
  [SMALL_STATE(142)] = 4163,
  [SMALL_STATE(143)] = 4220,
  [SMALL_STATE(144)] = 4277,
  [SMALL_STATE(145)] = 4334,
  [SMALL_STATE(146)] = 4391,
  [SMALL_STATE(147)] = 4448,
  [SMALL_STATE(148)] = 4505,
  [SMALL_STATE(149)] = 4562,
  [SMALL_STATE(150)] = 4619,
  [SMALL_STATE(151)] = 4676,
  [SMALL_STATE(152)] = 4733,
  [SMALL_STATE(153)] = 4790,
  [SMALL_STATE(154)] = 4847,
  [SMALL_STATE(155)] = 4904,
  [SMALL_STATE(156)] = 4961,
  [SMALL_STATE(157)] = 5018,
  [SMALL_STATE(158)] = 5075,
  [SMALL_STATE(159)] = 5132,
  [SMALL_STATE(160)] = 5189,
  [SMALL_STATE(161)] = 5293,
  [SMALL_STATE(162)] = 5397,
  [SMALL_STATE(163)] = 5501,
  [SMALL_STATE(164)] = 5575,
  [SMALL_STATE(165)] = 5679,
  [SMALL_STATE(166)] = 5741,
  [SMALL_STATE(167)] = 5803,
  [SMALL_STATE(168)] = 5865,
  [SMALL_STATE(169)] = 5927,
  [SMALL_STATE(170)] = 6031,
  [SMALL_STATE(171)] = 6135,
  [SMALL_STATE(172)] = 6197,
  [SMALL_STATE(173)] = 6259,
  [SMALL_STATE(174)] = 6321,
  [SMALL_STATE(175)] = 6425,
  [SMALL_STATE(176)] = 6487,
  [SMALL_STATE(177)] = 6547,
  [SMALL_STATE(178)] = 6649,
  [SMALL_STATE(179)] = 6709,
  [SMALL_STATE(180)] = 6769,
  [SMALL_STATE(181)] = 6871,
  [SMALL_STATE(182)] = 6931,
  [SMALL_STATE(183)] = 7003,
  [SMALL_STATE(184)] = 7105,
  [SMALL_STATE(185)] = 7165,
  [SMALL_STATE(186)] = 7225,
  [SMALL_STATE(187)] = 7285,
  [SMALL_STATE(188)] = 7387,
  [SMALL_STATE(189)] = 7447,
  [SMALL_STATE(190)] = 7500,
  [SMALL_STATE(191)] = 7553,
  [SMALL_STATE(192)] = 7652,
  [SMALL_STATE(193)] = 7701,
  [SMALL_STATE(194)] = 7750,
  [SMALL_STATE(195)] = 7801,
  [SMALL_STATE(196)] = 7848,
  [SMALL_STATE(197)] = 7895,
  [SMALL_STATE(198)] = 7946,
  [SMALL_STATE(199)] = 8009,
  [SMALL_STATE(200)] = 8072,
  [SMALL_STATE(201)] = 8135,
  [SMALL_STATE(202)] = 8177,
  [SMALL_STATE(203)] = 8218,
  [SMALL_STATE(204)] = 8248,
  [SMALL_STATE(205)] = 8278,
  [SMALL_STATE(206)] = 8328,
  [SMALL_STATE(207)] = 8358,
  [SMALL_STATE(208)] = 8396,
  [SMALL_STATE(209)] = 8426,
  [SMALL_STATE(210)] = 8456,
  [SMALL_STATE(211)] = 8480,
  [SMALL_STATE(212)] = 8504,
  [SMALL_STATE(213)] = 8536,
  [SMALL_STATE(214)] = 8562,
  [SMALL_STATE(215)] = 8588,
  [SMALL_STATE(216)] = 8620,
  [SMALL_STATE(217)] = 8646,
  [SMALL_STATE(218)] = 8672,
  [SMALL_STATE(219)] = 8701,
  [SMALL_STATE(220)] = 8730,
  [SMALL_STATE(221)] = 8773,
  [SMALL_STATE(222)] = 8796,
  [SMALL_STATE(223)] = 8819,
  [SMALL_STATE(224)] = 8842,
  [SMALL_STATE(225)] = 8865,
  [SMALL_STATE(226)] = 8888,
  [SMALL_STATE(227)] = 8911,
  [SMALL_STATE(228)] = 8937,
  [SMALL_STATE(229)] = 8963,
  [SMALL_STATE(230)] = 8985,
  [SMALL_STATE(231)] = 9007,
  [SMALL_STATE(232)] = 9033,
  [SMALL_STATE(233)] = 9059,
  [SMALL_STATE(234)] = 9085,
  [SMALL_STATE(235)] = 9111,
  [SMALL_STATE(236)] = 9137,
  [SMALL_STATE(237)] = 9163,
  [SMALL_STATE(238)] = 9189,
  [SMALL_STATE(239)] = 9215,
  [SMALL_STATE(240)] = 9238,
  [SMALL_STATE(241)] = 9261,
  [SMALL_STATE(242)] = 9284,
  [SMALL_STATE(243)] = 9305,
  [SMALL_STATE(244)] = 9332,
  [SMALL_STATE(245)] = 9359,
  [SMALL_STATE(246)] = 9380,
  [SMALL_STATE(247)] = 9401,
  [SMALL_STATE(248)] = 9424,
  [SMALL_STATE(249)] = 9444,
  [SMALL_STATE(250)] = 9464,
  [SMALL_STATE(251)] = 9484,
  [SMALL_STATE(252)] = 9504,
  [SMALL_STATE(253)] = 9524,
  [SMALL_STATE(254)] = 9544,
  [SMALL_STATE(255)] = 9564,
  [SMALL_STATE(256)] = 9584,
  [SMALL_STATE(257)] = 9604,
  [SMALL_STATE(258)] = 9624,
  [SMALL_STATE(259)] = 9644,
  [SMALL_STATE(260)] = 9664,
  [SMALL_STATE(261)] = 9684,
  [SMALL_STATE(262)] = 9704,
  [SMALL_STATE(263)] = 9724,
  [SMALL_STATE(264)] = 9744,
  [SMALL_STATE(265)] = 9764,
  [SMALL_STATE(266)] = 9784,
  [SMALL_STATE(267)] = 9804,
  [SMALL_STATE(268)] = 9824,
  [SMALL_STATE(269)] = 9841,
  [SMALL_STATE(270)] = 9872,
  [SMALL_STATE(271)] = 9903,
  [SMALL_STATE(272)] = 9920,
  [SMALL_STATE(273)] = 9951,
  [SMALL_STATE(274)] = 9982,
  [SMALL_STATE(275)] = 10013,
  [SMALL_STATE(276)] = 10044,
  [SMALL_STATE(277)] = 10075,
  [SMALL_STATE(278)] = 10106,
  [SMALL_STATE(279)] = 10137,
  [SMALL_STATE(280)] = 10168,
  [SMALL_STATE(281)] = 10194,
  [SMALL_STATE(282)] = 10208,
  [SMALL_STATE(283)] = 10230,
  [SMALL_STATE(284)] = 10252,
  [SMALL_STATE(285)] = 10274,
  [SMALL_STATE(286)] = 10296,
  [SMALL_STATE(287)] = 10312,
  [SMALL_STATE(288)] = 10334,
  [SMALL_STATE(289)] = 10356,
  [SMALL_STATE(290)] = 10378,
  [SMALL_STATE(291)] = 10400,
  [SMALL_STATE(292)] = 10422,
  [SMALL_STATE(293)] = 10433,
  [SMALL_STATE(294)] = 10452,
  [SMALL_STATE(295)] = 10471,
  [SMALL_STATE(296)] = 10490,
  [SMALL_STATE(297)] = 10507,
  [SMALL_STATE(298)] = 10518,
  [SMALL_STATE(299)] = 10537,
  [SMALL_STATE(300)] = 10556,
  [SMALL_STATE(301)] = 10575,
  [SMALL_STATE(302)] = 10594,
  [SMALL_STATE(303)] = 10607,
  [SMALL_STATE(304)] = 10626,
  [SMALL_STATE(305)] = 10645,
  [SMALL_STATE(306)] = 10656,
  [SMALL_STATE(307)] = 10675,
  [SMALL_STATE(308)] = 10694,
  [SMALL_STATE(309)] = 10708,
  [SMALL_STATE(310)] = 10724,
  [SMALL_STATE(311)] = 10740,
  [SMALL_STATE(312)] = 10756,
  [SMALL_STATE(313)] = 10770,
  [SMALL_STATE(314)] = 10784,
  [SMALL_STATE(315)] = 10800,
  [SMALL_STATE(316)] = 10814,
  [SMALL_STATE(317)] = 10830,
  [SMALL_STATE(318)] = 10844,
  [SMALL_STATE(319)] = 10858,
  [SMALL_STATE(320)] = 10872,
  [SMALL_STATE(321)] = 10886,
  [SMALL_STATE(322)] = 10900,
  [SMALL_STATE(323)] = 10914,
  [SMALL_STATE(324)] = 10928,
  [SMALL_STATE(325)] = 10944,
  [SMALL_STATE(326)] = 10956,
  [SMALL_STATE(327)] = 10972,
  [SMALL_STATE(328)] = 10986,
  [SMALL_STATE(329)] = 11000,
  [SMALL_STATE(330)] = 11012,
  [SMALL_STATE(331)] = 11028,
  [SMALL_STATE(332)] = 11044,
  [SMALL_STATE(333)] = 11058,
  [SMALL_STATE(334)] = 11072,
  [SMALL_STATE(335)] = 11088,
  [SMALL_STATE(336)] = 11104,
  [SMALL_STATE(337)] = 11118,
  [SMALL_STATE(338)] = 11134,
  [SMALL_STATE(339)] = 11148,
  [SMALL_STATE(340)] = 11164,
  [SMALL_STATE(341)] = 11180,
  [SMALL_STATE(342)] = 11194,
  [SMALL_STATE(343)] = 11208,
  [SMALL_STATE(344)] = 11222,
  [SMALL_STATE(345)] = 11238,
  [SMALL_STATE(346)] = 11254,
  [SMALL_STATE(347)] = 11270,
  [SMALL_STATE(348)] = 11286,
  [SMALL_STATE(349)] = 11298,
  [SMALL_STATE(350)] = 11311,
  [SMALL_STATE(351)] = 11324,
  [SMALL_STATE(352)] = 11333,
  [SMALL_STATE(353)] = 11344,
  [SMALL_STATE(354)] = 11353,
  [SMALL_STATE(355)] = 11362,
  [SMALL_STATE(356)] = 11371,
  [SMALL_STATE(357)] = 11384,
  [SMALL_STATE(358)] = 11393,
  [SMALL_STATE(359)] = 11402,
  [SMALL_STATE(360)] = 11411,
  [SMALL_STATE(361)] = 11424,
  [SMALL_STATE(362)] = 11433,
  [SMALL_STATE(363)] = 11446,
  [SMALL_STATE(364)] = 11459,
  [SMALL_STATE(365)] = 11468,
  [SMALL_STATE(366)] = 11477,
  [SMALL_STATE(367)] = 11488,
  [SMALL_STATE(368)] = 11497,
  [SMALL_STATE(369)] = 11506,
  [SMALL_STATE(370)] = 11519,
  [SMALL_STATE(371)] = 11532,
  [SMALL_STATE(372)] = 11542,
  [SMALL_STATE(373)] = 11552,
  [SMALL_STATE(374)] = 11560,
  [SMALL_STATE(375)] = 11568,
  [SMALL_STATE(376)] = 11578,
  [SMALL_STATE(377)] = 11588,
  [SMALL_STATE(378)] = 11598,
  [SMALL_STATE(379)] = 11608,
  [SMALL_STATE(380)] = 11618,
  [SMALL_STATE(381)] = 11628,
  [SMALL_STATE(382)] = 11638,
  [SMALL_STATE(383)] = 11646,
  [SMALL_STATE(384)] = 11656,
  [SMALL_STATE(385)] = 11666,
  [SMALL_STATE(386)] = 11676,
  [SMALL_STATE(387)] = 11686,
  [SMALL_STATE(388)] = 11694,
  [SMALL_STATE(389)] = 11702,
  [SMALL_STATE(390)] = 11710,
  [SMALL_STATE(391)] = 11720,
  [SMALL_STATE(392)] = 11728,
  [SMALL_STATE(393)] = 11736,
  [SMALL_STATE(394)] = 11746,
  [SMALL_STATE(395)] = 11756,
  [SMALL_STATE(396)] = 11766,
  [SMALL_STATE(397)] = 11773,
  [SMALL_STATE(398)] = 11780,
  [SMALL_STATE(399)] = 11787,
  [SMALL_STATE(400)] = 11794,
  [SMALL_STATE(401)] = 11801,
  [SMALL_STATE(402)] = 11808,
  [SMALL_STATE(403)] = 11815,
  [SMALL_STATE(404)] = 11822,
  [SMALL_STATE(405)] = 11829,
  [SMALL_STATE(406)] = 11836,
  [SMALL_STATE(407)] = 11843,
  [SMALL_STATE(408)] = 11850,
  [SMALL_STATE(409)] = 11857,
  [SMALL_STATE(410)] = 11864,
  [SMALL_STATE(411)] = 11871,
  [SMALL_STATE(412)] = 11878,
  [SMALL_STATE(413)] = 11885,
  [SMALL_STATE(414)] = 11892,
  [SMALL_STATE(415)] = 11899,
  [SMALL_STATE(416)] = 11906,
  [SMALL_STATE(417)] = 11913,
  [SMALL_STATE(418)] = 11920,
  [SMALL_STATE(419)] = 11927,
  [SMALL_STATE(420)] = 11934,
  [SMALL_STATE(421)] = 11941,
  [SMALL_STATE(422)] = 11948,
  [SMALL_STATE(423)] = 11955,
  [SMALL_STATE(424)] = 11962,
  [SMALL_STATE(425)] = 11969,
  [SMALL_STATE(426)] = 11976,
  [SMALL_STATE(427)] = 11983,
  [SMALL_STATE(428)] = 11990,
  [SMALL_STATE(429)] = 11997,
  [SMALL_STATE(430)] = 12004,
  [SMALL_STATE(431)] = 12011,
  [SMALL_STATE(432)] = 12018,
  [SMALL_STATE(433)] = 12025,
  [SMALL_STATE(434)] = 12032,
  [SMALL_STATE(435)] = 12039,
  [SMALL_STATE(436)] = 12046,
  [SMALL_STATE(437)] = 12053,
  [SMALL_STATE(438)] = 12060,
  [SMALL_STATE(439)] = 12067,
  [SMALL_STATE(440)] = 12074,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_identifier, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_identifier, 1), SHIFT(357),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_identifier, 1), SHIFT(328),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 1), SHIFT(201),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 2), SHIFT(68),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 1), SHIFT(67),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 3),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 3), SHIFT(64),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporal_relationship, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_relationship, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporal_relationship, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_relationship, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 5),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 5), SHIFT(69),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_time_precision_specifier, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision_specifier, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative_qualifier, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_qualifier, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 6),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 4), SHIFT(71),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quantity, 1), REDUCE(sym_literal, 1, .production_id = 7),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_quantity, 1), REDUCE(sym_literal, 1, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(203),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(338),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(210),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(210),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(203),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(338),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 13),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 13),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_membership_expression, 3),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(73),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(76),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(296),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(277),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(404),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(387),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(59),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(51),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(220),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(243),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(55),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(58),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(52),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(371),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(201),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 6),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 6),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_expression, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_membership_expression, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(73),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(76),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(296),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(277),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(404),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(387),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(59),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(51),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(220),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(243),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(55),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(58),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(52),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(371),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(201),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expression, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_existence_expression, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_existence_expression, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_expression, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_expression, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_expression, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implies_expression, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implies_expression, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_fix_set_expression, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_fix_set_expression, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timing_expression, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timing_expression, 3),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(73),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(76),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(296),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(277),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(404),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(387),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(59),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(51),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(220),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(243),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(55),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(58),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(52),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(371),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(201),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inequality_expression, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inequality_expression, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2), SHIFT_REPEAT(77),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 3),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliased_query_source, 2, .production_id = 12),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aliased_query_source, 2, .production_id = 12),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 5),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_identifier, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_identifier, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_time_precision, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plural_date_time_precision, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plural_date_time_precision, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_identifier, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name_identifier, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_specifier, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_term, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_term, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 4),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 8),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 8),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 5),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 5),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 9),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 9),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_identifier, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_difference_between_expression, 7),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_difference_between_expression, 7),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 5),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 5),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 7),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 7),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 6),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 6),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 6),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 6),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_definition, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 21),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_definition, 5),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 18),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 2),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(287),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(290),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(289),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(314),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(310),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(326),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(345),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(302),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 5, .production_id = 14),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valueset_definition, 5, .production_id = 14),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_or_codesystem_identifier, 1),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_or_codesystem_identifier, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 4, .production_id = 4),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valueset_definition, 4, .production_id = 4),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_definition, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_or_codesystem_identifier, 3, .production_id = 17),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_or_codesystem_identifier, 3, .production_id = 17),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept_definition, 8),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concept_definition, 8),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 2),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_definition, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_definition, 7, .production_id = 19),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_definition, 7, .production_id = 19),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept_definition, 6),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concept_definition, 6),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 5, .production_id = 4),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valueset_definition, 5, .production_id = 4),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept_definition, 7),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concept_definition, 7),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem_definition, 5, .production_id = 15),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codesystem_definition, 5, .production_id = 15),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_definition, 6, .production_id = 16),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_definition, 6, .production_id = 16),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem_definition, 4, .production_id = 5),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codesystem_definition, 4, .production_id = 5),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 6, .production_id = 14),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valueset_definition, 6, .production_id = 14),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 3),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 3),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_definition, 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2, .production_id = 2),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_specifier, 2, .production_id = 2),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_definition, 8, .production_id = 19),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_definition, 8, .production_id = 19),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_definition, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept_definition, 9),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concept_definition, 9),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 11),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 5, .production_id = 11),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 5, .production_id = 11),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_definition, 5, .production_id = 11),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystems, 5, .production_id = 20),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codesystems, 5, .production_id = 20),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 4, .production_id = 3),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_definition, 4, .production_id = 3),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem_definition, 6, .production_id = 15),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codesystem_definition, 6, .production_id = 15),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 4, .production_id = 3),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 4, .production_id = 3),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem_definition, 5, .production_id = 5),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codesystem_definition, 5, .production_id = 5),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_clause, 2),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_clause, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 6, .production_id = 4),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valueset_definition, 6, .production_id = 4),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_definition, 7, .production_id = 16),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_definition, 7, .production_id = 16),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystems, 4, .production_id = 20),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codesystems, 4, .production_id = 20),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 7, .production_id = 14),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valueset_definition, 7, .production_id = 14),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(344),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(280),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 3),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity_offset, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(203),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_modifier, 1),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_modifier, 1),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(318),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 1),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 2),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(341),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystems_repeat1, 2), SHIFT_REPEAT(294),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystems_repeat1, 2),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_relative_qualifier, 1),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity_offset, 2),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, .production_id = 10),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concept_definition_repeat1, 2), SHIFT_REPEAT(293),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concept_definition_repeat1, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystems_repeat1, 2, .production_id = 22),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 3),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclusive_relative_qualifier, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminology, 1),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
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
