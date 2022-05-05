
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

    #include "semantic.c"
    #include "codeGen.c"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    char nom[256];
    int numval;
    char nomaff[256];
    char oper[10];
    int indexIf;

	int yylex(void);
	extern int yylineno;
	extern int i;
    extern int j;
	void yyerror(const char *str);
	void syntaxerror (const char *str);
	void BeginSemantique();
	void BeginCodeGen();
    void EndSemantique();
    void EndCodeGen();
    void test();


/* Line 189 of yacc.c  */
#line 100 "miniJava.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     OP_ADD = 284,
     OP_SUBSTRACT = 285,
     OP_MULTIPLY = 286,
     OP_NOT = 287,
     LOG_AND = 288,
     LOG_LESS = 289,
     LOG_EQLESS = 290,
     LOG_MORE = 291,
     LOG_EQMORE = 292,
     LOG_EQ = 293,
     LOG_DIF = 294,
     SEMI_COLON = 295,
     DOT = 296,
     COMMA = 297
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
#line 184 "miniJava.tab.c"

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNRULES -- Number of states.  */
#define YYNSTATES  364

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    21,    24,    25,
      26,    37,    47,    56,    57,    58,    59,    70,    73,    74,
      78,    86,    94,   102,   108,   114,   117,   120,   123,   124,
     125,   129,   132,   133,   138,   140,   141,   145,   148,   151,
     154,   157,   158,   162,   166,   167,   168,   182,   195,   208,
     221,   225,   227,   229,   231,   235,   239,   243,   246,   248,
     249,   253,   257,   261,   263,   264,   265,   279,   287,   295,
     301,   307,   313,   317,   323,   329,   335,   340,   345,   350,
     355,   363,   371,   379,   387,   395,   396,   400,   403,   406,
     409,   412,   419,   426,   433,   440,   446,   452,   458,   464,
     471,   478,   485,   492,   496,   501,   506,   511,   512,   517,
     518,   523,   528,   533,   537,   542,   543,   550,   556,   562,
     563,   569,   574,   579,   580,   583,   584,   589,   591,   595,
     597,   599,   601,   603,   605,   607,   609,   611,   613,   615,
     617,   619
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    45,    53,    -1,     1,    53,    -1,     1,
      45,    53,    -1,    45,     1,    53,    -1,    45,    53,     1,
      -1,    46,    49,    -1,    -1,    -1,    55,    26,    11,    12,
      47,    22,     6,    48,    24,    25,    -1,    55,    26,     1,
      11,    12,    22,     6,    24,    25,    -1,    55,    26,     1,
      12,    22,     6,    24,    25,    -1,    -1,    -1,    -1,     3,
      50,    23,    51,    26,    67,    27,    52,    62,    27,    -1,
      54,    53,    -1,    -1,    54,     1,    53,    -1,    55,    13,
      83,    26,    56,    62,    27,    -1,    55,    13,     1,    26,
      56,    62,    27,    -1,    55,    13,    83,    26,    56,    62,
       1,    -1,    55,    26,    56,    62,    27,    -1,    55,    26,
      56,    62,     1,    -1,    10,    83,    -1,     1,    83,    -1,
      57,    56,    -1,    -1,    -1,    61,    58,    40,    -1,    61,
       1,    -1,    -1,    61,    60,    42,    59,    -1,    61,    -1,
      -1,    61,     1,    59,    -1,    66,    83,    -1,     1,    83,
      -1,    66,     1,    -1,    63,    62,    -1,    -1,    63,     1,
      62,    -1,    63,    62,     1,    -1,    -1,    -1,    11,    61,
      64,    22,    59,    23,    65,    26,    67,    14,    71,    40,
      27,    -1,     1,    11,    61,    22,    59,    23,    26,    67,
      14,    71,    40,    27,    -1,    11,     1,    83,    22,    59,
      23,    26,    67,    14,    71,    40,    27,    -1,    11,    66,
       1,    22,    59,    23,    26,    67,    14,    71,    40,    27,
      -1,     4,    24,    25,    -1,     5,    -1,     4,    -1,     6,
      -1,     4,    24,     1,    -1,     1,    24,    25,    -1,     4,
       1,    25,    -1,    68,    67,    -1,    68,    -1,    -1,    26,
      67,    27,    -1,    26,    67,     1,    -1,     1,    67,    27,
      -1,    57,    -1,    -1,    -1,    15,    22,    71,    23,    69,
      26,    67,    27,    70,    16,    26,    67,    27,    -1,    15,
       1,    71,    23,    67,    16,    67,    -1,    15,    22,    71,
       1,    68,    16,    67,    -1,    15,     1,    67,    16,    67,
      -1,    17,    22,    71,    23,    67,    -1,    17,    22,    71,
       1,    67,    -1,    17,     1,    68,    -1,    18,    22,    71,
      23,    40,    -1,    18,    22,    71,    23,     1,    -1,    18,
      22,    71,     1,    40,    -1,    85,    28,    71,    40,    -1,
      85,    28,    71,     1,    -1,    85,    28,     1,    40,    -1,
      85,     1,    71,    40,    -1,    85,    24,    71,    25,    28,
      71,    40,    -1,    85,     1,    71,    25,    28,    71,    40,
      -1,    85,    24,    71,     1,    28,    71,    40,    -1,    85,
      24,    71,    25,     1,    71,    40,    -1,    85,    24,    71,
      25,    28,    71,     1,    -1,    -1,     8,    72,    73,    -1,
       7,    73,    -1,     9,    73,    -1,    84,    73,    -1,    20,
      73,    -1,    21,     4,    24,    71,    25,    73,    -1,    21,
       4,     1,    71,    25,    73,    -1,    21,     1,    24,    71,
      25,    73,    -1,    21,     4,    24,    71,     1,    73,    -1,
      21,    83,    22,    23,    73,    -1,    21,     1,    22,    23,
      73,    -1,    21,    83,     1,    23,    73,    -1,    21,    83,
      22,     1,    73,    -1,    21,    83,    22,    79,    23,    73,
      -1,    21,     1,    22,    79,    23,    73,    -1,    21,    83,
       1,    79,    23,    73,    -1,    21,    83,    22,    79,     1,
      73,    -1,    32,    71,    73,    -1,    22,    71,    23,    73,
      -1,     1,    71,    23,    73,    -1,    22,    71,     1,    73,
      -1,    -1,    81,    71,    74,    73,    -1,    -1,    82,    71,
      75,    73,    -1,    24,    71,    25,    73,    -1,    24,    71,
       1,    73,    -1,    41,    19,    73,    -1,    41,     1,    19,
      73,    -1,    -1,    78,    22,    79,    23,    76,    73,    -1,
      78,     1,    79,    23,    73,    -1,    78,    22,    79,     1,
      73,    -1,    -1,    78,    22,    23,    77,    73,    -1,    78,
       1,    23,    73,    -1,    78,    22,     1,    73,    -1,    -1,
      41,    83,    -1,    -1,    71,    80,    42,    79,    -1,    71,
      -1,    71,     1,    79,    -1,    29,    -1,    31,    -1,    30,
      -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,    37,
      -1,    38,    -1,    39,    -1,     3,    -1,     3,    -1,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    78,    78,    79,    80,    81,    82,    84,    86,    86,
      86,    87,    88,    90,    90,    90,    90,    92,    93,    94,
      96,    97,    98,    99,   100,   102,   103,   105,   106,   108,
     108,   109,   111,   111,   112,   113,   114,   116,   117,   118,
     120,   121,   122,   123,   125,   125,   125,   126,   127,   128,
     132,   133,   134,   135,   136,   137,   138,   140,   141,   142,
     144,   145,   146,   147,   148,   149,   148,   151,   152,   153,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   173,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   195,   195,   196,
     196,   197,   198,   199,   200,   201,   201,   202,   203,   204,
     204,   205,   206,   207,   209,   211,   211,   212,   213,   215,
     216,   217,   219,   220,   221,   222,   223,   224,   225,   227,
     229,   231
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
  "BRACE_OPEN", "BRACE_CLOSE", "OP_AFFECT", "OP_ADD", "OP_SUBSTRACT",
  "OP_MULTIPLY", "OP_NOT", "LOG_AND", "LOG_LESS", "LOG_EQLESS", "LOG_MORE",
  "LOG_EQMORE", "LOG_EQ", "LOG_DIF", "SEMI_COLON", "DOT", "COMMA",
  "$accept", "Program", "MainClass", "MainHead", "$@1", "$@2", "MainBody",
  "$@3", "$@4", "$@5", "ClassDeclarationS", "ClassDeclaration",
  "ClassHead", "VarDeclarationS", "VarDeclaration", "$@6", "VariableS",
  "$@7", "Variable", "MethodDeclarationS", "MethodDeclaration", "$@8",
  "$@9", "Type", "StatementS", "Statement", "$@10", "$@11", "Expression",
  "$@12", "ExpressionComp", "$@13", "$@14", "$@15", "$@16", "MethodCall",
  "ExpressionS", "$@17", "Operator", "Logic", "Identifier",
  "Identifierexp", "Identifieraff", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    44,    44,    44,    45,    47,    48,
      46,    46,    46,    50,    51,    52,    49,    53,    53,    53,
      54,    54,    54,    54,    54,    55,    55,    56,    56,    58,
      57,    57,    60,    59,    59,    59,    59,    61,    61,    61,
      62,    62,    62,    62,    64,    65,    63,    63,    63,    63,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      68,    68,    68,    68,    69,    70,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    72,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    74,    73,    75,
      73,    73,    73,    73,    73,    76,    73,    73,    73,    77,
      73,    73,    73,    73,    78,    80,    79,    79,    79,    81,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    83,
      84,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     3,     2,     0,     0,
      10,     9,     8,     0,     0,     0,    10,     2,     0,     3,
       7,     7,     7,     5,     5,     2,     2,     2,     0,     0,
       3,     2,     0,     4,     1,     0,     3,     2,     2,     2,
       2,     0,     3,     3,     0,     0,    13,    12,    12,    12,
       3,     1,     1,     1,     3,     3,     3,     2,     1,     0,
       3,     3,     3,     1,     0,     0,    13,     7,     7,     5,
       5,     5,     3,     5,     5,     5,     4,     4,     4,     4,
       7,     7,     7,     7,     7,     0,     3,     2,     2,     2,
       2,     6,     6,     6,     6,     5,     5,     5,     5,     6,
       6,     6,     6,     3,     4,     4,     4,     0,     4,     0,
       4,     4,     4,     3,     4,     0,     6,     5,     5,     0,
       5,     4,     4,     0,     2,     0,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,   139,     0,
       3,     0,     0,    26,    25,     1,     0,     0,     0,    13,
       7,     0,     4,     0,    17,     0,     0,     5,     6,     0,
       0,     0,     0,    19,     0,     0,     0,     0,    51,    53,
       0,     0,     0,     0,     0,    14,     0,     0,     8,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    27,
      31,     0,    39,    37,     0,     0,     0,     0,     0,     0,
      55,    56,    54,    50,     0,     0,    44,     0,    24,    23,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,   141,     0,     0,
       0,     0,    63,     0,     0,     0,     0,     0,     9,    21,
      22,    20,     0,     0,     0,     0,     0,   139,     0,     0,
       0,     0,     0,     0,     0,    15,    57,     0,     0,     0,
       0,    12,     0,     0,     0,     0,     0,     0,    62,     0,
     140,   123,    85,   123,   123,     0,     0,     0,     0,     0,
     123,     0,   140,     0,    72,     0,     0,    61,    60,     0,
       0,     0,     0,     0,    11,     0,     0,     0,     0,     0,
      45,     0,   140,     0,     0,   129,   131,   130,   132,   133,
     134,   135,   136,   137,   138,     0,    87,     0,     0,     0,
     123,    88,    90,     0,     0,     0,     0,   123,     0,     0,
      89,     0,    64,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    78,    77,    76,    10,     0,    36,     0,     0,
       0,     0,   123,     0,     0,   123,   124,     0,     0,   107,
     109,    86,     0,     0,     0,     0,     0,     0,   123,   123,
     103,    69,     0,     0,     0,    71,    70,    75,    74,    73,
      16,     0,     0,     0,     0,     0,    33,     0,     0,     0,
     105,   123,   123,   123,   113,   123,     0,     0,     0,   119,
       0,   123,   123,   123,     0,     0,     0,     0,   123,     0,
       0,   123,     0,   106,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   111,   114,   121,
       0,     0,   123,   122,   123,   123,   115,   108,   110,    96,
     123,   123,   123,   123,   123,    97,   123,    98,    95,   123,
     123,    67,    68,     0,    81,    82,    83,    84,    80,     0,
       0,     0,     0,   128,     0,   117,   120,   118,   123,   100,
      93,    92,    94,    91,   101,   102,    99,    65,     0,     0,
       0,     0,   126,   116,     0,    47,    48,     0,    49,     0,
      46,     0,     0,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    67,   132,    20,    30,    64,   159,
      10,    11,    18,    40,   102,    61,   133,   168,    42,    57,
      58,    91,   220,    43,   118,   104,   244,   354,   266,   190,
     186,   271,   272,   338,   304,   187,   267,   301,   188,   189,
      13,   150,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -228
static const yytype_int16 yypact[] =
{
     232,   290,    20,   145,   247,    48,   155,    20,  -228,   279,
    -228,   384,   164,  -228,  -228,  -228,   290,   188,   205,  -228,
    -228,   161,  -228,   290,  -228,   338,    81,  -228,  -228,   121,
     185,   243,   201,  -228,   217,   250,   260,   111,  -228,  -228,
      61,   121,     7,   368,   139,  -228,   257,   264,  -228,   121,
     121,   295,  -228,   296,    16,   324,   349,     5,    63,  -228,
    -228,   287,  -228,  -228,   344,   322,   370,   359,    61,    61,
    -228,  -228,  -228,  -228,   571,   139,  -228,   389,  -228,  -228,
      78,    69,  -228,   179,   385,   380,   409,   393,    83,   399,
     401,   408,   411,   349,  -228,  -228,   392,  -228,   169,   199,
     419,   179,  -228,   404,   235,    47,   418,   410,  -228,  -228,
    -228,  -228,   206,   206,   206,   206,   399,   294,   416,   357,
     466,   444,   466,   466,   102,  -228,  -228,   466,   466,   492,
     421,  -228,   420,   432,    21,   433,   434,   445,  -228,   325,
      39,   532,  -228,   532,   532,   284,   466,   466,   455,   449,
     532,   466,  -228,   108,  -228,   123,   133,  -228,  -228,    61,
      51,    98,   316,    10,  -228,   451,   456,   206,   439,   458,
    -228,   459,     3,   460,   466,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,   227,  -228,   222,   466,   466,
     532,  -228,  -228,   381,     6,   223,   142,   532,   501,   528,
    -228,   444,  -228,   501,   501,   450,    14,   464,   468,  -228,
     469,    41,  -228,  -228,  -228,  -228,   534,  -228,   206,   534,
     477,   534,   532,   105,   473,   532,  -228,   146,   379,  -228,
    -228,  -228,   405,   466,   466,   466,   431,   457,   532,   532,
    -228,  -228,   478,   493,   482,  -228,  -228,  -228,  -228,  -228,
    -228,   466,   466,   466,   466,   496,  -228,   497,   534,   506,
    -228,   532,   532,   532,  -228,   532,    23,   498,   274,  -228,
     172,   532,   532,   532,   499,   500,   505,   136,   532,   503,
     274,   532,   186,  -228,  -228,   501,   501,   179,   483,   502,
     507,    15,   466,   466,   522,   466,  -228,  -228,  -228,  -228,
     466,   508,   532,  -228,   532,   532,  -228,  -228,  -228,  -228,
     532,   532,   532,   532,   532,  -228,   532,  -228,  -228,   532,
     532,  -228,  -228,   514,  -228,  -228,  -228,  -228,  -228,   513,
     515,   466,   517,  -228,   466,  -228,  -228,  -228,   532,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,   531,   537,
     519,   547,  -228,  -228,   562,  -228,  -228,   552,  -228,   554,
    -228,   179,   555,  -228
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,  -228,   580,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
     413,  -228,   301,   318,    52,  -228,  -101,  -228,   -54,   -31,
    -228,  -228,  -228,   -37,   -83,  -118,  -228,  -228,   -94,  -228,
     -46,  -228,  -228,  -228,  -228,  -228,  -227,  -228,  -228,  -228,
      75,  -228,  -228
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -142
static const yytype_int16 yytable[] =
{
     103,   270,    76,   154,  -139,   274,    78,   234,    60,   279,
     282,   213,   135,   136,   137,   248,   327,    72,   124,    77,
      89,   126,   167,     8,   300,   149,   153,    81,   155,   156,
     235,  -141,    79,   160,   161,   163,   148,    87,    88,   116,
    -141,    73,   253,  -139,   -34,   173,  -127,   -29,   127,    94,
     214,    19,   196,   197,   249,   328,    77,   173,   134,   134,
     134,   134,    55,   -32,    80,  -125,   217,  -141,   173,   254,
      95,   128,    56,   333,    56,   129,   208,    14,    41,    55,
     223,    41,    36,   243,   110,    37,    38,    39,   -41,    93,
     -41,   209,    32,    41,   229,   230,   -40,   191,   192,   210,
      35,    41,    41,   157,   200,   -41,   261,   352,   -28,   201,
     111,    52,    53,   134,   -52,   241,   242,   256,    63,    52,
     245,   246,    44,   211,   203,    37,    38,    39,   207,   158,
     262,   202,   -28,   255,   205,    54,   257,   313,   259,   275,
     276,   277,     8,   238,   231,    15,   204,   151,   -28,   152,
      90,   240,    63,   141,   142,   143,   206,   288,   289,   290,
     291,   314,    31,    51,   134,   239,   144,   145,   146,   265,
     119,    52,    32,   305,   173,   294,   260,    25,   147,   264,
      96,    21,    97,    37,    38,    39,   173,   319,    -2,    28,
      26,   120,   283,   284,    98,   306,    99,   100,   329,   330,
     121,   332,   321,   322,   323,   101,   -59,    44,    45,   320,
      37,    38,    39,    48,    52,   296,   297,   298,    25,   299,
     195,   122,   303,   227,   236,   307,   308,   309,   224,   -35,
       8,    29,   315,     1,   317,   318,    96,   350,    97,    37,
      38,    39,     2,    49,   228,   237,   225,   -18,    16,   -58,
      98,   -58,    99,   100,    46,    47,   335,     2,   336,   337,
     226,   101,   -58,     8,   339,   340,   341,   342,   343,    65,
     344,    46,    47,   345,   346,   151,    50,   152,   362,   -18,
       7,   141,   142,   143,    51,   193,    66,     8,   194,     2,
     -18,     7,   353,     8,   144,   145,   146,  -123,   174,  -123,
       2,     6,    12,   175,   176,   177,   147,   178,   179,   180,
     181,   182,   183,   184,  -123,   185,  -123,   151,  -141,   152,
      70,    71,  -141,   141,   142,   143,   139,    82,   172,    37,
      38,    39,   141,   142,   143,    74,   144,   145,   146,    34,
      98,     8,    99,   100,    84,   144,   145,   146,   147,    51,
      75,   101,   -59,    37,    38,    39,   212,   147,   139,    59,
     140,    37,    38,    39,   141,   142,   143,    68,    69,    62,
      83,     8,    98,   -59,    99,   100,    85,   144,   145,   146,
     268,    86,   152,   101,   -18,    23,   141,   142,   143,   147,
      92,   106,     8,    96,     2,   117,    37,    38,    39,   144,
     145,   146,   269,   232,   107,   233,   151,    98,   152,    99,
     100,   147,   141,   142,   143,   108,    51,    17,   101,   -59,
     109,   112,    22,   113,    24,   144,   145,   146,   273,    27,
     114,   125,   151,   115,   152,   131,    33,   147,   141,   142,
     143,   123,   130,   138,   165,    96,   164,    97,    37,    38,
      39,   144,   145,   146,   278,   166,   169,   170,   280,    98,
     152,    99,   100,   147,   141,   142,   143,   151,   171,   152,
     101,   198,   199,   141,   142,   143,   215,   144,   145,   146,
     281,   218,   216,   222,   219,   221,   144,   145,   146,   147,
     247,   250,   263,   162,   285,   152,   251,   252,   147,   141,
     142,   143,    96,   258,    97,    37,    38,    39,   287,   286,
     292,   293,   144,   145,   146,   -59,    98,   -59,    99,   100,
     295,   302,   310,   324,   147,   311,   316,   101,   -59,    96,
     312,    97,    37,    38,    39,    96,   331,    97,    37,    38,
      39,   347,   325,    98,   -59,    99,   100,   326,   -59,    98,
     334,    99,   100,   348,   101,   349,   174,   351,   355,   357,
     101,   175,   176,   177,   356,   178,   179,   180,   181,   182,
     183,   184,    44,   185,   358,    37,    38,    39,   359,   360,
     361,     9,   363
};

static const yytype_uint16 yycheck[] =
{
      83,   228,    56,   121,     1,   232,     1,     1,     1,   236,
     237,     1,   113,   114,   115,     1,     1,     1,   101,    56,
      74,   104,     1,     3,     1,   119,   120,    58,   122,   123,
      24,    28,    27,   127,   128,   129,   119,    68,    69,    93,
       1,    25,     1,    40,    23,   139,    23,    40,     1,    80,
      40,     3,   146,   147,    40,    40,    93,   151,   112,   113,
     114,   115,     1,    42,     1,    42,   167,    28,   162,    28,
       1,    24,    11,   300,    11,    28,    25,     2,    26,     1,
     174,    29,     1,   201,     1,     4,     5,     6,    27,    11,
      27,    40,    11,    41,   188,   189,    27,   143,   144,     1,
      25,    49,    50,     1,   150,    27,     1,   334,    27,     1,
      27,    36,     1,   167,     3,   198,   199,   218,    43,    44,
     203,   204,     1,    25,     1,     4,     5,     6,   159,    27,
      25,    23,    11,   216,     1,    24,   219,     1,   221,   233,
     234,   235,     3,     1,   190,     0,    23,     1,    27,     3,
      75,   197,    77,     7,     8,     9,    23,   251,   252,   253,
     254,    25,     1,    24,   218,    23,    20,    21,    22,    23,
       1,    96,    11,     1,   268,   258,   222,    13,    32,   225,
       1,    26,     3,     4,     5,     6,   280,     1,     0,     1,
      26,    22,   238,   239,    15,    23,    17,    18,   292,   293,
       1,   295,   285,   286,   287,    26,    27,     1,    23,    23,
       4,     5,     6,    12,   139,   261,   262,   263,    13,   265,
     145,    22,   268,     1,     1,   271,   272,   273,     1,    23,
       3,    26,   278,     1,   280,   281,     1,   331,     3,     4,
       5,     6,    10,    26,    22,    22,    19,     0,     1,    14,
      15,    16,    17,    18,    11,    12,   302,    10,   304,   305,
     185,    26,    27,     3,   310,   311,   312,   313,   314,    12,
     316,    11,    12,   319,   320,     1,    26,     3,   361,     0,
       1,     7,     8,     9,    24,     1,    22,     3,     4,    10,
       0,     1,   338,     3,    20,    21,    22,    23,    24,    25,
      10,     0,     1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     1,    24,     3,
      25,    25,    28,     7,     8,     9,     1,    40,     3,     4,
       5,     6,     7,     8,     9,    11,    20,    21,    22,     1,
      15,     3,    17,    18,    22,    20,    21,    22,    32,    24,
       1,    26,    27,     4,     5,     6,    40,    32,     1,    41,
       3,     4,     5,     6,     7,     8,     9,    49,    50,     1,
      26,     3,    15,    16,    17,    18,     6,    20,    21,    22,
       1,    22,     3,    26,     0,     1,     7,     8,     9,    32,
       1,     6,     3,     1,    10,     3,     4,     5,     6,    20,
      21,    22,    23,    22,    24,    24,     1,    15,     3,    17,
      18,    32,     7,     8,     9,     6,    24,     4,    26,    27,
      27,    22,     9,    22,    11,    20,    21,    22,    23,    16,
      22,    27,     1,    22,     3,    25,    23,    32,     7,     8,
       9,    22,    24,    27,    24,     1,    25,     3,     4,     5,
       6,    20,    21,    22,    23,    23,    23,    23,     1,    15,
       3,    17,    18,    32,     7,     8,     9,     1,    23,     3,
      26,    16,    23,     7,     8,     9,    25,    20,    21,    22,
      23,    42,    26,    23,    26,    26,    20,    21,    22,    32,
      40,    27,    19,     1,    16,     3,    28,    28,    32,     7,
       8,     9,     1,    26,     3,     4,     5,     6,    26,    16,
      14,    14,    20,    21,    22,    14,    15,    16,    17,    18,
      14,    23,    23,    40,    32,    25,    23,    26,    27,     1,
      25,     3,     4,     5,     6,     1,    14,     3,     4,     5,
       6,    27,    40,    15,    16,    17,    18,    40,    14,    15,
      42,    17,    18,    40,    26,    40,    24,    40,    27,    40,
      26,    29,    30,    31,    27,    33,    34,    35,    36,    37,
      38,    39,     1,    41,    27,     4,     5,     6,    16,    27,
      26,     1,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    10,    44,    45,    46,    55,     1,     3,    45,
      53,    54,    55,    83,    83,     0,     1,    53,    55,     3,
      49,    26,    53,     1,    53,    13,    26,    53,     1,    26,
      50,     1,    11,    53,     1,    83,     1,     4,     5,     6,
      56,    57,    61,    66,     1,    23,    11,    12,    12,    26,
      26,    24,    83,     1,    24,     1,    11,    62,    63,    56,
       1,    58,     1,    83,    51,    12,    22,    47,    56,    56,
      25,    25,     1,    25,    11,     1,    61,    66,     1,    27,
       1,    62,    40,    26,    22,     6,    22,    62,    62,    61,
      83,    64,     1,    11,    62,     1,     1,     3,    15,    17,
      18,    26,    57,    67,    68,    85,     6,    24,     6,    27,
       1,    27,    22,    22,    22,    22,    61,     3,    67,     1,
      22,     1,    22,    22,    67,    27,    67,     1,    24,    28,
      24,    25,    48,    59,    61,    59,    59,    59,    27,     1,
       3,     7,     8,     9,    20,    21,    22,    32,    67,    71,
      84,     1,     3,    71,    68,    71,    71,     1,    27,    52,
      71,    71,     1,    71,    25,    24,    23,     1,    60,    23,
      23,    23,     3,    71,    24,    29,    30,    31,    33,    34,
      35,    36,    37,    38,    39,    41,    73,    78,    81,    82,
      72,    73,    73,     1,     4,    83,    71,    71,    16,    23,
      73,     1,    23,     1,    23,     1,    23,    62,    25,    40,
       1,    25,    40,     1,    40,    25,    26,    59,    42,    26,
      65,    26,    23,    71,     1,    19,    83,     1,    22,    71,
      71,    73,    22,    24,     1,    24,     1,    22,     1,    23,
      73,    67,    67,    68,    69,    67,    67,    40,     1,    40,
      27,    28,    28,     1,    28,    67,    59,    67,    26,    67,
      73,     1,    25,    19,    73,    23,    71,    79,     1,    23,
      79,    74,    75,    23,    79,    71,    71,    71,    23,    79,
       1,    23,    79,    73,    73,    16,    16,    26,    71,    71,
      71,    71,    14,    14,    67,    14,    73,    73,    73,    73,
       1,    80,    23,    73,    77,     1,    23,    73,    73,    73,
      23,    25,    25,     1,    25,    73,    23,    73,    73,     1,
      23,    67,    67,    67,    40,    40,    40,     1,    40,    71,
      71,    14,    71,    79,    42,    73,    73,    73,    76,    73,
      73,    73,    73,    73,    73,    73,    73,    27,    40,    40,
      71,    40,    79,    73,    70,    27,    27,    40,    27,    16,
      27,    26,    67,    27
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
        case 3:

/* Line 1455 of yacc.c  */
#line 79 "miniJava.y"
    {syntaxerror ("main class missing"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 80 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 81 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 82 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 86 "miniJava.y"
    { g_type = tVoid; verifierFoncID("main"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 86 "miniJava.y"
    {g_type = tString;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 87 "miniJava.y"
    {syntaxerror ("public keyword missing");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 88 "miniJava.y"
    {syntaxerror ("public keyword missing");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 90 "miniJava.y"
    { verifierVarID(nom);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 90 "miniJava.y"
    { foncDecEnd(); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 90 "miniJava.y"
    {finFonction();;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 90 "miniJava.y"
    {finClass();tabCodeInt[indextab]=creerCode("SORTIE");indextab++;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 94 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 96 "miniJava.y"
    {finClass();;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 97 "miniJava.y"
    {syntaxerror ("parent class identifier missing"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 98 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 99 "miniJava.y"
    {finClass();;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 100 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 102 "miniJava.y"
    {verifierClassID(nom);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 103 "miniJava.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 108 "miniJava.y"
    {verifierVarID(nom);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 109 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 111 "miniJava.y"
    {verifierVarID(nom);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 112 "miniJava.y"
    {verifierVarID(nom);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 114 "miniJava.y"
    {syntaxerror ("comma missing"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 117 "miniJava.y"
    {syntaxerror ("invalid type"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 118 "miniJava.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 122 "miniJava.y"
    {syntaxerror ("code out of method"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 123 "miniJava.y"
    {syntaxerror ("code out of method"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 125 "miniJava.y"
    { verifierFoncID(nom); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 125 "miniJava.y"
    {foncDecEnd();;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 125 "miniJava.y"
    {finFonction();;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 126 "miniJava.y"
    {syntaxerror ("public keyword missing"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 127 "miniJava.y"
    {syntaxerror ("type missing"); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 128 "miniJava.y"
    {syntaxerror ("method name missing"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 132 "miniJava.y"
    { g_type = tInt; ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 133 "miniJava.y"
    { g_type = tBoolean; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 134 "miniJava.y"
    { g_type = tInt; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 135 "miniJava.y"
    { g_type = tString; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 136 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 137 "miniJava.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 138 "miniJava.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 145 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 146 "miniJava.y"
    {syntaxerror ("opening brace missing"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 148 "miniJava.y"
    {tabCodeInt[indextab]=creerCode("SIFAUX");indexIf=indextab;indextab++;;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 149 "miniJava.y"
    {tabCodeInt[indextab]=creerCode("SAUT");indextab++;tabCodeInt[indexIf].operande=indextab;indexIf=indextab-1;;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 150 "miniJava.y"
    {tabCodeInt[indexIf].operande=indextab;;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 151 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 152 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 153 "miniJava.y"
    {syntaxerror ("if condition missing"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 158 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 159 "miniJava.y"
    {syntaxerror ("while condition missing"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 161 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 162 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 163 "miniJava.y"
    {tabCodeInt[indextab]=creerOp("STORE",getAddress(nomaff,table_local));indextab++;;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 164 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 165 "miniJava.y"
    {syntaxerror ("second expression missing"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 166 "miniJava.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 168 "miniJava.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 169 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 170 "miniJava.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 171 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 173 "miniJava.y"
    {tabCodeInt[indextab]=creerOp("LDC",numval);indextab++;;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 179 "miniJava.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 180 "miniJava.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 181 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 183 "miniJava.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 184 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 185 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 187 "miniJava.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 188 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 189 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 192 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 193 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 195 "miniJava.y"
    {tabCodeInt[indextab]=creerCode(oper);indextab++;;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 196 "miniJava.y"
    {tabCodeInt[indextab]=creerCode(oper);indextab++;;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 198 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 200 "miniJava.y"
    {syntaxerror ("invalid .length"); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 201 "miniJava.y"
    {foncCallEnd();;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 202 "miniJava.y"
    {syntaxerror("opening parentheses missing"); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 203 "miniJava.y"
    {syntaxerror("closing parentheses missing"); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 204 "miniJava.y"
    {g_nbParam = 0;foncCallEnd();;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 205 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 206 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 209 "miniJava.y"
    {verifierFoncIDDeclare(nom);;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 211 "miniJava.y"
    {g_nbParam ++;;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 212 "miniJava.y"
    {g_nbParam ++;;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 213 "miniJava.y"
    {syntaxerror ("comma missing"); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 215 "miniJava.y"
    {strcpy(oper, "ADD");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 216 "miniJava.y"
    {strcpy(oper, "MUL");;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 217 "miniJava.y"
    {strcpy(oper, "SUB");;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 220 "miniJava.y"
    {strcpy(oper, "INF");;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 221 "miniJava.y"
    {strcpy(oper, "INFE");;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 222 "miniJava.y"
    {strcpy(oper, "SUP");;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 223 "miniJava.y"
    {strcpy(oper, "SUPE");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 224 "miniJava.y"
    {strcpy(oper, "EGAL");;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 225 "miniJava.y"
    {strcpy(oper, "DIF");;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 229 "miniJava.y"
    {checkID(nom);tabCodeInt[indextab]=creerOp("LDV",getAddress(nom,table_local));indextab++;;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 231 "miniJava.y"
    {checkIDOnInit(nom); strcpy(nomaff, nom);;}
    break;



/* Line 1455 of yacc.c  */
#line 2427 "miniJava.tab.c"
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
#line 236 "miniJava.y"



extern FILE *yyin;

int main(int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    BeginCodeGen();
    BeginSemantique();
    //test();
    yyparse();
    EndSemantique();
    EndCodeGen();
    return 1;
}

void BeginSemantique()
{
	table = NULL;
	table_local = NULL;
	table_class = NULL;

	g_type = NODE_TYPE_UNKNOWN;

	g_nbParam = 0;

	g_IfFonc = 0 ;
    g_IfFoncParameters = 0 ;
    g_IfClass = 0 ;
}

void BeginCodeGen(){
    indextab = 0;
}
void test(){
    tabCodeInt[indextab]=creerOp("LDC",4);
    indextab++;
    tabCodeInt[indextab]=creerOp("STORE",0);
    indextab++;
    tabCodeInt[indextab]=creerOp("LDC",5);
    indextab++;
    tabCodeInt[indextab]=creerOp("STORE",1);
    indextab++;
    tabCodeInt[indextab]=creerCode("SORTIE");
    indextab++;
}

void EndCodeGen(){
    genererCode();
}

void EndSemantique()
{
    fclose(yyin);
    	printf("------------------------------\n");
    char c;
    c=' ';
    if(i>1)
        c='s';
	if(i==0)
        printf("Compilation complete with no errors\n");
    else
        printf("%d error%c found\n",i,c);
    c=' ';
    if(j>1)
        c='s';
    if(j!=0){
		if(i==0)
			printf("------------------------------\n");
        printf("%d warning%c found\n",j,c);
	}
	printf("------------------------------\n");


    destructSymbolsTable(table_local);
	destructSymbolsTable(table);
	destructSymbolsTable(table_class);
}



