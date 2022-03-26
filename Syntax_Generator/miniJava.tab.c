
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "miniJava.y"

    #include <stdio.h>

	//int yyerror(char const *msg);
	int yylex(void);
	extern int yylineno;
	extern int i;


/* Line 189 of yacc.c  */
#line 83 "miniJava.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     TYPE_INT = 259,
     TYPE_BOOLEAN = 260,
     TYPE_STRING = 261,
     BOOLEAN_LITERAL = 262,
     INTEGER_LITERAL = 263,
     STRING_LITERAL = 264,
     KEYWORD_CLASS = 265,
     KEYWORD_PUBLIC = 266,
     KEYWORD_MAIN = 267,
     KEYWORD_EXTENDS = 268,
     KEYWORD_RETURN = 269,
     KEYWORD_IF = 270,
     KEYWORD_ELSE = 271,
     KEYWORD_WHILE = 272,
     KEYWORD_PRINT = 273,
     KEYWORD_LENGTH = 274,
     KEYWORD_THIS = 275,
     KEYWORD_NEW = 276,
     PARENTHESE_OPEN = 277,
     PARENTHESE_CLOSE = 278,
     BRACKET_OPEN = 279,
     BRACKET_CLOSE = 280,
     BRACE_OPEN = 281,
     BRACE_CLOSE = 282,
     OP_AFFECT = 283,
     OP_AND = 284,
     OP_LESS = 285,
     OP_ADD = 286,
     OP_SUBSTRACT = 287,
     OP_MULTIPLY = 288,
     OP_NOT = 289,
     SEMI_COLON = 290,
     DOT = 291,
     COMMA = 292
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 162 "miniJava.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   476

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNRULES -- Number of states.  */
#define YYNSTATES  329

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    15,    19,    35,    51,
      67,    83,    99,   102,   104,   105,   109,   118,   127,   136,
     145,   152,   159,   166,   173,   176,   178,   179,   182,   185,
     189,   191,   195,   198,   201,   204,   206,   207,   211,   223,
     235,   247,   259,   270,   282,   294,   297,   299,   302,   306,
     308,   310,   312,   314,   318,   322,   326,   328,   331,   333,
     337,   341,   349,   357,   363,   369,   375,   379,   385,   391,
     395,   401,   407,   413,   418,   423,   428,   433,   441,   449,
     457,   465,   468,   471,   474,   477,   480,   487,   494,   501,
     507,   513,   520,   527,   531,   536,   541,   545,   550,   555,
     559,   566,   573,   580,   587,   593,   599,   605,   611,   612,
     616,   618,   622,   624,   626,   628,   630,   632
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    40,    41,    -1,    40,    -1,     1,    41,
      -1,    40,     1,    41,    -1,    40,    41,     1,    -1,    10,
      57,    26,    11,    12,    22,     6,    24,    25,     3,    23,
      26,    49,    27,    27,    -1,     1,    57,    26,    11,    12,
      22,     6,    24,    25,     3,    23,    26,    49,    27,    27,
      -1,    10,     1,    26,    11,    12,    22,     6,    24,    25,
       3,    23,    26,    49,    27,    27,    -1,    10,    57,    26,
      11,    12,    22,     6,    24,    25,     3,    23,    26,    49,
       1,    27,    -1,    10,    57,    26,    11,    12,    22,     6,
      24,    25,     3,    23,    26,    49,    27,     1,    -1,    42,
      41,    -1,    42,    -1,    -1,    42,     1,    41,    -1,    10,
      57,    13,    57,    26,    43,    47,    27,    -1,     1,    57,
      13,    57,    26,    43,    47,    27,    -1,    10,    57,    13,
       1,    26,    43,    47,    27,    -1,    10,    57,    13,    57,
      26,    43,    47,     1,    -1,    10,    57,    26,    43,    47,
      27,    -1,     1,    57,    26,    43,    47,    27,    -1,    10,
       1,    26,    43,    47,    27,    -1,    10,    57,    26,    43,
      47,     1,    -1,    44,    43,    -1,    44,    -1,    -1,    46,
      35,    -1,    46,     1,    -1,    46,    37,    45,    -1,    46,
      -1,    46,     1,    45,    -1,    50,    57,    -1,    50,     1,
      -1,    48,    47,    -1,    48,    -1,    -1,    48,     1,    47,
      -1,    11,    46,    22,    45,    23,    26,    49,    14,    53,
      35,    27,    -1,     1,    46,    22,    45,    23,    26,    49,
      14,    53,    35,    27,    -1,    11,     1,    22,    45,    23,
      26,    49,    14,    53,    35,    27,    -1,    11,    46,    22,
      45,     1,    26,    49,    14,    53,    35,    27,    -1,    11,
      46,    22,    45,    23,    26,    49,     1,    35,    27,    -1,
      11,    46,    22,    45,    23,    26,    49,    14,    53,     1,
      27,    -1,    11,    46,    22,    45,    23,    26,    49,    14,
      53,    35,     1,    -1,    43,    51,    -1,    51,    -1,     1,
      43,    -1,     4,    24,    25,    -1,     5,    -1,     4,    -1,
       6,    -1,    57,    -1,     4,    24,     1,    -1,     1,    24,
      25,    -1,     4,     1,    25,    -1,     1,    -1,    52,    51,
      -1,    52,    -1,    26,    51,    27,    -1,    26,    51,     1,
      -1,    15,    22,    53,    23,    52,    16,    52,    -1,    15,
      22,    53,     1,    52,    16,    52,    -1,    15,     1,    52,
      16,    52,    -1,    15,    22,    53,    23,    52,    -1,    15,
      22,    53,     1,    52,    -1,    15,     1,    52,    -1,    17,
      22,    53,    23,    52,    -1,    17,    22,    53,     1,    52,
      -1,    17,     1,    52,    -1,    18,    22,    53,    23,    35,
      -1,    18,    22,    53,    23,     1,    -1,    18,    22,    53,
       1,    35,    -1,    57,    28,    53,    35,    -1,    57,    28,
      53,     1,    -1,    57,    28,     1,    35,    -1,    57,     1,
      53,    35,    -1,    57,    24,    53,    25,    28,    53,    35,
      -1,    57,    24,    53,     1,    28,    53,    35,    -1,    57,
      24,    53,    25,     1,    53,    35,    -1,    57,    24,    53,
      25,    28,    53,     1,    -1,     8,    54,    -1,     7,    54,
      -1,     9,    54,    -1,    57,    54,    -1,    20,    54,    -1,
      21,     4,    24,    53,    25,    54,    -1,    21,     1,    24,
      53,    25,    54,    -1,    21,     4,    24,    53,     1,    54,
      -1,    21,    57,    22,    23,    54,    -1,    21,    57,    22,
       1,    54,    -1,    21,    57,    22,    55,    23,    54,    -1,
      21,    57,    22,    55,     1,    54,    -1,    34,    53,    54,
      -1,    22,    53,    23,    54,    -1,    22,    53,     1,    54,
      -1,    56,    53,    54,    -1,    24,    53,    25,    54,    -1,
      24,    53,     1,    54,    -1,    36,    19,    54,    -1,    36,
      57,    22,    55,    23,    54,    -1,    36,     1,    22,    55,
      23,    54,    -1,    36,    57,     1,    55,    23,    54,    -1,
      36,    57,    22,    55,     1,    54,    -1,    36,    57,    22,
      23,    54,    -1,    36,     1,    22,    23,    54,    -1,    36,
      57,     1,    23,    54,    -1,    36,    57,    22,     1,    54,
      -1,    -1,    53,    37,    55,    -1,    53,    -1,    53,     1,
      55,    -1,    31,    -1,    29,    -1,    30,    -1,    33,    -1,
      32,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    57,    58,    59,    60,    62,    63,    64,
      65,    66,    68,    69,    70,    71,    73,    74,    75,    76,
      77,    78,    79,    80,    82,    83,    84,    86,    87,    89,
      90,    91,    93,    94,    96,    97,    98,    99,   101,   102,
     103,   104,   105,   106,   107,   109,   110,   111,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   123,   124,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   179,
     180,   181,   183,   184,   185,   186,   187,   189
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_INT", "TYPE_BOOLEAN",
  "TYPE_STRING", "BOOLEAN_LITERAL", "INTEGER_LITERAL", "STRING_LITERAL",
  "KEYWORD_CLASS", "KEYWORD_PUBLIC", "KEYWORD_MAIN", "KEYWORD_EXTENDS",
  "KEYWORD_RETURN", "KEYWORD_IF", "KEYWORD_ELSE", "KEYWORD_WHILE",
  "KEYWORD_PRINT", "KEYWORD_LENGTH", "KEYWORD_THIS", "KEYWORD_NEW",
  "PARENTHESE_OPEN", "PARENTHESE_CLOSE", "BRACKET_OPEN", "BRACKET_CLOSE",
  "BRACE_OPEN", "BRACE_CLOSE", "OP_AFFECT", "OP_AND", "OP_LESS", "OP_ADD",
  "OP_SUBSTRACT", "OP_MULTIPLY", "OP_NOT", "SEMI_COLON", "DOT", "COMMA",
  "$accept", "Program", "MainClass", "ClassDeclarationS",
  "ClassDeclaration", "VarDeclarationS", "VarDeclaration", "VariableS",
  "Variable", "MethodDeclarationS", "MethodDeclaration", "MethodBody",
  "Type", "StatementS", "Statement", "Expression", "ExpressionComp",
  "ExpressionS", "Operator", "Identifier", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    39,    39,    39,    39,    40,    40,    40,
      40,    40,    41,    41,    41,    41,    42,    42,    42,    42,
      42,    42,    42,    42,    43,    43,    43,    44,    44,    45,
      45,    45,    46,    46,    47,    47,    47,    47,    48,    48,
      48,    48,    48,    48,    48,    49,    49,    49,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    51,    51,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    55,
      55,    55,    56,    56,    56,    56,    56,    57
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     3,     3,    15,    15,    15,
      15,    15,     2,     1,     0,     3,     8,     8,     8,     8,
       6,     6,     6,     6,     2,     1,     0,     2,     2,     3,
       1,     3,     2,     2,     2,     1,     0,     3,    11,    11,
      11,    11,    10,    11,    11,     2,     1,     2,     3,     1,
       1,     1,     1,     3,     3,     3,     1,     2,     1,     3,
       3,     7,     7,     5,     5,     5,     3,     5,     5,     3,
       5,     5,     5,     4,     4,     4,     4,     7,     7,     7,
       7,     2,     2,     2,     2,     2,     6,     6,     6,     5,
       5,     6,     6,     3,     4,     4,     3,     4,     4,     3,
       6,     6,     6,     6,     5,     5,     5,     5,     0,     3,
       1,     3,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,   117,     0,     4,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     5,     6,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,    56,     0,    49,    51,
       0,     0,     0,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    28,    27,    33,    32,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    53,    48,     0,    56,     0,
      21,     0,    34,    22,     0,     0,    23,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,    18,    19,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    58,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,    45,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,   108,
     108,   108,   108,     0,     0,     0,     0,   108,    69,     0,
       0,    60,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
     112,   116,   115,     0,    82,     0,    81,    83,    85,     0,
       0,     0,     0,   108,     0,     0,    84,     0,     0,     0,
       0,     0,    76,     0,     0,    75,    74,    73,     0,     0,
      42,     0,     0,     8,     9,    10,    11,     7,    63,     0,
       0,   108,     0,   108,     0,     0,     0,   108,   108,    93,
      65,    64,    68,    67,    72,    71,    70,    39,     0,     0,
       0,    40,    41,    43,    44,    38,   108,   108,     0,    99,
       0,     0,    96,     0,     0,   108,   108,     0,     0,    95,
      94,     0,     0,     0,     0,     0,    98,    97,   108,     0,
     108,     0,   108,   108,     0,   108,   108,   108,    90,    89,
       0,     0,   108,   108,    62,    61,    78,    79,    80,    77,
     105,   108,   106,   108,   107,   104,   108,   108,    87,    88,
      86,   111,   109,    92,    91,   101,   102,   103,   100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     8,     9,   136,    41,   103,    42,    58,
      59,   137,    43,   138,   139,   277,   204,   278,   205,   177
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -170
static const yytype_int16 yypact[] =
{
     110,   329,   221,    12,   371,    55,  -170,   291,  -170,   392,
      -9,    38,    47,  -170,   329,   167,    57,   124,    93,   329,
    -170,   111,   148,   151,  -170,  -170,    55,   332,   332,   297,
     332,  -170,   161,   175,   179,   201,   207,   359,  -170,  -170,
      68,   301,     2,   381,  -170,    68,   208,   213,    68,   245,
     253,   262,   332,   264,   295,   108,   403,   409,   304,    89,
    -170,  -170,  -170,  -170,  -170,   315,   332,   332,     4,   339,
     340,   343,    68,  -170,  -170,  -170,  -170,   335,   394,   345,
    -170,   347,  -170,  -170,    68,    68,  -170,  -170,   349,   352,
     355,   374,   403,   403,   403,   237,  -170,   378,    33,   369,
     386,   395,  -170,   396,    13,   398,     1,  -170,  -170,  -170,
     414,   419,   420,   399,   403,   403,   400,   401,   402,   406,
     407,   408,   360,  -170,  -170,   360,   360,   360,   410,   411,
     412,   320,   196,   261,   413,   186,   186,   418,  -170,   186,
     136,   425,   426,   147,   360,   360,   360,  -170,   186,   120,
     186,   120,   120,    51,    29,  -170,   120,  -170,   120,   120,
     185,   120,   120,   389,   120,   415,   416,    60,   417,   367,
     367,   367,   367,   114,   120,   120,    22,   367,  -170,   135,
     197,  -170,  -170,   421,   422,   150,   423,     6,   424,   427,
     428,     9,   433,   434,   436,    80,   186,   120,  -170,  -170,
    -170,  -170,  -170,   250,  -170,   120,  -170,  -170,  -170,   429,
     430,   442,   209,   367,   186,   186,  -170,   186,   186,   431,
      14,   438,  -170,   439,    15,  -170,  -170,  -170,   441,   443,
    -170,   444,    81,  -170,  -170,  -170,  -170,  -170,  -170,   154,
     447,   367,   281,   367,   120,   120,   162,   367,   367,  -170,
     432,   435,  -170,  -170,  -170,  -170,  -170,  -170,   120,   120,
     120,  -170,  -170,  -170,  -170,  -170,   367,   367,   256,  -170,
     288,   265,  -170,   448,   165,   367,   367,    61,   210,  -170,
    -170,   186,   186,   437,   440,    19,  -170,  -170,   367,   451,
     367,   453,   367,   367,   214,   367,   367,   367,  -170,  -170,
     120,   120,   367,   367,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,   367,  -170,   367,  -170,  -170,   367,   367,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,  -170,   376,  -170,   -19,  -170,    63,   -18,   -13,
    -170,   243,  -170,   178,  -129,    96,   -67,  -169,  -170,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -111
static const yytype_int16 yytable[] =
{
      10,    12,   117,    61,    16,    86,    18,   226,    40,    45,
     231,    48,    13,    16,   114,   255,   259,    21,    16,   168,
     308,   178,    60,   214,   118,    35,    44,    44,    47,    44,
     158,    87,    65,    72,   108,    68,   -30,    62,    77,    79,
      44,   227,    64,   260,   232,   215,    82,    84,    85,   256,
     115,    44,   181,   159,   309,    44,    44,   160,     6,    91,
     109,   194,   300,    77,    22,    44,    44,   238,    96,    56,
      26,    97,    98,    23,   104,   104,   104,    77,   182,    57,
      44,   236,   264,    27,  -110,   250,   251,   195,   252,   253,
      81,    44,    44,    44,    44,   -36,   104,   104,   301,   289,
      57,   291,   294,   206,   207,   208,    29,   237,   265,    75,
     216,     1,   147,    44,    44,   209,   -35,     6,   210,    30,
       2,   140,    32,     6,   140,   140,   140,   169,   170,   171,
      44,   321,   322,    76,   154,   154,   217,   158,   154,   -52,
     172,   173,   174,   140,   140,   140,   249,   154,   163,   154,
      28,   223,   304,   305,   175,   266,   105,   106,   218,    33,
     159,   164,    34,   275,   160,     6,   296,    -2,    25,   169,
     170,   171,   211,    49,   269,   224,   272,   123,   124,   267,
     279,   280,   172,   173,   174,   276,   186,    50,     6,     6,
     297,    51,   169,   170,   171,   154,   175,   148,   219,   286,
     287,   132,   242,   133,   134,   172,   173,   174,   298,   299,
     247,   302,   135,   154,   154,   316,   154,   154,   149,   175,
     220,   310,    11,   312,     6,   314,   315,    52,   318,   319,
     320,    53,   248,   303,    66,   323,   324,   317,    36,    67,
       6,    37,    38,    39,   325,   176,   326,   179,   180,   327,
     328,   240,   183,     6,   184,   185,   187,   188,   189,     6,
     191,    53,   150,   169,   170,   171,   292,    69,     6,   241,
     212,   213,   169,   170,   171,    70,   172,   173,   174,   288,
     154,   154,   270,   151,    71,   172,   173,   174,   293,    73,
     175,     6,    17,   239,     6,   169,   170,   171,    46,   175,
       6,   243,    36,   271,     6,    37,    38,    39,   172,   173,
     174,   290,   -25,   153,   155,   -25,   -25,   157,   -25,   -25,
      74,    36,   175,     6,    37,    38,    39,   -25,   -25,   -14,
       5,    80,     6,    36,   -26,     6,    37,    38,    39,     7,
     273,   274,    83,   -26,    53,    88,    89,   -26,    95,    90,
       6,    37,    38,    39,   283,   284,   285,    92,    57,   -26,
      54,   131,   -50,     6,    37,    38,    39,    94,   141,   142,
     143,    -3,    14,    99,   -36,   132,   100,   133,   134,   101,
      15,     7,    63,    55,     6,    20,   135,   165,   166,   167,
      24,   197,   -13,    19,   110,    31,   198,   199,   200,   201,
     202,   102,     7,   203,    36,   107,     6,    37,    38,    39,
      78,   111,     6,    37,    38,    39,    93,   119,    53,   113,
     112,   116,   120,   121,   190,   122,   125,   126,   127,   128,
     129,   130,   156,   196,     0,   152,   144,   145,   146,   161,
     162,     0,   192,   193,     0,     0,     0,     0,   281,     0,
       0,   282,     0,   244,   245,   230,   221,   222,   225,   228,
     233,   234,   229,   235,   246,   257,   254,   258,   261,   268,
     262,   263,   306,   295,   311,   307,   313
};

static const yytype_int16 yycheck[] =
{
       1,     2,     1,     1,     5,     1,     7,     1,    27,    28,
       1,    30,     0,    14,     1,     1,     1,    26,    19,   148,
       1,   150,    41,     1,    23,    26,    27,    28,    29,    30,
       1,    27,    45,    52,     1,    48,    23,    35,    56,    57,
      41,    35,    43,    28,    35,    23,    59,    66,    67,    35,
      37,    52,     1,    24,    35,    56,    57,    28,     3,    72,
      27,     1,     1,    81,    26,    66,    67,   196,    81,     1,
      13,    84,    85,    26,    92,    93,    94,    95,    27,    11,
      81,     1,     1,    26,    23,   214,   215,    27,   217,   218,
       1,    92,    93,    94,    95,    27,   114,   115,    37,   268,
      11,   270,   271,   170,   171,   172,    13,    27,    27,     1,
     177,     1,   131,   114,   115,     1,    27,     3,     4,    26,
      10,   122,    11,     3,   125,   126,   127,     7,     8,     9,
     131,   300,   301,    25,   135,   136,     1,     1,   139,     3,
      20,    21,    22,   144,   145,   146,   213,   148,     1,   150,
      26,     1,   281,   282,    34,     1,    93,    94,    23,    11,
      24,    14,    11,     1,    28,     3,     1,     0,     1,     7,
       8,     9,   173,    12,   241,    25,   243,   114,   115,    25,
     247,   248,    20,    21,    22,    23,     1,    12,     3,     3,
      25,    12,     7,     8,     9,   196,    34,     1,     1,   266,
     267,    15,   203,    17,    18,    20,    21,    22,   275,   276,
       1,     1,    26,   214,   215,     1,   217,   218,    22,    34,
      23,   288,     1,   290,     3,   292,   293,    26,   295,   296,
     297,    24,    23,    23,    26,   302,   303,    23,     1,    26,
       3,     4,     5,     6,   311,   149,   313,   151,   152,   316,
     317,     1,   156,     3,   158,   159,   160,   161,   162,     3,
     164,    24,     1,     7,     8,     9,     1,    22,     3,    19,
     174,   175,     7,     8,     9,    22,    20,    21,    22,    23,
     281,   282,     1,    22,    22,    20,    21,    22,    23,    25,
      34,     3,     1,   197,     3,     7,     8,     9,     1,    34,
       3,   205,     1,    22,     3,     4,     5,     6,    20,    21,
      22,    23,    11,   135,   136,    14,    15,   139,    17,    18,
      25,     1,    34,     3,     4,     5,     6,    26,    27,     0,
       1,    27,     3,     1,    14,     3,     4,     5,     6,    10,
     244,   245,    27,    11,    24,     6,     6,    27,     1,     6,
       3,     4,     5,     6,   258,   259,   260,    22,    11,    27,
       1,     1,     3,     3,     4,     5,     6,    22,   125,   126,
     127,     0,     1,    24,    27,    15,    24,    17,    18,    24,
       4,    10,     1,    24,     3,     9,    26,   144,   145,   146,
      14,    24,     0,     1,    25,    19,    29,    30,    31,    32,
      33,    27,    10,    36,     1,    27,     3,     4,     5,     6,
       1,    25,     3,     4,     5,     6,    22,     3,    24,    23,
      25,    23,     3,     3,    35,    26,    26,    26,    26,    23,
      23,    23,    14,    16,    -1,    22,    26,    26,    26,    14,
      14,    -1,    27,    27,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    16,    -1,    24,    24,    27,    35,    35,    35,    35,
      27,    27,    35,    27,    22,    27,    35,    28,    27,    22,
      27,    27,    35,    25,    23,    35,    23
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    10,    39,    40,     1,     3,    10,    41,    42,
      57,     1,    57,     0,     1,    41,    57,     1,    57,     1,
      41,    26,    26,    26,    41,     1,    13,    26,    26,    13,
      26,    41,    11,    11,    11,    57,     1,     4,     5,     6,
      43,    44,    46,    50,    57,    43,     1,    57,    43,    12,
      12,    12,    26,    24,     1,    24,     1,    11,    47,    48,
      43,     1,    35,     1,    57,    47,    26,    26,    47,    22,
      22,    22,    43,    25,    25,     1,    25,    46,     1,    46,
      27,     1,    47,    27,    43,    43,     1,    27,     6,     6,
       6,    47,    22,    22,    22,     1,    47,    47,    47,    24,
      24,    24,    27,    45,    46,    45,    45,    27,     1,    27,
      25,    25,    25,    23,     1,    37,    23,     1,    23,     3,
       3,     3,    26,    45,    45,    26,    26,    26,    23,    23,
      23,     1,    15,    17,    18,    26,    43,    49,    51,    52,
      57,    49,    49,    49,    26,    26,    26,    43,     1,    22,
       1,    22,    22,    51,    57,    51,    14,    51,     1,    24,
      28,    14,    14,     1,    14,    49,    49,    49,    52,     7,
       8,     9,    20,    21,    22,    34,    53,    57,    52,    53,
      53,     1,    27,    53,    53,    53,     1,    53,    53,    53,
      35,    53,    27,    27,     1,    27,    16,    24,    29,    30,
      31,    32,    33,    36,    54,    56,    54,    54,    54,     1,
       4,    57,    53,    53,     1,    23,    54,     1,    23,     1,
      23,    35,    35,     1,    25,    35,     1,    35,    35,    35,
      27,     1,    35,    27,    27,    27,     1,    27,    52,    53,
       1,    19,    57,    53,    24,    24,    22,     1,    23,    54,
      52,    52,    52,    52,    35,     1,    35,    27,    28,     1,
      28,    27,    27,    27,     1,    27,     1,    25,    22,    54,
       1,    22,    54,    53,    53,     1,    23,    53,    55,    54,
      54,    16,    16,    53,    53,    53,    54,    54,    23,    55,
      23,    55,     1,    23,    55,    25,     1,    25,    54,    54,
       1,    37,     1,    23,    52,    52,    35,    35,     1,    35,
      54,    23,    54,    23,    54,    54,     1,    23,    54,    54,
      54,    55,    55,    54,    54,    54,    54,    54,    54
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 58 "miniJava.y"
    {syntaxerror ("main class missing"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 59 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 60 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 63 "miniJava.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 64 "miniJava.y"
    {syntaxerror ("class identifier missing"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 65 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 66 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 71 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 74 "miniJava.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 75 "miniJava.y"
    {syntaxerror ("parent class identifier missing"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 76 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 78 "miniJava.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 79 "miniJava.y"
    {syntaxerror ("class identifier missing"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 80 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 87 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 91 "miniJava.y"
    {syntaxerror ("comma missing"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 94 "miniJava.y"
    {syntaxerror("invalid identifier"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 99 "miniJava.y"
    {syntaxerror ("code out of method"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 102 "miniJava.y"
    {syntaxerror ("public keyword missing"); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 103 "miniJava.y"
    {syntaxerror ("method name missing"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 104 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 105 "miniJava.y"
    {syntaxerror ("return keyword missing"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 106 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 107 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 111 "miniJava.y"
    {syntaxerror ("variable declaration not first"); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 118 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 119 "miniJava.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 120 "miniJava.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 121 "miniJava.y"
    {syntaxerror ("invalid type"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 127 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 129 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 130 "miniJava.y"
    {syntaxerror ("if condition missing"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 132 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 133 "miniJava.y"
    {syntaxerror ("if condition missing"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 135 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 136 "miniJava.y"
    {syntaxerror ("while condition missing"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 138 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 139 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 141 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 142 "miniJava.y"
    {syntaxerror ("second expression missing"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 143 "miniJava.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 145 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 146 "miniJava.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 147 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 155 "miniJava.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 156 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 158 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 160 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 163 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 167 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 170 "miniJava.y"
    {syntaxerror("invalid identifier"); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 171 "miniJava.y"
    {syntaxerror("opening parentheses missing"); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 172 "miniJava.y"
    {syntaxerror("closing parentheses missing"); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 174 "miniJava.y"
    {syntaxerror("invalid identifier"); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 175 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 176 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 181 "miniJava.y"
    {syntaxerror ("comma missing"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2055 "miniJava.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 194 "miniJava.y"

/*
int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
}
*/
extern FILE *yyin;

int main(int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);
    	printf("------------------------------\n");
	if(i==0)
        printf("Compilation complete with no errors\n------------------------------\n");
    else
        printf("%d errors found\n------------------------------\n",i);
	return(1);
    return 0;
}



