
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   597

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  395

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
       0,     0,     3,     6,     8,    11,    15,    19,    23,    39,
      56,    72,    88,   104,   120,   136,   139,   141,   142,   146,
     155,   164,   173,   182,   189,   196,   203,   210,   213,   215,
     216,   220,   224,   228,   230,   234,   237,   240,   242,   243,
     247,   251,   263,   276,   288,   300,   312,   323,   335,   347,
     359,   361,   364,   367,   371,   373,   375,   377,   381,   385,
     389,   392,   394,   395,   399,   403,   411,   419,   425,   431,
     437,   441,   447,   453,   457,   463,   469,   475,   480,   485,
     490,   495,   503,   511,   519,   527,   530,   533,   536,   539,
     542,   549,   556,   563,   569,   575,   582,   589,   593,   598,
     603,   607,   612,   617,   621,   626,   633,   640,   647,   654,
     660,   666,   672,   678,   679,   683,   685,   689,   694,   696,
     698,   700,   702,   704
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    40,    41,    -1,    40,    -1,     1,    41,
      -1,     1,    40,    41,    -1,    40,     1,    41,    -1,    40,
      41,     1,    -1,    10,    57,    26,    11,    12,    22,     6,
      24,    25,     3,    23,    26,    49,    27,    27,    -1,    10,
      57,    26,     1,    11,    12,    22,     6,    24,    25,     3,
      23,    26,    49,    27,    27,    -1,    10,    57,    26,     1,
      12,    22,     6,    24,    25,     3,    23,    26,    49,    27,
      27,    -1,     1,    57,    26,    11,    12,    22,     6,    24,
      25,     3,    23,    26,    49,    27,    27,    -1,    10,     1,
      26,    11,    12,    22,     6,    24,    25,     3,    23,    26,
      49,    27,    27,    -1,    10,    57,    26,    11,    12,    22,
       6,    24,    25,     3,    23,    26,    49,     1,    27,    -1,
      10,    57,    26,    11,    12,    22,     6,    24,    25,     3,
      23,    26,    49,    27,     1,    -1,    42,    41,    -1,    42,
      -1,    -1,    42,     1,    41,    -1,    10,    57,    13,    57,
      26,    43,    47,    27,    -1,     1,    57,    13,    57,    26,
      43,    47,    27,    -1,    10,    57,    13,     1,    26,    43,
      47,    27,    -1,    10,    57,    13,    57,    26,    43,    47,
       1,    -1,    10,    57,    26,    43,    47,    27,    -1,     1,
      57,    26,    43,    47,    27,    -1,    10,     1,    26,    43,
      47,    27,    -1,    10,    57,    26,    43,    47,     1,    -1,
      44,    43,    -1,    44,    -1,    -1,    50,    57,    35,    -1,
      50,    57,     1,    -1,    46,    37,    45,    -1,    46,    -1,
      46,     1,    45,    -1,    50,    57,    -1,    48,    47,    -1,
      48,    -1,    -1,    48,     1,    47,    -1,    48,    47,     1,
      -1,    11,    46,    22,    45,    23,    26,    49,    14,    53,
      35,    27,    -1,     1,    11,    46,    22,    45,    23,    26,
      49,    14,    53,    35,    27,    -1,     1,    46,    22,    45,
      23,    26,    49,    14,    53,    35,    27,    -1,    11,     1,
      22,    45,    23,    26,    49,    14,    53,    35,    27,    -1,
      11,    46,    22,    45,     1,    26,    49,    14,    53,    35,
      27,    -1,    11,    46,    22,    45,    23,    26,    49,     1,
      35,    27,    -1,    11,    46,    22,    45,    23,    26,    49,
      14,    53,     1,    27,    -1,    11,    46,    22,    45,    23,
      26,    49,    14,    53,    35,     1,    -1,    11,    46,    22,
      45,    23,     1,    49,    14,    53,    35,    27,    -1,    51,
      -1,    43,    51,    -1,     1,    43,    -1,     4,    24,    25,
      -1,     5,    -1,     4,    -1,     6,    -1,     4,    24,     1,
      -1,     1,    24,    25,    -1,     4,     1,    25,    -1,    52,
      51,    -1,    52,    -1,    -1,    26,    51,    27,    -1,    26,
      51,     1,    -1,    15,    22,    53,    23,    51,    16,    51,
      -1,    15,    22,    53,     1,    52,    16,    52,    -1,    15,
       1,    51,    16,    52,    -1,    15,    22,    53,    23,    51,
      -1,    15,    22,    53,     1,    52,    -1,    15,     1,    51,
      -1,    17,    22,    53,    23,    51,    -1,    17,    22,    53,
       1,    51,    -1,    17,     1,    52,    -1,    18,    22,    53,
      23,    35,    -1,    18,    22,    53,    23,     1,    -1,    18,
      22,    53,     1,    35,    -1,    57,    28,    53,    35,    -1,
      57,    28,    53,     1,    -1,    57,    28,     1,    35,    -1,
      57,     1,    53,    35,    -1,    57,    24,    53,    25,    28,
      53,    35,    -1,    57,    24,    53,     1,    28,    53,    35,
      -1,    57,    24,    53,    25,     1,    53,    35,    -1,    57,
      24,    53,    25,    28,    53,     1,    -1,     8,    54,    -1,
       7,    54,    -1,     9,    54,    -1,    57,    54,    -1,    20,
      54,    -1,    21,     4,    24,    53,    25,    54,    -1,    21,
       1,    24,    53,    25,    54,    -1,    21,     4,    24,    53,
       1,    54,    -1,    21,    57,    22,    23,    54,    -1,    21,
      57,    22,     1,    54,    -1,    21,    57,    22,    55,    23,
      54,    -1,    21,    57,    22,    55,     1,    54,    -1,    34,
      53,    54,    -1,    22,    53,    23,    54,    -1,    22,    53,
       1,    54,    -1,    56,    53,    54,    -1,    24,    53,    25,
      54,    -1,    24,    53,     1,    54,    -1,    36,    19,    54,
      -1,    36,     1,    19,    54,    -1,    36,    57,    22,    55,
      23,    54,    -1,    36,     1,    22,    55,    23,    54,    -1,
      36,    57,     1,    55,    23,    54,    -1,    36,    57,    22,
      55,     1,    54,    -1,    36,    57,    22,    23,    54,    -1,
      36,     1,    22,    23,    54,    -1,    36,    57,     1,    23,
      54,    -1,    36,    57,    22,     1,    54,    -1,    -1,    53,
      37,    55,    -1,    53,    -1,    53,     1,    55,    -1,    53,
      37,     1,    55,    -1,    31,    -1,    29,    -1,    30,    -1,
      33,    -1,    32,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    57,    58,    59,    60,    61,    63,    64,
      65,    66,    67,    68,    69,    71,    72,    73,    74,    76,
      77,    78,    79,    80,    81,    82,    83,    85,    86,    87,
      89,    90,    92,    93,    94,    96,    98,    99,   100,   101,
     102,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     114,   115,   116,   118,   119,   120,   121,   123,   124,   125,
     127,   128,   129,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   185,   186,   187,   188,   190,   191,
     192,   193,   194,   196
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
       0,    38,    39,    39,    39,    39,    39,    39,    40,    40,
      40,    40,    40,    40,    40,    41,    41,    41,    41,    42,
      42,    42,    42,    42,    42,    42,    42,    43,    43,    43,
      44,    44,    45,    45,    45,    46,    47,    47,    47,    47,
      47,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      49,    49,    49,    50,    50,    50,    50,    50,    50,    50,
      51,    51,    51,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    55,    55,    55,    55,    56,    56,
      56,    56,    56,    57
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     3,     3,     3,    15,    16,
      15,    15,    15,    15,    15,     2,     1,     0,     3,     8,
       8,     8,     8,     6,     6,     6,     6,     2,     1,     0,
       3,     3,     3,     1,     3,     2,     2,     1,     0,     3,
       3,    11,    12,    11,    11,    11,    10,    11,    11,    11,
       1,     2,     2,     3,     1,     1,     1,     3,     3,     3,
       2,     1,     0,     3,     3,     7,     7,     5,     5,     5,
       3,     5,     5,     3,     5,     5,     5,     4,     4,     4,
       4,     7,     7,     7,     7,     2,     2,     2,     2,     2,
       6,     6,     6,     5,     5,     6,     6,     3,     4,     4,
       3,     4,     4,     3,     4,     6,     6,     6,     6,     5,
       5,     5,     5,     0,     3,     1,     3,     4,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,   123,     0,     0,     4,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     5,     0,    15,     0,     0,     0,     6,     0,
       0,     0,     7,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    57,    53,     0,     0,
       0,     0,     0,    24,     0,     0,    31,    30,    25,     0,
       0,    26,    23,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,    21,    22,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    62,    62,     0,    50,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      62,     0,     0,     0,     0,     0,    51,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,   113,   113,   113,   113,     0,
       0,     0,     0,   113,    73,     0,     0,    64,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   118,   122,   121,     0,    86,     0,    85,    87,    89,
       0,     0,     0,     0,   113,     0,    62,    88,    62,    62,
       0,     0,     0,    80,     0,     0,    79,    78,    77,     0,
       0,     0,    46,     0,     0,     0,    11,    12,     0,    10,
      13,    14,     8,     0,    67,     0,     0,   113,     0,   113,
       0,     0,     0,   113,   113,    97,    69,    68,    72,    71,
      76,    75,    74,    43,     0,     0,     0,    44,    45,    49,
      47,    48,    41,     0,     9,    42,   113,   113,   113,     0,
     103,     0,     0,   100,     0,     0,   113,   113,     0,     0,
      99,    98,     0,    62,     0,     0,     0,     0,   102,   101,
     104,   113,     0,   113,     0,   113,   113,     0,   113,   113,
     113,    94,    93,     0,     0,   113,   113,    66,    65,    82,
      83,    84,    81,    41,   110,   113,   111,   113,   112,   109,
     113,   113,    91,    92,    90,   116,     0,   114,    96,    95,
     106,   107,   108,   105,   117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     9,    10,   173,    52,   127,   128,    70,
      71,   174,    53,   175,   176,   338,   255,   339,   256,   223
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -320
static const yytype_int16 yypact[] =
{
     347,   422,   335,    72,   310,    15,  -320,   423,   460,  -320,
     471,    80,    81,   139,  -320,   446,   504,    23,    95,   153,
     189,    15,  -320,   446,  -320,   185,   214,   238,  -320,   261,
     174,   263,  -320,    15,   127,   430,   505,   439,  -320,   219,
     273,   239,   278,   447,   447,   447,   229,   249,     2,  -320,
    -320,    91,   394,    15,    91,   304,   309,   340,    91,   318,
     321,   292,   328,   337,   447,   352,   356,   176,   498,   385,
     345,   123,  -320,    18,   361,   447,   447,    32,   396,   401,
     384,   404,   408,    91,  -320,  -320,  -320,  -320,   478,   397,
      15,   443,   406,  -320,   458,   122,  -320,  -320,  -320,    91,
      91,  -320,  -320,   409,   413,   436,   431,   444,   427,   469,
     478,  -320,   478,   478,   216,   385,  -320,  -320,   453,   128,
     467,   476,   486,   487,   488,  -320,   478,   491,    42,   492,
      55,   489,  -320,  -320,  -320,   513,   514,   493,   516,   517,
     499,   495,   478,   478,   497,   500,     8,   478,   501,   502,
     524,   506,   507,   508,   472,  -320,  -320,   472,   472,   472,
     472,   206,   509,   510,   515,   511,   518,   472,   121,    87,
     166,   519,   244,   244,   525,  -320,   244,    49,   526,   528,
     529,   282,    73,   412,   412,   520,   412,   412,   531,  -320,
     244,   190,   244,   190,   190,   141,  -320,   190,  -320,   190,
     190,   324,   190,   190,   190,   496,   190,   472,   521,   522,
     412,   523,   142,   190,   512,   464,   464,   464,   464,   400,
     190,   190,   222,   464,  -320,   225,   233,  -320,  -320,   527,
     530,   183,   532,    26,   533,   534,   535,   536,    29,   299,
     537,   539,   544,   545,   546,   143,   540,   244,   190,  -320,
    -320,  -320,  -320,  -320,   320,  -320,   190,  -320,  -320,  -320,
     550,   552,   538,   237,   464,   244,   244,  -320,   244,   244,
     542,    46,   551,  -320,   553,    20,  -320,  -320,  -320,   555,
     556,   557,  -320,   558,   160,   190,  -320,  -320,   559,  -320,
    -320,  -320,  -320,   560,  -320,   191,   290,   464,   172,   464,
     190,   190,   285,   464,   464,  -320,   541,   543,  -320,  -320,
    -320,  -320,  -320,  -320,   190,   190,   190,  -320,  -320,  -320,
    -320,  -320,  -320,    48,  -320,  -320,   464,   464,   464,   353,
    -320,   362,   294,  -320,   554,   194,   464,   464,    53,   240,
    -320,  -320,   244,   244,   561,   562,    70,   163,  -320,  -320,
    -320,   464,   565,   464,   566,   464,   464,   243,   464,   464,
     464,  -320,  -320,   190,   346,   464,   464,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,   464,  -320,   464,  -320,  -320,
     464,   464,  -320,  -320,  -320,  -320,   190,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,   579,   314,  -320,    -6,  -320,     4,   -52,    -3,
    -320,   -47,   -28,  -165,  -190,    78,  -123,  -319,  -320,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -116
static const yytype_int16 yytable[] =
{
      11,    13,   224,    66,    18,   -55,    20,   195,   196,   159,
     352,   198,   354,   357,    29,    31,    89,    92,     6,    96,
      29,   315,    29,    -2,    32,   214,    67,   277,    51,    54,
     283,    58,    46,   101,   160,    56,   109,    51,    54,    58,
      90,    90,    89,   142,   385,   387,    72,   311,   316,   283,
     199,    74,    73,    97,   363,    77,   145,   294,    83,   102,
      90,   278,    89,   131,   284,   -33,    90,   394,    95,    99,
     100,   371,    14,   200,   159,   306,  -115,   201,   146,   143,
     108,   312,    90,   347,    90,    90,    90,    90,   190,   111,
     364,   116,    68,   257,   258,   259,   118,   119,    90,   207,
     267,   307,    69,   308,   309,   372,    25,    26,    33,   191,
     178,   179,   180,   181,    90,    90,   129,   130,   -38,    90,
     188,    34,    47,   117,    94,    48,    49,    50,    47,   133,
     140,    48,    49,    50,    69,   -29,   208,   209,    39,   211,
     212,   305,   227,   244,   291,    65,   155,   156,   -29,   -36,
     -37,   161,   367,   177,   -29,   134,   177,   177,   177,   177,
     239,   321,   189,   242,   321,    27,   177,   192,   228,   245,
     292,   177,   177,   331,   330,   177,   333,    86,   368,    35,
     340,   341,   177,   177,   274,   177,   177,   322,   193,   177,
     373,   177,   326,     6,   332,   359,    39,   215,   216,   217,
      44,    87,    36,   348,   349,   350,   177,   145,   275,   177,
     218,   219,   220,   361,   362,    37,   327,    47,   262,   360,
      48,    49,    50,   265,   221,    40,   268,    88,   374,   182,
     376,    59,   378,   379,   270,   382,   383,   384,   303,    41,
      65,   365,   388,   389,   380,   266,   177,     6,   269,    42,
      61,    62,   390,   298,   391,    64,   271,   392,   393,   169,
     304,   170,   171,   366,   177,   177,   381,   177,   177,   222,
     172,   225,   226,    65,    33,   229,    36,   230,   231,   233,
     234,   235,   236,   205,   238,    60,   336,    43,     6,    45,
      63,   246,   215,   216,   217,   355,   206,     6,   263,   264,
     205,   215,   216,   217,    80,   218,   219,   220,   337,   328,
      -3,    15,   329,   285,   218,   219,   220,   356,    17,   221,
      16,   296,    22,     6,    24,   232,   295,     6,   221,    28,
      75,   215,   216,   217,   299,    76,    12,    38,     6,   297,
      78,   177,   177,    79,   218,   219,   220,   386,     1,     6,
      81,    61,    62,   215,   216,   217,     6,     2,   221,    82,
     215,   216,   217,   323,    65,     6,   218,   219,   220,   215,
     216,   217,    93,   218,   219,   220,   351,    84,   334,   335,
     221,    85,   218,   219,   220,   353,    91,   221,    98,    48,
      49,    50,   344,   345,   346,    47,   221,   -28,    48,    49,
      50,   260,   103,     6,   261,   -28,   105,   104,   -28,   -28,
     106,   -28,   -28,   168,   107,     6,    48,    49,    50,   110,
     -28,   -28,   -17,     5,    19,     6,     6,   169,   113,   170,
     171,    47,     7,   120,    48,    49,    50,   121,   172,   -29,
      57,    40,   122,    48,    49,    50,   -17,    21,    47,     6,
      42,    48,    49,    50,   125,   123,    16,   -29,   -29,   114,
     -17,    21,    48,    49,    50,   112,   -29,    65,   124,   115,
      16,   -16,    23,   168,   -29,     6,    48,    49,    50,    47,
     132,    16,    48,    49,    50,   -38,   -29,   169,   248,   170,
     171,   126,   135,   249,   250,   251,   252,   253,   172,    47,
     254,   136,    48,    49,    50,    30,    55,     6,     6,    88,
     137,   147,   138,   139,   141,   144,   148,   149,   150,   151,
     152,   154,   153,   157,   162,   163,   158,   164,   247,   165,
     166,   237,     0,     0,   167,   183,   184,   186,   185,   197,
     202,   194,   203,   204,   187,   213,   210,     0,   240,   241,
     243,     0,     0,     0,     0,     0,     0,   342,     0,   343,
     302,     0,   272,   282,   286,   273,   287,   276,   279,   280,
     281,   288,   289,   290,   300,   293,   301,   310,   313,   358,
       8,   314,   317,   318,   319,   320,   324,   325,   375,   377,
       0,     0,     0,     0,     0,     0,   369,   370
};

static const yytype_int16 yycheck[] =
{
       1,     2,   192,     1,     5,     3,     7,   172,   173,     1,
     329,   176,   331,   332,    15,    16,    68,    69,     3,     1,
      21,     1,    23,     0,     1,   190,    24,     1,    34,    35,
       1,    37,    33,     1,    26,    36,    88,    43,    44,    45,
      68,    69,    94,     1,   363,   364,    52,     1,    28,     1,
       1,    54,    53,    35,     1,    58,     1,   247,    64,    27,
      88,    35,   114,   115,    35,    23,    94,   386,    71,    75,
      76,     1,     0,    24,     1,   265,    23,    28,    23,    37,
      83,    35,   110,    35,   112,   113,   114,   115,     1,    90,
      37,    94,     1,   216,   217,   218,    99,   100,   126,    26,
     223,   266,    11,   268,   269,    35,    26,    26,    13,    22,
     157,   158,   159,   160,   142,   143,   112,   113,    27,   147,
     167,    26,     1,     1,     1,     4,     5,     6,     1,     1,
     126,     4,     5,     6,    11,    14,   183,   184,    11,   186,
     187,   264,     1,     1,     1,    24,   142,   143,    27,    27,
      27,   147,   342,   154,    27,    27,   157,   158,   159,   160,
     207,     1,   168,   210,     1,    26,   167,     1,    27,    27,
      27,   172,   173,     1,   297,   176,   299,     1,   343,    26,
     303,   304,   183,   184,     1,   186,   187,    27,    22,   190,
      27,   192,     1,     3,    22,     1,    11,     7,     8,     9,
      26,    25,    13,   326,   327,   328,   207,     1,    25,   210,
      20,    21,    22,   336,   337,    26,    25,     1,   219,    25,
       4,     5,     6,     1,    34,    11,     1,    11,   351,    23,
     353,    12,   355,   356,     1,   358,   359,   360,     1,     1,
      24,     1,   365,   366,     1,    23,   247,     3,    23,    11,
      11,    12,   375,   254,   377,    26,    23,   380,   381,    15,
      23,    17,    18,    23,   265,   266,    23,   268,   269,   191,
      26,   193,   194,    24,    13,   197,    13,   199,   200,   201,
     202,   203,   204,     1,   206,    12,     1,    26,     3,    26,
      12,   213,     7,     8,     9,     1,    14,     3,   220,   221,
       1,     7,     8,     9,    12,    20,    21,    22,    23,    19,
       0,     1,    22,    14,    20,    21,    22,    23,     4,    34,
      10,     1,     8,     3,    10,     1,   248,     3,    34,    15,
      26,     7,     8,     9,   256,    26,     1,    23,     3,    19,
      22,   342,   343,    22,    20,    21,    22,     1,     1,     3,
      22,    11,    12,     7,     8,     9,     3,    10,    34,    22,
       7,     8,     9,   285,    24,     3,    20,    21,    22,     7,
       8,     9,    27,    20,    21,    22,    23,    25,   300,   301,
      34,    25,    20,    21,    22,    23,     1,    34,    27,     4,
       5,     6,   314,   315,   316,     1,    34,     3,     4,     5,
       6,     1,     6,     3,     4,    11,    22,     6,    14,    15,
       6,    17,    18,     1,     6,     3,     4,     5,     6,    22,
      26,    27,     0,     1,     1,     3,     3,    15,    22,    17,
      18,     1,    10,    24,     4,     5,     6,    24,    26,    27,
       1,    11,     6,     4,     5,     6,     0,     1,     1,     3,
      11,     4,     5,     6,    27,    24,    10,    27,    11,     1,
       0,     1,     4,     5,     6,    22,    27,    24,    24,    11,
      10,     0,     1,     1,    27,     3,     4,     5,     6,     1,
      27,    10,     4,     5,     6,    27,    14,    15,    24,    17,
      18,    22,    25,    29,    30,    31,    32,    33,    26,     1,
      36,    25,     4,     5,     6,     1,     1,     3,     3,    11,
      24,    22,    25,    25,    23,    23,     3,     3,    25,     3,
       3,    26,    23,    26,    23,    23,    26,     3,    16,    23,
      23,    35,    -1,    -1,    26,    26,    26,    26,    23,    14,
      14,    22,    14,    14,    26,    14,    26,    -1,    27,    27,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    16,
      22,    -1,    35,    27,    27,    35,    27,    35,    35,    35,
      35,    27,    27,    27,    24,    35,    24,    35,    27,    25,
       1,    28,    27,    27,    27,    27,    27,    27,    23,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    10,    39,    40,     1,     3,    10,    40,    41,
      42,    57,     1,    57,     0,     1,    10,    41,    57,     1,
      57,     1,    41,     1,    41,    26,    26,    26,    41,    57,
       1,    57,     1,    13,    26,    26,    13,    26,    41,    11,
      11,     1,    11,    26,    26,    26,    57,     1,     4,     5,
       6,    43,    44,    50,    43,     1,    57,     1,    43,    12,
      12,    11,    12,    12,    26,    24,     1,    24,     1,    11,
      47,    48,    43,    57,    47,    26,    26,    47,    22,    22,
      12,    22,    22,    43,    25,    25,     1,    25,    11,    46,
      50,     1,    46,    27,     1,    47,     1,    35,    27,    43,
      43,     1,    27,     6,     6,    22,     6,     6,    47,    46,
      22,    57,    22,    22,     1,    11,    47,     1,    47,    47,
      24,    24,     6,    24,    24,    27,    22,    45,    46,    45,
      45,    46,    27,     1,    27,    25,    25,    24,    25,    25,
      45,    23,     1,    37,    23,     1,    23,    22,     3,     3,
      25,     3,     3,    23,    26,    45,    45,    26,    26,     1,
      26,    45,    23,    23,     3,    23,    23,    26,     1,    15,
      17,    18,    26,    43,    49,    51,    52,    57,    49,    49,
      49,    49,    23,    26,    26,    23,    26,    26,    49,    43,
       1,    22,     1,    22,    22,    51,    51,    14,    51,     1,
      24,    28,    14,    14,    14,     1,    14,    26,    49,    49,
      26,    49,    49,    14,    51,     7,     8,     9,    20,    21,
      22,    34,    53,    57,    52,    53,    53,     1,    27,    53,
      53,    53,     1,    53,    53,    53,    53,    35,    53,    49,
      27,    27,    49,    27,     1,    27,    53,    16,    24,    29,
      30,    31,    32,    33,    36,    54,    56,    54,    54,    54,
       1,     4,    57,    53,    53,     1,    23,    54,     1,    23,
       1,    23,    35,    35,     1,    25,    35,     1,    35,    35,
      35,    35,    27,     1,    35,    14,    27,    27,    27,    27,
      27,     1,    27,    35,    52,    53,     1,    19,    57,    53,
      24,    24,    22,     1,    23,    54,    52,    51,    51,    51,
      35,     1,    35,    27,    28,     1,    28,    27,    27,    27,
      27,     1,    27,    53,    27,    27,     1,    25,    19,    22,
      54,     1,    22,    54,    53,    53,     1,    23,    53,    55,
      54,    54,    16,    16,    53,    53,    53,    35,    54,    54,
      54,    23,    55,    23,    55,     1,    23,    55,    25,     1,
      25,    54,    54,     1,    37,     1,    23,    52,    51,    35,
      35,     1,    35,    27,    54,    23,    54,    23,    54,    54,
       1,    23,    54,    54,    54,    55,     1,    55,    54,    54,
      54,    54,    54,    54,    55
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

  case 7:

/* Line 1455 of yacc.c  */
#line 61 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 64 "miniJava.y"
    {syntaxerror ("public keyword missing");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 65 "miniJava.y"
    {syntaxerror ("public keyword missing");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 66 "miniJava.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 67 "miniJava.y"
    {syntaxerror ("class identifier missing"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 68 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 69 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 74 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 77 "miniJava.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 78 "miniJava.y"
    {syntaxerror ("parent class identifier missing"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 79 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 81 "miniJava.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 82 "miniJava.y"
    {syntaxerror ("class identifier missing"); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 83 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 90 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 94 "miniJava.y"
    {syntaxerror ("comma missing"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 101 "miniJava.y"
    {syntaxerror ("code out of method"); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 102 "miniJava.y"
    {syntaxerror ("code out of method"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 105 "miniJava.y"
    {syntaxerror ("public keyword missing"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 106 "miniJava.y"
    {syntaxerror ("public keyword missing"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 107 "miniJava.y"
    {syntaxerror ("method name missing"); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 108 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 109 "miniJava.y"
    {syntaxerror ("return keyword missing"); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 110 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 111 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 112 "miniJava.y"
    {syntaxerror ("open brace missing"); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 116 "miniJava.y"
    {syntaxerror ("variable declaration not first"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 123 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 124 "miniJava.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 125 "miniJava.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 132 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 134 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 135 "miniJava.y"
    {syntaxerror ("if condition missing"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 137 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 138 "miniJava.y"
    {syntaxerror ("if condition missing"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 140 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 141 "miniJava.y"
    {syntaxerror ("while condition missing"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 143 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 144 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 146 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 147 "miniJava.y"
    {syntaxerror ("second expression missing"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 148 "miniJava.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 150 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 151 "miniJava.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 152 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 160 "miniJava.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 161 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 163 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 165 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 168 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 172 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 174 "miniJava.y"
    {syntaxerror ("invalid .length"); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 176 "miniJava.y"
    {syntaxerror("invalid identifier"); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 177 "miniJava.y"
    {syntaxerror("opening parentheses missing"); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 178 "miniJava.y"
    {syntaxerror("closing parentheses missing"); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 180 "miniJava.y"
    {syntaxerror("invalid identifier"); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 181 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 182 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 187 "miniJava.y"
    {syntaxerror ("comma missing"); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 188 "miniJava.y"
    {syntaxerror ("no expression after comma"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2153 "miniJava.tab.c"
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
#line 201 "miniJava.y"

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



