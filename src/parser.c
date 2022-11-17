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
#define STATE_COUNT 293
#define LARGE_STATE_COUNT 61
#define SYMBOL_COUNT 192
#define ALIAS_COUNT 12
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 14

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
  anon_sym_ormore = 68,
  anon_sym_orless = 69,
  anon_sym_lessthan = 70,
  anon_sym_morethan = 71,
  anon_sym_onor = 72,
  anon_sym_before = 73,
  anon_sym_after = 74,
  anon_sym_oron = 75,
  anon_sym_starts = 76,
  anon_sym_ends = 77,
  anon_sym_occurs = 78,
  anon_sym_same = 79,
  anon_sym_start = 80,
  anon_sym_end = 81,
  anon_sym_includes = 82,
  anon_sym_during = 83,
  anon_sym_includedin = 84,
  anon_sym_meets = 85,
  anon_sym_overlaps = 86,
  anon_sym_within = 87,
  anon_sym_where = 88,
  anon_sym_from = 89,
  anon_sym_COMMA = 90,
  anon_sym_LBRACK = 91,
  anon_sym_RBRACK = 92,
  anon_sym_version = 93,
  sym_default_identifier = 94,
  anon_sym_DQUOTE = 95,
  anon_sym_Code = 96,
  anon_sym_Concept = 97,
  anon_sym_asc = 98,
  anon_sym_ascending = 99,
  anon_sym_by = 100,
  anon_sym_code = 101,
  anon_sym_codesystem = 102,
  anon_sym_codesystems = 103,
  anon_sym_concept = 104,
  anon_sym_default = 105,
  anon_sym_desc = 106,
  anon_sym_descending = 107,
  anon_sym_display = 108,
  anon_sym_div = 109,
  anon_sym_fluent = 110,
  anon_sym_mod = 111,
  anon_sym_parameter = 112,
  anon_sym_predecessor = 113,
  anon_sym_private = 114,
  anon_sym_public = 115,
  anon_sym_starting = 116,
  anon_sym_successor = 117,
  anon_sym_width = 118,
  anon_sym_SQUOTE = 119,
  sym_single_quote_string_fragment = 120,
  sym_double_quote_string_fragment = 121,
  sym_escape_sequence = 122,
  sym_number = 123,
  sym_comment = 124,
  sym_cql_library = 125,
  sym_definition = 126,
  sym_library_definition = 127,
  sym_using_definition = 128,
  sym_include_definition = 129,
  sym_valueset_definition = 130,
  sym_statement = 131,
  sym_context_definition = 132,
  sym_function_definition = 133,
  sym_expression_definition = 134,
  sym_expression = 135,
  sym_expression_term = 136,
  sym_term = 137,
  sym_quantity = 138,
  sym_literal = 139,
  sym_qualified_identifier_expression = 140,
  sym_boolean_expression = 141,
  sym_type_expression = 142,
  sym_cast_expression = 143,
  sym_not_expression = 144,
  sym_existence_expression = 145,
  sym_between_expression = 146,
  sym_equality_expression = 147,
  sym_inequality_expression = 148,
  sym_and_expression = 149,
  sym_or_expression = 150,
  sym_implies_expression = 151,
  sym_in_fix_set_expression = 152,
  sym_date_time_precision = 153,
  sym_plural_date_time_precision = 154,
  sym_duration_between_expression = 155,
  sym_difference_between_expression = 156,
  sym_date_time_precision_specifier = 157,
  sym_membership_expression = 158,
  sym_relative_qualifier = 159,
  sym_offset_relative_qualifier = 160,
  sym_exclusive_relative_qualifier = 161,
  sym_quantity_offset = 162,
  sym_temporal_relationship = 163,
  sym_interval_operator_phrase = 164,
  sym_timing_expression = 165,
  sym_query = 166,
  sym_where_clause = 167,
  sym_query_source = 168,
  sym_aliased_query_source = 169,
  sym_query_source_clause = 170,
  sym_retrieve = 171,
  sym_terminology = 172,
  sym_type_specifier = 173,
  sym_named_type_specifier = 174,
  sym_version_specifier = 175,
  sym_identifier = 176,
  sym_qualified_identifier = 177,
  sym_quoted_identifier = 178,
  sym_referential_identifier = 179,
  sym_type_name_identifier = 180,
  sym_referential_or_type_name_identifier = 181,
  sym_keyword_identifier = 182,
  sym_string = 183,
  sym_unit = 184,
  aux_sym_cql_library_repeat1 = 185,
  aux_sym_cql_library_repeat2 = 186,
  aux_sym_qualified_identifier_expression_repeat1 = 187,
  aux_sym_query_source_clause_repeat1 = 188,
  aux_sym_named_type_specifier_repeat1 = 189,
  aux_sym_quoted_identifier_repeat1 = 190,
  aux_sym_string_repeat1 = 191,
  alias_sym_function_body = 192,
  alias_sym_local_identifier = 193,
  alias_sym_model_identifier = 194,
  alias_sym_null_literal = 195,
  alias_sym_number_literal = 196,
  alias_sym_qualifier = 197,
  alias_sym_qualifier_expression = 198,
  alias_sym_quantity_literal = 199,
  alias_sym_query_alias = 200,
  alias_sym_string_literal = 201,
  alias_sym_valueset_id = 202,
  alias_sym_version = 203,
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
  [sym_number] = "number",
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
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_quoted_identifier] = "quoted_identifier",
  [sym_referential_identifier] = "referential_identifier",
  [sym_type_name_identifier] = "type_name_identifier",
  [sym_referential_or_type_name_identifier] = "referential_or_type_name_identifier",
  [sym_keyword_identifier] = "keyword_identifier",
  [sym_string] = "string",
  [sym_unit] = "unit",
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
  [sym_number] = sym_number,
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
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_quoted_identifier] = sym_quoted_identifier,
  [sym_referential_identifier] = sym_referential_identifier,
  [sym_type_name_identifier] = sym_type_name_identifier,
  [sym_referential_or_type_name_identifier] = sym_referential_or_type_name_identifier,
  [sym_keyword_identifier] = sym_keyword_identifier,
  [sym_string] = sym_string,
  [sym_unit] = sym_unit,
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
    [1] = alias_sym_model_identifier,
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
    [4] = alias_sym_local_identifier,
  },
  [11] = {
    [1] = alias_sym_query_alias,
  },
  [12] = {
    [0] = alias_sym_qualifier_expression,
  },
  [13] = {
    [6] = alias_sym_function_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_expression, 2,
    sym_expression,
    alias_sym_function_body,
  sym_quantity, 2,
    sym_quantity,
    alias_sym_quantity_literal,
  sym_identifier, 5,
    sym_identifier,
    alias_sym_local_identifier,
    alias_sym_model_identifier,
    alias_sym_qualifier,
    alias_sym_query_alias,
  sym_referential_identifier, 2,
    sym_referential_identifier,
    alias_sym_qualifier_expression,
  sym_string, 4,
    sym_string,
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
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 8,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 7,
  [21] = 21,
  [22] = 9,
  [23] = 14,
  [24] = 24,
  [25] = 11,
  [26] = 16,
  [27] = 17,
  [28] = 18,
  [29] = 19,
  [30] = 24,
  [31] = 21,
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 58,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 63,
  [67] = 67,
  [68] = 68,
  [69] = 68,
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
  [97] = 85,
  [98] = 98,
  [99] = 74,
  [100] = 100,
  [101] = 79,
  [102] = 77,
  [103] = 83,
  [104] = 104,
  [105] = 75,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 86,
  [111] = 76,
  [112] = 80,
  [113] = 81,
  [114] = 82,
  [115] = 73,
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
  [147] = 119,
  [148] = 116,
  [149] = 122,
  [150] = 123,
  [151] = 151,
  [152] = 151,
  [153] = 65,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 146,
  [158] = 144,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 95,
  [163] = 94,
  [164] = 90,
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
  [184] = 117,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
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
  [205] = 124,
  [206] = 206,
  [207] = 121,
  [208] = 208,
  [209] = 118,
  [210] = 140,
  [211] = 67,
  [212] = 132,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 218,
  [220] = 215,
  [221] = 213,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 217,
  [233] = 233,
  [234] = 234,
  [235] = 213,
  [236] = 236,
  [237] = 218,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 95,
  [244] = 244,
  [245] = 90,
  [246] = 246,
  [247] = 247,
  [248] = 94,
  [249] = 249,
  [250] = 250,
  [251] = 119,
  [252] = 122,
  [253] = 250,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 71,
  [262] = 250,
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
  [280] = 278,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 278,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 274,
  [290] = 290,
  [291] = 291,
  [292] = 292,
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
      if (eof) ADVANCE(411);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == ',') ADVANCE(579);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '=') ADVANCE(460);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(263);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == ']') ADVANCE(581);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'h') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(37);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(267);
      if (lookahead == 'y') ADVANCE(144);
      if (lookahead == '|') ADVANCE(474);
      if (lookahead == '~') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(408)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(402);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(361);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(374);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '=') ADVANCE(460);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'b') ADVANCE(683);
      if (lookahead == 'd') ADVANCE(971);
      if (lookahead == 'e') ADVANCE(838);
      if (lookahead == 'i') ADVANCE(803);
      if (lookahead == 'l') ADVANCE(725);
      if (lookahead == 'm') ADVANCE(689);
      if (lookahead == 'o') ADVANCE(628);
      if (lookahead == 'p') ADVANCE(882);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead == 'u') ADVANCE(820);
      if (lookahead == 'w') ADVANCE(769);
      if (lookahead == 'x') ADVANCE(845);
      if (lookahead == '|') ADVANCE(474);
      if (lookahead == '~') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(1034);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == 'b') ADVANCE(982);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == 'd') ADVANCE(591);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'h') ADVANCE(842);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == 'l') ADVANCE(755);
      if (lookahead == 'm') ADVANCE(686);
      if (lookahead == 'n') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == 'p') ADVANCE(608);
      if (lookahead == 's') ADVANCE(690);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead == 'v') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(698);
      if (lookahead == 'x') ADVANCE(845);
      if (lookahead == 'y') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(1034);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == 'b') ADVANCE(982);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == 'd') ADVANCE(591);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'h') ADVANCE(842);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == 'l') ADVANCE(755);
      if (lookahead == 'm') ADVANCE(686);
      if (lookahead == 'n') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(881);
      if (lookahead == 'p') ADVANCE(608);
      if (lookahead == 's') ADVANCE(690);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead == 'v') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(698);
      if (lookahead == 'x') ADVANCE(845);
      if (lookahead == 'y') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(1034);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == 'b') ADVANCE(982);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == 'd') ADVANCE(594);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'h') ADVANCE(847);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == 'l') ADVANCE(755);
      if (lookahead == 'm') ADVANCE(687);
      if (lookahead == 'n') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == 'p') ADVANCE(608);
      if (lookahead == 's') ADVANCE(732);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead == 'v') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(716);
      if (lookahead == 'x') ADVANCE(845);
      if (lookahead == 'y') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(1034);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == 'b') ADVANCE(982);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == 'd') ADVANCE(594);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'h') ADVANCE(847);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == 'l') ADVANCE(755);
      if (lookahead == 'm') ADVANCE(687);
      if (lookahead == 'n') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == 'p') ADVANCE(608);
      if (lookahead == 's') ADVANCE(732);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead == 'v') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(716);
      if (lookahead == 'x') ADVANCE(845);
      if (lookahead == 'y') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(1034);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'b') ADVANCE(699);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == 'd') ADVANCE(591);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'h') ADVANCE(842);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == 'l') ADVANCE(755);
      if (lookahead == 'm') ADVANCE(686);
      if (lookahead == 'n') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == 'p') ADVANCE(608);
      if (lookahead == 's') ADVANCE(690);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead == 'v') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(698);
      if (lookahead == 'x') ADVANCE(845);
      if (lookahead == 'y') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(1034);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'b') ADVANCE(699);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == 'd') ADVANCE(592);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'h') ADVANCE(842);
      if (lookahead == 'i') ADVANCE(802);
      if (lookahead == 'l') ADVANCE(724);
      if (lookahead == 'm') ADVANCE(685);
      if (lookahead == 'n') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(821);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead == 's') ADVANCE(613);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead == 'v') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(697);
      if (lookahead == 'x') ADVANCE(845);
      if (lookahead == 'y') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == 'b') ADVANCE(982);
      if (lookahead == 'c') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(607);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'i') ADVANCE(801);
      if (lookahead == 'l') ADVANCE(755);
      if (lookahead == 'm') ADVANCE(688);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == 'p') ADVANCE(608);
      if (lookahead == 's') ADVANCE(932);
      if (lookahead == 't') ADVANCE(758);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead == 'v') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(753);
      if (lookahead == 'x') ADVANCE(845);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == ']') ADVANCE(581);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'C') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == 'b') ADVANCE(982);
      if (lookahead == 'c') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(607);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == 'f') ADVANCE(616);
      if (lookahead == 'i') ADVANCE(801);
      if (lookahead == 'l') ADVANCE(755);
      if (lookahead == 'm') ADVANCE(688);
      if (lookahead == 'n') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == 'p') ADVANCE(608);
      if (lookahead == 's') ADVANCE(932);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead == 'v') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(753);
      if (lookahead == 'x') ADVANCE(845);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'C') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == 'b') ADVANCE(982);
      if (lookahead == 'c') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(607);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'i') ADVANCE(801);
      if (lookahead == 'l') ADVANCE(755);
      if (lookahead == 'm') ADVANCE(688);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == 'p') ADVANCE(608);
      if (lookahead == 's') ADVANCE(932);
      if (lookahead == 't') ADVANCE(758);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead == 'v') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(753);
      if (lookahead == 'x') ADVANCE(845);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(964);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '/') ADVANCE(1042);
      if (lookahead == '\\') ADVANCE(377);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1045);
      if (lookahead != 0) ADVANCE(1046);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '/') ADVANCE(1036);
      if (lookahead == '\\') ADVANCE(377);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1039);
      if (lookahead != 0) ADVANCE(1040);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(987);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(1);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(1053);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(1052);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(281);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == 'w') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(152);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(461);
      if (lookahead == '~') ADVANCE(463);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(319);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead == 'v') ADVANCE(129);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(1008);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(1025);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(458);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(563);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(1017);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(416);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(504);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(499);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(360);
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'y') ADVANCE(995);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(989);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(998);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 161:
      if (lookahead == 'f') ADVANCE(371);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 162:
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 163:
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 164:
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == 'v') ADVANCE(1013);
      END_STATE();
    case 165:
      if (lookahead == 'f') ADVANCE(170);
      END_STATE();
    case 166:
      if (lookahead == 'f') ADVANCE(186);
      END_STATE();
    case 167:
      if (lookahead == 'f') ADVANCE(280);
      END_STATE();
    case 168:
      if (lookahead == 'f') ADVANCE(280);
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 169:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 170:
      if (lookahead == 'f') ADVANCE(340);
      END_STATE();
    case 171:
      if (lookahead == 'f') ADVANCE(373);
      END_STATE();
    case 172:
      if (lookahead == 'f') ADVANCE(283);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(414);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(566);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(1027);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(1009);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(486);
      END_STATE();
    case 178:
      if (lookahead == 'h') ADVANCE(1031);
      END_STATE();
    case 179:
      if (lookahead == 'h') ADVANCE(484);
      END_STATE();
    case 180:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 181:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 182:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 201:
      if (lookahead == 'k') ADVANCE(489);
      END_STATE();
    case 202:
      if (lookahead == 'k') ADVANCE(487);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(284);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(577);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(1000);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(573);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(545);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(568);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 285:
      if (lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 286:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 287:
      if (lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 288:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 289:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 290:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(1019);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(1029);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 322:
      if (lookahead == 's') ADVANCE(569);
      END_STATE();
    case 323:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(556);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(538);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(571);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(543);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(1015);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(991);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(1005);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'y') ADVANCE(492);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 377:
      if (lookahead == 'u') ADVANCE(400);
      if (lookahead == 'x') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1049);
      if (lookahead != 0) ADVANCE(1047);
      END_STATE();
    case 378:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 379:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 380:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 381:
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 382:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 383:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 384:
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 385:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 386:
      if (lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 387:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 388:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 389:
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 390:
      if (lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 391:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 392:
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 393:
      if (lookahead == 'x') ADVANCE(354);
      END_STATE();
    case 394:
      if (lookahead == 'y') ADVANCE(492);
      END_STATE();
    case 395:
      if (lookahead == 'y') ADVANCE(1011);
      END_STATE();
    case 396:
      if (lookahead == 'y') ADVANCE(412);
      END_STATE();
    case 397:
      if (lookahead == 'y') ADVANCE(454);
      END_STATE();
    case 398:
      if (lookahead == 'y') ADVANCE(490);
      END_STATE();
    case 399:
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 400:
      if (lookahead == '{') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      END_STATE();
    case 401:
      if (lookahead == '}') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      END_STATE();
    case 402:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1051);
      END_STATE();
    case 403:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      END_STATE();
    case 404:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1047);
      END_STATE();
    case 405:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      END_STATE();
    case 406:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 407:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 408:
      if (eof) ADVANCE(411);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == ',') ADVANCE(579);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '=') ADVANCE(460);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(263);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == ']') ADVANCE(581);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'h') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(37);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(267);
      if (lookahead == 'y') ADVANCE(144);
      if (lookahead == '|') ADVANCE(474);
      if (lookahead == '~') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(408)
      END_STATE();
    case 409:
      if (eof) ADVANCE(411);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(988);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '=') ADVANCE(460);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'b') ADVANCE(683);
      if (lookahead == 'c') ADVANCE(856);
      if (lookahead == 'd') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(838);
      if (lookahead == 'i') ADVANCE(803);
      if (lookahead == 'l') ADVANCE(725);
      if (lookahead == 'm') ADVANCE(689);
      if (lookahead == 'o') ADVANCE(628);
      if (lookahead == 'p') ADVANCE(882);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead == 'u') ADVANCE(820);
      if (lookahead == 'w') ADVANCE(769);
      if (lookahead == 'x') ADVANCE(845);
      if (lookahead == '|') ADVANCE(474);
      if (lookahead == '~') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(409)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 410:
      if (eof) ADVANCE(411);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == ']') ADVANCE(581);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'h') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead == 'v') ADVANCE(37);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(410)
      END_STATE();
    case 411:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_called);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_called);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(588);
      if (lookahead == 's') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 's') ADVANCE(564);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_valueset);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_cast);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_cast);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_exists);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_properly);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_properly);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_between);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_between);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(464);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_implies);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_implies);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_intersect);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_intersect);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_month);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == 's') ADVANCE(507);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_week);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_day);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(511);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_hour);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_minute);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_second);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_millisecond);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == 's') ADVANCE(519);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_years);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_months);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_weeks);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_days);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_hours);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_minutes);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_seconds);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'z') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(987);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'z') ADVANCE(279);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(787);
      if (lookahead == 't') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(796);
      if (lookahead == 't') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_difference);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_difference);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_orbefore);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_orafter);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_ormore);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_orless);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_lessthan);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_morethan);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_onor);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_before);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_after);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_oron);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_starts);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_starts);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_ends);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_ends);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_occurs);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_occurs);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_same);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_same);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(822);
      if (lookahead == 's') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 's') ADVANCE(552);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 's') ADVANCE(554);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_during);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_during);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_includedin);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_meets);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_meets);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_overlaps);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_overlaps);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_within);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(782);
      if (lookahead == 'o') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(951);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == 'i') ADVANCE(736);
      if (lookahead == 'u') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(951);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == 'i') ADVANCE(736);
      if (lookahead == 'u') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(967);
      if (lookahead == 'r') ADVANCE(843);
      if (lookahead == 'u') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(952);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == 'i') ADVANCE(736);
      if (lookahead == 'u') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(794);
      if (lookahead == 'e') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(969);
      if (lookahead == 'i') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'i') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead == 'e') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(953);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == 'i') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead == 'u') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead == 'r') ADVANCE(693);
      if (lookahead == 'u') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(783);
      if (lookahead == 'o') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(807);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == 't') ADVANCE(599);
      if (lookahead == 'u') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(807);
      if (lookahead == 't') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(795);
      if (lookahead == 'l') ADVANCE(967);
      if (lookahead == 'u') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(787);
      if (lookahead == 't') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(691);
      if (lookahead == 'i') ADVANCE(924);
      if (lookahead == 't') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(691);
      if (lookahead == 'i') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(635);
      if (lookahead == 'n') ADVANCE(587);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(721);
      if (lookahead == 't') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(797);
      if (lookahead == 't') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(1018);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == 'r') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(1018);
      if (lookahead == 'n') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(1018);
      if (lookahead == 'n') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(588);
      if (lookahead == 's') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(946);
      if (lookahead == 't') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(680);
      if (lookahead == 'n') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'i') ADVANCE(790);
      if (lookahead == 'o') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'i') ADVANCE(790);
      if (lookahead == 'o') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'i') ADVANCE(799);
      if (lookahead == 'o') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == 't') ADVANCE(599);
      if (lookahead == 'u') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(979);
      if (lookahead == 'o') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == 'h') ADVANCE(705);
      if (lookahead == 'i') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == 'h') ADVANCE(705);
      if (lookahead == 'i') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(741);
      if (lookahead == 'y') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead == 'u') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == 'h') ADVANCE(705);
      if (lookahead == 'i') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(918);
      if (lookahead == 'i') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == 't') ADVANCE(599);
      if (lookahead == 'u') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(598);
      if (lookahead == 's') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(739);
      if (lookahead == 's') ADVANCE(863);
      if (lookahead == 'v') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(858);
      if (lookahead == 't') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(961);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead == 's') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(961);
      if (lookahead == 's') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'g') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'g') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'g') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'g') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'g') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(705);
      if (lookahead == 'i') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(806);
      if (lookahead == 'r') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(806);
      if (lookahead == 'r') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'k') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'k') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(967);
      if (lookahead == 'u') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(792);
      if (lookahead == 's') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == 'n') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(798);
      if (lookahead == 'n') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'n') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'n') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'n') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead == 's') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 'x') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 'x') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 'x') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(761);
      if (lookahead == 's') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(587);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == 'v') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(658);
      if (lookahead == 'x') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(933);
      if (lookahead == 'u') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == 'v') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == 'v') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(863);
      if (lookahead == 'v') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(599);
      if (lookahead == 'u') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == 'y') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == 'y') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 't') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_Code);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_Code);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_Concept);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_Concept);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_asc);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_ascending);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 's') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == 's') ADVANCE(1001);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_codesystems);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_codesystems);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_concept);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_concept);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_descending);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_descending);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_display);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_display);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_fluent);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_fluent);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_predecessor);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_predecessor);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_starting);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_starting);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_successor);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_successor);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_width);
      if (lookahead == '\'') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1035);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1038);
      if (lookahead == '/') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1040);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1037);
      if (lookahead == '/') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1038);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1038);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '/') ADVANCE(1036);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1040);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1040);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1041);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1044);
      if (lookahead == '/') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1046);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1043);
      if (lookahead == '/') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1044);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1044);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(1042);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1046);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1046);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1047);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1048);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\'') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1050);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1051);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 410},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 15},
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
  [119] = {.lex_state = 409},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 409},
  [123] = {.lex_state = 409},
  [124] = {.lex_state = 0},
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
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 410},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 410},
  [155] = {.lex_state = 410},
  [156] = {.lex_state = 410},
  [157] = {.lex_state = 410},
  [158] = {.lex_state = 410},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 27},
  [162] = {.lex_state = 410},
  [163] = {.lex_state = 410},
  [164] = {.lex_state = 410},
  [165] = {.lex_state = 410},
  [166] = {.lex_state = 410},
  [167] = {.lex_state = 410},
  [168] = {.lex_state = 410},
  [169] = {.lex_state = 410},
  [170] = {.lex_state = 410},
  [171] = {.lex_state = 410},
  [172] = {.lex_state = 410},
  [173] = {.lex_state = 410},
  [174] = {.lex_state = 410},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 410},
  [177] = {.lex_state = 410},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 410},
  [180] = {.lex_state = 410},
  [181] = {.lex_state = 410},
  [182] = {.lex_state = 410},
  [183] = {.lex_state = 410},
  [184] = {.lex_state = 410},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 410},
  [190] = {.lex_state = 410},
  [191] = {.lex_state = 410},
  [192] = {.lex_state = 410},
  [193] = {.lex_state = 410},
  [194] = {.lex_state = 410},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 410},
  [197] = {.lex_state = 410},
  [198] = {.lex_state = 410},
  [199] = {.lex_state = 410},
  [200] = {.lex_state = 410},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 410},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 410},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 410},
  [210] = {.lex_state = 16},
  [211] = {.lex_state = 16},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 16},
  [215] = {.lex_state = 21},
  [216] = {.lex_state = 16},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 21},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 410},
  [223] = {.lex_state = 16},
  [224] = {.lex_state = 16},
  [225] = {.lex_state = 21},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 16},
  [228] = {.lex_state = 16},
  [229] = {.lex_state = 16},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 410},
  [232] = {.lex_state = 21},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 20},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 16},
  [239] = {.lex_state = 16},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 27},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 16},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 27},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 27},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
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
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_cql_library] = STATE(287),
    [sym_definition] = STATE(154),
    [sym_library_definition] = STATE(155),
    [sym_using_definition] = STATE(199),
    [sym_include_definition] = STATE(199),
    [sym_valueset_definition] = STATE(199),
    [sym_statement] = STATE(187),
    [sym_context_definition] = STATE(241),
    [sym_function_definition] = STATE(241),
    [sym_expression_definition] = STATE(241),
    [aux_sym_cql_library_repeat1] = STATE(154),
    [aux_sym_cql_library_repeat2] = STATE(187),
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
    [sym_expression] = STATE(99),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_date_time_precision] = STATE(272),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_date_time_precision_specifier] = STATE(7),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(74),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_date_time_precision] = STATE(272),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_date_time_precision_specifier] = STATE(20),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(74),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_date_time_precision] = STATE(272),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_date_time_precision_specifier] = STATE(20),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(99),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_date_time_precision] = STATE(272),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_date_time_precision_specifier] = STATE(7),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(84),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_external] = ACTIONS(77),
    [aux_sym_literal_token1] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(111),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(97),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(75),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(96),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(79),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(120),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(78),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(86),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(85),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(73),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(82),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(81),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_expression] = STATE(80),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_expression] = STATE(76),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_expression] = STATE(103),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_expression] = STATE(105),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_expression] = STATE(110),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_expression] = STATE(102),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_expression] = STATE(101),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_expression] = STATE(115),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_expression] = STATE(114),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_expression] = STATE(113),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_expression] = STATE(112),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(148),
    [sym_retrieve] = STATE(150),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
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
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_expression] = STATE(77),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_expression] = STATE(83),
    [sym_expression_term] = STATE(126),
    [sym_term] = STATE(141),
    [sym_quantity] = STATE(125),
    [sym_literal] = STATE(134),
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_boolean_expression] = STATE(126),
    [sym_type_expression] = STATE(126),
    [sym_cast_expression] = STATE(126),
    [sym_not_expression] = STATE(126),
    [sym_existence_expression] = STATE(126),
    [sym_between_expression] = STATE(126),
    [sym_equality_expression] = STATE(126),
    [sym_inequality_expression] = STATE(126),
    [sym_and_expression] = STATE(126),
    [sym_or_expression] = STATE(126),
    [sym_implies_expression] = STATE(126),
    [sym_in_fix_set_expression] = STATE(126),
    [sym_plural_date_time_precision] = STATE(282),
    [sym_duration_between_expression] = STATE(126),
    [sym_difference_between_expression] = STATE(126),
    [sym_membership_expression] = STATE(126),
    [sym_timing_expression] = STATE(126),
    [sym_query] = STATE(126),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(92),
    [sym_query_source_clause] = STATE(116),
    [sym_retrieve] = STATE(123),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [sym_string] = STATE(135),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_cast] = ACTIONS(31),
    [anon_sym_exists] = ACTIONS(65),
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
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_difference] = ACTIONS(43),
    [anon_sym_contains] = ACTIONS(69),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_quantity] = STATE(192),
    [sym_date_time_precision] = STATE(272),
    [sym_date_time_precision_specifier] = STATE(48),
    [sym_exclusive_relative_qualifier] = STATE(255),
    [sym_quantity_offset] = STATE(234),
    [sym_temporal_relationship] = STATE(39),
    [anon_sym_library] = ACTIONS(79),
    [anon_sym_using] = ACTIONS(79),
    [anon_sym_called] = ACTIONS(79),
    [anon_sym_include] = ACTIONS(79),
    [anon_sym_valueset] = ACTIONS(79),
    [anon_sym_context] = ACTIONS(79),
    [anon_sym_define] = ACTIONS(79),
    [anon_sym_function] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [aux_sym_literal_token1] = ACTIONS(79),
    [anon_sym_null] = ACTIONS(79),
    [anon_sym_not] = ACTIONS(79),
    [anon_sym_cast] = ACTIONS(79),
    [anon_sym_exists] = ACTIONS(79),
    [anon_sym_properly] = ACTIONS(83),
    [anon_sym_xor] = ACTIONS(79),
    [anon_sym_implies] = ACTIONS(79),
    [anon_sym_union] = ACTIONS(79),
    [anon_sym_intersect] = ACTIONS(79),
    [anon_sym_except] = ACTIONS(79),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(79),
    [anon_sym_months] = ACTIONS(79),
    [anon_sym_weeks] = ACTIONS(79),
    [anon_sym_days] = ACTIONS(79),
    [anon_sym_hours] = ACTIONS(79),
    [anon_sym_minutes] = ACTIONS(79),
    [anon_sym_seconds] = ACTIONS(79),
    [anon_sym_milliseconds] = ACTIONS(79),
    [anon_sym_date] = ACTIONS(79),
    [anon_sym_time] = ACTIONS(79),
    [anon_sym_timezone] = ACTIONS(79),
    [anon_sym_timezoneoffset] = ACTIONS(79),
    [anon_sym_duration] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_difference] = ACTIONS(79),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(81),
    [anon_sym_orafter] = ACTIONS(81),
    [anon_sym_ormore] = ACTIONS(81),
    [anon_sym_orless] = ACTIONS(81),
    [anon_sym_lessthan] = ACTIONS(85),
    [anon_sym_morethan] = ACTIONS(85),
    [anon_sym_onor] = ACTIONS(87),
    [anon_sym_before] = ACTIONS(89),
    [anon_sym_after] = ACTIONS(89),
    [anon_sym_starts] = ACTIONS(79),
    [anon_sym_ends] = ACTIONS(79),
    [anon_sym_same] = ACTIONS(91),
    [anon_sym_start] = ACTIONS(79),
    [anon_sym_end] = ACTIONS(79),
    [anon_sym_includes] = ACTIONS(79),
    [anon_sym_during] = ACTIONS(93),
    [anon_sym_includedin] = ACTIONS(95),
    [anon_sym_meets] = ACTIONS(79),
    [anon_sym_overlaps] = ACTIONS(79),
    [anon_sym_within] = ACTIONS(97),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_from] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(79),
    [sym_default_identifier] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_asc] = ACTIONS(79),
    [anon_sym_ascending] = ACTIONS(79),
    [anon_sym_by] = ACTIONS(79),
    [anon_sym_code] = ACTIONS(79),
    [anon_sym_codesystem] = ACTIONS(79),
    [anon_sym_codesystems] = ACTIONS(79),
    [anon_sym_concept] = ACTIONS(79),
    [anon_sym_default] = ACTIONS(79),
    [anon_sym_desc] = ACTIONS(79),
    [anon_sym_descending] = ACTIONS(79),
    [anon_sym_display] = ACTIONS(79),
    [anon_sym_div] = ACTIONS(79),
    [anon_sym_fluent] = ACTIONS(79),
    [anon_sym_mod] = ACTIONS(79),
    [anon_sym_parameter] = ACTIONS(79),
    [anon_sym_predecessor] = ACTIONS(79),
    [anon_sym_private] = ACTIONS(79),
    [anon_sym_public] = ACTIONS(79),
    [anon_sym_starting] = ACTIONS(79),
    [anon_sym_successor] = ACTIONS(79),
    [anon_sym_width] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [sym_number] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_date_time_precision] = STATE(272),
    [sym_date_time_precision_specifier] = STATE(48),
    [anon_sym_library] = ACTIONS(79),
    [anon_sym_using] = ACTIONS(79),
    [anon_sym_called] = ACTIONS(79),
    [anon_sym_include] = ACTIONS(79),
    [anon_sym_valueset] = ACTIONS(79),
    [anon_sym_context] = ACTIONS(79),
    [anon_sym_define] = ACTIONS(79),
    [anon_sym_function] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [aux_sym_literal_token1] = ACTIONS(79),
    [anon_sym_null] = ACTIONS(79),
    [anon_sym_not] = ACTIONS(79),
    [anon_sym_cast] = ACTIONS(79),
    [anon_sym_exists] = ACTIONS(79),
    [anon_sym_xor] = ACTIONS(79),
    [anon_sym_implies] = ACTIONS(79),
    [anon_sym_union] = ACTIONS(79),
    [anon_sym_intersect] = ACTIONS(79),
    [anon_sym_except] = ACTIONS(79),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(79),
    [anon_sym_months] = ACTIONS(79),
    [anon_sym_weeks] = ACTIONS(79),
    [anon_sym_days] = ACTIONS(79),
    [anon_sym_hours] = ACTIONS(79),
    [anon_sym_minutes] = ACTIONS(79),
    [anon_sym_seconds] = ACTIONS(79),
    [anon_sym_milliseconds] = ACTIONS(79),
    [anon_sym_date] = ACTIONS(79),
    [anon_sym_time] = ACTIONS(79),
    [anon_sym_timezone] = ACTIONS(79),
    [anon_sym_timezoneoffset] = ACTIONS(79),
    [anon_sym_duration] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_difference] = ACTIONS(79),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(81),
    [anon_sym_orafter] = ACTIONS(81),
    [anon_sym_ormore] = ACTIONS(81),
    [anon_sym_orless] = ACTIONS(81),
    [anon_sym_before] = ACTIONS(93),
    [anon_sym_after] = ACTIONS(93),
    [anon_sym_starts] = ACTIONS(79),
    [anon_sym_ends] = ACTIONS(79),
    [anon_sym_start] = ACTIONS(79),
    [anon_sym_end] = ACTIONS(79),
    [anon_sym_includes] = ACTIONS(79),
    [anon_sym_meets] = ACTIONS(79),
    [anon_sym_overlaps] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_from] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(79),
    [sym_default_identifier] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_asc] = ACTIONS(79),
    [anon_sym_ascending] = ACTIONS(79),
    [anon_sym_by] = ACTIONS(79),
    [anon_sym_code] = ACTIONS(79),
    [anon_sym_codesystem] = ACTIONS(79),
    [anon_sym_codesystems] = ACTIONS(79),
    [anon_sym_concept] = ACTIONS(79),
    [anon_sym_default] = ACTIONS(79),
    [anon_sym_desc] = ACTIONS(79),
    [anon_sym_descending] = ACTIONS(79),
    [anon_sym_display] = ACTIONS(79),
    [anon_sym_div] = ACTIONS(79),
    [anon_sym_fluent] = ACTIONS(79),
    [anon_sym_mod] = ACTIONS(79),
    [anon_sym_parameter] = ACTIONS(79),
    [anon_sym_predecessor] = ACTIONS(79),
    [anon_sym_private] = ACTIONS(79),
    [anon_sym_public] = ACTIONS(79),
    [anon_sym_starting] = ACTIONS(79),
    [anon_sym_successor] = ACTIONS(79),
    [anon_sym_width] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [sym_number] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_date_time_precision] = STATE(272),
    [sym_date_time_precision_specifier] = STATE(45),
    [anon_sym_library] = ACTIONS(102),
    [anon_sym_using] = ACTIONS(102),
    [anon_sym_called] = ACTIONS(102),
    [anon_sym_include] = ACTIONS(102),
    [anon_sym_valueset] = ACTIONS(102),
    [anon_sym_context] = ACTIONS(102),
    [anon_sym_define] = ACTIONS(102),
    [anon_sym_function] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(104),
    [aux_sym_literal_token1] = ACTIONS(102),
    [anon_sym_null] = ACTIONS(102),
    [anon_sym_not] = ACTIONS(102),
    [anon_sym_cast] = ACTIONS(102),
    [anon_sym_exists] = ACTIONS(102),
    [anon_sym_xor] = ACTIONS(102),
    [anon_sym_implies] = ACTIONS(102),
    [anon_sym_union] = ACTIONS(102),
    [anon_sym_intersect] = ACTIONS(102),
    [anon_sym_except] = ACTIONS(102),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(102),
    [anon_sym_months] = ACTIONS(102),
    [anon_sym_weeks] = ACTIONS(102),
    [anon_sym_days] = ACTIONS(102),
    [anon_sym_hours] = ACTIONS(102),
    [anon_sym_minutes] = ACTIONS(102),
    [anon_sym_seconds] = ACTIONS(102),
    [anon_sym_milliseconds] = ACTIONS(102),
    [anon_sym_date] = ACTIONS(102),
    [anon_sym_time] = ACTIONS(102),
    [anon_sym_timezone] = ACTIONS(102),
    [anon_sym_timezoneoffset] = ACTIONS(102),
    [anon_sym_duration] = ACTIONS(102),
    [anon_sym_in] = ACTIONS(102),
    [anon_sym_difference] = ACTIONS(102),
    [anon_sym_contains] = ACTIONS(102),
    [anon_sym_orbefore] = ACTIONS(104),
    [anon_sym_orafter] = ACTIONS(104),
    [anon_sym_ormore] = ACTIONS(104),
    [anon_sym_orless] = ACTIONS(104),
    [anon_sym_starts] = ACTIONS(102),
    [anon_sym_ends] = ACTIONS(102),
    [anon_sym_start] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(106),
    [anon_sym_includes] = ACTIONS(102),
    [anon_sym_meets] = ACTIONS(102),
    [anon_sym_overlaps] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
    [anon_sym_from] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_version] = ACTIONS(102),
    [sym_default_identifier] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [anon_sym_asc] = ACTIONS(102),
    [anon_sym_ascending] = ACTIONS(102),
    [anon_sym_by] = ACTIONS(102),
    [anon_sym_code] = ACTIONS(102),
    [anon_sym_codesystem] = ACTIONS(102),
    [anon_sym_codesystems] = ACTIONS(102),
    [anon_sym_concept] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
    [anon_sym_desc] = ACTIONS(102),
    [anon_sym_descending] = ACTIONS(102),
    [anon_sym_display] = ACTIONS(102),
    [anon_sym_div] = ACTIONS(102),
    [anon_sym_fluent] = ACTIONS(102),
    [anon_sym_mod] = ACTIONS(102),
    [anon_sym_parameter] = ACTIONS(102),
    [anon_sym_predecessor] = ACTIONS(102),
    [anon_sym_private] = ACTIONS(102),
    [anon_sym_public] = ACTIONS(102),
    [anon_sym_starting] = ACTIONS(102),
    [anon_sym_successor] = ACTIONS(102),
    [anon_sym_width] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_date_time_precision] = STATE(272),
    [sym_date_time_precision_specifier] = STATE(46),
    [anon_sym_library] = ACTIONS(109),
    [anon_sym_using] = ACTIONS(109),
    [anon_sym_called] = ACTIONS(109),
    [anon_sym_include] = ACTIONS(109),
    [anon_sym_valueset] = ACTIONS(109),
    [anon_sym_context] = ACTIONS(109),
    [anon_sym_define] = ACTIONS(109),
    [anon_sym_function] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_literal_token1] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_not] = ACTIONS(109),
    [anon_sym_cast] = ACTIONS(109),
    [anon_sym_exists] = ACTIONS(109),
    [anon_sym_xor] = ACTIONS(109),
    [anon_sym_implies] = ACTIONS(109),
    [anon_sym_union] = ACTIONS(109),
    [anon_sym_intersect] = ACTIONS(109),
    [anon_sym_except] = ACTIONS(109),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(109),
    [anon_sym_months] = ACTIONS(109),
    [anon_sym_weeks] = ACTIONS(109),
    [anon_sym_days] = ACTIONS(109),
    [anon_sym_hours] = ACTIONS(109),
    [anon_sym_minutes] = ACTIONS(109),
    [anon_sym_seconds] = ACTIONS(109),
    [anon_sym_milliseconds] = ACTIONS(109),
    [anon_sym_date] = ACTIONS(109),
    [anon_sym_time] = ACTIONS(109),
    [anon_sym_timezone] = ACTIONS(109),
    [anon_sym_timezoneoffset] = ACTIONS(109),
    [anon_sym_duration] = ACTIONS(109),
    [anon_sym_in] = ACTIONS(109),
    [anon_sym_difference] = ACTIONS(109),
    [anon_sym_contains] = ACTIONS(109),
    [anon_sym_orbefore] = ACTIONS(111),
    [anon_sym_orafter] = ACTIONS(111),
    [anon_sym_ormore] = ACTIONS(111),
    [anon_sym_orless] = ACTIONS(111),
    [anon_sym_starts] = ACTIONS(109),
    [anon_sym_ends] = ACTIONS(109),
    [anon_sym_start] = ACTIONS(109),
    [anon_sym_end] = ACTIONS(109),
    [anon_sym_includes] = ACTIONS(109),
    [anon_sym_meets] = ACTIONS(109),
    [anon_sym_overlaps] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
    [anon_sym_from] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_version] = ACTIONS(109),
    [sym_default_identifier] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_asc] = ACTIONS(109),
    [anon_sym_ascending] = ACTIONS(109),
    [anon_sym_by] = ACTIONS(109),
    [anon_sym_code] = ACTIONS(109),
    [anon_sym_codesystem] = ACTIONS(109),
    [anon_sym_codesystems] = ACTIONS(109),
    [anon_sym_concept] = ACTIONS(109),
    [anon_sym_default] = ACTIONS(109),
    [anon_sym_desc] = ACTIONS(109),
    [anon_sym_descending] = ACTIONS(109),
    [anon_sym_display] = ACTIONS(109),
    [anon_sym_div] = ACTIONS(109),
    [anon_sym_fluent] = ACTIONS(109),
    [anon_sym_mod] = ACTIONS(109),
    [anon_sym_parameter] = ACTIONS(109),
    [anon_sym_predecessor] = ACTIONS(109),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_public] = ACTIONS(109),
    [anon_sym_starting] = ACTIONS(109),
    [anon_sym_successor] = ACTIONS(109),
    [anon_sym_width] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_number] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_date_time_precision] = STATE(272),
    [sym_date_time_precision_specifier] = STATE(42),
    [anon_sym_library] = ACTIONS(102),
    [anon_sym_using] = ACTIONS(102),
    [anon_sym_called] = ACTIONS(102),
    [anon_sym_include] = ACTIONS(102),
    [anon_sym_valueset] = ACTIONS(102),
    [anon_sym_context] = ACTIONS(102),
    [anon_sym_define] = ACTIONS(102),
    [anon_sym_function] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(104),
    [aux_sym_literal_token1] = ACTIONS(102),
    [anon_sym_null] = ACTIONS(102),
    [anon_sym_not] = ACTIONS(102),
    [anon_sym_cast] = ACTIONS(102),
    [anon_sym_exists] = ACTIONS(102),
    [anon_sym_xor] = ACTIONS(102),
    [anon_sym_implies] = ACTIONS(102),
    [anon_sym_union] = ACTIONS(102),
    [anon_sym_intersect] = ACTIONS(102),
    [anon_sym_except] = ACTIONS(102),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(102),
    [anon_sym_months] = ACTIONS(102),
    [anon_sym_weeks] = ACTIONS(102),
    [anon_sym_days] = ACTIONS(102),
    [anon_sym_hours] = ACTIONS(102),
    [anon_sym_minutes] = ACTIONS(102),
    [anon_sym_seconds] = ACTIONS(102),
    [anon_sym_milliseconds] = ACTIONS(102),
    [anon_sym_date] = ACTIONS(102),
    [anon_sym_time] = ACTIONS(102),
    [anon_sym_timezone] = ACTIONS(102),
    [anon_sym_timezoneoffset] = ACTIONS(102),
    [anon_sym_duration] = ACTIONS(102),
    [anon_sym_in] = ACTIONS(102),
    [anon_sym_difference] = ACTIONS(102),
    [anon_sym_contains] = ACTIONS(102),
    [anon_sym_orbefore] = ACTIONS(104),
    [anon_sym_orafter] = ACTIONS(104),
    [anon_sym_ormore] = ACTIONS(104),
    [anon_sym_orless] = ACTIONS(104),
    [anon_sym_starts] = ACTIONS(102),
    [anon_sym_ends] = ACTIONS(102),
    [anon_sym_start] = ACTIONS(102),
    [anon_sym_end] = ACTIONS(102),
    [anon_sym_includes] = ACTIONS(102),
    [anon_sym_meets] = ACTIONS(102),
    [anon_sym_overlaps] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
    [anon_sym_from] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_version] = ACTIONS(102),
    [sym_default_identifier] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [anon_sym_asc] = ACTIONS(102),
    [anon_sym_ascending] = ACTIONS(102),
    [anon_sym_by] = ACTIONS(102),
    [anon_sym_code] = ACTIONS(102),
    [anon_sym_codesystem] = ACTIONS(102),
    [anon_sym_codesystems] = ACTIONS(102),
    [anon_sym_concept] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
    [anon_sym_desc] = ACTIONS(102),
    [anon_sym_descending] = ACTIONS(102),
    [anon_sym_display] = ACTIONS(102),
    [anon_sym_div] = ACTIONS(102),
    [anon_sym_fluent] = ACTIONS(102),
    [anon_sym_mod] = ACTIONS(102),
    [anon_sym_parameter] = ACTIONS(102),
    [anon_sym_predecessor] = ACTIONS(102),
    [anon_sym_private] = ACTIONS(102),
    [anon_sym_public] = ACTIONS(102),
    [anon_sym_starting] = ACTIONS(102),
    [anon_sym_successor] = ACTIONS(102),
    [anon_sym_width] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_date_time_precision] = STATE(272),
    [sym_date_time_precision_specifier] = STATE(49),
    [anon_sym_library] = ACTIONS(79),
    [anon_sym_using] = ACTIONS(79),
    [anon_sym_called] = ACTIONS(79),
    [anon_sym_include] = ACTIONS(79),
    [anon_sym_valueset] = ACTIONS(79),
    [anon_sym_context] = ACTIONS(79),
    [anon_sym_define] = ACTIONS(79),
    [anon_sym_function] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [aux_sym_literal_token1] = ACTIONS(79),
    [anon_sym_null] = ACTIONS(79),
    [anon_sym_not] = ACTIONS(79),
    [anon_sym_cast] = ACTIONS(79),
    [anon_sym_exists] = ACTIONS(79),
    [anon_sym_xor] = ACTIONS(79),
    [anon_sym_implies] = ACTIONS(79),
    [anon_sym_union] = ACTIONS(79),
    [anon_sym_intersect] = ACTIONS(79),
    [anon_sym_except] = ACTIONS(79),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(79),
    [anon_sym_months] = ACTIONS(79),
    [anon_sym_weeks] = ACTIONS(79),
    [anon_sym_days] = ACTIONS(79),
    [anon_sym_hours] = ACTIONS(79),
    [anon_sym_minutes] = ACTIONS(79),
    [anon_sym_seconds] = ACTIONS(79),
    [anon_sym_milliseconds] = ACTIONS(79),
    [anon_sym_date] = ACTIONS(79),
    [anon_sym_time] = ACTIONS(79),
    [anon_sym_timezone] = ACTIONS(79),
    [anon_sym_timezoneoffset] = ACTIONS(79),
    [anon_sym_duration] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_difference] = ACTIONS(79),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(81),
    [anon_sym_orafter] = ACTIONS(81),
    [anon_sym_ormore] = ACTIONS(81),
    [anon_sym_orless] = ACTIONS(81),
    [anon_sym_starts] = ACTIONS(79),
    [anon_sym_ends] = ACTIONS(79),
    [anon_sym_start] = ACTIONS(113),
    [anon_sym_end] = ACTIONS(113),
    [anon_sym_includes] = ACTIONS(79),
    [anon_sym_meets] = ACTIONS(79),
    [anon_sym_overlaps] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_from] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(79),
    [sym_default_identifier] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_asc] = ACTIONS(79),
    [anon_sym_ascending] = ACTIONS(79),
    [anon_sym_by] = ACTIONS(79),
    [anon_sym_code] = ACTIONS(79),
    [anon_sym_codesystem] = ACTIONS(79),
    [anon_sym_codesystems] = ACTIONS(79),
    [anon_sym_concept] = ACTIONS(79),
    [anon_sym_default] = ACTIONS(79),
    [anon_sym_desc] = ACTIONS(79),
    [anon_sym_descending] = ACTIONS(79),
    [anon_sym_display] = ACTIONS(79),
    [anon_sym_div] = ACTIONS(79),
    [anon_sym_fluent] = ACTIONS(79),
    [anon_sym_mod] = ACTIONS(79),
    [anon_sym_parameter] = ACTIONS(79),
    [anon_sym_predecessor] = ACTIONS(79),
    [anon_sym_private] = ACTIONS(79),
    [anon_sym_public] = ACTIONS(79),
    [anon_sym_starting] = ACTIONS(79),
    [anon_sym_successor] = ACTIONS(79),
    [anon_sym_width] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [sym_number] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_date_time_precision] = STATE(272),
    [sym_date_time_precision_specifier] = STATE(48),
    [anon_sym_library] = ACTIONS(79),
    [anon_sym_using] = ACTIONS(79),
    [anon_sym_called] = ACTIONS(79),
    [anon_sym_include] = ACTIONS(79),
    [anon_sym_valueset] = ACTIONS(79),
    [anon_sym_context] = ACTIONS(79),
    [anon_sym_define] = ACTIONS(79),
    [anon_sym_function] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [aux_sym_literal_token1] = ACTIONS(79),
    [anon_sym_null] = ACTIONS(79),
    [anon_sym_not] = ACTIONS(79),
    [anon_sym_cast] = ACTIONS(79),
    [anon_sym_exists] = ACTIONS(79),
    [anon_sym_xor] = ACTIONS(79),
    [anon_sym_implies] = ACTIONS(79),
    [anon_sym_union] = ACTIONS(79),
    [anon_sym_intersect] = ACTIONS(79),
    [anon_sym_except] = ACTIONS(79),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(79),
    [anon_sym_months] = ACTIONS(79),
    [anon_sym_weeks] = ACTIONS(79),
    [anon_sym_days] = ACTIONS(79),
    [anon_sym_hours] = ACTIONS(79),
    [anon_sym_minutes] = ACTIONS(79),
    [anon_sym_seconds] = ACTIONS(79),
    [anon_sym_milliseconds] = ACTIONS(79),
    [anon_sym_date] = ACTIONS(79),
    [anon_sym_time] = ACTIONS(79),
    [anon_sym_timezone] = ACTIONS(79),
    [anon_sym_timezoneoffset] = ACTIONS(79),
    [anon_sym_duration] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_difference] = ACTIONS(79),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(81),
    [anon_sym_orafter] = ACTIONS(81),
    [anon_sym_ormore] = ACTIONS(81),
    [anon_sym_orless] = ACTIONS(81),
    [anon_sym_starts] = ACTIONS(79),
    [anon_sym_ends] = ACTIONS(79),
    [anon_sym_start] = ACTIONS(79),
    [anon_sym_end] = ACTIONS(79),
    [anon_sym_includes] = ACTIONS(79),
    [anon_sym_meets] = ACTIONS(79),
    [anon_sym_overlaps] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_from] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(79),
    [sym_default_identifier] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_asc] = ACTIONS(79),
    [anon_sym_ascending] = ACTIONS(79),
    [anon_sym_by] = ACTIONS(79),
    [anon_sym_code] = ACTIONS(79),
    [anon_sym_codesystem] = ACTIONS(79),
    [anon_sym_codesystems] = ACTIONS(79),
    [anon_sym_concept] = ACTIONS(79),
    [anon_sym_default] = ACTIONS(79),
    [anon_sym_desc] = ACTIONS(79),
    [anon_sym_descending] = ACTIONS(79),
    [anon_sym_display] = ACTIONS(79),
    [anon_sym_div] = ACTIONS(79),
    [anon_sym_fluent] = ACTIONS(79),
    [anon_sym_mod] = ACTIONS(79),
    [anon_sym_parameter] = ACTIONS(79),
    [anon_sym_predecessor] = ACTIONS(79),
    [anon_sym_private] = ACTIONS(79),
    [anon_sym_public] = ACTIONS(79),
    [anon_sym_starting] = ACTIONS(79),
    [anon_sym_successor] = ACTIONS(79),
    [anon_sym_width] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [sym_number] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_date_time_precision] = STATE(272),
    [sym_date_time_precision_specifier] = STATE(47),
    [anon_sym_library] = ACTIONS(109),
    [anon_sym_using] = ACTIONS(109),
    [anon_sym_called] = ACTIONS(109),
    [anon_sym_include] = ACTIONS(109),
    [anon_sym_valueset] = ACTIONS(109),
    [anon_sym_context] = ACTIONS(109),
    [anon_sym_define] = ACTIONS(109),
    [anon_sym_function] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_literal_token1] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_not] = ACTIONS(109),
    [anon_sym_cast] = ACTIONS(109),
    [anon_sym_exists] = ACTIONS(109),
    [anon_sym_xor] = ACTIONS(109),
    [anon_sym_implies] = ACTIONS(109),
    [anon_sym_union] = ACTIONS(109),
    [anon_sym_intersect] = ACTIONS(109),
    [anon_sym_except] = ACTIONS(109),
    [anon_sym_year] = ACTIONS(35),
    [anon_sym_month] = ACTIONS(35),
    [anon_sym_week] = ACTIONS(35),
    [anon_sym_day] = ACTIONS(35),
    [anon_sym_hour] = ACTIONS(35),
    [anon_sym_minute] = ACTIONS(35),
    [anon_sym_second] = ACTIONS(35),
    [anon_sym_millisecond] = ACTIONS(35),
    [anon_sym_years] = ACTIONS(109),
    [anon_sym_months] = ACTIONS(109),
    [anon_sym_weeks] = ACTIONS(109),
    [anon_sym_days] = ACTIONS(109),
    [anon_sym_hours] = ACTIONS(109),
    [anon_sym_minutes] = ACTIONS(109),
    [anon_sym_seconds] = ACTIONS(109),
    [anon_sym_milliseconds] = ACTIONS(109),
    [anon_sym_date] = ACTIONS(109),
    [anon_sym_time] = ACTIONS(109),
    [anon_sym_timezone] = ACTIONS(109),
    [anon_sym_timezoneoffset] = ACTIONS(109),
    [anon_sym_duration] = ACTIONS(109),
    [anon_sym_in] = ACTIONS(109),
    [anon_sym_difference] = ACTIONS(109),
    [anon_sym_contains] = ACTIONS(109),
    [anon_sym_orbefore] = ACTIONS(111),
    [anon_sym_orafter] = ACTIONS(111),
    [anon_sym_ormore] = ACTIONS(111),
    [anon_sym_orless] = ACTIONS(111),
    [anon_sym_starts] = ACTIONS(109),
    [anon_sym_ends] = ACTIONS(109),
    [anon_sym_start] = ACTIONS(116),
    [anon_sym_end] = ACTIONS(116),
    [anon_sym_includes] = ACTIONS(109),
    [anon_sym_meets] = ACTIONS(109),
    [anon_sym_overlaps] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
    [anon_sym_from] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_version] = ACTIONS(109),
    [sym_default_identifier] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_asc] = ACTIONS(109),
    [anon_sym_ascending] = ACTIONS(109),
    [anon_sym_by] = ACTIONS(109),
    [anon_sym_code] = ACTIONS(109),
    [anon_sym_codesystem] = ACTIONS(109),
    [anon_sym_codesystems] = ACTIONS(109),
    [anon_sym_concept] = ACTIONS(109),
    [anon_sym_default] = ACTIONS(109),
    [anon_sym_desc] = ACTIONS(109),
    [anon_sym_descending] = ACTIONS(109),
    [anon_sym_display] = ACTIONS(109),
    [anon_sym_div] = ACTIONS(109),
    [anon_sym_fluent] = ACTIONS(109),
    [anon_sym_mod] = ACTIONS(109),
    [anon_sym_parameter] = ACTIONS(109),
    [anon_sym_predecessor] = ACTIONS(109),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_public] = ACTIONS(109),
    [anon_sym_starting] = ACTIONS(109),
    [anon_sym_successor] = ACTIONS(109),
    [anon_sym_width] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_number] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [anon_sym_library] = ACTIONS(119),
    [anon_sym_using] = ACTIONS(119),
    [anon_sym_called] = ACTIONS(119),
    [anon_sym_include] = ACTIONS(119),
    [anon_sym_valueset] = ACTIONS(119),
    [anon_sym_context] = ACTIONS(119),
    [anon_sym_define] = ACTIONS(119),
    [anon_sym_function] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(121),
    [aux_sym_literal_token1] = ACTIONS(119),
    [anon_sym_null] = ACTIONS(119),
    [anon_sym_not] = ACTIONS(119),
    [anon_sym_cast] = ACTIONS(119),
    [anon_sym_exists] = ACTIONS(119),
    [anon_sym_xor] = ACTIONS(119),
    [anon_sym_implies] = ACTIONS(119),
    [anon_sym_union] = ACTIONS(119),
    [anon_sym_intersect] = ACTIONS(119),
    [anon_sym_except] = ACTIONS(119),
    [anon_sym_year] = ACTIONS(119),
    [anon_sym_month] = ACTIONS(119),
    [anon_sym_week] = ACTIONS(119),
    [anon_sym_day] = ACTIONS(119),
    [anon_sym_hour] = ACTIONS(119),
    [anon_sym_minute] = ACTIONS(119),
    [anon_sym_second] = ACTIONS(119),
    [anon_sym_millisecond] = ACTIONS(119),
    [anon_sym_years] = ACTIONS(119),
    [anon_sym_months] = ACTIONS(119),
    [anon_sym_weeks] = ACTIONS(119),
    [anon_sym_days] = ACTIONS(119),
    [anon_sym_hours] = ACTIONS(119),
    [anon_sym_minutes] = ACTIONS(119),
    [anon_sym_seconds] = ACTIONS(119),
    [anon_sym_milliseconds] = ACTIONS(119),
    [anon_sym_date] = ACTIONS(119),
    [anon_sym_time] = ACTIONS(119),
    [anon_sym_timezone] = ACTIONS(119),
    [anon_sym_timezoneoffset] = ACTIONS(119),
    [anon_sym_duration] = ACTIONS(119),
    [anon_sym_in] = ACTIONS(119),
    [anon_sym_difference] = ACTIONS(119),
    [anon_sym_contains] = ACTIONS(119),
    [anon_sym_orbefore] = ACTIONS(121),
    [anon_sym_orafter] = ACTIONS(121),
    [anon_sym_ormore] = ACTIONS(121),
    [anon_sym_orless] = ACTIONS(121),
    [anon_sym_oron] = ACTIONS(123),
    [anon_sym_starts] = ACTIONS(119),
    [anon_sym_ends] = ACTIONS(119),
    [anon_sym_start] = ACTIONS(119),
    [anon_sym_end] = ACTIONS(119),
    [anon_sym_includes] = ACTIONS(119),
    [anon_sym_meets] = ACTIONS(119),
    [anon_sym_overlaps] = ACTIONS(119),
    [anon_sym_where] = ACTIONS(119),
    [anon_sym_from] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_version] = ACTIONS(119),
    [sym_default_identifier] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_asc] = ACTIONS(119),
    [anon_sym_ascending] = ACTIONS(119),
    [anon_sym_by] = ACTIONS(119),
    [anon_sym_code] = ACTIONS(119),
    [anon_sym_codesystem] = ACTIONS(119),
    [anon_sym_codesystems] = ACTIONS(119),
    [anon_sym_concept] = ACTIONS(119),
    [anon_sym_default] = ACTIONS(119),
    [anon_sym_desc] = ACTIONS(119),
    [anon_sym_descending] = ACTIONS(119),
    [anon_sym_display] = ACTIONS(119),
    [anon_sym_div] = ACTIONS(119),
    [anon_sym_fluent] = ACTIONS(119),
    [anon_sym_mod] = ACTIONS(119),
    [anon_sym_parameter] = ACTIONS(119),
    [anon_sym_predecessor] = ACTIONS(119),
    [anon_sym_private] = ACTIONS(119),
    [anon_sym_public] = ACTIONS(119),
    [anon_sym_starting] = ACTIONS(119),
    [anon_sym_successor] = ACTIONS(119),
    [anon_sym_width] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [sym_number] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_library] = ACTIONS(125),
    [anon_sym_using] = ACTIONS(125),
    [anon_sym_called] = ACTIONS(125),
    [anon_sym_include] = ACTIONS(125),
    [anon_sym_valueset] = ACTIONS(125),
    [anon_sym_context] = ACTIONS(125),
    [anon_sym_define] = ACTIONS(125),
    [anon_sym_function] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(127),
    [aux_sym_literal_token1] = ACTIONS(125),
    [anon_sym_null] = ACTIONS(125),
    [anon_sym_not] = ACTIONS(125),
    [anon_sym_cast] = ACTIONS(125),
    [anon_sym_exists] = ACTIONS(125),
    [anon_sym_xor] = ACTIONS(125),
    [anon_sym_implies] = ACTIONS(125),
    [anon_sym_union] = ACTIONS(125),
    [anon_sym_intersect] = ACTIONS(125),
    [anon_sym_except] = ACTIONS(125),
    [anon_sym_year] = ACTIONS(125),
    [anon_sym_month] = ACTIONS(125),
    [anon_sym_week] = ACTIONS(125),
    [anon_sym_day] = ACTIONS(125),
    [anon_sym_hour] = ACTIONS(125),
    [anon_sym_minute] = ACTIONS(125),
    [anon_sym_second] = ACTIONS(125),
    [anon_sym_millisecond] = ACTIONS(125),
    [anon_sym_years] = ACTIONS(125),
    [anon_sym_months] = ACTIONS(125),
    [anon_sym_weeks] = ACTIONS(125),
    [anon_sym_days] = ACTIONS(125),
    [anon_sym_hours] = ACTIONS(125),
    [anon_sym_minutes] = ACTIONS(125),
    [anon_sym_seconds] = ACTIONS(125),
    [anon_sym_milliseconds] = ACTIONS(125),
    [anon_sym_date] = ACTIONS(125),
    [anon_sym_time] = ACTIONS(125),
    [anon_sym_timezone] = ACTIONS(125),
    [anon_sym_timezoneoffset] = ACTIONS(125),
    [anon_sym_duration] = ACTIONS(125),
    [anon_sym_in] = ACTIONS(125),
    [anon_sym_difference] = ACTIONS(125),
    [anon_sym_contains] = ACTIONS(125),
    [anon_sym_orbefore] = ACTIONS(127),
    [anon_sym_orafter] = ACTIONS(127),
    [anon_sym_ormore] = ACTIONS(127),
    [anon_sym_orless] = ACTIONS(127),
    [anon_sym_starts] = ACTIONS(125),
    [anon_sym_ends] = ACTIONS(125),
    [anon_sym_start] = ACTIONS(125),
    [anon_sym_end] = ACTIONS(125),
    [anon_sym_includes] = ACTIONS(125),
    [anon_sym_meets] = ACTIONS(125),
    [anon_sym_overlaps] = ACTIONS(125),
    [anon_sym_where] = ACTIONS(125),
    [anon_sym_from] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_version] = ACTIONS(125),
    [sym_default_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
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
    [anon_sym_parameter] = ACTIONS(125),
    [anon_sym_predecessor] = ACTIONS(125),
    [anon_sym_private] = ACTIONS(125),
    [anon_sym_public] = ACTIONS(125),
    [anon_sym_starting] = ACTIONS(125),
    [anon_sym_successor] = ACTIONS(125),
    [anon_sym_width] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [sym_number] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_library] = ACTIONS(129),
    [anon_sym_using] = ACTIONS(129),
    [anon_sym_called] = ACTIONS(129),
    [anon_sym_include] = ACTIONS(129),
    [anon_sym_valueset] = ACTIONS(129),
    [anon_sym_context] = ACTIONS(129),
    [anon_sym_define] = ACTIONS(129),
    [anon_sym_function] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_literal_token1] = ACTIONS(129),
    [anon_sym_null] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_cast] = ACTIONS(129),
    [anon_sym_exists] = ACTIONS(129),
    [anon_sym_xor] = ACTIONS(129),
    [anon_sym_implies] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_intersect] = ACTIONS(129),
    [anon_sym_except] = ACTIONS(129),
    [anon_sym_years] = ACTIONS(129),
    [anon_sym_months] = ACTIONS(129),
    [anon_sym_weeks] = ACTIONS(129),
    [anon_sym_days] = ACTIONS(129),
    [anon_sym_hours] = ACTIONS(129),
    [anon_sym_minutes] = ACTIONS(129),
    [anon_sym_seconds] = ACTIONS(129),
    [anon_sym_milliseconds] = ACTIONS(129),
    [anon_sym_date] = ACTIONS(129),
    [anon_sym_time] = ACTIONS(129),
    [anon_sym_timezone] = ACTIONS(129),
    [anon_sym_timezoneoffset] = ACTIONS(129),
    [anon_sym_duration] = ACTIONS(129),
    [anon_sym_in] = ACTIONS(129),
    [anon_sym_difference] = ACTIONS(129),
    [anon_sym_contains] = ACTIONS(129),
    [anon_sym_orbefore] = ACTIONS(131),
    [anon_sym_orafter] = ACTIONS(131),
    [anon_sym_ormore] = ACTIONS(131),
    [anon_sym_orless] = ACTIONS(131),
    [anon_sym_starts] = ACTIONS(129),
    [anon_sym_ends] = ACTIONS(129),
    [anon_sym_start] = ACTIONS(129),
    [anon_sym_end] = ACTIONS(129),
    [anon_sym_includes] = ACTIONS(129),
    [anon_sym_meets] = ACTIONS(129),
    [anon_sym_overlaps] = ACTIONS(129),
    [anon_sym_where] = ACTIONS(129),
    [anon_sym_from] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_version] = ACTIONS(129),
    [sym_default_identifier] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_asc] = ACTIONS(129),
    [anon_sym_ascending] = ACTIONS(129),
    [anon_sym_by] = ACTIONS(129),
    [anon_sym_code] = ACTIONS(129),
    [anon_sym_codesystem] = ACTIONS(129),
    [anon_sym_codesystems] = ACTIONS(129),
    [anon_sym_concept] = ACTIONS(129),
    [anon_sym_default] = ACTIONS(129),
    [anon_sym_desc] = ACTIONS(129),
    [anon_sym_descending] = ACTIONS(129),
    [anon_sym_display] = ACTIONS(129),
    [anon_sym_div] = ACTIONS(129),
    [anon_sym_fluent] = ACTIONS(129),
    [anon_sym_mod] = ACTIONS(129),
    [anon_sym_parameter] = ACTIONS(129),
    [anon_sym_predecessor] = ACTIONS(129),
    [anon_sym_private] = ACTIONS(129),
    [anon_sym_public] = ACTIONS(129),
    [anon_sym_starting] = ACTIONS(129),
    [anon_sym_successor] = ACTIONS(129),
    [anon_sym_width] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [anon_sym_library] = ACTIONS(133),
    [anon_sym_using] = ACTIONS(133),
    [anon_sym_called] = ACTIONS(133),
    [anon_sym_include] = ACTIONS(133),
    [anon_sym_valueset] = ACTIONS(133),
    [anon_sym_context] = ACTIONS(133),
    [anon_sym_define] = ACTIONS(133),
    [anon_sym_function] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(135),
    [aux_sym_literal_token1] = ACTIONS(133),
    [anon_sym_null] = ACTIONS(133),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_cast] = ACTIONS(133),
    [anon_sym_exists] = ACTIONS(133),
    [anon_sym_xor] = ACTIONS(133),
    [anon_sym_implies] = ACTIONS(133),
    [anon_sym_union] = ACTIONS(133),
    [anon_sym_intersect] = ACTIONS(133),
    [anon_sym_except] = ACTIONS(133),
    [anon_sym_years] = ACTIONS(133),
    [anon_sym_months] = ACTIONS(133),
    [anon_sym_weeks] = ACTIONS(133),
    [anon_sym_days] = ACTIONS(133),
    [anon_sym_hours] = ACTIONS(133),
    [anon_sym_minutes] = ACTIONS(133),
    [anon_sym_seconds] = ACTIONS(133),
    [anon_sym_milliseconds] = ACTIONS(133),
    [anon_sym_date] = ACTIONS(133),
    [anon_sym_time] = ACTIONS(133),
    [anon_sym_timezone] = ACTIONS(133),
    [anon_sym_timezoneoffset] = ACTIONS(133),
    [anon_sym_duration] = ACTIONS(133),
    [anon_sym_in] = ACTIONS(133),
    [anon_sym_difference] = ACTIONS(133),
    [anon_sym_contains] = ACTIONS(133),
    [anon_sym_orbefore] = ACTIONS(135),
    [anon_sym_orafter] = ACTIONS(135),
    [anon_sym_ormore] = ACTIONS(135),
    [anon_sym_orless] = ACTIONS(135),
    [anon_sym_starts] = ACTIONS(133),
    [anon_sym_ends] = ACTIONS(133),
    [anon_sym_start] = ACTIONS(137),
    [anon_sym_end] = ACTIONS(137),
    [anon_sym_includes] = ACTIONS(133),
    [anon_sym_meets] = ACTIONS(133),
    [anon_sym_overlaps] = ACTIONS(133),
    [anon_sym_where] = ACTIONS(133),
    [anon_sym_from] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_version] = ACTIONS(133),
    [sym_default_identifier] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_asc] = ACTIONS(133),
    [anon_sym_ascending] = ACTIONS(133),
    [anon_sym_by] = ACTIONS(133),
    [anon_sym_code] = ACTIONS(133),
    [anon_sym_codesystem] = ACTIONS(133),
    [anon_sym_codesystems] = ACTIONS(133),
    [anon_sym_concept] = ACTIONS(133),
    [anon_sym_default] = ACTIONS(133),
    [anon_sym_desc] = ACTIONS(133),
    [anon_sym_descending] = ACTIONS(133),
    [anon_sym_display] = ACTIONS(133),
    [anon_sym_div] = ACTIONS(133),
    [anon_sym_fluent] = ACTIONS(133),
    [anon_sym_mod] = ACTIONS(133),
    [anon_sym_parameter] = ACTIONS(133),
    [anon_sym_predecessor] = ACTIONS(133),
    [anon_sym_private] = ACTIONS(133),
    [anon_sym_public] = ACTIONS(133),
    [anon_sym_starting] = ACTIONS(133),
    [anon_sym_successor] = ACTIONS(133),
    [anon_sym_width] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_library] = ACTIONS(140),
    [anon_sym_using] = ACTIONS(140),
    [anon_sym_called] = ACTIONS(140),
    [anon_sym_include] = ACTIONS(140),
    [anon_sym_valueset] = ACTIONS(140),
    [anon_sym_context] = ACTIONS(140),
    [anon_sym_define] = ACTIONS(140),
    [anon_sym_function] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(142),
    [aux_sym_literal_token1] = ACTIONS(140),
    [anon_sym_null] = ACTIONS(140),
    [anon_sym_not] = ACTIONS(140),
    [anon_sym_cast] = ACTIONS(140),
    [anon_sym_exists] = ACTIONS(140),
    [anon_sym_xor] = ACTIONS(140),
    [anon_sym_implies] = ACTIONS(140),
    [anon_sym_union] = ACTIONS(140),
    [anon_sym_intersect] = ACTIONS(140),
    [anon_sym_except] = ACTIONS(140),
    [anon_sym_years] = ACTIONS(140),
    [anon_sym_months] = ACTIONS(140),
    [anon_sym_weeks] = ACTIONS(140),
    [anon_sym_days] = ACTIONS(140),
    [anon_sym_hours] = ACTIONS(140),
    [anon_sym_minutes] = ACTIONS(140),
    [anon_sym_seconds] = ACTIONS(140),
    [anon_sym_milliseconds] = ACTIONS(140),
    [anon_sym_date] = ACTIONS(140),
    [anon_sym_time] = ACTIONS(140),
    [anon_sym_timezone] = ACTIONS(140),
    [anon_sym_timezoneoffset] = ACTIONS(140),
    [anon_sym_duration] = ACTIONS(140),
    [anon_sym_in] = ACTIONS(140),
    [anon_sym_difference] = ACTIONS(140),
    [anon_sym_contains] = ACTIONS(140),
    [anon_sym_orbefore] = ACTIONS(142),
    [anon_sym_orafter] = ACTIONS(142),
    [anon_sym_ormore] = ACTIONS(142),
    [anon_sym_orless] = ACTIONS(142),
    [anon_sym_starts] = ACTIONS(140),
    [anon_sym_ends] = ACTIONS(140),
    [anon_sym_start] = ACTIONS(140),
    [anon_sym_end] = ACTIONS(140),
    [anon_sym_includes] = ACTIONS(140),
    [anon_sym_meets] = ACTIONS(140),
    [anon_sym_overlaps] = ACTIONS(140),
    [anon_sym_where] = ACTIONS(140),
    [anon_sym_from] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_version] = ACTIONS(140),
    [sym_default_identifier] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [anon_sym_asc] = ACTIONS(140),
    [anon_sym_ascending] = ACTIONS(140),
    [anon_sym_by] = ACTIONS(140),
    [anon_sym_code] = ACTIONS(140),
    [anon_sym_codesystem] = ACTIONS(140),
    [anon_sym_codesystems] = ACTIONS(140),
    [anon_sym_concept] = ACTIONS(140),
    [anon_sym_default] = ACTIONS(140),
    [anon_sym_desc] = ACTIONS(140),
    [anon_sym_descending] = ACTIONS(140),
    [anon_sym_display] = ACTIONS(140),
    [anon_sym_div] = ACTIONS(140),
    [anon_sym_fluent] = ACTIONS(140),
    [anon_sym_mod] = ACTIONS(140),
    [anon_sym_parameter] = ACTIONS(140),
    [anon_sym_predecessor] = ACTIONS(140),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_public] = ACTIONS(140),
    [anon_sym_starting] = ACTIONS(140),
    [anon_sym_successor] = ACTIONS(140),
    [anon_sym_width] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [sym_number] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_library] = ACTIONS(129),
    [anon_sym_using] = ACTIONS(129),
    [anon_sym_called] = ACTIONS(129),
    [anon_sym_include] = ACTIONS(129),
    [anon_sym_valueset] = ACTIONS(129),
    [anon_sym_context] = ACTIONS(129),
    [anon_sym_define] = ACTIONS(129),
    [anon_sym_function] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_literal_token1] = ACTIONS(129),
    [anon_sym_null] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_cast] = ACTIONS(129),
    [anon_sym_exists] = ACTIONS(129),
    [anon_sym_xor] = ACTIONS(129),
    [anon_sym_implies] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_intersect] = ACTIONS(129),
    [anon_sym_except] = ACTIONS(129),
    [anon_sym_years] = ACTIONS(129),
    [anon_sym_months] = ACTIONS(129),
    [anon_sym_weeks] = ACTIONS(129),
    [anon_sym_days] = ACTIONS(129),
    [anon_sym_hours] = ACTIONS(129),
    [anon_sym_minutes] = ACTIONS(129),
    [anon_sym_seconds] = ACTIONS(129),
    [anon_sym_milliseconds] = ACTIONS(129),
    [anon_sym_date] = ACTIONS(129),
    [anon_sym_time] = ACTIONS(129),
    [anon_sym_timezone] = ACTIONS(129),
    [anon_sym_timezoneoffset] = ACTIONS(129),
    [anon_sym_duration] = ACTIONS(129),
    [anon_sym_in] = ACTIONS(129),
    [anon_sym_difference] = ACTIONS(129),
    [anon_sym_contains] = ACTIONS(129),
    [anon_sym_orbefore] = ACTIONS(131),
    [anon_sym_orafter] = ACTIONS(131),
    [anon_sym_ormore] = ACTIONS(131),
    [anon_sym_orless] = ACTIONS(131),
    [anon_sym_starts] = ACTIONS(129),
    [anon_sym_ends] = ACTIONS(129),
    [anon_sym_start] = ACTIONS(144),
    [anon_sym_end] = ACTIONS(144),
    [anon_sym_includes] = ACTIONS(129),
    [anon_sym_meets] = ACTIONS(129),
    [anon_sym_overlaps] = ACTIONS(129),
    [anon_sym_where] = ACTIONS(129),
    [anon_sym_from] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_version] = ACTIONS(129),
    [sym_default_identifier] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_asc] = ACTIONS(129),
    [anon_sym_ascending] = ACTIONS(129),
    [anon_sym_by] = ACTIONS(129),
    [anon_sym_code] = ACTIONS(129),
    [anon_sym_codesystem] = ACTIONS(129),
    [anon_sym_codesystems] = ACTIONS(129),
    [anon_sym_concept] = ACTIONS(129),
    [anon_sym_default] = ACTIONS(129),
    [anon_sym_desc] = ACTIONS(129),
    [anon_sym_descending] = ACTIONS(129),
    [anon_sym_display] = ACTIONS(129),
    [anon_sym_div] = ACTIONS(129),
    [anon_sym_fluent] = ACTIONS(129),
    [anon_sym_mod] = ACTIONS(129),
    [anon_sym_parameter] = ACTIONS(129),
    [anon_sym_predecessor] = ACTIONS(129),
    [anon_sym_private] = ACTIONS(129),
    [anon_sym_public] = ACTIONS(129),
    [anon_sym_starting] = ACTIONS(129),
    [anon_sym_successor] = ACTIONS(129),
    [anon_sym_width] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_library] = ACTIONS(102),
    [anon_sym_using] = ACTIONS(102),
    [anon_sym_called] = ACTIONS(102),
    [anon_sym_include] = ACTIONS(102),
    [anon_sym_valueset] = ACTIONS(102),
    [anon_sym_context] = ACTIONS(102),
    [anon_sym_define] = ACTIONS(102),
    [anon_sym_function] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(104),
    [aux_sym_literal_token1] = ACTIONS(102),
    [anon_sym_null] = ACTIONS(102),
    [anon_sym_not] = ACTIONS(102),
    [anon_sym_cast] = ACTIONS(102),
    [anon_sym_exists] = ACTIONS(102),
    [anon_sym_xor] = ACTIONS(102),
    [anon_sym_implies] = ACTIONS(102),
    [anon_sym_union] = ACTIONS(102),
    [anon_sym_intersect] = ACTIONS(102),
    [anon_sym_except] = ACTIONS(102),
    [anon_sym_years] = ACTIONS(102),
    [anon_sym_months] = ACTIONS(102),
    [anon_sym_weeks] = ACTIONS(102),
    [anon_sym_days] = ACTIONS(102),
    [anon_sym_hours] = ACTIONS(102),
    [anon_sym_minutes] = ACTIONS(102),
    [anon_sym_seconds] = ACTIONS(102),
    [anon_sym_milliseconds] = ACTIONS(102),
    [anon_sym_date] = ACTIONS(102),
    [anon_sym_time] = ACTIONS(102),
    [anon_sym_timezone] = ACTIONS(102),
    [anon_sym_timezoneoffset] = ACTIONS(102),
    [anon_sym_duration] = ACTIONS(102),
    [anon_sym_in] = ACTIONS(102),
    [anon_sym_difference] = ACTIONS(102),
    [anon_sym_contains] = ACTIONS(102),
    [anon_sym_orbefore] = ACTIONS(104),
    [anon_sym_orafter] = ACTIONS(104),
    [anon_sym_ormore] = ACTIONS(104),
    [anon_sym_orless] = ACTIONS(104),
    [anon_sym_starts] = ACTIONS(102),
    [anon_sym_ends] = ACTIONS(102),
    [anon_sym_start] = ACTIONS(102),
    [anon_sym_end] = ACTIONS(102),
    [anon_sym_includes] = ACTIONS(102),
    [anon_sym_meets] = ACTIONS(102),
    [anon_sym_overlaps] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
    [anon_sym_from] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_version] = ACTIONS(102),
    [sym_default_identifier] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [anon_sym_asc] = ACTIONS(102),
    [anon_sym_ascending] = ACTIONS(102),
    [anon_sym_by] = ACTIONS(102),
    [anon_sym_code] = ACTIONS(102),
    [anon_sym_codesystem] = ACTIONS(102),
    [anon_sym_codesystems] = ACTIONS(102),
    [anon_sym_concept] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
    [anon_sym_desc] = ACTIONS(102),
    [anon_sym_descending] = ACTIONS(102),
    [anon_sym_display] = ACTIONS(102),
    [anon_sym_div] = ACTIONS(102),
    [anon_sym_fluent] = ACTIONS(102),
    [anon_sym_mod] = ACTIONS(102),
    [anon_sym_parameter] = ACTIONS(102),
    [anon_sym_predecessor] = ACTIONS(102),
    [anon_sym_private] = ACTIONS(102),
    [anon_sym_public] = ACTIONS(102),
    [anon_sym_starting] = ACTIONS(102),
    [anon_sym_successor] = ACTIONS(102),
    [anon_sym_width] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [anon_sym_library] = ACTIONS(102),
    [anon_sym_using] = ACTIONS(102),
    [anon_sym_called] = ACTIONS(102),
    [anon_sym_include] = ACTIONS(102),
    [anon_sym_valueset] = ACTIONS(102),
    [anon_sym_context] = ACTIONS(102),
    [anon_sym_define] = ACTIONS(102),
    [anon_sym_function] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(104),
    [aux_sym_literal_token1] = ACTIONS(102),
    [anon_sym_null] = ACTIONS(102),
    [anon_sym_not] = ACTIONS(102),
    [anon_sym_cast] = ACTIONS(102),
    [anon_sym_exists] = ACTIONS(102),
    [anon_sym_xor] = ACTIONS(102),
    [anon_sym_implies] = ACTIONS(102),
    [anon_sym_union] = ACTIONS(102),
    [anon_sym_intersect] = ACTIONS(102),
    [anon_sym_except] = ACTIONS(102),
    [anon_sym_years] = ACTIONS(102),
    [anon_sym_months] = ACTIONS(102),
    [anon_sym_weeks] = ACTIONS(102),
    [anon_sym_days] = ACTIONS(102),
    [anon_sym_hours] = ACTIONS(102),
    [anon_sym_minutes] = ACTIONS(102),
    [anon_sym_seconds] = ACTIONS(102),
    [anon_sym_milliseconds] = ACTIONS(102),
    [anon_sym_date] = ACTIONS(102),
    [anon_sym_time] = ACTIONS(102),
    [anon_sym_timezone] = ACTIONS(102),
    [anon_sym_timezoneoffset] = ACTIONS(102),
    [anon_sym_duration] = ACTIONS(102),
    [anon_sym_in] = ACTIONS(102),
    [anon_sym_difference] = ACTIONS(102),
    [anon_sym_contains] = ACTIONS(102),
    [anon_sym_orbefore] = ACTIONS(104),
    [anon_sym_orafter] = ACTIONS(104),
    [anon_sym_ormore] = ACTIONS(104),
    [anon_sym_orless] = ACTIONS(104),
    [anon_sym_starts] = ACTIONS(102),
    [anon_sym_ends] = ACTIONS(102),
    [anon_sym_start] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(106),
    [anon_sym_includes] = ACTIONS(102),
    [anon_sym_meets] = ACTIONS(102),
    [anon_sym_overlaps] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
    [anon_sym_from] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_version] = ACTIONS(102),
    [sym_default_identifier] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [anon_sym_asc] = ACTIONS(102),
    [anon_sym_ascending] = ACTIONS(102),
    [anon_sym_by] = ACTIONS(102),
    [anon_sym_code] = ACTIONS(102),
    [anon_sym_codesystem] = ACTIONS(102),
    [anon_sym_codesystems] = ACTIONS(102),
    [anon_sym_concept] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
    [anon_sym_desc] = ACTIONS(102),
    [anon_sym_descending] = ACTIONS(102),
    [anon_sym_display] = ACTIONS(102),
    [anon_sym_div] = ACTIONS(102),
    [anon_sym_fluent] = ACTIONS(102),
    [anon_sym_mod] = ACTIONS(102),
    [anon_sym_parameter] = ACTIONS(102),
    [anon_sym_predecessor] = ACTIONS(102),
    [anon_sym_private] = ACTIONS(102),
    [anon_sym_public] = ACTIONS(102),
    [anon_sym_starting] = ACTIONS(102),
    [anon_sym_successor] = ACTIONS(102),
    [anon_sym_width] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [anon_sym_library] = ACTIONS(109),
    [anon_sym_using] = ACTIONS(109),
    [anon_sym_called] = ACTIONS(109),
    [anon_sym_include] = ACTIONS(109),
    [anon_sym_valueset] = ACTIONS(109),
    [anon_sym_context] = ACTIONS(109),
    [anon_sym_define] = ACTIONS(109),
    [anon_sym_function] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_literal_token1] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_not] = ACTIONS(109),
    [anon_sym_cast] = ACTIONS(109),
    [anon_sym_exists] = ACTIONS(109),
    [anon_sym_xor] = ACTIONS(109),
    [anon_sym_implies] = ACTIONS(109),
    [anon_sym_union] = ACTIONS(109),
    [anon_sym_intersect] = ACTIONS(109),
    [anon_sym_except] = ACTIONS(109),
    [anon_sym_years] = ACTIONS(109),
    [anon_sym_months] = ACTIONS(109),
    [anon_sym_weeks] = ACTIONS(109),
    [anon_sym_days] = ACTIONS(109),
    [anon_sym_hours] = ACTIONS(109),
    [anon_sym_minutes] = ACTIONS(109),
    [anon_sym_seconds] = ACTIONS(109),
    [anon_sym_milliseconds] = ACTIONS(109),
    [anon_sym_date] = ACTIONS(109),
    [anon_sym_time] = ACTIONS(109),
    [anon_sym_timezone] = ACTIONS(109),
    [anon_sym_timezoneoffset] = ACTIONS(109),
    [anon_sym_duration] = ACTIONS(109),
    [anon_sym_in] = ACTIONS(109),
    [anon_sym_difference] = ACTIONS(109),
    [anon_sym_contains] = ACTIONS(109),
    [anon_sym_orbefore] = ACTIONS(111),
    [anon_sym_orafter] = ACTIONS(111),
    [anon_sym_ormore] = ACTIONS(111),
    [anon_sym_orless] = ACTIONS(111),
    [anon_sym_starts] = ACTIONS(109),
    [anon_sym_ends] = ACTIONS(109),
    [anon_sym_start] = ACTIONS(109),
    [anon_sym_end] = ACTIONS(109),
    [anon_sym_includes] = ACTIONS(109),
    [anon_sym_meets] = ACTIONS(109),
    [anon_sym_overlaps] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
    [anon_sym_from] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_version] = ACTIONS(109),
    [sym_default_identifier] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_asc] = ACTIONS(109),
    [anon_sym_ascending] = ACTIONS(109),
    [anon_sym_by] = ACTIONS(109),
    [anon_sym_code] = ACTIONS(109),
    [anon_sym_codesystem] = ACTIONS(109),
    [anon_sym_codesystems] = ACTIONS(109),
    [anon_sym_concept] = ACTIONS(109),
    [anon_sym_default] = ACTIONS(109),
    [anon_sym_desc] = ACTIONS(109),
    [anon_sym_descending] = ACTIONS(109),
    [anon_sym_display] = ACTIONS(109),
    [anon_sym_div] = ACTIONS(109),
    [anon_sym_fluent] = ACTIONS(109),
    [anon_sym_mod] = ACTIONS(109),
    [anon_sym_parameter] = ACTIONS(109),
    [anon_sym_predecessor] = ACTIONS(109),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_public] = ACTIONS(109),
    [anon_sym_starting] = ACTIONS(109),
    [anon_sym_successor] = ACTIONS(109),
    [anon_sym_width] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_number] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [anon_sym_library] = ACTIONS(109),
    [anon_sym_using] = ACTIONS(109),
    [anon_sym_called] = ACTIONS(109),
    [anon_sym_include] = ACTIONS(109),
    [anon_sym_valueset] = ACTIONS(109),
    [anon_sym_context] = ACTIONS(109),
    [anon_sym_define] = ACTIONS(109),
    [anon_sym_function] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [aux_sym_literal_token1] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_not] = ACTIONS(109),
    [anon_sym_cast] = ACTIONS(109),
    [anon_sym_exists] = ACTIONS(109),
    [anon_sym_xor] = ACTIONS(109),
    [anon_sym_implies] = ACTIONS(109),
    [anon_sym_union] = ACTIONS(109),
    [anon_sym_intersect] = ACTIONS(109),
    [anon_sym_except] = ACTIONS(109),
    [anon_sym_years] = ACTIONS(109),
    [anon_sym_months] = ACTIONS(109),
    [anon_sym_weeks] = ACTIONS(109),
    [anon_sym_days] = ACTIONS(109),
    [anon_sym_hours] = ACTIONS(109),
    [anon_sym_minutes] = ACTIONS(109),
    [anon_sym_seconds] = ACTIONS(109),
    [anon_sym_milliseconds] = ACTIONS(109),
    [anon_sym_date] = ACTIONS(109),
    [anon_sym_time] = ACTIONS(109),
    [anon_sym_timezone] = ACTIONS(109),
    [anon_sym_timezoneoffset] = ACTIONS(109),
    [anon_sym_duration] = ACTIONS(109),
    [anon_sym_in] = ACTIONS(109),
    [anon_sym_difference] = ACTIONS(109),
    [anon_sym_contains] = ACTIONS(109),
    [anon_sym_orbefore] = ACTIONS(111),
    [anon_sym_orafter] = ACTIONS(111),
    [anon_sym_ormore] = ACTIONS(111),
    [anon_sym_orless] = ACTIONS(111),
    [anon_sym_starts] = ACTIONS(109),
    [anon_sym_ends] = ACTIONS(109),
    [anon_sym_start] = ACTIONS(116),
    [anon_sym_end] = ACTIONS(116),
    [anon_sym_includes] = ACTIONS(109),
    [anon_sym_meets] = ACTIONS(109),
    [anon_sym_overlaps] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
    [anon_sym_from] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_version] = ACTIONS(109),
    [sym_default_identifier] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_asc] = ACTIONS(109),
    [anon_sym_ascending] = ACTIONS(109),
    [anon_sym_by] = ACTIONS(109),
    [anon_sym_code] = ACTIONS(109),
    [anon_sym_codesystem] = ACTIONS(109),
    [anon_sym_codesystems] = ACTIONS(109),
    [anon_sym_concept] = ACTIONS(109),
    [anon_sym_default] = ACTIONS(109),
    [anon_sym_desc] = ACTIONS(109),
    [anon_sym_descending] = ACTIONS(109),
    [anon_sym_display] = ACTIONS(109),
    [anon_sym_div] = ACTIONS(109),
    [anon_sym_fluent] = ACTIONS(109),
    [anon_sym_mod] = ACTIONS(109),
    [anon_sym_parameter] = ACTIONS(109),
    [anon_sym_predecessor] = ACTIONS(109),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_public] = ACTIONS(109),
    [anon_sym_starting] = ACTIONS(109),
    [anon_sym_successor] = ACTIONS(109),
    [anon_sym_width] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_number] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [anon_sym_library] = ACTIONS(147),
    [anon_sym_using] = ACTIONS(147),
    [anon_sym_called] = ACTIONS(147),
    [anon_sym_include] = ACTIONS(147),
    [anon_sym_valueset] = ACTIONS(147),
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
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_version] = ACTIONS(147),
    [sym_default_identifier] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_asc] = ACTIONS(147),
    [anon_sym_ascending] = ACTIONS(147),
    [anon_sym_by] = ACTIONS(147),
    [anon_sym_code] = ACTIONS(147),
    [anon_sym_codesystem] = ACTIONS(147),
    [anon_sym_codesystems] = ACTIONS(147),
    [anon_sym_concept] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
    [anon_sym_desc] = ACTIONS(147),
    [anon_sym_descending] = ACTIONS(147),
    [anon_sym_display] = ACTIONS(147),
    [anon_sym_div] = ACTIONS(147),
    [anon_sym_fluent] = ACTIONS(147),
    [anon_sym_mod] = ACTIONS(147),
    [anon_sym_parameter] = ACTIONS(147),
    [anon_sym_predecessor] = ACTIONS(147),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_public] = ACTIONS(147),
    [anon_sym_starting] = ACTIONS(147),
    [anon_sym_successor] = ACTIONS(147),
    [anon_sym_width] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [sym_number] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_library] = ACTIONS(133),
    [anon_sym_using] = ACTIONS(133),
    [anon_sym_called] = ACTIONS(133),
    [anon_sym_include] = ACTIONS(133),
    [anon_sym_valueset] = ACTIONS(133),
    [anon_sym_context] = ACTIONS(133),
    [anon_sym_define] = ACTIONS(133),
    [anon_sym_function] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(135),
    [aux_sym_literal_token1] = ACTIONS(133),
    [anon_sym_null] = ACTIONS(133),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_cast] = ACTIONS(133),
    [anon_sym_exists] = ACTIONS(133),
    [anon_sym_xor] = ACTIONS(133),
    [anon_sym_implies] = ACTIONS(133),
    [anon_sym_union] = ACTIONS(133),
    [anon_sym_intersect] = ACTIONS(133),
    [anon_sym_except] = ACTIONS(133),
    [anon_sym_years] = ACTIONS(133),
    [anon_sym_months] = ACTIONS(133),
    [anon_sym_weeks] = ACTIONS(133),
    [anon_sym_days] = ACTIONS(133),
    [anon_sym_hours] = ACTIONS(133),
    [anon_sym_minutes] = ACTIONS(133),
    [anon_sym_seconds] = ACTIONS(133),
    [anon_sym_milliseconds] = ACTIONS(133),
    [anon_sym_date] = ACTIONS(133),
    [anon_sym_time] = ACTIONS(133),
    [anon_sym_timezone] = ACTIONS(133),
    [anon_sym_timezoneoffset] = ACTIONS(133),
    [anon_sym_duration] = ACTIONS(133),
    [anon_sym_in] = ACTIONS(133),
    [anon_sym_difference] = ACTIONS(133),
    [anon_sym_contains] = ACTIONS(133),
    [anon_sym_orbefore] = ACTIONS(135),
    [anon_sym_orafter] = ACTIONS(135),
    [anon_sym_ormore] = ACTIONS(135),
    [anon_sym_orless] = ACTIONS(135),
    [anon_sym_starts] = ACTIONS(133),
    [anon_sym_ends] = ACTIONS(133),
    [anon_sym_start] = ACTIONS(133),
    [anon_sym_end] = ACTIONS(133),
    [anon_sym_includes] = ACTIONS(133),
    [anon_sym_meets] = ACTIONS(133),
    [anon_sym_overlaps] = ACTIONS(133),
    [anon_sym_where] = ACTIONS(133),
    [anon_sym_from] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_version] = ACTIONS(133),
    [sym_default_identifier] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_asc] = ACTIONS(133),
    [anon_sym_ascending] = ACTIONS(133),
    [anon_sym_by] = ACTIONS(133),
    [anon_sym_code] = ACTIONS(133),
    [anon_sym_codesystem] = ACTIONS(133),
    [anon_sym_codesystems] = ACTIONS(133),
    [anon_sym_concept] = ACTIONS(133),
    [anon_sym_default] = ACTIONS(133),
    [anon_sym_desc] = ACTIONS(133),
    [anon_sym_descending] = ACTIONS(133),
    [anon_sym_display] = ACTIONS(133),
    [anon_sym_div] = ACTIONS(133),
    [anon_sym_fluent] = ACTIONS(133),
    [anon_sym_mod] = ACTIONS(133),
    [anon_sym_parameter] = ACTIONS(133),
    [anon_sym_predecessor] = ACTIONS(133),
    [anon_sym_private] = ACTIONS(133),
    [anon_sym_public] = ACTIONS(133),
    [anon_sym_starting] = ACTIONS(133),
    [anon_sym_successor] = ACTIONS(133),
    [anon_sym_width] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_library] = ACTIONS(151),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_called] = ACTIONS(151),
    [anon_sym_include] = ACTIONS(151),
    [anon_sym_valueset] = ACTIONS(151),
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
    [anon_sym_from] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_version] = ACTIONS(151),
    [sym_default_identifier] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_asc] = ACTIONS(151),
    [anon_sym_ascending] = ACTIONS(151),
    [anon_sym_by] = ACTIONS(151),
    [anon_sym_code] = ACTIONS(151),
    [anon_sym_codesystem] = ACTIONS(151),
    [anon_sym_codesystems] = ACTIONS(151),
    [anon_sym_concept] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_desc] = ACTIONS(151),
    [anon_sym_descending] = ACTIONS(151),
    [anon_sym_display] = ACTIONS(151),
    [anon_sym_div] = ACTIONS(151),
    [anon_sym_fluent] = ACTIONS(151),
    [anon_sym_mod] = ACTIONS(151),
    [anon_sym_parameter] = ACTIONS(151),
    [anon_sym_predecessor] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_public] = ACTIONS(151),
    [anon_sym_starting] = ACTIONS(151),
    [anon_sym_successor] = ACTIONS(151),
    [anon_sym_width] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [sym_type_specifier] = STATE(128),
    [sym_named_type_specifier] = STATE(131),
    [sym_identifier] = STATE(93),
    [sym_quoted_identifier] = STATE(95),
    [sym_referential_identifier] = STATE(108),
    [sym_type_name_identifier] = STATE(108),
    [sym_referential_or_type_name_identifier] = STATE(109),
    [sym_keyword_identifier] = STATE(140),
    [aux_sym_named_type_specifier_repeat1] = STATE(61),
    [anon_sym_library] = ACTIONS(155),
    [anon_sym_using] = ACTIONS(155),
    [anon_sym_called] = ACTIONS(155),
    [anon_sym_include] = ACTIONS(155),
    [anon_sym_valueset] = ACTIONS(155),
    [anon_sym_context] = ACTIONS(155),
    [anon_sym_define] = ACTIONS(155),
    [anon_sym_function] = ACTIONS(155),
    [anon_sym_null] = ACTIONS(157),
    [anon_sym_not] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(157),
    [anon_sym_xor] = ACTIONS(155),
    [anon_sym_implies] = ACTIONS(155),
    [anon_sym_union] = ACTIONS(155),
    [anon_sym_intersect] = ACTIONS(155),
    [anon_sym_except] = ACTIONS(155),
    [anon_sym_date] = ACTIONS(161),
    [anon_sym_time] = ACTIONS(161),
    [anon_sym_timezone] = ACTIONS(155),
    [anon_sym_timezoneoffset] = ACTIONS(155),
    [anon_sym_contains] = ACTIONS(155),
    [anon_sym_orbefore] = ACTIONS(163),
    [anon_sym_orafter] = ACTIONS(163),
    [anon_sym_ormore] = ACTIONS(163),
    [anon_sym_orless] = ACTIONS(163),
    [anon_sym_starts] = ACTIONS(155),
    [anon_sym_ends] = ACTIONS(155),
    [anon_sym_start] = ACTIONS(155),
    [anon_sym_end] = ACTIONS(155),
    [anon_sym_includes] = ACTIONS(155),
    [anon_sym_meets] = ACTIONS(155),
    [anon_sym_overlaps] = ACTIONS(155),
    [anon_sym_where] = ACTIONS(155),
    [anon_sym_version] = ACTIONS(155),
    [sym_default_identifier] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_Code] = ACTIONS(169),
    [anon_sym_Concept] = ACTIONS(169),
    [anon_sym_asc] = ACTIONS(155),
    [anon_sym_ascending] = ACTIONS(155),
    [anon_sym_by] = ACTIONS(155),
    [anon_sym_code] = ACTIONS(155),
    [anon_sym_codesystem] = ACTIONS(155),
    [anon_sym_codesystems] = ACTIONS(155),
    [anon_sym_concept] = ACTIONS(155),
    [anon_sym_default] = ACTIONS(155),
    [anon_sym_desc] = ACTIONS(155),
    [anon_sym_descending] = ACTIONS(155),
    [anon_sym_display] = ACTIONS(155),
    [anon_sym_div] = ACTIONS(155),
    [anon_sym_fluent] = ACTIONS(155),
    [anon_sym_mod] = ACTIONS(155),
    [anon_sym_parameter] = ACTIONS(155),
    [anon_sym_predecessor] = ACTIONS(155),
    [anon_sym_private] = ACTIONS(155),
    [anon_sym_public] = ACTIONS(155),
    [anon_sym_starting] = ACTIONS(155),
    [anon_sym_successor] = ACTIONS(155),
    [anon_sym_width] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_type_specifier] = STATE(142),
    [sym_named_type_specifier] = STATE(131),
    [sym_identifier] = STATE(93),
    [sym_quoted_identifier] = STATE(95),
    [sym_referential_identifier] = STATE(108),
    [sym_type_name_identifier] = STATE(108),
    [sym_referential_or_type_name_identifier] = STATE(109),
    [sym_keyword_identifier] = STATE(140),
    [aux_sym_named_type_specifier_repeat1] = STATE(61),
    [anon_sym_library] = ACTIONS(155),
    [anon_sym_using] = ACTIONS(155),
    [anon_sym_called] = ACTIONS(155),
    [anon_sym_include] = ACTIONS(155),
    [anon_sym_valueset] = ACTIONS(155),
    [anon_sym_context] = ACTIONS(155),
    [anon_sym_define] = ACTIONS(155),
    [anon_sym_function] = ACTIONS(155),
    [anon_sym_xor] = ACTIONS(155),
    [anon_sym_implies] = ACTIONS(155),
    [anon_sym_union] = ACTIONS(155),
    [anon_sym_intersect] = ACTIONS(155),
    [anon_sym_except] = ACTIONS(155),
    [anon_sym_date] = ACTIONS(161),
    [anon_sym_time] = ACTIONS(161),
    [anon_sym_timezone] = ACTIONS(155),
    [anon_sym_timezoneoffset] = ACTIONS(155),
    [anon_sym_contains] = ACTIONS(155),
    [anon_sym_orbefore] = ACTIONS(163),
    [anon_sym_orafter] = ACTIONS(163),
    [anon_sym_ormore] = ACTIONS(163),
    [anon_sym_orless] = ACTIONS(163),
    [anon_sym_starts] = ACTIONS(155),
    [anon_sym_ends] = ACTIONS(155),
    [anon_sym_start] = ACTIONS(155),
    [anon_sym_end] = ACTIONS(155),
    [anon_sym_includes] = ACTIONS(155),
    [anon_sym_meets] = ACTIONS(155),
    [anon_sym_overlaps] = ACTIONS(155),
    [anon_sym_where] = ACTIONS(155),
    [anon_sym_version] = ACTIONS(155),
    [sym_default_identifier] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_Code] = ACTIONS(169),
    [anon_sym_Concept] = ACTIONS(169),
    [anon_sym_asc] = ACTIONS(155),
    [anon_sym_ascending] = ACTIONS(155),
    [anon_sym_by] = ACTIONS(155),
    [anon_sym_code] = ACTIONS(155),
    [anon_sym_codesystem] = ACTIONS(155),
    [anon_sym_codesystems] = ACTIONS(155),
    [anon_sym_concept] = ACTIONS(155),
    [anon_sym_default] = ACTIONS(155),
    [anon_sym_desc] = ACTIONS(155),
    [anon_sym_descending] = ACTIONS(155),
    [anon_sym_display] = ACTIONS(155),
    [anon_sym_div] = ACTIONS(155),
    [anon_sym_fluent] = ACTIONS(155),
    [anon_sym_mod] = ACTIONS(155),
    [anon_sym_parameter] = ACTIONS(155),
    [anon_sym_predecessor] = ACTIONS(155),
    [anon_sym_private] = ACTIONS(155),
    [anon_sym_public] = ACTIONS(155),
    [anon_sym_starting] = ACTIONS(155),
    [anon_sym_successor] = ACTIONS(155),
    [anon_sym_width] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(88),
    [sym_retrieve] = STATE(256),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym_qualified_identifier_expression] = STATE(256),
    [sym_query_source] = STATE(214),
    [sym_aliased_query_source] = STATE(104),
    [sym_retrieve] = STATE(256),
    [sym_identifier] = STATE(210),
    [sym_quoted_identifier] = STATE(243),
    [sym_referential_identifier] = STATE(223),
    [sym_keyword_identifier] = STATE(210),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(69),
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
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_type_specifier] = STATE(128),
    [sym_named_type_specifier] = STATE(131),
    [sym_identifier] = STATE(93),
    [sym_quoted_identifier] = STATE(95),
    [sym_referential_identifier] = STATE(108),
    [sym_type_name_identifier] = STATE(108),
    [sym_referential_or_type_name_identifier] = STATE(109),
    [sym_keyword_identifier] = STATE(140),
    [aux_sym_named_type_specifier_repeat1] = STATE(61),
    [anon_sym_library] = ACTIONS(155),
    [anon_sym_using] = ACTIONS(155),
    [anon_sym_called] = ACTIONS(155),
    [anon_sym_include] = ACTIONS(155),
    [anon_sym_valueset] = ACTIONS(155),
    [anon_sym_context] = ACTIONS(155),
    [anon_sym_define] = ACTIONS(155),
    [anon_sym_function] = ACTIONS(155),
    [anon_sym_xor] = ACTIONS(155),
    [anon_sym_implies] = ACTIONS(155),
    [anon_sym_union] = ACTIONS(155),
    [anon_sym_intersect] = ACTIONS(155),
    [anon_sym_except] = ACTIONS(155),
    [anon_sym_date] = ACTIONS(161),
    [anon_sym_time] = ACTIONS(161),
    [anon_sym_timezone] = ACTIONS(155),
    [anon_sym_timezoneoffset] = ACTIONS(155),
    [anon_sym_contains] = ACTIONS(155),
    [anon_sym_orbefore] = ACTIONS(163),
    [anon_sym_orafter] = ACTIONS(163),
    [anon_sym_ormore] = ACTIONS(163),
    [anon_sym_orless] = ACTIONS(163),
    [anon_sym_starts] = ACTIONS(155),
    [anon_sym_ends] = ACTIONS(155),
    [anon_sym_start] = ACTIONS(155),
    [anon_sym_end] = ACTIONS(155),
    [anon_sym_includes] = ACTIONS(155),
    [anon_sym_meets] = ACTIONS(155),
    [anon_sym_overlaps] = ACTIONS(155),
    [anon_sym_where] = ACTIONS(155),
    [anon_sym_version] = ACTIONS(155),
    [sym_default_identifier] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_Code] = ACTIONS(169),
    [anon_sym_Concept] = ACTIONS(169),
    [anon_sym_asc] = ACTIONS(155),
    [anon_sym_ascending] = ACTIONS(155),
    [anon_sym_by] = ACTIONS(155),
    [anon_sym_code] = ACTIONS(155),
    [anon_sym_codesystem] = ACTIONS(155),
    [anon_sym_codesystems] = ACTIONS(155),
    [anon_sym_concept] = ACTIONS(155),
    [anon_sym_default] = ACTIONS(155),
    [anon_sym_desc] = ACTIONS(155),
    [anon_sym_descending] = ACTIONS(155),
    [anon_sym_display] = ACTIONS(155),
    [anon_sym_div] = ACTIONS(155),
    [anon_sym_fluent] = ACTIONS(155),
    [anon_sym_mod] = ACTIONS(155),
    [anon_sym_parameter] = ACTIONS(155),
    [anon_sym_predecessor] = ACTIONS(155),
    [anon_sym_private] = ACTIONS(155),
    [anon_sym_public] = ACTIONS(155),
    [anon_sym_starting] = ACTIONS(155),
    [anon_sym_successor] = ACTIONS(155),
    [anon_sym_width] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym_named_type_specifier] = STATE(250),
    [sym_identifier] = STATE(93),
    [sym_quoted_identifier] = STATE(162),
    [sym_referential_identifier] = STATE(108),
    [sym_type_name_identifier] = STATE(108),
    [sym_referential_or_type_name_identifier] = STATE(109),
    [sym_keyword_identifier] = STATE(210),
    [aux_sym_named_type_specifier_repeat1] = STATE(62),
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
    [anon_sym_date] = ACTIONS(161),
    [anon_sym_time] = ACTIONS(161),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_Code] = ACTIONS(169),
    [anon_sym_Concept] = ACTIONS(169),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [sym_named_type_specifier] = STATE(253),
    [sym_identifier] = STATE(93),
    [sym_quoted_identifier] = STATE(162),
    [sym_referential_identifier] = STATE(108),
    [sym_type_name_identifier] = STATE(108),
    [sym_referential_or_type_name_identifier] = STATE(109),
    [sym_keyword_identifier] = STATE(210),
    [aux_sym_named_type_specifier_repeat1] = STATE(62),
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
    [anon_sym_date] = ACTIONS(161),
    [anon_sym_time] = ACTIONS(161),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_Code] = ACTIONS(169),
    [anon_sym_Concept] = ACTIONS(169),
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
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym_named_type_specifier] = STATE(262),
    [sym_identifier] = STATE(93),
    [sym_quoted_identifier] = STATE(162),
    [sym_referential_identifier] = STATE(108),
    [sym_type_name_identifier] = STATE(108),
    [sym_referential_or_type_name_identifier] = STATE(109),
    [sym_keyword_identifier] = STATE(210),
    [aux_sym_named_type_specifier_repeat1] = STATE(62),
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
    [anon_sym_date] = ACTIONS(161),
    [anon_sym_time] = ACTIONS(161),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_orbefore] = ACTIONS(47),
    [anon_sym_orafter] = ACTIONS(47),
    [anon_sym_ormore] = ACTIONS(47),
    [anon_sym_orless] = ACTIONS(47),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_Code] = ACTIONS(169),
    [anon_sym_Concept] = ACTIONS(169),
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
    ACTIONS(165), 1,
      sym_default_identifier,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(93), 1,
      sym_identifier,
    STATE(95), 1,
      sym_quoted_identifier,
    STATE(98), 1,
      sym_referential_or_type_name_identifier,
    STATE(140), 1,
      sym_keyword_identifier,
    ACTIONS(161), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(169), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(108), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(163), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(155), 46,
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
    ACTIONS(173), 1,
      sym_default_identifier,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(93), 1,
      sym_identifier,
    STATE(98), 1,
      sym_referential_or_type_name_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(210), 1,
      sym_keyword_identifier,
    ACTIONS(161), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(169), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(108), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
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
  [182] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_default_identifier,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(223), 1,
      sym_referential_identifier,
    STATE(267), 1,
      sym_qualified_identifier_expression,
    STATE(280), 1,
      sym_terminology,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
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
    ACTIONS(173), 1,
      sym_default_identifier,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(223), 1,
      sym_referential_identifier,
    STATE(267), 1,
      sym_qualified_identifier_expression,
    STATE(284), 1,
      sym_terminology,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
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
  [352] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      sym_unit,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(121), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(35), 8,
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
    ACTIONS(177), 38,
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
  [431] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_default_identifier,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(223), 1,
      sym_referential_identifier,
    STATE(267), 1,
      sym_qualified_identifier_expression,
    STATE(278), 1,
      sym_terminology,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
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
  [516] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_default_identifier,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(274), 1,
      sym_identifier,
    ACTIONS(189), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(187), 50,
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
  [593] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_default_identifier,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(227), 1,
      sym_referential_identifier,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
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
  [672] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_default_identifier,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(227), 1,
      sym_referential_identifier,
    STATE(243), 1,
      sym_quoted_identifier,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(47), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
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
  [751] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_default_identifier,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(270), 1,
      sym_referential_identifier,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(200), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(197), 48,
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
  [830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 5,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(209), 51,
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
  [894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 5,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(213), 49,
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
  [956] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(219), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(217), 37,
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
  [1018] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_is,
    ACTIONS(226), 1,
      anon_sym_as,
    ACTIONS(229), 1,
      anon_sym_properly,
    ACTIONS(232), 1,
      anon_sym_between,
    ACTIONS(235), 1,
      anon_sym_and,
    ACTIONS(245), 1,
      anon_sym_implies,
    ACTIONS(252), 1,
      anon_sym_onor,
    ACTIONS(261), 1,
      anon_sym_occurs,
    ACTIONS(264), 1,
      anon_sym_same,
    ACTIONS(267), 1,
      anon_sym_includes,
    ACTIONS(276), 1,
      anon_sym_within,
    ACTIONS(279), 1,
      sym_number,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(239), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(249), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(255), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(258), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(270), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(273), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(237), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(247), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1122] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_and,
    ACTIONS(245), 1,
      anon_sym_implies,
    ACTIONS(284), 1,
      anon_sym_is,
    ACTIONS(287), 1,
      anon_sym_as,
    ACTIONS(290), 1,
      anon_sym_properly,
    ACTIONS(293), 1,
      anon_sym_between,
    ACTIONS(299), 1,
      anon_sym_onor,
    ACTIONS(308), 1,
      anon_sym_occurs,
    ACTIONS(311), 1,
      anon_sym_same,
    ACTIONS(314), 1,
      anon_sym_includes,
    ACTIONS(323), 1,
      anon_sym_within,
    ACTIONS(326), 1,
      sym_number,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(239), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(296), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(302), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(305), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(317), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(320), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(282), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(237), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(247), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1226] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_and,
    ACTIONS(245), 1,
      anon_sym_implies,
    ACTIONS(331), 1,
      anon_sym_is,
    ACTIONS(334), 1,
      anon_sym_as,
    ACTIONS(337), 1,
      anon_sym_properly,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      anon_sym_onor,
    ACTIONS(355), 1,
      anon_sym_occurs,
    ACTIONS(358), 1,
      anon_sym_same,
    ACTIONS(361), 1,
      anon_sym_includes,
    ACTIONS(370), 1,
      anon_sym_within,
    ACTIONS(373), 1,
      sym_number,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(239), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(343), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(349), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(352), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(364), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(367), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(237), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(247), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1330] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 37,
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
  [1392] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_onor,
    ACTIONS(235), 1,
      anon_sym_and,
    ACTIONS(245), 1,
      anon_sym_implies,
    ACTIONS(382), 1,
      anon_sym_is,
    ACTIONS(384), 1,
      anon_sym_as,
    ACTIONS(386), 1,
      anon_sym_properly,
    ACTIONS(388), 1,
      anon_sym_between,
    ACTIONS(394), 1,
      anon_sym_occurs,
    ACTIONS(396), 1,
      anon_sym_same,
    ACTIONS(398), 1,
      anon_sym_includes,
    ACTIONS(404), 1,
      anon_sym_within,
    ACTIONS(406), 1,
      sym_number,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(85), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(239), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(392), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(400), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(402), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(380), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(237), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(247), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1496] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(408), 37,
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
  [1558] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(414), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 37,
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
  [1620] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(416), 37,
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
  [1682] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(422), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(420), 37,
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
  [1744] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_and,
    ACTIONS(245), 1,
      anon_sym_implies,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(239), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(237), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(247), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(424), 23,
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
  [1818] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_onor,
    ACTIONS(235), 1,
      anon_sym_and,
    ACTIONS(245), 1,
      anon_sym_implies,
    ACTIONS(382), 1,
      anon_sym_is,
    ACTIONS(384), 1,
      anon_sym_as,
    ACTIONS(386), 1,
      anon_sym_properly,
    ACTIONS(388), 1,
      anon_sym_between,
    ACTIONS(394), 1,
      anon_sym_occurs,
    ACTIONS(396), 1,
      anon_sym_same,
    ACTIONS(398), 1,
      anon_sym_includes,
    ACTIONS(404), 1,
      anon_sym_within,
    ACTIONS(406), 1,
      sym_number,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(85), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(239), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(392), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(400), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(402), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(426), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(237), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(247), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1922] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(428), 37,
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
  [1984] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(432), 37,
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
  [2046] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(438), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(436), 39,
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
  [2101] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(438), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(436), 39,
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
  [2156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(444), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(442), 39,
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
  [2211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(449), 41,
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
      anon_sym_COMMA,
      sym_number,
  [2262] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(455), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 39,
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
  [2317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(459), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 39,
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
  [2372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_DOT,
    ACTIONS(465), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(461), 40,
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
      anon_sym_RBRACK,
      sym_number,
  [2425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(467), 41,
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
      anon_sym_COMMA,
      sym_number,
  [2476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 41,
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
      anon_sym_COMMA,
      sym_number,
  [2527] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_onor,
    ACTIONS(382), 1,
      anon_sym_is,
    ACTIONS(384), 1,
      anon_sym_as,
    ACTIONS(386), 1,
      anon_sym_properly,
    ACTIONS(388), 1,
      anon_sym_between,
    ACTIONS(394), 1,
      anon_sym_occurs,
    ACTIONS(396), 1,
      anon_sym_same,
    ACTIONS(398), 1,
      anon_sym_includes,
    ACTIONS(404), 1,
      anon_sym_within,
    ACTIONS(406), 1,
      sym_number,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(477), 1,
      anon_sym_and,
    ACTIONS(487), 1,
      anon_sym_implies,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(85), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(392), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(400), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(402), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(481), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(483), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(485), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(479), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(489), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2629] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(428), 35,
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
  [2689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(491), 40,
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
      anon_sym_RBRACK,
      sym_number,
  [2739] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(223), 1,
      anon_sym_is,
    ACTIONS(226), 1,
      anon_sym_as,
    ACTIONS(229), 1,
      anon_sym_properly,
    ACTIONS(232), 1,
      anon_sym_between,
    ACTIONS(252), 1,
      anon_sym_onor,
    ACTIONS(261), 1,
      anon_sym_occurs,
    ACTIONS(264), 1,
      anon_sym_same,
    ACTIONS(267), 1,
      anon_sym_includes,
    ACTIONS(276), 1,
      anon_sym_within,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(477), 1,
      anon_sym_and,
    ACTIONS(487), 1,
      anon_sym_implies,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(249), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(255), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(258), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(270), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(273), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(481), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(483), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(485), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(479), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(489), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 40,
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
      anon_sym_COMMA,
      sym_number,
  [2891] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(408), 35,
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
  [2951] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 35,
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
  [3011] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_and,
    ACTIONS(487), 1,
      anon_sym_implies,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(481), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(483), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(485), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(479), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(489), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(424), 21,
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
  [3083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(442), 40,
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
      anon_sym_COMMA,
      sym_number,
  [3133] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 1,
      anon_sym_is,
    ACTIONS(287), 1,
      anon_sym_as,
    ACTIONS(290), 1,
      anon_sym_properly,
    ACTIONS(293), 1,
      anon_sym_between,
    ACTIONS(299), 1,
      anon_sym_onor,
    ACTIONS(308), 1,
      anon_sym_occurs,
    ACTIONS(311), 1,
      anon_sym_same,
    ACTIONS(314), 1,
      anon_sym_includes,
    ACTIONS(323), 1,
      anon_sym_within,
    ACTIONS(326), 1,
      sym_number,
    ACTIONS(477), 1,
      anon_sym_and,
    ACTIONS(487), 1,
      anon_sym_implies,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(296), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(302), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(305), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(317), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(320), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(481), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(483), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(485), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(479), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(489), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(499), 40,
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
      anon_sym_RBRACK,
      sym_number,
  [3285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(499), 40,
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
      anon_sym_RBRACK,
      sym_number,
  [3335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(503), 40,
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
      anon_sym_RBRACK,
      sym_number,
  [3385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(507), 40,
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
      anon_sym_RBRACK,
      sym_number,
  [3435] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(434), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(432), 35,
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
  [3495] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 1,
      anon_sym_is,
    ACTIONS(334), 1,
      anon_sym_as,
    ACTIONS(337), 1,
      anon_sym_properly,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      anon_sym_onor,
    ACTIONS(355), 1,
      anon_sym_occurs,
    ACTIONS(358), 1,
      anon_sym_same,
    ACTIONS(361), 1,
      anon_sym_includes,
    ACTIONS(370), 1,
      anon_sym_within,
    ACTIONS(373), 1,
      sym_number,
    ACTIONS(477), 1,
      anon_sym_and,
    ACTIONS(487), 1,
      anon_sym_implies,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(343), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(349), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(352), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(364), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(367), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(481), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(483), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(485), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(479), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(489), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3597] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(414), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 35,
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
  [3657] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(416), 35,
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
  [3717] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(422), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(420), 35,
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
  [3777] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(219), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(217), 35,
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
  [3837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_where,
    STATE(143), 1,
      sym_where_clause,
    ACTIONS(513), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(511), 37,
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
  [3890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(517), 39,
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
  [3939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 39,
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
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 14,
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
    ACTIONS(527), 27,
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
  [4037] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_onor,
    ACTIONS(382), 1,
      anon_sym_is,
    ACTIONS(386), 1,
      anon_sym_properly,
    ACTIONS(388), 1,
      anon_sym_between,
    ACTIONS(394), 1,
      anon_sym_occurs,
    ACTIONS(396), 1,
      anon_sym_same,
    ACTIONS(398), 1,
      anon_sym_includes,
    ACTIONS(404), 1,
      anon_sym_within,
    ACTIONS(406), 1,
      sym_number,
    ACTIONS(477), 1,
      anon_sym_and,
    ACTIONS(487), 1,
      anon_sym_implies,
    ACTIONS(529), 1,
      anon_sym_as,
    STATE(22), 1,
      sym_interval_operator_phrase,
    STATE(37), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(236), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(85), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(392), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(400), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(402), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(481), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(483), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(485), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(479), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(489), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [4136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 39,
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
  [4185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 14,
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
    ACTIONS(537), 27,
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
  [4234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_default_identifier,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(539), 13,
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
    ACTIONS(541), 26,
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
  [4287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(547), 39,
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
  [4336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(551), 38,
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
  [4384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(539), 38,
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
  [4432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(555), 38,
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
  [4480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(559), 38,
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
  [4528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(563), 38,
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
  [4576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(567), 38,
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
  [4624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(571), 38,
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
  [4672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 38,
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
  [4720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(577), 38,
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
  [4768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(581), 38,
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
  [4816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(585), 38,
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
  [4864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(589), 38,
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
  [4912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(593), 38,
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
  [4960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(597), 38,
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
  [5008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(601), 38,
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
  [5056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(461), 38,
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
  [5104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(605), 38,
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
  [5152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(609), 38,
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
  [5200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(613), 38,
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
  [5248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(617), 38,
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
  [5296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(621), 38,
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
  [5344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(625), 38,
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
  [5392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 14,
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
    ACTIONS(527), 25,
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
  [5439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_where,
    STATE(143), 1,
      sym_where_clause,
    ACTIONS(513), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(511), 35,
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
  [5490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 14,
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
    ACTIONS(537), 25,
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
  [5537] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_default_identifier,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(539), 13,
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
    ACTIONS(541), 24,
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
  [5588] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    STATE(209), 1,
      sym_unit,
    STATE(207), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(635), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(631), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
    ACTIONS(633), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [5630] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      sym_unit,
    STATE(121), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(635), 4,
      anon_sym_of,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 8,
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
  [5671] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      sym_unit,
    STATE(121), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(35), 8,
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
  [5709] = 11,
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
    ACTIONS(639), 1,
      ts_builtin_sym_end,
    STATE(165), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(188), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(199), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(241), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [5749] = 11,
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
    ACTIONS(639), 1,
      ts_builtin_sym_end,
    STATE(156), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(188), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(199), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(241), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [5789] = 11,
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
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    STATE(165), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(185), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(199), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(241), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [5829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 15,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
  [5850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 15,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
  [5871] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_onor,
    ACTIONS(406), 1,
      sym_number,
    ACTIONS(643), 1,
      anon_sym_properly,
    ACTIONS(645), 1,
      anon_sym_same,
    ACTIONS(647), 1,
      anon_sym_within,
    STATE(39), 1,
      sym_temporal_relationship,
    STATE(192), 1,
      sym_quantity,
    STATE(234), 1,
      sym_quantity_offset,
    STATE(255), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(85), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(95), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
  [5914] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_as,
    STATE(47), 1,
      sym_relative_qualifier,
    STATE(222), 1,
      sym_date_time_precision,
    ACTIONS(653), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
    ACTIONS(651), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
  [5941] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_as,
    STATE(49), 1,
      sym_relative_qualifier,
    STATE(231), 1,
      sym_date_time_precision,
    ACTIONS(653), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
    ACTIONS(651), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
  [5968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 12,
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
  [5986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 12,
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
  [6004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 12,
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
  [6022] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_using,
    ACTIONS(662), 1,
      anon_sym_include,
    ACTIONS(665), 1,
      anon_sym_valueset,
    STATE(165), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    ACTIONS(657), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    STATE(199), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
  [6049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(668), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [6067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [6085] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      aux_sym_literal_token1,
    ACTIONS(676), 1,
      anon_sym_null,
    ACTIONS(678), 1,
      sym_number,
    STATE(125), 1,
      sym_quantity,
    STATE(134), 1,
      sym_literal,
    STATE(135), 1,
      sym_string,
    STATE(141), 1,
      sym_term,
    STATE(273), 1,
      sym_expression_term,
  [6116] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      aux_sym_literal_token1,
    ACTIONS(676), 1,
      anon_sym_null,
    STATE(125), 1,
      sym_quantity,
    STATE(129), 1,
      sym_expression_term,
    STATE(134), 1,
      sym_literal,
    STATE(135), 1,
      sym_string,
    STATE(141), 1,
      sym_term,
  [6147] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      aux_sym_literal_token1,
    ACTIONS(676), 1,
      anon_sym_null,
    STATE(125), 1,
      sym_quantity,
    STATE(134), 1,
      sym_literal,
    STATE(135), 1,
      sym_string,
    STATE(141), 1,
      sym_term,
    STATE(145), 1,
      sym_expression_term,
  [6178] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      aux_sym_literal_token1,
    ACTIONS(676), 1,
      anon_sym_null,
    ACTIONS(678), 1,
      sym_number,
    STATE(125), 1,
      sym_quantity,
    STATE(134), 1,
      sym_literal,
    STATE(135), 1,
      sym_string,
    STATE(141), 1,
      sym_term,
    STATE(275), 1,
      sym_expression_term,
  [6209] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      aux_sym_literal_token1,
    ACTIONS(676), 1,
      anon_sym_null,
    ACTIONS(678), 1,
      sym_number,
    STATE(125), 1,
      sym_quantity,
    STATE(134), 1,
      sym_literal,
    STATE(135), 1,
      sym_string,
    STATE(141), 1,
      sym_term,
    STATE(281), 1,
      sym_expression_term,
  [6240] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      aux_sym_literal_token1,
    ACTIONS(676), 1,
      anon_sym_null,
    ACTIONS(678), 1,
      sym_number,
    STATE(125), 1,
      sym_quantity,
    STATE(134), 1,
      sym_literal,
    STATE(135), 1,
      sym_string,
    STATE(141), 1,
      sym_term,
    STATE(279), 1,
      sym_expression_term,
  [6271] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      aux_sym_literal_token1,
    ACTIONS(676), 1,
      anon_sym_null,
    STATE(125), 1,
      sym_quantity,
    STATE(134), 1,
      sym_literal,
    STATE(135), 1,
      sym_string,
    STATE(136), 1,
      sym_expression_term,
    STATE(141), 1,
      sym_term,
  [6302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(292), 1,
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
  [6319] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      aux_sym_literal_token1,
    ACTIONS(676), 1,
      anon_sym_null,
    STATE(125), 1,
      sym_quantity,
    STATE(134), 1,
      sym_literal,
    STATE(135), 1,
      sym_string,
    STATE(137), 1,
      sym_expression_term,
    STATE(141), 1,
      sym_term,
  [6350] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      aux_sym_literal_token1,
    ACTIONS(676), 1,
      anon_sym_null,
    STATE(125), 1,
      sym_quantity,
    STATE(134), 1,
      sym_literal,
    STATE(135), 1,
      sym_string,
    STATE(138), 1,
      sym_expression_term,
    STATE(141), 1,
      sym_term,
  [6381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(291), 1,
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
  [6398] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_called,
    ACTIONS(684), 1,
      anon_sym_version,
    STATE(191), 1,
      sym_version_specifier,
    ACTIONS(680), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6419] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      aux_sym_literal_token1,
    ACTIONS(676), 1,
      anon_sym_null,
    ACTIONS(678), 1,
      sym_number,
    STATE(125), 1,
      sym_quantity,
    STATE(134), 1,
      sym_literal,
    STATE(135), 1,
      sym_string,
    STATE(141), 1,
      sym_term,
    STATE(286), 1,
      sym_expression_term,
  [6450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_version,
    ACTIONS(688), 1,
      anon_sym_called,
    STATE(189), 1,
      sym_version_specifier,
    ACTIONS(686), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_version,
    STATE(200), 1,
      sym_version_specifier,
    ACTIONS(690), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_version,
    STATE(193), 1,
      sym_version_specifier,
    ACTIONS(692), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 8,
      anon_sym_as,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [6521] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(694), 1,
      ts_builtin_sym_end,
    STATE(186), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(241), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [6543] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    ACTIONS(698), 1,
      anon_sym_context,
    ACTIONS(701), 1,
      anon_sym_define,
    STATE(186), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(241), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [6565] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(639), 1,
      ts_builtin_sym_end,
    STATE(186), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(241), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [6587] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    STATE(186), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(241), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [6609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_called,
    ACTIONS(704), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 7,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_called,
    ACTIONS(710), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(244), 1,
      sym_offset_relative_qualifier,
    ACTIONS(714), 2,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(716), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [6668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6692] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(166), 1,
      sym_identifier,
    STATE(182), 1,
      sym_qualified_identifier,
    STATE(204), 1,
      aux_sym_named_type_specifier_repeat1,
  [6714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [6774] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(166), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(271), 1,
      sym_qualified_identifier,
  [6796] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(166), 1,
      sym_identifier,
    STATE(179), 1,
      sym_qualified_identifier,
    STATE(204), 1,
      aux_sym_named_type_specifier_repeat1,
  [6818] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(166), 1,
      sym_identifier,
    STATE(181), 1,
      sym_qualified_identifier,
    STATE(204), 1,
      aux_sym_named_type_specifier_repeat1,
  [6840] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(167), 1,
      sym_identifier,
    STATE(211), 1,
      aux_sym_named_type_specifier_repeat1,
  [6859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [6870] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_within,
    ACTIONS(734), 1,
      anon_sym_between,
    ACTIONS(736), 1,
      anon_sym_includes,
    ACTIONS(95), 2,
      anon_sym_during,
      anon_sym_includedin,
  [6887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [6898] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_default_identifier,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_function,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(268), 1,
      sym_identifier,
  [6917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [6928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [6939] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(740), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(211), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(289), 1,
      sym_identifier,
  [6958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [6969] = 4,
    ACTIONS(743), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_comment,
    STATE(219), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(745), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [6983] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(749), 1,
      sym_default_identifier,
    STATE(95), 1,
      sym_quoted_identifier,
    STATE(100), 1,
      sym_identifier,
  [6999] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_SQUOTE,
    STATE(225), 1,
      aux_sym_string_repeat1,
    ACTIONS(753), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [7013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(196), 1,
      sym_identifier,
  [7029] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_SQUOTE,
    STATE(220), 1,
      aux_sym_string_repeat1,
    ACTIONS(757), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [7043] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
    STATE(233), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(761), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7057] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_DQUOTE,
    STATE(233), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(761), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7071] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_SQUOTE,
    STATE(225), 1,
      aux_sym_string_repeat1,
    ACTIONS(753), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [7085] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(769), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_as,
    STATE(45), 1,
      sym_relative_qualifier,
    ACTIONS(653), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
  [7113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_DOT,
    ACTIONS(775), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7125] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(194), 1,
      sym_identifier,
  [7141] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SQUOTE,
    STATE(225), 1,
      aux_sym_string_repeat1,
    ACTIONS(779), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [7155] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(197), 1,
      sym_identifier,
  [7171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_DOT,
    ACTIONS(782), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(198), 1,
      sym_identifier,
  [7199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(290), 1,
      sym_identifier,
  [7215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_DOT,
    ACTIONS(784), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [7227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_as,
    STATE(47), 1,
      sym_relative_qualifier,
    ACTIONS(653), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
  [7241] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      aux_sym_string_repeat1,
    ACTIONS(790), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [7255] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_DQUOTE,
    STATE(233), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(794), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_onor,
    STATE(34), 1,
      sym_temporal_relationship,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
  [7283] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(799), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_onor,
    STATE(39), 1,
      sym_temporal_relationship,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
  [7311] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    STATE(233), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(761), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7325] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(230), 1,
      sym_identifier,
  [7341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      sym_default_identifier,
    STATE(162), 1,
      sym_quoted_identifier,
    STATE(249), 1,
      sym_identifier,
  [7357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [7366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [7375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [7384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [7402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [7420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_within,
    ACTIONS(813), 2,
      anon_sym_during,
      anon_sym_includedin,
  [7431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [7449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_COLON,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
  [7459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_COLON,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
  [7485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_number,
    STATE(277), 1,
      sym_quantity,
  [7495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_number,
    STATE(244), 1,
      sym_quantity,
  [7505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_before,
      anon_sym_after,
  [7521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym_string,
  [7539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_number,
    STATE(276), 1,
      sym_quantity,
  [7549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_COLON,
    ACTIONS(833), 1,
      anon_sym_RBRACK,
  [7567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_number,
    STATE(283), 1,
      sym_quantity,
  [7577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    STATE(183), 1,
      sym_string,
  [7587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_in,
  [7594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_number,
  [7601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RBRACK,
  [7608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COLON,
  [7615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_COLON,
  [7622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_DOT,
  [7629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COLON,
  [7636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_of,
  [7643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_and,
  [7650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_DOT,
  [7657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_and,
  [7664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_of,
  [7671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_of,
  [7678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
  [7685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_and,
  [7692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
  [7699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_and,
  [7706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_between,
  [7713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_of,
  [7720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
  [7727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_in,
  [7734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_and,
  [7741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      ts_builtin_sym_end,
  [7748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
  [7755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
  [7762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
  [7769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_between,
  [7776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_between,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(61)] = 0,
  [SMALL_STATE(62)] = 91,
  [SMALL_STATE(63)] = 182,
  [SMALL_STATE(64)] = 267,
  [SMALL_STATE(65)] = 352,
  [SMALL_STATE(66)] = 431,
  [SMALL_STATE(67)] = 516,
  [SMALL_STATE(68)] = 593,
  [SMALL_STATE(69)] = 672,
  [SMALL_STATE(70)] = 751,
  [SMALL_STATE(71)] = 830,
  [SMALL_STATE(72)] = 894,
  [SMALL_STATE(73)] = 956,
  [SMALL_STATE(74)] = 1018,
  [SMALL_STATE(75)] = 1122,
  [SMALL_STATE(76)] = 1226,
  [SMALL_STATE(77)] = 1330,
  [SMALL_STATE(78)] = 1392,
  [SMALL_STATE(79)] = 1496,
  [SMALL_STATE(80)] = 1558,
  [SMALL_STATE(81)] = 1620,
  [SMALL_STATE(82)] = 1682,
  [SMALL_STATE(83)] = 1744,
  [SMALL_STATE(84)] = 1818,
  [SMALL_STATE(85)] = 1922,
  [SMALL_STATE(86)] = 1984,
  [SMALL_STATE(87)] = 2046,
  [SMALL_STATE(88)] = 2101,
  [SMALL_STATE(89)] = 2156,
  [SMALL_STATE(90)] = 2211,
  [SMALL_STATE(91)] = 2262,
  [SMALL_STATE(92)] = 2317,
  [SMALL_STATE(93)] = 2372,
  [SMALL_STATE(94)] = 2425,
  [SMALL_STATE(95)] = 2476,
  [SMALL_STATE(96)] = 2527,
  [SMALL_STATE(97)] = 2629,
  [SMALL_STATE(98)] = 2689,
  [SMALL_STATE(99)] = 2739,
  [SMALL_STATE(100)] = 2841,
  [SMALL_STATE(101)] = 2891,
  [SMALL_STATE(102)] = 2951,
  [SMALL_STATE(103)] = 3011,
  [SMALL_STATE(104)] = 3083,
  [SMALL_STATE(105)] = 3133,
  [SMALL_STATE(106)] = 3235,
  [SMALL_STATE(107)] = 3285,
  [SMALL_STATE(108)] = 3335,
  [SMALL_STATE(109)] = 3385,
  [SMALL_STATE(110)] = 3435,
  [SMALL_STATE(111)] = 3495,
  [SMALL_STATE(112)] = 3597,
  [SMALL_STATE(113)] = 3657,
  [SMALL_STATE(114)] = 3717,
  [SMALL_STATE(115)] = 3777,
  [SMALL_STATE(116)] = 3837,
  [SMALL_STATE(117)] = 3890,
  [SMALL_STATE(118)] = 3939,
  [SMALL_STATE(119)] = 3988,
  [SMALL_STATE(120)] = 4037,
  [SMALL_STATE(121)] = 4136,
  [SMALL_STATE(122)] = 4185,
  [SMALL_STATE(123)] = 4234,
  [SMALL_STATE(124)] = 4287,
  [SMALL_STATE(125)] = 4336,
  [SMALL_STATE(126)] = 4384,
  [SMALL_STATE(127)] = 4432,
  [SMALL_STATE(128)] = 4480,
  [SMALL_STATE(129)] = 4528,
  [SMALL_STATE(130)] = 4576,
  [SMALL_STATE(131)] = 4624,
  [SMALL_STATE(132)] = 4672,
  [SMALL_STATE(133)] = 4720,
  [SMALL_STATE(134)] = 4768,
  [SMALL_STATE(135)] = 4816,
  [SMALL_STATE(136)] = 4864,
  [SMALL_STATE(137)] = 4912,
  [SMALL_STATE(138)] = 4960,
  [SMALL_STATE(139)] = 5008,
  [SMALL_STATE(140)] = 5056,
  [SMALL_STATE(141)] = 5104,
  [SMALL_STATE(142)] = 5152,
  [SMALL_STATE(143)] = 5200,
  [SMALL_STATE(144)] = 5248,
  [SMALL_STATE(145)] = 5296,
  [SMALL_STATE(146)] = 5344,
  [SMALL_STATE(147)] = 5392,
  [SMALL_STATE(148)] = 5439,
  [SMALL_STATE(149)] = 5490,
  [SMALL_STATE(150)] = 5537,
  [SMALL_STATE(151)] = 5588,
  [SMALL_STATE(152)] = 5630,
  [SMALL_STATE(153)] = 5671,
  [SMALL_STATE(154)] = 5709,
  [SMALL_STATE(155)] = 5749,
  [SMALL_STATE(156)] = 5789,
  [SMALL_STATE(157)] = 5829,
  [SMALL_STATE(158)] = 5850,
  [SMALL_STATE(159)] = 5871,
  [SMALL_STATE(160)] = 5914,
  [SMALL_STATE(161)] = 5941,
  [SMALL_STATE(162)] = 5968,
  [SMALL_STATE(163)] = 5986,
  [SMALL_STATE(164)] = 6004,
  [SMALL_STATE(165)] = 6022,
  [SMALL_STATE(166)] = 6049,
  [SMALL_STATE(167)] = 6067,
  [SMALL_STATE(168)] = 6085,
  [SMALL_STATE(169)] = 6116,
  [SMALL_STATE(170)] = 6147,
  [SMALL_STATE(171)] = 6178,
  [SMALL_STATE(172)] = 6209,
  [SMALL_STATE(173)] = 6240,
  [SMALL_STATE(174)] = 6271,
  [SMALL_STATE(175)] = 6302,
  [SMALL_STATE(176)] = 6319,
  [SMALL_STATE(177)] = 6350,
  [SMALL_STATE(178)] = 6381,
  [SMALL_STATE(179)] = 6398,
  [SMALL_STATE(180)] = 6419,
  [SMALL_STATE(181)] = 6450,
  [SMALL_STATE(182)] = 6471,
  [SMALL_STATE(183)] = 6489,
  [SMALL_STATE(184)] = 6507,
  [SMALL_STATE(185)] = 6521,
  [SMALL_STATE(186)] = 6543,
  [SMALL_STATE(187)] = 6565,
  [SMALL_STATE(188)] = 6587,
  [SMALL_STATE(189)] = 6609,
  [SMALL_STATE(190)] = 6624,
  [SMALL_STATE(191)] = 6637,
  [SMALL_STATE(192)] = 6652,
  [SMALL_STATE(193)] = 6668,
  [SMALL_STATE(194)] = 6680,
  [SMALL_STATE(195)] = 6692,
  [SMALL_STATE(196)] = 6714,
  [SMALL_STATE(197)] = 6726,
  [SMALL_STATE(198)] = 6738,
  [SMALL_STATE(199)] = 6750,
  [SMALL_STATE(200)] = 6762,
  [SMALL_STATE(201)] = 6774,
  [SMALL_STATE(202)] = 6796,
  [SMALL_STATE(203)] = 6818,
  [SMALL_STATE(204)] = 6840,
  [SMALL_STATE(205)] = 6859,
  [SMALL_STATE(206)] = 6870,
  [SMALL_STATE(207)] = 6887,
  [SMALL_STATE(208)] = 6898,
  [SMALL_STATE(209)] = 6917,
  [SMALL_STATE(210)] = 6928,
  [SMALL_STATE(211)] = 6939,
  [SMALL_STATE(212)] = 6958,
  [SMALL_STATE(213)] = 6969,
  [SMALL_STATE(214)] = 6983,
  [SMALL_STATE(215)] = 6999,
  [SMALL_STATE(216)] = 7013,
  [SMALL_STATE(217)] = 7029,
  [SMALL_STATE(218)] = 7043,
  [SMALL_STATE(219)] = 7057,
  [SMALL_STATE(220)] = 7071,
  [SMALL_STATE(221)] = 7085,
  [SMALL_STATE(222)] = 7099,
  [SMALL_STATE(223)] = 7113,
  [SMALL_STATE(224)] = 7125,
  [SMALL_STATE(225)] = 7141,
  [SMALL_STATE(226)] = 7155,
  [SMALL_STATE(227)] = 7171,
  [SMALL_STATE(228)] = 7183,
  [SMALL_STATE(229)] = 7199,
  [SMALL_STATE(230)] = 7215,
  [SMALL_STATE(231)] = 7227,
  [SMALL_STATE(232)] = 7241,
  [SMALL_STATE(233)] = 7255,
  [SMALL_STATE(234)] = 7269,
  [SMALL_STATE(235)] = 7283,
  [SMALL_STATE(236)] = 7297,
  [SMALL_STATE(237)] = 7311,
  [SMALL_STATE(238)] = 7325,
  [SMALL_STATE(239)] = 7341,
  [SMALL_STATE(240)] = 7357,
  [SMALL_STATE(241)] = 7366,
  [SMALL_STATE(242)] = 7375,
  [SMALL_STATE(243)] = 7384,
  [SMALL_STATE(244)] = 7393,
  [SMALL_STATE(245)] = 7402,
  [SMALL_STATE(246)] = 7411,
  [SMALL_STATE(247)] = 7420,
  [SMALL_STATE(248)] = 7431,
  [SMALL_STATE(249)] = 7440,
  [SMALL_STATE(250)] = 7449,
  [SMALL_STATE(251)] = 7459,
  [SMALL_STATE(252)] = 7467,
  [SMALL_STATE(253)] = 7475,
  [SMALL_STATE(254)] = 7485,
  [SMALL_STATE(255)] = 7495,
  [SMALL_STATE(256)] = 7505,
  [SMALL_STATE(257)] = 7513,
  [SMALL_STATE(258)] = 7521,
  [SMALL_STATE(259)] = 7529,
  [SMALL_STATE(260)] = 7539,
  [SMALL_STATE(261)] = 7549,
  [SMALL_STATE(262)] = 7557,
  [SMALL_STATE(263)] = 7567,
  [SMALL_STATE(264)] = 7577,
  [SMALL_STATE(265)] = 7587,
  [SMALL_STATE(266)] = 7594,
  [SMALL_STATE(267)] = 7601,
  [SMALL_STATE(268)] = 7608,
  [SMALL_STATE(269)] = 7615,
  [SMALL_STATE(270)] = 7622,
  [SMALL_STATE(271)] = 7629,
  [SMALL_STATE(272)] = 7636,
  [SMALL_STATE(273)] = 7643,
  [SMALL_STATE(274)] = 7650,
  [SMALL_STATE(275)] = 7657,
  [SMALL_STATE(276)] = 7664,
  [SMALL_STATE(277)] = 7671,
  [SMALL_STATE(278)] = 7678,
  [SMALL_STATE(279)] = 7685,
  [SMALL_STATE(280)] = 7692,
  [SMALL_STATE(281)] = 7699,
  [SMALL_STATE(282)] = 7706,
  [SMALL_STATE(283)] = 7713,
  [SMALL_STATE(284)] = 7720,
  [SMALL_STATE(285)] = 7727,
  [SMALL_STATE(286)] = 7734,
  [SMALL_STATE(287)] = 7741,
  [SMALL_STATE(288)] = 7748,
  [SMALL_STATE(289)] = 7755,
  [SMALL_STATE(290)] = 7762,
  [SMALL_STATE(291)] = 7769,
  [SMALL_STATE(292)] = 7776,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_identifier, 1), SHIFT(243),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_identifier, 1), SHIFT(221),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 1), SHIFT(151),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 3),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 3), SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 1), SHIFT(48),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 2), SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporal_relationship, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_relationship, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporal_relationship, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_relationship, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 5),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 5), SHIFT(52),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_time_precision_specifier, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision_specifier, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 4), SHIFT(51),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative_qualifier, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_qualifier, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 6),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quantity, 1), REDUCE(sym_literal, 1, .production_id = 7),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_quantity, 1), REDUCE(sym_literal, 1, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(162),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(213),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(212),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(212),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(162),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(213),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 12),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 12),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_expression, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(53),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(57),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(206),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(180),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(266),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(257),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(40),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(32),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(159),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(161),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(37),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(38),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(33),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(254),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(151),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timing_expression, 3),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(53),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(57),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(206),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(180),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(266),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(257),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(40),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(32),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(159),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(161),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(37),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(38),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(33),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(254),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(151),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 3),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(53),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(57),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(206),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(180),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(266),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(257),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(40),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(32),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(159),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(161),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(37),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(38),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(33),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(254),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(151),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_expression, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_definition, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_existence_expression, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_existence_expression, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expression, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_expression, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_expression, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inequality_expression, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inequality_expression, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 13),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implies_expression, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implies_expression, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_fix_set_expression, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_fix_set_expression, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2), SHIFT_REPEAT(56),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_identifier, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_identifier, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliased_query_source, 2, .production_id = 11),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aliased_query_source, 2, .production_id = 11),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_identifier, 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name_identifier, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision, 1),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_time_precision, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 5),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plural_date_time_precision, 1),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plural_date_time_precision, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 8),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 8),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 5),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 5),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_specifier, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_identifier, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 9),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 9),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 5),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 5),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 6),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 6),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 7),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 7),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 6),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 6),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_term, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_term, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_difference_between_expression, 7),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_difference_between_expression, 7),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(203),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(202),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(201),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 4, .production_id = 4),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(238),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(208),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2, .production_id = 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity_offset, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 5, .production_id = 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 4, .production_id = 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 4, .production_id = 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 5, .production_id = 10),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 10),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(162),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 1),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(225),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(233),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity_offset, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_relative_qualifier, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, .production_id = 5),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 3),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclusive_relative_qualifier, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminology, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [871] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
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
