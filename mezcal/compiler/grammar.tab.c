/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "compiler/grammar.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <iostream>
	#include <memory>
	#include <string>
	using namespace std;
	extern char *yytext;
	std::string result;
	int yylex(void);
	void yyerror(char const *);

#line 84 "grammar.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "grammar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_COLON = 4,                      /* COLON  */
  YYSYMBOL_LEFT_BRACKET = 5,               /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 6,              /* RIGHT_BRACKET  */
  YYSYMBOL_RIGHT_ARROW = 7,                /* RIGHT_ARROW  */
  YYSYMBOL_LEFT_CURLY_BRACE = 8,           /* LEFT_CURLY_BRACE  */
  YYSYMBOL_RIGHT_CURLY_BRACE = 9,          /* RIGHT_CURLY_BRACE  */
  YYSYMBOL_SINGLECOMMENT = 10,             /* SINGLECOMMENT  */
  YYSYMBOL_QUOTES = 11,                    /* QUOTES  */
  YYSYMBOL_SHOW = 12,                      /* SHOW  */
  YYSYMBOL_CHARACTERS = 13,                /* CHARACTERS  */
  YYSYMBOL_SEMICOLON = 14,                 /* SEMICOLON  */
  YYSYMBOL_MULTILINECOMMENTS = 15,         /* MULTILINECOMMENTS  */
  YYSYMBOL_ANSWER = 16,                    /* ANSWER  */
  YYSYMBOL_LOAD = 17,                      /* LOAD  */
  YYSYMBOL_INT = 18,                       /* INT  */
  YYSYMBOL_INTEGER_VALUE = 19,             /* INTEGER_VALUE  */
  YYSYMBOL_DOLLAR_SIGN = 20,               /* DOLLAR_SIGN  */
  YYSYMBOL_DECI = 21,                      /* DECI  */
  YYSYMBOL_BLN = 22,                       /* BLN  */
  YYSYMBOL_STR = 23,                       /* STR  */
  YYSYMBOL_TRU = 24,                       /* TRU  */
  YYSYMBOL_FLS = 25,                       /* FLS  */
  YYSYMBOL_INC = 26,                       /* INC  */
  YYSYMBOL_DEC = 27,                       /* DEC  */
  YYSYMBOL_EQUAL = 28,                     /* EQUAL  */
  YYSYMBOL_GREATHER_THAN = 29,             /* GREATHER_THAN  */
  YYSYMBOL_LESS_EQUAL = 30,                /* LESS_EQUAL  */
  YYSYMBOL_GREATHER_EQUAL = 31,            /* GREATHER_EQUAL  */
  YYSYMBOL_LESS_THAN = 32,                 /* LESS_THAN  */
  YYSYMBOL_NOT_EQUAL = 33,                 /* NOT_EQUAL  */
  YYSYMBOL_QUESTION_MARK = 34,             /* QUESTION_MARK  */
  YYSYMBOL_PIPE_MARK = 35,                 /* PIPE_MARK  */
  YYSYMBOL_AT = 36,                        /* AT  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_input = 38,                     /* input  */
  YYSYMBOL_function_list = 39,             /* function_list  */
  YYSYMBOL_function = 40,                  /* function  */
  YYSYMBOL_statements = 41,                /* statements  */
  YYSYMBOL_statement = 42,                 /* statement  */
  YYSYMBOL_tertiaryOperator = 43,          /* tertiaryOperator  */
  YYSYMBOL_bucle_for = 44,                 /* bucle_for  */
  YYSYMBOL_comp_operator = 45,             /* comp_operator  */
  YYSYMBOL_for_operator = 46,              /* for_operator  */
  YYSYMBOL_logicalComparation = 47,        /* logicalComparation  */
  YYSYMBOL_std_output = 48,                /* std_output  */
  YYSYMBOL_assignment = 49,                /* assignment  */
  YYSYMBOL_integer_value = 50,             /* integer_value  */
  YYSYMBOL_std_input = 51,                 /* std_input  */
  YYSYMBOL_definition = 52,                /* definition  */
  YYSYMBOL_identifiers = 53,               /* identifiers  */
  YYSYMBOL_ids = 54,                       /* ids  */
  YYSYMBOL_characters = 55,                /* characters  */
  YYSYMBOL_id = 56                         /* id  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   148

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    30,    30,    36,    38,    42,    49,    51,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    75,    78,    80,
      83,    88,    95,   103,   114,   120,   122,   124,   126,   128,
     130,   134,   136,   138,   140,   142,   144,   146,   150,   154,
     156,   160,   164,   168,   172,   174,   176,   178,   182,   184,
     187,   191,   195
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "COLON",
  "LEFT_BRACKET", "RIGHT_BRACKET", "RIGHT_ARROW", "LEFT_CURLY_BRACE",
  "RIGHT_CURLY_BRACE", "SINGLECOMMENT", "QUOTES", "SHOW", "CHARACTERS",
  "SEMICOLON", "MULTILINECOMMENTS", "ANSWER", "LOAD", "INT",
  "INTEGER_VALUE", "DOLLAR_SIGN", "DECI", "BLN", "STR", "TRU", "FLS",
  "INC", "DEC", "EQUAL", "GREATHER_THAN", "LESS_EQUAL", "GREATHER_EQUAL",
  "LESS_THAN", "NOT_EQUAL", "QUESTION_MARK", "PIPE_MARK", "AT", "$accept",
  "input", "function_list", "function", "statements", "statement",
  "tertiaryOperator", "bucle_for", "comp_operator", "for_operator",
  "logicalComparation", "std_output", "assignment", "integer_value",
  "std_input", "definition", "identifiers", "ids", "characters", "id", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-41)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,   -41,    18,    20,    24,   -41,   -41,    20,    34,   -41,
      48,    11,    59,    50,    64,    68,    66,   -41,    -4,    55,
     -41,   -41,    73,   -41,    74,   -41,    71,   -41,   -41,   -41,
      67,    69,    75,    78,    79,    43,    76,    52,    60,    13,
     -41,    12,    15,   -41,   -41,   -41,   -41,   -41,    39,   -41,
     -41,    51,   -41,    77,   -41,   -41,   -41,    20,   -41,   -41,
     -41,   -41,   -41,   -41,    80,    85,   -41,   -41,   -41,   -41,
     -41,   -41,    87,     9,    20,   -41,   -41,    15,    77,    20,
      89,    53,    -1,   -41,    55,    91,    65,    95,    15,    83,
      82,    96,   -41,   106,   -41,    81,    15,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   111,   109,    84,    14,   113,    55,
     114,    15,   117,    15,   110,    90,   116,   -41,   118,   -41,
      15,   119,    16,    55,   121,   124,    15,    93,   122,   125,
     -41,    15,   123,    17,    55,   126,   129,    15,   102,   128,
     130,   -41,    15,   131,   104,   133,    15,   134,   -41
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    52,     0,     4,     0,     1,     2,     4,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     7,    49,    49,
       5,     8,     0,     9,     0,    49,     0,     6,    15,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,    49,    14,    13,    12,    10,    11,     0,    48,
      50,     0,    49,     0,    51,    49,    39,    43,    25,    28,
      26,    29,    27,    30,     0,     0,    44,    42,    45,    46,
      47,    41,     0,     0,    40,    49,    18,    49,     0,    38,
       0,     0,    17,    49,     0,     0,     0,     0,    49,     0,
       0,     0,    49,     0,    19,     0,    49,    37,    36,    31,
      34,    32,    35,    33,     0,     0,     0,     0,     0,     0,
       0,    49,     0,    49,     0,     0,     0,    24,     0,    20,
      49,     0,     0,     0,     0,     0,    49,     0,     0,     0,
      21,    49,     0,     0,     0,     0,     0,    49,     0,     0,
       0,    22,    49,     0,     0,     0,    49,     0,    23
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -41,   -41,   135,   144,   -41,   -40,   -41,   -41,   -41,   -41,
     -19,   -41,   127,    70,   -41,   -41,   -16,   -41,   -41,     7
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     6,     7,    18,    27,    28,    29,    64,   104,
      30,    31,    32,    71,    33,    34,    35,    49,    56,    50
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      36,    19,    65,    38,    84,    20,    21,     4,    22,    41,
       4,    23,     1,    24,     4,     1,    25,    12,     5,   109,
      19,   123,   134,     1,    57,    21,    54,    22,     8,    25,
      23,    26,    24,    55,    85,    25,    73,    80,    10,    74,
      58,    59,    60,    61,    62,    63,     1,    48,    91,   110,
      26,   124,   135,    11,    78,    14,   105,    66,    67,    79,
      68,    69,    70,     1,    53,    87,    13,    86,     1,    89,
      15,   114,    16,   116,    17,    25,    95,    39,    40,    42,
     121,    43,    51,    44,     1,    72,   128,    52,    83,    45,
     112,   132,    46,    47,    76,    77,    67,   139,    82,    88,
      75,    90,   143,    92,   125,    94,   147,    97,    98,    99,
     100,   101,   102,   103,    96,   136,    93,   106,   107,   117,
     108,   111,   113,   115,   118,   119,   120,   129,   122,   126,
     127,   130,   133,   131,   137,   138,   140,   141,   142,   145,
     144,   146,     9,   148,     3,     0,    37,     0,    81
};

static const yytype_int16 yycheck[] =
{
      19,     5,    42,    19,     5,     9,    10,     0,    12,    25,
       3,    15,     3,    17,     7,     3,    20,     6,     0,     5,
       5,     5,     5,     3,    40,    10,    13,    12,     4,    20,
      15,    35,    17,    20,    35,    20,    52,    77,     4,    55,
      28,    29,    30,    31,    32,    33,     3,     4,    88,    35,
      35,    35,    35,     5,    73,     5,    96,    18,    19,    75,
      21,    22,    23,     3,     4,    84,     7,    83,     3,     4,
       6,   111,     4,   113,     8,    20,    92,     4,     4,     8,
     120,    14,     6,    14,     3,    34,   126,    35,    35,    14,
     109,   131,    14,    14,     9,     8,    19,   137,     9,     8,
      20,     6,   142,    20,   123,     9,   146,    26,    27,    28,
      29,    30,    31,    32,     8,   134,    34,     6,     9,     9,
      36,     8,     8,     6,    34,     9,     8,    34,     9,     8,
       6,     9,     9,     8,     8,     6,    34,     9,     8,    35,
       9,     8,     7,     9,     0,    -1,    19,    -1,    78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    38,    40,    56,     0,    39,    40,     4,    39,
       4,     5,     6,     7,     5,     6,     4,     8,    41,     5,
       9,    10,    12,    15,    17,    20,    35,    42,    43,    44,
      47,    48,    49,    51,    52,    53,    47,    49,    53,     4,
       4,    53,     8,    14,    14,    14,    14,    14,     4,    54,
      56,     6,    35,     4,    13,    20,    55,    53,    28,    29,
      30,    31,    32,    33,    45,    42,    18,    19,    21,    22,
      23,    50,    34,    53,    53,    20,     9,     8,    47,    53,
      42,    50,     9,    35,     5,    35,    53,    47,     8,     4,
       6,    42,    20,    34,     9,    53,     8,    26,    27,    28,
      29,    30,    31,    32,    46,    42,     6,     9,    36,     5,
      35,     8,    47,     8,    42,     6,    42,     9,    34,     9,
       8,    42,     9,     5,    35,    47,     8,     6,    42,    34,
       9,     8,    42,     9,     5,    35,    47,     8,     6,    42,
      34,     9,     8,    42,     9,    35,     8,    42,     9
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    41,    41,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    43,    43,    43,
      43,    43,    43,    43,    44,    45,    45,    45,    45,    45,
      45,    46,    46,    46,    46,    46,    46,    46,    47,    48,
      48,    49,    50,    51,    52,    52,    52,    52,    53,    53,
      54,    55,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,    12,     2,     0,     1,     1,
       2,     2,     2,     2,     2,     1,     1,     7,     4,    11,
      18,    25,    32,    39,    17,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     3,
       4,     3,     1,     3,     3,     3,     3,     3,     2,     0,
       1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: function function_list  */
#line 30 "compiler/grammar.y"
                                {
result = std::string("#include <cstdio>\n #include <iostream> \n using namespace std; \n") + yyvsp[-1] + yyvsp[0];
	}
#line 1215 "grammar.tab.c"
    break;

  case 3: /* function_list: function function_list  */
#line 36 "compiler/grammar.y"
                               { yyval = yyvsp[-1] + yyvsp[0]; }
#line 1221 "grammar.tab.c"
    break;

  case 4: /* function_list: %empty  */
#line 38 "compiler/grammar.y"
                        { yyval = ""; }
#line 1227 "grammar.tab.c"
    break;

  case 5: /* function: id COLON COLON LEFT_BRACKET RIGHT_BRACKET RIGHT_ARROW LEFT_BRACKET RIGHT_BRACKET COLON LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE  */
#line 43 "compiler/grammar.y"
                                                                                {
	yyval = std::string("int main(int argc, char *argv[]){ \n") + yyvsp[-1] + "} \n";
	}
#line 1235 "grammar.tab.c"
    break;

  case 6: /* statements: statements statement  */
#line 49 "compiler/grammar.y"
                                { yyval = yyvsp[-1] + yyvsp[0]; }
#line 1241 "grammar.tab.c"
    break;

  case 7: /* statements: %empty  */
#line 51 "compiler/grammar.y"
                { yyval = ""; }
#line 1247 "grammar.tab.c"
    break;

  case 8: /* statement: SINGLECOMMENT  */
#line 55 "compiler/grammar.y"
                        { yyval = ""; }
#line 1253 "grammar.tab.c"
    break;

  case 9: /* statement: MULTILINECOMMENTS  */
#line 57 "compiler/grammar.y"
                                { yyval = ""; }
#line 1259 "grammar.tab.c"
    break;

  case 10: /* statement: std_input SEMICOLON  */
#line 59 "compiler/grammar.y"
                                { yyval = yyvsp[-1]; }
#line 1265 "grammar.tab.c"
    break;

  case 11: /* statement: definition SEMICOLON  */
#line 61 "compiler/grammar.y"
                                { yyval = yyvsp[-1]; }
#line 1271 "grammar.tab.c"
    break;

  case 12: /* statement: assignment SEMICOLON  */
#line 63 "compiler/grammar.y"
                                { yyval = yyvsp[-1]; }
#line 1277 "grammar.tab.c"
    break;

  case 13: /* statement: std_output SEMICOLON  */
#line 65 "compiler/grammar.y"
                                { yyval = yyvsp[-1]; }
#line 1283 "grammar.tab.c"
    break;

  case 14: /* statement: logicalComparation SEMICOLON  */
#line 67 "compiler/grammar.y"
                                        { yyval = yyvsp[-1]; }
#line 1289 "grammar.tab.c"
    break;

  case 15: /* statement: tertiaryOperator  */
#line 69 "compiler/grammar.y"
                                { yyval = yyvsp[0]; }
#line 1295 "grammar.tab.c"
    break;

  case 16: /* statement: bucle_for  */
#line 71 "compiler/grammar.y"
                        { yyval = yyvsp[0]; }
#line 1301 "grammar.tab.c"
    break;

  case 17: /* tertiaryOperator: LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE  */
#line 75 "compiler/grammar.y"
                                                                                                                 {
	yyval = "if (" + yyvsp[-5] + "){\n\t" + yyvsp[-1] + "}\n"; }
#line 1308 "grammar.tab.c"
    break;

  case 18: /* tertiaryOperator: PIPE_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE  */
#line 78 "compiler/grammar.y"
                                                               { yyval = "else {\n\t" + yyvsp[-1] + "}\n"; }
#line 1314 "grammar.tab.c"
    break;

  case 19: /* tertiaryOperator: LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE PIPE_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE  */
#line 81 "compiler/grammar.y"
                                                     { yyval = "if (" + yyvsp[-9] + "){\n\t" + yyvsp[-5] + "} else{\n\t" + yyvsp[-1] + "}\n"; }
#line 1320 "grammar.tab.c"
    break;

  case 20: /* tertiaryOperator: LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE PIPE_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE  */
#line 86 "compiler/grammar.y"
        { yyval = "if (" + yyvsp[-16] + "){\n\t" + yyvsp[-12] + "\n} else if(" + yyvsp[-9] + "){\n\t" + yyvsp[-5] + "\n} else {\n\t" + yyvsp[-1] + "}\n"; }
#line 1326 "grammar.tab.c"
    break;

  case 21: /* tertiaryOperator: LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE PIPE_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE  */
#line 92 "compiler/grammar.y"
        { yyval = "if (" + yyvsp[-23] + "){\n\t" + yyvsp[-19] + "\n} else if(" + yyvsp[-16] + "){\n\t" + yyvsp[-12] + "\n} else if(" + yyvsp[-9] + "){\n\t" + yyvsp[-5]
	+ "\n} else{\n\t" + yyvsp[-1] + "}\n"; }
#line 1333 "grammar.tab.c"
    break;

  case 22: /* tertiaryOperator: LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE PIPE_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE  */
#line 100 "compiler/grammar.y"
        { yyval = "if (" + yyvsp[-30] + "){\n\t" + yyvsp[-26] + "\n} else if(" + yyvsp[-23] + "){\n\t" + yyvsp[-19] + "\n} else if(" + yyvsp[-16] + "){\n\t" + yyvsp[-12]
        + "\n} else if(" + yyvsp[-9] + "){\n\t" + yyvsp[-5] + "\n} else{\n\t" + yyvsp[-1] + "}\n}"; }
#line 1340 "grammar.tab.c"
    break;

  case 23: /* tertiaryOperator: LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE PIPE_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE  */
#line 109 "compiler/grammar.y"
        { yyval = "if (" + yyvsp[-37] + "){\n\t" + yyvsp[-33] + "\n} else if(" + yyvsp[-30] + "){\n\t" + yyvsp[-26] + "\n} else if(" + yyvsp[-23] + "){\n\t" + yyvsp[-19]
        + "\n} else if(" + yyvsp[-16] + "){\n\t" + yyvsp[-12] + "\n} else if(" + yyvsp[-9] + "){\n\t" + yyvsp[-5] + "\n} else{\n\t" + yyvsp[-1] + "}\n"; }
#line 1347 "grammar.tab.c"
    break;

  case 24: /* bucle_for: LEFT_BRACKET assignment PIPE_MARK identifiers logicalComparation integer_value PIPE_MARK identifiers COLON DOLLAR_SIGN identifiers for_operator RIGHT_BRACKET AT LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE  */
#line 115 "compiler/grammar.y"
                                                                                               {
	yyval = "for(" + yyvsp[-15] + ";" + yyvsp[-13] + yyvsp[-12] + yyvsp[-11] + ";" + yyvsp[-9] + yyvsp[-6] + yyvsp[-5] + "){\n\t" + yyvsp[-1] + "}\n"; }
#line 1354 "grammar.tab.c"
    break;

  case 25: /* comp_operator: EQUAL  */
#line 120 "compiler/grammar.y"
                { yyval = "=="; }
#line 1360 "grammar.tab.c"
    break;

  case 26: /* comp_operator: LESS_EQUAL  */
#line 122 "compiler/grammar.y"
                        { yyval = "<="; }
#line 1366 "grammar.tab.c"
    break;

  case 27: /* comp_operator: LESS_THAN  */
#line 124 "compiler/grammar.y"
                        { yyval = "<"; }
#line 1372 "grammar.tab.c"
    break;

  case 28: /* comp_operator: GREATHER_THAN  */
#line 126 "compiler/grammar.y"
                        { yyval = ">"; }
#line 1378 "grammar.tab.c"
    break;

  case 29: /* comp_operator: GREATHER_EQUAL  */
#line 128 "compiler/grammar.y"
                        { yyval = ">="; }
#line 1384 "grammar.tab.c"
    break;

  case 30: /* comp_operator: NOT_EQUAL  */
#line 130 "compiler/grammar.y"
                        { yyval = "!="; }
#line 1390 "grammar.tab.c"
    break;

  case 31: /* for_operator: EQUAL  */
#line 134 "compiler/grammar.y"
                { yyval = "="; }
#line 1396 "grammar.tab.c"
    break;

  case 32: /* for_operator: LESS_EQUAL  */
#line 136 "compiler/grammar.y"
                        { yyval = "<="; }
#line 1402 "grammar.tab.c"
    break;

  case 33: /* for_operator: LESS_THAN  */
#line 138 "compiler/grammar.y"
                        { yyval = "<"; }
#line 1408 "grammar.tab.c"
    break;

  case 34: /* for_operator: GREATHER_THAN  */
#line 140 "compiler/grammar.y"
                        { yyval = ">"; }
#line 1414 "grammar.tab.c"
    break;

  case 35: /* for_operator: GREATHER_EQUAL  */
#line 142 "compiler/grammar.y"
                        { yyval = ">="; }
#line 1420 "grammar.tab.c"
    break;

  case 36: /* for_operator: DEC  */
#line 144 "compiler/grammar.y"
                { yyval = "-1"; }
#line 1426 "grammar.tab.c"
    break;

  case 37: /* for_operator: INC  */
#line 146 "compiler/grammar.y"
                { yyval = "+1"; }
#line 1432 "grammar.tab.c"
    break;

  case 38: /* logicalComparation: DOLLAR_SIGN identifiers comp_operator DOLLAR_SIGN identifiers  */
#line 150 "compiler/grammar.y"
                                                                      { yyval = yyvsp[-3] + yyvsp[-2] + yyvsp[0]; }
#line 1438 "grammar.tab.c"
    break;

  case 39: /* std_output: SHOW COLON characters  */
#line 154 "compiler/grammar.y"
                                { yyval = "cout << " + yyvsp[0] + " << endl;\n"; }
#line 1444 "grammar.tab.c"
    break;

  case 40: /* std_output: SHOW COLON DOLLAR_SIGN identifiers  */
#line 156 "compiler/grammar.y"
                                                { yyval = "cout << " + yyvsp[0] + " << endl;\n"; }
#line 1450 "grammar.tab.c"
    break;

  case 41: /* assignment: identifiers COLON integer_value  */
#line 160 "compiler/grammar.y"
                                        { yyval = yyvsp[-2] + "=" + yyvsp[0] + ";"; }
#line 1456 "grammar.tab.c"
    break;

  case 42: /* integer_value: INTEGER_VALUE  */
#line 164 "compiler/grammar.y"
                        { yyval = std::string(yytext); }
#line 1462 "grammar.tab.c"
    break;

  case 43: /* std_input: LOAD COLON identifiers  */
#line 168 "compiler/grammar.y"
                               { yyval = "cin >> " + yyvsp[0] + ";\n"; }
#line 1468 "grammar.tab.c"
    break;

  case 44: /* definition: identifiers COLON INT  */
#line 172 "compiler/grammar.y"
                                { yyval = "int " + yyvsp[-2] + ";\n"; }
#line 1474 "grammar.tab.c"
    break;

  case 45: /* definition: identifiers COLON DECI  */
#line 174 "compiler/grammar.y"
                                { yyval = "float " + yyvsp[-2] + ";\n"; }
#line 1480 "grammar.tab.c"
    break;

  case 46: /* definition: identifiers COLON BLN  */
#line 176 "compiler/grammar.y"
                                { yyval = "bool " + yyvsp[-2] + ";\n"; }
#line 1486 "grammar.tab.c"
    break;

  case 47: /* definition: identifiers COLON STR  */
#line 178 "compiler/grammar.y"
                                { yyval = "string " + yyvsp[-2] + ";\n"; }
#line 1492 "grammar.tab.c"
    break;

  case 48: /* identifiers: identifiers ids  */
#line 182 "compiler/grammar.y"
                        { yyval = yyvsp[-1] + yyvsp[0]; }
#line 1498 "grammar.tab.c"
    break;

  case 49: /* identifiers: %empty  */
#line 184 "compiler/grammar.y"
               { yyval = ""; }
#line 1504 "grammar.tab.c"
    break;

  case 50: /* ids: id  */
#line 187 "compiler/grammar.y"
           { yyval = yyvsp[0]; }
#line 1510 "grammar.tab.c"
    break;

  case 51: /* characters: CHARACTERS  */
#line 191 "compiler/grammar.y"
                        { yyval = std::string(yytext); }
#line 1516 "grammar.tab.c"
    break;

  case 52: /* id: ID  */
#line 195 "compiler/grammar.y"
                {
		yyval = std::string(yytext);
	}
#line 1524 "grammar.tab.c"
    break;


#line 1528 "grammar.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 200 "compiler/grammar.y"

void yyerror(char const *x){
	printf("Error %s \n", x);
	exit (1);
}
