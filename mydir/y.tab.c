/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parse.yacc" /* yacc.c:339  */

#include<stdio.h>
#include "y.tab.h"
extern int cout;
void yyerror()
{
	printf("\nError\nnum str - %d\n",cout);
}
int yywrap()
{
  printf("OK\n");
  return(1);
}

#line 81 "mydir/y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_MYDIR_Y_TAB_H_INCLUDED
# define YY_YY_MYDIR_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABSTRACT = 258,
    STATIC = 259,
    VOID = 260,
    DIGIT = 261,
    LETTER = 262,
    WHILE = 263,
    IF = 264,
    ELSE = 265,
    ELSEIF = 266,
    RETURN = 267,
    SEMICOLON = 268,
    PLUS = 269,
    MINUS = 270,
    MUL = 271,
    DEL = 272,
    OST = 273,
    OR = 274,
    AND = 275,
    ASSIGN = 276,
    INC = 277,
    DEC = 278,
    PASSIGN = 279,
    MASSIGN = 280,
    MULASSIGN = 281,
    DASSIGN = 282,
    MORE = 283,
    LESS = 284,
    MOREA = 285,
    LESSA = 286,
    NOTASSIGN = 287,
    DOUBLEA = 288,
    LEFT = 289,
    RIGHT = 290,
    LEFTL = 291,
    RIGHTR = 292,
    LEFTS = 293,
    RIGHTS = 294,
    INT = 295,
    CHAR = 296,
    STRING = 297,
    BOOLEAN = 298,
    DOUBLE = 299,
    FLOAT = 300,
    INTMUL = 301,
    CHARMUL = 302,
    DOUBLEMUL = 303,
    FLOATMUL = 304,
    OVERRIDE = 305,
    FINAL = 306,
    CLASS = 307,
    PUBLIC = 308,
    PRIVATE = 309,
    PROTECTED = 310,
    SWITCH = 311,
    CASE = 312,
    TRY = 313,
    CATCH = 314,
    THIS = 315,
    EXTENDS = 316,
    IMPLEMENTS = 317,
    NEW = 318,
    IMPORT = 319,
    ZNAC = 320,
    POINT = 321,
    ONE = 322,
    TWO = 323,
    BYTE = 324,
    ASSERT = 325,
    BREAK = 326,
    CONTINUE = 327,
    INSTANCEOF = 328,
    INTERFACE = 329,
    THROW = 330,
    FOR = 331,
    TWOP = 332,
    DEFAULT = 333,
    SHORT = 334,
    LONG = 335,
    PACKAGE = 336,
    DOG = 337
  };
#endif
/* Tokens.  */
#define ABSTRACT 258
#define STATIC 259
#define VOID 260
#define DIGIT 261
#define LETTER 262
#define WHILE 263
#define IF 264
#define ELSE 265
#define ELSEIF 266
#define RETURN 267
#define SEMICOLON 268
#define PLUS 269
#define MINUS 270
#define MUL 271
#define DEL 272
#define OST 273
#define OR 274
#define AND 275
#define ASSIGN 276
#define INC 277
#define DEC 278
#define PASSIGN 279
#define MASSIGN 280
#define MULASSIGN 281
#define DASSIGN 282
#define MORE 283
#define LESS 284
#define MOREA 285
#define LESSA 286
#define NOTASSIGN 287
#define DOUBLEA 288
#define LEFT 289
#define RIGHT 290
#define LEFTL 291
#define RIGHTR 292
#define LEFTS 293
#define RIGHTS 294
#define INT 295
#define CHAR 296
#define STRING 297
#define BOOLEAN 298
#define DOUBLE 299
#define FLOAT 300
#define INTMUL 301
#define CHARMUL 302
#define DOUBLEMUL 303
#define FLOATMUL 304
#define OVERRIDE 305
#define FINAL 306
#define CLASS 307
#define PUBLIC 308
#define PRIVATE 309
#define PROTECTED 310
#define SWITCH 311
#define CASE 312
#define TRY 313
#define CATCH 314
#define THIS 315
#define EXTENDS 316
#define IMPLEMENTS 317
#define NEW 318
#define IMPORT 319
#define ZNAC 320
#define POINT 321
#define ONE 322
#define TWO 323
#define BYTE 324
#define ASSERT 325
#define BREAK 326
#define CONTINUE 327
#define INSTANCEOF 328
#define INTERFACE 329
#define THROW 330
#define FOR 331
#define TWOP 332
#define DEFAULT 333
#define SHORT 334
#define LONG 335
#define PACKAGE 336
#define DOG 337

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYDIR_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 296 "mydir/y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2320

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  697

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    99,    99,   101,   103,   107,   109,   111,   114,   117,
     120,   122,   124,   126,   128,   130,   132,   134,   136,   138,
     140,   142,   144,   146,   148,   150,   152,   154,   157,   159,
     161,   163,   165,   167,   169,   171,   173,   175,   177,   179,
     181,   183,   185,   187,   189,   191,   193,   195,   197,   199,
     201,   203,   205,   207,   209,   211,   213,   215,   217,   219,
     221,   223,   225,   227,   229,   231,   233,   235,   237,   239,
     241,   243,   245,   247,   249,   251,   253,   255,   257,   259,
     261,   263,   265,   269,   271,   273,   275,   277,   279,   281,
     283,   285,   287,   289,   291,   293,   295,   297,   299,   301,
     303,   305,   307,   309,   311,   313,   315,   317,   319,   321,
     323,   325,   327,   329,   331,   334,   336,   338,   340,   342,
     344,   346,   348,   350,   352,   354,   356,   358,   360,   362,
     364,   368,   370,   372,   376,   378,   380,   382,   384,   386,
     388,   390,   392,   394,   397,   399,   401,   403,   405,   407,
     410,   413,   415,   417,   419,   421,   423,   425,   427,   429,
     431,   433,   435,   437,   439,   441,   443,   445,   447,   449,
     451,   453,   455,   457,   459,   463,   465,   467,   469,   471,
     473,   475,   477,   479,   481,   483,   485,   487,   489,   492,
     494,   497,   499,   501,   503,   505,   507,   509,   511,   513,
     515,   517,   519,   521,   523,   525,   527,   529,   531,   533,
     535,   537,   539,   541,   543,   545,   547,   549,   551,   553,
     555,   557,   559,   561,   563,   565,   568,   570,   572,   574,
     578,   580,   582,   584,   586,   588,   590,   592,   594,   596,
     598,   600,   602,   604,   606,   608,   610,   612,   614,   616,
     618,   620,   622,   624,   626,   628,   630,   632,   635,   637,
     639,   641,   643,   645,   648,   650,   654,   657,   660,   662,
     664,   666,   668,   670,   672,   674,   676,   679,   682,   684,
     686,   690,   691,   694,   696,   699,   701,   703,   705,   707,
     709,   711,   713,   718,   720,   723,   725,   727,   729,   731,
     733,   735,   738,   740,   742,   744,   746,   748,   750,   752,
     754,   758,   760,   762,   764,   769,   775,   777,   781,   784,
     787,   789,   791,   793,   795,   797,   799,   801,   806,   808,
     810,   812,   814,   816,   818,   820,   822,   824,   826,   828,
     830,   832,   834,   836,   838,   840,   842,   844,   846,   848,
     850
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT", "STATIC", "VOID", "DIGIT",
  "LETTER", "WHILE", "IF", "ELSE", "ELSEIF", "RETURN", "SEMICOLON", "PLUS",
  "MINUS", "MUL", "DEL", "OST", "OR", "AND", "ASSIGN", "INC", "DEC",
  "PASSIGN", "MASSIGN", "MULASSIGN", "DASSIGN", "MORE", "LESS", "MOREA",
  "LESSA", "NOTASSIGN", "DOUBLEA", "LEFT", "RIGHT", "LEFTL", "RIGHTR",
  "LEFTS", "RIGHTS", "INT", "CHAR", "STRING", "BOOLEAN", "DOUBLE", "FLOAT",
  "INTMUL", "CHARMUL", "DOUBLEMUL", "FLOATMUL", "OVERRIDE", "FINAL",
  "CLASS", "PUBLIC", "PRIVATE", "PROTECTED", "SWITCH", "CASE", "TRY",
  "CATCH", "THIS", "EXTENDS", "IMPLEMENTS", "NEW", "IMPORT", "ZNAC",
  "POINT", "ONE", "TWO", "BYTE", "ASSERT", "BREAK", "CONTINUE",
  "INSTANCEOF", "INTERFACE", "THROW", "FOR", "TWOP", "DEFAULT", "SHORT",
  "LONG", "PACKAGE", "DOG", "\" \"", "$accept", "import", "plet", "list",
  "condition", "listt", "incond", "catches", "paramet", "namepp", "type",
  "threep", "forclassinh", "types", "method", "name", "param", "namep",
  "ciclesym", "symbols", "plett", "expr_in_cond", "incdecletexpr",
  "diglet", "forr", "infor", "first", "second", "third", "switchcase",
  "incase", "cases", "defaultt", "whilee", "whilee_expr", "cy_expr",
  "ifelse", "if_expr", "else_if_expr", "else_expr", "ifff_expr", "expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338
};
# endif

#define YYPACT_NINF -426

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-426)))

#define YYTABLE_NINF -351

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -44,    25,    35,    46,    52,    -7,    -7,  -426,    14,  -426,
      65,  -426,  -426,  -426,    68,  -426,     5,   226,    77,   119,
     128,   156,   933,  1012,    91,   172,   184,    -7,  -426,   -44,
     -44,  1012,  -426,  1722,   205,  2254,   129,   134,   357,  1328,
     209,   227,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  1472,   253,   186,  1328,   233,   259,   270,
    -426,   237,   266,   276,    11,   261,  -426,  -426,   295,    52,
     123,   337,  1328,  1328,  -426,  -426,  -426,  -426,  -426,   317,
     300,    52,  1328,   324,  1091,  1328,  -426,  -426,  -426,    52,
    1328,   205,   258,  -426,   205,   334,   309,  1005,   291,   209,
     227,   191,   191,   191,   191,   267,   308,   348,   354,  -426,
     231,   285,  1569,   -10,  -426,   237,  1543,  1543,  -426,  1911,
    -426,  -426,  -426,  1170,   314,  1012,   364,   292,  1210,  -426,
     665,   335,  -426,    87,  1514,  -426,  -426,  -426,   380,  2162,
     425,  -426,   733,   360,   316,   338,   359,  -426,  1767,   205,
       1,   396,   343,   371,    52,  -426,  1328,   373,   317,  -426,
      89,  -426,    52,  1012,   407,    52,  1328,    52,  -426,    52,
     393,  -426,   411,  -426,  1912,  -426,  -426,  -426,     7,   397,
     440,   450,   456,  1543,  1543,  1911,   162,   468,   470,  -426,
    -426,  1911,  -426,  -426,  -426,    -4,   197,  1826,   425,   476,
    1615,  1543,   449,   428,  1823,   478,    59,  -426,  -426,  -426,
     231,   460,  1868,   124,   467,  1969,   267,   480,  2087,  1425,
    -426,   423,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,   441,   445,  1399,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,  -426,  -426,  1020,  -426,  -426,  1328,   482,   485,  -426,
     267,  1665,   229,   104,    52,  -426,   312,  -426,   267,  -426,
    -426,   486,    -2,   520,   493,   521,   205,  1620,  1328,  -426,
     500,  1084,  -426,  1252,  -426,  1927,   205,  1869,   502,  1012,
     847,   504,  -426,  1970,  -426,  -426,   285,   529,  -426,  -426,
      52,  1328,   775,  -426,    52,  -426,  -426,  1987,  2030,    58,
    -426,   122,   506,  -426,  -426,   539,   540,   353,   544,   547,
    -426,  -426,   195,   489,   498,  -426,  -426,  -426,  -426,    41,
     562,   566,   542,   152,   543,  1328,   545,   -34,   507,   512,
    1471,   568,   267,   267,  1099,  -426,   267,   576,  -426,   778,
    1328,   231,   231,   231,   231,   231,   231,   237,   237,   237,
     237,   237,   237,   267,  1328,   237,   237,   237,   237,   237,
     237,   551,   161,  -426,  -426,  -426,  -426,  -426,  -426,  1543,
    1911,  1911,  1911,  1911,  1911,  1911,  1911,  1911,  1911,  1911,
    1911,  1911,  1911,  1911,  -426,  -426,   552,  2205,   554,   522,
     344,  -426,   530,   569,   854,  1710,  -426,  -426,  -426,   561,
     215,   415,   577,  1328,   231,  1767,   205,  -426,  1163,  -426,
    -426,  -426,   565,   567,   658,   509,   570,  -426,  2045,  -426,
    1328,  -426,  2088,  -426,   571,   572,  -426,    52,   265,    52,
    -426,  -426,   574,  -426,   575,   573,   578,   557,   580,   559,
    -426,   584,   181,  -426,  -426,  -426,  -426,   490,  -426,  2204,
    2279,   588,   589,  -426,   525,  -426,   594,     3,   593,   508,
    -426,     4,    84,   105,  -426,  -426,  -426,  -426,   598,   595,
    -426,  -426,   792,   792,   792,   792,   792,   792,  1911,  1911,
    1911,  1911,  1911,  1911,   601,  -426,  1911,  1911,  1911,  1911,
    1911,  1911,   422,   267,   548,   602,  -426,  1779,  1779,  1779,
    -426,    52,  -426,   610,  -426,   599,   606,   596,   611,   427,
    -426,   646,  -426,   205,  -426,  -426,  2105,  1178,  -426,  -426,
     936,  -426,  2148,  -426,   625,  -426,  -426,   628,  -426,  1328,
    -426,   854,  -426,  -426,  -426,   627,   668,  2205,   668,  2205,
     258,   558,   258,   651,  -426,  -426,   267,   652,   682,  -426,
     626,   657,   267,   267,   267,   258,   258,   660,  -426,   662,
      70,   615,  1328,  -426,  -426,  -426,  -426,  -426,  -426,   685,
    2162,  2162,   634,   635,   338,  -426,   667,  -426,  1242,  -426,
    -426,  -426,   680,  -426,  -426,  -426,    52,  -426,   638,  -426,
     663,  -426,  -426,   258,   687,  -426,   258,  -426,   690,   666,
     267,   673,  -426,  -426,  -426,  -426,  -426,   258,   653,   655,
    1543,  1543,  1328,   705,   292,  -426,  -426,  -426,  2162,  2162,
     678,  -426,  -426,  -426,  -426,  -426,  2205,  2205,  -426,   258,
    -426,  -426,  -426,  -426,   267,  1328,  1328,   681,   683,  -426,
    -426,  -426,  -426,  -426,   338,  -426,  -426,  -426,  -426,   671,
    1249,   672,  1249,   675,   676,  -426,  -426,  -426,  -426,  1328,
    1328,   684,  1249,   686,  1249,  -426,  -426
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       8,     0,     0,     0,     4,     0,     0,     1,     0,     8,
       0,   133,   131,   132,     0,     9,     0,     0,     0,     0,
       0,     0,    29,    29,     0,     0,     0,     6,     5,     8,
       8,    29,    11,     0,     0,   116,     0,     0,     0,    29,
       0,     0,    27,   125,   126,   127,   128,   129,   130,   115,
     118,   119,   120,   122,     0,     0,    29,     0,     0,     0,
     121,     0,     0,     0,     0,     0,   123,   124,     0,    10,
       0,     0,    29,    29,    65,    69,    70,    68,    67,   314,
       0,    10,    29,     0,    29,    29,     7,     2,     3,    10,
      29,     0,   116,   122,     0,   175,     0,     0,     0,   250,
     251,     0,     0,     0,     0,    85,     0,     0,   117,    59,
       0,   319,   264,   226,    75,     0,     0,     0,    76,    77,
      82,   252,   253,     0,     0,    29,     0,     0,     0,    64,
      29,   140,   350,   226,     0,    80,    81,    74,     0,   268,
     150,    12,   175,     0,     0,     0,     0,    52,     0,     0,
     116,     0,     0,     0,    10,    63,    29,     0,   312,   313,
       0,    17,    10,    29,     0,    10,    29,    10,    23,    10,
       0,   117,     0,   176,     0,    55,   250,   251,   226,     0,
       0,     0,     0,     0,     0,   245,   226,     0,     0,   254,
     258,   259,   255,   256,   257,   350,   226,     0,   150,     0,
       0,     0,     0,   106,    90,     0,   226,    47,   309,   310,
       0,     0,   295,   226,     0,   321,    85,     0,    78,     0,
     193,   194,   198,   199,   200,   201,   203,   204,   205,   206,
     196,   213,   214,   215,   216,   217,   218,   207,   208,   209,
     210,   211,   212,   219,   220,   221,   222,   223,   224,   197,
     202,   225,   191,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    28,     0,    54,    31,    29,     0,     0,    71,
      85,     0,     0,     0,    10,   134,   141,   135,    85,   345,
      66,     0,   116,     0,     0,     0,     0,     0,    29,    45,
       0,     0,    53,     0,    51,     0,     0,     0,     0,    29,
     175,     0,    36,     0,    16,   318,   319,   316,   311,    19,
      10,    29,    29,    13,    10,    18,    25,     0,     0,   116,
     157,   186,     0,   246,   247,     0,     0,   244,     0,     0,
     248,   249,   226,     0,     0,   263,   262,   260,   261,     0,
       0,     0,   345,   226,     0,    29,     0,     0,     0,     0,
       0,     0,    85,    85,     0,    60,    85,     0,   229,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    29,     0,     0,     0,     0,     0,
       0,     0,   226,   328,   195,   348,   347,   346,   189,   190,
     330,   331,   334,   335,   336,   332,   333,   329,   337,   338,
     339,   340,   342,   341,    46,    33,     0,   177,     0,   149,
     116,   139,   148,     0,    29,     0,   137,    15,   136,     0,
     107,     0,     0,    29,     0,     0,     0,    62,     0,    58,
      49,   151,     0,     0,   175,     0,     0,    38,     0,    32,
      29,    35,     0,   153,     0,     0,    24,    10,     0,    10,
      20,   169,     0,   163,     0,   187,     0,   185,     0,   181,
     160,     0,   226,   242,   243,   240,   241,   107,   237,   236,
     235,     0,     0,   110,   226,    89,   345,     0,     0,   107,
     111,   348,   347,   346,    61,   105,    91,    57,     0,     0,
     302,   294,   305,   304,   306,   307,   308,   303,   300,   301,
     299,   298,   297,   296,     0,   315,   326,   327,   325,   324,
     323,   322,   226,    85,     0,     0,    50,     0,     0,     0,
     138,    10,   142,     0,   343,     0,     0,   273,   275,     0,
     266,     0,   277,     0,    56,   154,     0,     0,    37,    42,
       0,    40,     0,   158,     0,    34,   152,     0,   156,    29,
      26,    29,    21,   172,   166,     0,   186,   177,   186,   177,
     226,   107,   226,     0,    87,    88,    85,   112,     0,    92,
      93,     0,    85,    85,    85,   226,   226,   343,    79,     0,
       0,     0,    29,   146,   144,   145,    14,   143,    72,     0,
     268,   268,   274,   276,   278,   170,     0,    41,     0,    39,
      44,   164,     0,   161,   155,   317,    10,   188,   184,   183,
     180,   179,   231,   226,     0,   238,   226,   104,     0,     0,
      85,    94,   102,   101,   100,   228,   227,   226,     0,     0,
       0,     0,    29,     0,    84,    73,   270,   269,   268,   268,
     280,   267,   173,    43,   167,    22,   177,   177,   232,   226,
     239,   113,   114,    95,    85,    29,    29,     0,     0,   293,
     281,    83,   272,   271,   278,   182,   178,   228,    96,   284,
       0,   284,     0,     0,     0,   279,   283,   288,   287,    29,
      29,   284,     0,   284,     0,   286,   285
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -426,   452,    47,   752,   -67,  -426,   -22,   127,    32,  -426,
     -17,     2,    63,  -413,  -114,   -13,  -300,  -327,  -102,   -73,
     -24,   -32,   213,   725,  -426,  -426,  -425,  -426,    98,  -426,
    -381,  -236,  -426,  -426,   347,  -170,  -426,  -426,   706,   631,
     474,   388
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    86,     4,    15,   123,   686,   279,   202,   203,
      70,    71,   285,   423,    73,   146,   332,   467,   398,   399,
     171,    74,   189,   190,    75,   294,   295,   541,   651,    76,
     680,   591,   643,    77,   211,   212,    78,    79,   317,   159,
     214,   204
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    81,   141,   109,   469,   442,    16,   173,    24,    89,
     577,   108,   533,   454,   161,   255,    94,   120,   137,   431,
       1,    96,   168,    16,   216,   129,   298,   462,   464,   333,
     334,  -108,     5,   490,   127,  -175,   124,     2,   147,   -99,
     369,   288,     6,   254,   256,   335,     7,   481,   482,   394,
     154,   155,    18,    19,   152,     8,   217,    25,   153,    17,
     162,  -108,   165,   167,   107,   465,    20,   107,   169,   582,
     578,    16,    22,   336,   138,    23,   638,   639,   170,    26,
     483,   172,   344,    16,   355,    72,    82,   314,     9,   218,
      29,    16,   274,   366,    90,   319,   466,   367,   323,   359,
     325,   272,   326,   275,    10,    11,    12,    13,   284,   289,
     343,   256,   302,   304,   593,   594,   595,   525,   281,   -98,
     312,   288,   293,   296,   107,   107,    14,   358,   360,   465,
     142,   307,    30,   425,   315,    31,   308,   640,   641,   311,
     -97,   320,   297,    83,   324,    40,    41,   166,   554,   583,
      80,    59,   557,   217,   289,    17,    16,   331,   383,     8,
     468,   143,   289,   110,    16,    80,    59,    16,   111,    16,
     584,    16,   352,   365,   144,   646,   647,   283,   286,    84,
     354,   296,   368,   145,   345,   346,   288,  -116,   276,   289,
     217,    85,     9,    32,   287,   523,   288,   112,   186,   367,
     297,   502,   503,   504,   505,   506,   507,   283,    10,    11,
      12,    13,    95,   187,   188,   571,   121,   427,   217,   367,
     126,   195,   196,   672,   673,   115,   321,   107,   217,   477,
      14,   288,  -109,    27,   122,   349,   424,   208,   209,   618,
     128,   620,    28,   132,   133,    28,   606,   107,   391,   197,
     535,   198,   612,   456,   415,    40,    41,   460,   116,   117,
     125,   107,  -109,   350,   422,   210,   130,   619,   439,   621,
     351,   115,   561,   195,   196,   447,   437,   131,   199,   135,
     436,    28,   200,   201,   153,   682,    16,   449,   331,   136,
     445,   132,   213,   443,   446,   139,   331,   132,   178,   457,
     459,   197,   140,   198,   116,   117,   179,   160,   692,   694,
     331,   331,   418,   180,   181,   192,   193,   194,   478,   115,
     429,   273,    16,   301,   107,   115,    16,   156,   157,   486,
     199,   163,  -107,   488,   200,   201,    40,    41,    40,    41,
     173,   148,   149,   174,   150,   303,   426,   205,   501,   428,
     310,   278,   116,   117,   182,   206,   675,   676,   183,   184,
      40,    41,   515,   112,   113,    40,    41,   207,   368,   283,
     114,   277,   450,    80,    59,   473,   474,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,   291,    93,   151,
     560,   115,   562,   305,   495,   496,    80,    59,   498,   300,
     331,    17,   531,   309,   337,   313,    60,   316,   422,   528,
     107,   540,   549,   551,   322,   514,    66,    67,   543,   338,
     339,   537,   538,   311,   116,   117,   119,   327,   555,    33,
      34,   331,    92,   602,   603,   331,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  -343,   687,   328,   688,   340,   368,   134,
    -343,  -343,  -343,  -343,  -343,  -343,   695,   341,   696,    16,
     368,    16,   536,   342,   596,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,   347,    93,   348,    11,    12,
      13,    87,    88,   356,   361,   364,   185,   392,   107,   191,
     191,   191,   191,   362,    60,   370,   195,   196,   588,   215,
      40,    41,   384,   219,    66,    67,   394,   438,   395,   573,
     422,   422,   422,   396,   195,   196,   550,   416,   610,   417,
     430,   581,    40,    41,   197,   572,   198,   432,   433,   331,
     446,    40,    41,    16,   434,   331,   448,   615,   452,   616,
     157,   470,   197,   580,   198,   471,   622,   472,   625,   655,
     331,   475,   331,   199,   476,   589,   479,   200,   201,   523,
    -103,   635,   636,   367,   195,   196,   480,   667,   668,   484,
     644,   199,   650,   485,   491,   200,   201,   -86,   487,   489,
     492,   494,   499,   293,   293,   219,   522,   527,   524,   526,
     576,   107,   197,   623,   198,   529,   534,   530,   539,   658,
     545,   546,   660,   624,   552,   590,   558,   559,   627,   563,
     564,   565,   598,   635,   632,   633,   634,   566,    16,   568,
     669,   199,   567,   570,   569,   200,   201,   574,   575,  -117,
     579,   293,   293,   585,   586,   677,   587,   592,   597,   331,
     331,   599,   650,   679,   681,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   604,
     613,   600,   663,   614,   173,   547,   617,   691,   693,    33,
      34,   548,    35,    36,    37,   465,   601,    38,    39,    98,
      99,   100,   101,   102,   103,   104,   626,    40,    41,   629,
     628,   630,   631,   642,   281,  -320,   678,   637,   645,   648,
     649,    42,   652,   656,   215,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,   654,    53,    54,    11,    12,
      13,    55,   659,    56,   107,    57,    80,    59,   657,   661,
     665,   282,   666,   662,    60,    61,    62,    63,   664,   173,
      64,    65,   670,   674,    66,    67,   299,    68,   683,  -292,
    -291,   684,   689,   690,    98,   176,   177,   101,   102,   103,
     104,    21,  -290,   118,  -289,   508,   509,   510,   511,   512,
     513,   671,   685,   516,   517,   518,   519,   520,   521,    33,
      34,   542,    35,    36,    37,   158,     0,    38,    39,   318,
     455,     0,   371,   372,   373,   374,   375,    40,    41,   376,
       0,     0,     0,     0,   281,     0,   371,   372,   373,   374,
     375,    42,   500,   376,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,    53,    54,    11,    12,
      13,    55,     0,    56,     0,    57,    80,    59,     0,     0,
       0,   458,     0,     0,    60,    61,    62,    63,     0,     0,
      64,    65,     0,   173,    66,    67,     0,    68,    33,    34,
     451,    35,    36,    37,     0,     0,    38,    39,    98,   176,
     177,   101,   102,   103,   104,     0,    40,    41,     0,     0,
       0,     0,     0,    -6,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,    53,    54,    11,    12,    13,
      55,     0,    56,     0,    57,    -6,    -6,     0,     0,     0,
      17,     0,     0,    60,    61,    62,    63,     0,     0,    64,
      65,     0,     0,    66,    67,     0,    68,    33,    34,     0,
      35,    36,    37,   608,     0,    38,    39,     0,     0,   609,
       0,     0,     0,     0,     0,    40,    41,    98,    99,   100,
     101,   102,   103,   104,     0,     0,     0,     0,     0,    42,
       0,     0,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,    53,    54,    11,    12,    13,    55,
       0,    56,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,    60,    61,    62,    63,     0,     0,    64,    65,
       0,     0,    66,    67,     0,    68,    33,    34,   175,    35,
      36,    37,     0,     0,    38,    39,    98,   176,   177,   101,
     102,   103,   104,   414,    40,    41,     0,     0,     0,     0,
       0,    98,   176,   177,   101,   102,   103,   104,    42,     0,
       0,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    53,    54,    11,    12,    13,    55,     0,
      56,     0,    57,    80,    59,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,     0,     0,    64,    65,     0,
       0,    66,    67,     0,    68,    33,    34,   440,    35,    36,
      37,     0,     0,    38,    39,    98,   176,   177,   101,   102,
     103,   104,   497,    40,    41,     0,     0,     0,     0,     0,
      98,   176,   177,   101,   102,   103,   104,    42,     0,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,    54,    11,    12,    13,    55,     0,    56,
       0,    57,   164,    59,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,     0,     0,    64,    65,     0,     0,
      66,    67,     0,    68,    33,    34,   544,    35,    36,    37,
       0,     0,    38,    39,    98,   176,   177,   101,   102,   103,
     104,   607,    40,    41,     0,     0,     0,     0,     0,    98,
     176,   177,   101,   102,   103,   104,    42,   271,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,    53,    54,    11,    12,    13,    55,     0,    56,     0,
      57,    98,   176,   177,   101,   102,   103,   104,     0,    60,
      61,    62,    63,     0,   280,    64,    65,     0,     0,    66,
      67,     0,    68,    33,    34,   653,    35,    36,    37,     0,
       0,    38,    39,    98,   176,   177,   101,   102,   103,   104,
       0,    40,    41,    98,   176,   177,   101,   102,   103,   104,
       0,     0,     0,     0,     0,    42,     0,     0,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
      53,    54,    11,    12,    13,    55,   590,    56,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,     0,     0,    64,    65,     0,     0,    66,    67,
       0,    68,    33,    34,     0,    35,    36,    37,     0,     0,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,    53,
      54,    11,    12,    13,    55,     0,    56,     0,    57,     0,
       0,     0,     0,     0,     0,     0,     0,    60,    61,    62,
      63,     0,     0,    64,    65,   220,   221,    66,    67,     0,
      68,     0,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   257,
     258,   259,   260,   261,   262,   263,   264,     0,     0,     0,
       0,     0,     0,   265,   266,   267,   268,   269,   270,     0,
     393,     0,     0,     0,   249,   250,   251,   397,     0,     0,
       0,     0,     0,     0,     0,     0,   252,   220,   221,    92,
       0,     0,   253,     0,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    93,     0,     0,     0,   290,   257,   258,
     259,   260,   261,   262,   263,   264,   249,   250,   251,   493,
       0,    60,   265,   266,   267,   268,   269,   270,   252,   220,
     221,    66,    67,     0,   253,     0,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,     0,     0,     0,     0,     0,     0,  -350,  -350,  -350,
    -350,  -350,  -350,     0,     0,     0,     0,     0,   249,   250,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     252,   220,   357,     0,   435,   149,   253,   150,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,     0,     0,     0,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
     419,    93,   420,     0,     0,     0,     0,     0,     0,     0,
     249,   250,   251,     0,     0,     0,     0,     0,     0,    60,
       0,     0,   252,   421,     0,     0,     0,     0,   253,    66,
      67,     0,     0,     0,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,   419,    93,   420,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
       0,     0,     0,     0,    60,     0,     0,     0,   532,     0,
       0,     0,     0,     0,    66,    67,     0,     0,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,    93,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,   306,    93,    92,     0,     0,     0,     0,    60,
       0,     0,     0,     0,   419,     0,   420,     0,     0,    66,
      67,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    66,    67,     0,     0,     0,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,    93,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
      93,     0,   132,   353,     0,     0,    60,   257,   258,   259,
     260,   261,   262,   263,   264,     0,    66,    67,    60,     0,
       0,   265,   266,   267,   268,   269,   270,     0,    66,    67,
     115,     0,     0,     0,     0,     0,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,   444,    93,     0,     0,
       0,     0,   371,   372,   373,   374,   375,     0,   363,   376,
       0,    40,    41,   116,   117,    60,   377,   378,   379,   380,
     381,   382,     0,     0,     0,    66,    67,     0,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,   329,
      93,     0,     0,     0,     0,   257,   258,   259,   260,   261,
     262,   263,   264,     0,   329,     0,     0,     0,    60,   265,
     266,   267,   268,   269,   270,     0,     0,   330,    66,    67,
       0,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,   441,    93,     0,     0,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,   329,    93,     0,
       0,    60,     0,   257,   258,   259,   260,   261,   262,   263,
     264,    66,    67,     0,   329,     0,    60,   385,   386,   387,
     388,   389,   390,     0,     0,   453,    66,    67,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,    93,   461,     0,     0,     0,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,   329,    93,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      67,     0,   329,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,   463,    66,    67,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
     553,    93,     0,     0,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,   329,    93,     0,     0,    60,
       0,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,    66,
      67,     0,   329,     0,    60,  -345,  -345,  -345,  -345,  -345,
    -345,     0,     0,   556,    66,    67,     0,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,    93,
     605,     0,     0,     0,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,   329,    93,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    67,   292,
       0,     0,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,   611,    66,    67,     0,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,    93,
       0,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,   329,    93,     0,     0,     0,    60,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,     0,    66,    67,     0,
       0,    60,  -348,  -348,  -348,  -348,  -348,  -348,     0,     0,
       0,    66,    67,     0,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,    93,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,  -226,     0,     0,
       0,     0,     0,     0,    60,    98,    99,   100,   101,   102,
     103,   104,     0,     0,    66,    67,     0,     0,   105,     0,
       0,     0,   106,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,     0,     0,     0,     0,     0,     0,  -347,  -347,  -347,
    -347,  -347,  -347,     0,     0,     0,     0,     0,     0,     0,
     107
};

static const yytype_int16 yycheck[] =
{
      22,    23,    69,    35,   331,   305,     4,     6,     3,    31,
       7,    35,   425,   313,    81,   117,    33,    39,     7,    21,
      64,    34,    89,    21,    34,    57,   140,   327,   328,    22,
      23,    35,     7,    67,    56,    34,    53,    81,    70,    35,
     210,    34,     7,   116,   117,    38,     0,     6,     7,    83,
      72,    73,     5,     6,    71,     3,    66,    52,    71,    66,
      82,    65,    84,    85,    66,     7,    52,    66,    90,    65,
      67,    69,     7,    66,    63,     7,     6,     7,    91,    74,
      39,    94,   184,    81,   198,    22,    23,   154,    36,   113,
      13,    89,   124,    34,    31,   162,    38,    38,   165,   201,
     167,   123,   169,   125,    52,    53,    54,    55,   130,   133,
     183,   184,   144,   145,   527,   528,   529,   417,    29,    35,
     152,    34,   139,   140,    66,    66,    74,   200,   201,     7,
       7,   148,    13,    29,   156,     7,   149,    67,    68,   152,
      35,   163,   140,    52,   166,    22,    23,    84,   448,    65,
      61,    62,   452,    66,   178,    66,   154,   174,    34,     3,
      38,    38,   186,    34,   162,    61,    62,   165,    34,   167,
      65,   169,   196,   205,    51,   600,   601,   130,   131,     7,
     197,   198,   206,    60,    22,    23,    34,    35,   125,   213,
      66,     7,    36,    37,   131,    34,    34,     6,     7,    38,
     198,   371,   372,   373,   374,   375,   376,   160,    52,    53,
      54,    55,     7,    22,    23,    34,     7,   284,    66,    38,
      34,     6,     7,   648,   649,    34,   163,    66,    66,    34,
      74,    34,    35,     7,     7,    38,     7,     6,     7,   566,
       7,   568,    16,     6,     7,    16,   546,    66,   216,    34,
      35,    36,   552,   320,   276,    22,    23,   324,    67,    68,
       7,    66,    65,    66,   281,    34,     7,   567,   300,   569,
      73,    34,     7,     6,     7,   307,   298,     7,    63,    13,
     297,    16,    67,    68,   297,   666,   284,   309,   305,    13,
     307,     6,     7,   306,   307,    34,   313,     6,     7,   321,
     322,    34,     7,    36,    67,    68,    15,     7,   689,   690,
     327,   328,   280,    22,    23,   102,   103,   104,   342,    34,
     288,     7,   320,     7,    66,    34,   324,    10,    11,   353,
      63,     7,    65,   355,    67,    68,    22,    23,    22,    23,
       6,     4,     5,    34,     7,     7,   283,    39,   370,   286,
       7,    59,    67,    68,    63,     7,   656,   657,    67,    68,
      22,    23,   384,     6,     7,    22,    23,    13,   392,   322,
      13,     7,   309,    61,    62,    22,    23,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     7,    51,    52,
     457,    34,   459,    34,   362,   363,    61,    62,   366,    39,
     417,    66,   424,     7,     7,    34,    69,    34,   425,    65,
      66,   433,   444,   445,     7,   383,    79,    80,   435,    22,
      23,     6,     7,   436,    67,    68,    38,    34,   450,     4,
       5,   448,     7,     6,     7,   452,    14,    15,    16,    17,
      18,    19,    20,    21,   680,    34,   682,     7,   472,    61,
      28,    29,    30,    31,    32,    33,   692,     7,   694,   457,
     484,   459,   430,     7,   531,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     7,    51,     7,    53,    54,
      55,    29,    30,     7,    35,     7,    98,     7,    66,   101,
     102,   103,   104,    65,    69,    35,     6,     7,   522,   111,
      22,    23,    35,   115,    79,    80,    83,     7,    67,   477,
     527,   528,   529,    68,     6,     7,     7,    35,   550,    34,
      34,   489,    22,    23,    34,    35,    36,     7,    35,   546,
     543,    22,    23,   531,    13,   552,    34,   559,    34,   561,
      11,    35,    34,    35,    36,     6,   570,     7,   572,   616,
     567,     7,   569,    63,     7,   523,    67,    67,    68,    34,
      35,   585,   586,    38,     6,     7,    68,   640,   641,     7,
     592,    63,   604,     7,    67,    67,    68,    35,    35,    34,
      68,    13,     6,   600,   601,   197,    35,    65,    36,    35,
      65,    66,    34,    35,    36,    65,    35,    28,    21,   623,
      35,    34,   626,   571,    34,    57,    35,    35,   576,    35,
      35,    38,    13,   637,   582,   583,   584,    39,   616,    39,
     642,    63,    65,    39,    65,    67,    68,    39,    39,    35,
      37,   648,   649,    35,    39,   659,    35,    35,    28,   656,
     657,    35,   674,   665,   666,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,    13,
      35,    65,   630,    35,     6,     7,    39,   689,   690,     4,
       5,    13,     7,     8,     9,     7,    65,    12,    13,    21,
      22,    23,    24,    25,    26,    27,    35,    22,    23,     7,
      38,    65,    35,    78,    29,    35,   664,    35,    13,    65,
      65,    36,    35,    65,   316,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    35,    51,    52,    53,    54,
      55,    56,    35,    58,    66,    60,    61,    62,    65,    39,
      77,    66,    77,    67,    69,    70,    71,    72,    65,     6,
      75,    76,    37,    65,    79,    80,    13,    82,    67,    78,
      78,    68,    77,    77,    21,    22,    23,    24,    25,    26,
      27,     9,    78,    38,    78,   377,   378,   379,   380,   381,
     382,   644,   674,   385,   386,   387,   388,   389,   390,     4,
       5,   434,     7,     8,     9,    79,    -1,    12,    13,   158,
     316,    -1,    14,    15,    16,    17,    18,    22,    23,    21,
      -1,    -1,    -1,    -1,    29,    -1,    14,    15,    16,    17,
      18,    36,    34,    21,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    -1,    60,    61,    62,    -1,    -1,
      -1,    66,    -1,    -1,    69,    70,    71,    72,    -1,    -1,
      75,    76,    -1,     6,    79,    80,    -1,    82,     4,     5,
      13,     7,     8,     9,    -1,    -1,    12,    13,    21,    22,
      23,    24,    25,    26,    27,    -1,    22,    23,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    -1,    58,    -1,    60,    61,    62,    -1,    -1,    -1,
      66,    -1,    -1,    69,    70,    71,    72,    -1,    -1,    75,
      76,    -1,    -1,    79,    80,    -1,    82,     4,     5,    -1,
       7,     8,     9,     7,    -1,    12,    13,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    22,    23,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    -1,    -1,    75,    76,
      -1,    -1,    79,    80,    -1,    82,     4,     5,    13,     7,
       8,     9,    -1,    -1,    12,    13,    21,    22,    23,    24,
      25,    26,    27,    13,    22,    23,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    36,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    -1,
      58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    -1,    -1,    75,    76,    -1,
      -1,    79,    80,    -1,    82,     4,     5,    13,     7,     8,
       9,    -1,    -1,    12,    13,    21,    22,    23,    24,    25,
      26,    27,    13,    22,    23,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    36,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      -1,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    -1,    -1,    75,    76,    -1,    -1,
      79,    80,    -1,    82,     4,     5,    13,     7,     8,     9,
      -1,    -1,    12,    13,    21,    22,    23,    24,    25,    26,
      27,    13,    22,    23,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    36,    37,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    -1,    58,    -1,
      60,    21,    22,    23,    24,    25,    26,    27,    -1,    69,
      70,    71,    72,    -1,    34,    75,    76,    -1,    -1,    79,
      80,    -1,    82,     4,     5,    13,     7,     8,     9,    -1,
      -1,    12,    13,    21,    22,    23,    24,    25,    26,    27,
      -1,    22,    23,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    -1,    -1,    75,    76,    -1,    -1,    79,    80,
      -1,    82,     4,     5,    -1,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,    -1,    75,    76,     6,     7,    79,    80,    -1,
      82,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    -1,
      35,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,     6,     7,     7,
      -1,    -1,    83,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    65,    66,    67,    68,
      -1,    69,    28,    29,    30,    31,    32,    33,    77,     6,
       7,    79,    80,    -1,    83,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,     6,     7,    -1,     4,     5,    83,     7,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       5,    51,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    77,    28,    -1,    -1,    -1,    -1,    83,    79,
      80,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     5,    51,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     5,    51,     7,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    79,
      80,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    -1,     6,     7,    -1,    -1,    69,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    79,    80,    69,    -1,
      -1,    28,    29,    30,    31,    32,    33,    -1,    79,    80,
      34,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     7,    51,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    65,    21,
      -1,    22,    23,    67,    68,    69,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    79,    80,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     7,
      51,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,     7,    -1,    -1,    -1,    69,    28,
      29,    30,    31,    32,    33,    -1,    -1,    35,    79,    80,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    35,    51,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     7,    51,    -1,
      -1,    69,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    79,    80,    -1,     7,    -1,    69,    28,    29,    30,
      31,    32,    33,    -1,    -1,    35,    79,    80,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     7,    51,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    -1,     7,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    79,    80,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      35,    51,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     7,    51,    -1,    -1,    69,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    79,
      80,    -1,     7,    -1,    69,    28,    29,    30,    31,    32,
      33,    -1,    -1,    35,    79,    80,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      35,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     7,    51,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,     7,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    79,    80,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     7,    51,    -1,    -1,    -1,    69,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    79,    80,    -1,
      -1,    69,    28,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    79,    80,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    79,    80,    -1,    -1,    34,    -1,
      -1,    -1,    38,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    64,    81,    85,    87,     7,     7,     0,     3,    36,
      52,    53,    54,    55,    74,    88,    95,    66,    86,    86,
      52,    87,     7,     7,     3,    52,    74,     7,    16,    13,
      13,     7,    37,     4,     5,     7,     8,     9,    12,    13,
      22,    23,    36,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    51,    52,    56,    58,    60,    61,    62,
      69,    70,    71,    72,    75,    76,    79,    80,    82,    90,
      94,    95,    96,    98,   105,   108,   113,   117,   120,   121,
      61,    90,    96,    52,     7,     7,    86,    85,    85,    90,
      96,     5,     7,    51,    94,     7,    99,     7,    21,    22,
      23,    24,    25,    26,    27,    34,    38,    66,   104,   105,
      34,    34,     6,     7,    13,    34,    67,    68,   107,   125,
      90,     7,     7,    89,    94,     7,    34,    90,     7,   105,
       7,     7,     6,     7,   125,    13,    13,     7,    63,    34,
       7,    88,     7,    38,    51,    60,    99,   105,     4,     5,
       7,    52,    94,    99,    90,    90,    10,    11,   122,   123,
       7,    88,    90,     7,    61,    90,    96,    90,    88,    90,
      99,   104,    99,     6,    34,    13,    22,    23,     7,    15,
      22,    23,    63,    67,    68,   125,     7,    22,    23,   106,
     107,   125,   106,   106,   106,     6,     7,    34,    36,    63,
      67,    68,    92,    93,   125,    39,     7,    13,     6,     7,
      34,   118,   119,     7,   124,   125,    34,    66,   104,   125,
       6,     7,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    65,
      66,    67,    77,    83,   103,   102,   103,    14,    15,    16,
      17,    18,    19,    20,    21,    28,    29,    30,    31,    32,
      33,    37,    90,     7,   105,    90,    96,     7,    59,    91,
      34,    29,    66,    86,    90,    96,    86,    96,    34,   104,
      13,     7,     7,    94,   109,   110,    94,    95,    98,    13,
      39,     7,   105,     7,   105,    34,     5,    94,    99,     7,
       7,    99,   105,    34,    88,    90,    34,   122,   123,    88,
      90,    96,     7,    88,    90,    88,    88,    34,    34,     7,
      35,    94,   100,    22,    23,    38,    66,     7,    22,    23,
       7,     7,     7,   103,   102,    22,    23,     7,     7,    38,
      66,    73,   104,     7,    94,    98,     7,     7,   103,   102,
     103,    35,    65,    65,     7,   105,    34,    38,   104,   119,
      35,    14,    15,    16,    17,    18,    21,    28,    29,    30,
      31,    32,    33,    34,    35,    28,    29,    30,    31,    32,
      33,    92,     7,    35,    83,    67,    68,    68,   102,   103,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,    13,    90,    35,    34,    92,     5,
       7,    28,    94,    97,     7,    29,    96,    88,    96,    92,
      34,    21,     7,    35,    13,     4,    94,    90,     7,   105,
      13,    35,   100,    99,     7,    94,    99,   105,    34,    90,
      96,    13,    34,    35,   100,   124,    88,    90,    66,    90,
      88,    35,   100,    35,   100,     7,    38,   101,    38,   101,
      35,     6,     7,    22,    23,     7,     7,    34,   104,    67,
      68,     6,     7,    39,     7,     7,   104,    35,    90,    34,
      67,    67,    68,    68,    13,    92,    92,    13,    92,     6,
      34,    90,   119,   119,   119,   119,   119,   119,   125,   125,
     125,   125,   125,   125,    92,    90,   125,   125,   125,   125,
     125,   125,    35,    34,    36,   100,    35,    65,    65,    65,
      28,    90,    28,    97,    35,    35,    92,     6,     7,    21,
      90,   111,   118,    94,    13,    35,    34,     7,    13,   105,
       7,   105,    34,    35,   100,    90,    35,   100,    35,    35,
      88,     7,    88,    35,    35,    38,    39,    65,    39,    65,
      39,    34,    35,    92,    39,    39,    65,     7,    67,    37,
      35,    92,    65,    65,    65,    35,    39,    35,   104,    92,
      57,   115,    35,    97,    97,    97,    88,    28,    13,    35,
      65,    65,     6,     7,    13,    35,   100,    13,     7,    13,
     105,    35,   100,    35,    35,    90,    90,    39,   101,   100,
     101,   100,   104,    35,    92,   104,    35,    92,    38,     7,
      65,    35,    92,    92,    92,   104,   104,    35,     6,     7,
      67,    68,    78,   116,    90,    13,   110,   110,    65,    65,
     105,   112,    35,    13,    35,    88,    65,    65,   104,    35,
     104,    39,    67,    92,    65,    77,    77,   103,   103,    90,
      37,    91,   110,   110,    65,   100,   100,   104,    92,    90,
     114,    90,   114,    67,    68,   112,    90,   115,   115,    77,
      77,    90,   114,    90,   114,   115,   115
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    85,    86,    86,    86,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    99,    99,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   101,   101,   101,   102,
     102,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   104,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   106,   106,
     106,   106,   106,   106,   107,   107,   108,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   112,   112,
     112,   113,   114,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   116,   117,   118,   118,   118,   118,   118,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   120,   120,   120,   120,   121,   122,   122,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     5,     1,     2,     2,     3,     0,     2,
       0,     3,     4,     5,     8,     6,     5,     4,     5,     5,
       6,     7,     9,     5,     6,     6,     7,     0,     2,     0,
       3,     3,     4,     4,     5,     4,     3,     5,     4,     6,
       5,     6,     5,     7,     6,     3,     4,     3,     3,     4,
       5,     3,     2,     3,     3,     3,     5,     5,     4,     2,
       4,     5,     4,     2,     2,     1,     3,     1,     1,     1,
       1,     3,     6,     7,     2,     2,     2,     2,     3,     6,
       2,     2,     2,     6,     5,     0,     2,     4,     4,     3,
       1,     3,     4,     4,     5,     6,     7,     3,     3,     3,
       5,     5,     5,     3,     5,     3,     1,     0,     1,     1,
       3,     3,     4,     6,     6,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     4,     4,     5,     4,
       2,     3,     5,     6,     3,     3,     3,     1,     1,     1,
       0,     4,     5,     4,     5,     6,     5,     4,     5,     4,
       5,     6,     5,     5,     6,     4,     6,     7,     5,     5,
       6,     4,     6,     7,     5,     1,     2,     0,     6,     4,
       4,     2,     6,     4,     4,     2,     0,     1,     3,     2,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     6,     6,     3,
       6,     7,     8,     9,     5,     5,     5,     5,     7,     8,
       5,     5,     5,     5,     4,     3,     4,     4,     4,     4,
       2,     2,     2,     2,     3,     3,     3,     3,     1,     1,
       2,     2,     2,     2,     1,     1,     5,     5,     0,     5,
       5,     6,     6,     3,     4,     3,     4,     1,     0,     3,
       1,     8,     0,     2,     1,     7,     7,     5,     5,     6,
       6,     4,     4,     2,     5,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     3,     2,     2,     1,     5,     2,     5,     2,     0,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     6,     2,     3,     3,     3,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
      
#line 2175 "mydir/y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 852 "parse.yacc" /* yacc.c:1906  */
