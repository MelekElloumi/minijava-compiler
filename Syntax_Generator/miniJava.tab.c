
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
#define YYLAST   819

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  438

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
     216,   219,   222,   226,   228,   232,   235,   238,   241,   244,
     246,   247,   251,   255,   267,   280,   292,   304,   316,   327,
     339,   351,   363,   365,   368,   371,   375,   377,   379,   381,
     385,   389,   393,   396,   398,   399,   403,   407,   411,   419,
     427,   435,   441,   447,   453,   457,   463,   469,   473,   479,
     485,   491,   496,   501,   506,   511,   519,   527,   535,   543,
     551,   554,   557,   560,   563,   566,   573,   580,   587,   594,
     600,   606,   612,   618,   625,   632,   639,   646,   650,   655,
     660,   665,   669,   674,   679,   683,   688,   695,   702,   709,
     716,   722,   728,   734,   740,   741,   745,   747,   751,   756,
     758,   760,   762,   764,   766
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
      44,    43,    -1,    44,    -1,    -1,    46,    35,    -1,    46,
       1,    -1,    46,    37,    45,    -1,    46,    -1,    46,     1,
      45,    -1,    50,    57,    -1,     1,    57,    -1,    50,     1,
      -1,    48,    47,    -1,    48,    -1,    -1,    48,     1,    47,
      -1,    48,    47,     1,    -1,    11,    46,    22,    45,    23,
      26,    49,    14,    53,    35,    27,    -1,     1,    11,    46,
      22,    45,    23,    26,    49,    14,    53,    35,    27,    -1,
       1,    46,    22,    45,    23,    26,    49,    14,    53,    35,
      27,    -1,    11,     1,    22,    45,    23,    26,    49,    14,
      53,    35,    27,    -1,    11,    46,    22,    45,     1,    26,
      49,    14,    53,    35,    27,    -1,    11,    46,    22,    45,
      23,    26,    49,     1,    35,    27,    -1,    11,    46,    22,
      45,    23,    26,    49,    14,    53,     1,    27,    -1,    11,
      46,    22,    45,    23,    26,    49,    14,    53,    35,     1,
      -1,    11,    46,    22,    45,    23,     1,    49,    14,    53,
      35,    27,    -1,    51,    -1,    43,    51,    -1,     1,    43,
      -1,     4,    24,    25,    -1,     5,    -1,     4,    -1,     6,
      -1,     4,    24,     1,    -1,     1,    24,    25,    -1,     4,
       1,    25,    -1,    52,    51,    -1,    52,    -1,    -1,    26,
      51,    27,    -1,    26,    51,     1,    -1,     1,    51,    27,
      -1,    15,    22,    53,    23,    51,    16,    51,    -1,    15,
       1,    53,    23,    51,    16,    51,    -1,    15,    22,    53,
       1,    52,    16,    51,    -1,    15,     1,    51,    16,    51,
      -1,    15,    22,    53,    23,    51,    -1,    15,    22,    53,
       1,    51,    -1,    15,     1,    51,    -1,    17,    22,    53,
      23,    51,    -1,    17,    22,    53,     1,    51,    -1,    17,
       1,    52,    -1,    18,    22,    53,    23,    35,    -1,    18,
      22,    53,    23,     1,    -1,    18,    22,    53,     1,    35,
      -1,    57,    28,    53,    35,    -1,    57,    28,    53,     1,
      -1,    57,    28,     1,    35,    -1,    57,     1,    53,    35,
      -1,    57,    24,    53,    25,    28,    53,    35,    -1,    57,
       1,    53,    25,    28,    53,    35,    -1,    57,    24,    53,
       1,    28,    53,    35,    -1,    57,    24,    53,    25,     1,
      53,    35,    -1,    57,    24,    53,    25,    28,    53,     1,
      -1,     8,    54,    -1,     7,    54,    -1,     9,    54,    -1,
      57,    54,    -1,    20,    54,    -1,    21,     4,    24,    53,
      25,    54,    -1,    21,     4,     1,    53,    25,    54,    -1,
      21,     1,    24,    53,    25,    54,    -1,    21,     4,    24,
      53,     1,    54,    -1,    21,    57,    22,    23,    54,    -1,
      21,     1,    22,    23,    54,    -1,    21,    57,     1,    23,
      54,    -1,    21,    57,    22,     1,    54,    -1,    21,    57,
      22,    55,    23,    54,    -1,    21,     1,    22,    55,    23,
      54,    -1,    21,    57,     1,    55,    23,    54,    -1,    21,
      57,    22,    55,     1,    54,    -1,    34,    53,    54,    -1,
      22,    53,    23,    54,    -1,     1,    53,    23,    54,    -1,
      22,    53,     1,    54,    -1,    56,    53,    54,    -1,    24,
      53,    25,    54,    -1,    24,    53,     1,    54,    -1,    36,
      19,    54,    -1,    36,     1,    19,    54,    -1,    36,    57,
      22,    55,    23,    54,    -1,    36,     1,    22,    55,    23,
      54,    -1,    36,    57,     1,    55,    23,    54,    -1,    36,
      57,    22,    55,     1,    54,    -1,    36,    57,    22,    23,
      54,    -1,    36,     1,    22,    23,    54,    -1,    36,    57,
       1,    23,    54,    -1,    36,    57,    22,     1,    54,    -1,
      -1,    53,    37,    55,    -1,    53,    -1,    53,     1,    55,
      -1,    53,    37,     1,    55,    -1,    31,    -1,    29,    -1,
      30,    -1,    33,    -1,    32,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    70,    71,    72,    73,    75,
      76,    77,    78,    79,    80,    81,    82,    84,    85,    86,
      88,    89,    91,    92,    93,    95,    96,    97,    99,   100,
     101,   102,   103,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   115,   116,   117,   119,   120,   121,   122,   124,
     125,   126,   128,   129,   130,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   195,   196,   197,   198,   200,
     201,   202,   203,   204,   206
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
      44,    44,    45,    45,    45,    46,    46,    46,    47,    47,
      47,    47,    47,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    49,    49,    49,    50,    50,    50,    50,    50,
      50,    50,    51,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    55,    55,    56,
      56,    56,    56,    56,    57
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     3,     3,     3,    15,    16,
      15,    15,    15,    15,    15,     2,     1,     0,     3,     8,
       8,     8,     8,     6,     6,     6,     6,     2,     1,     0,
       2,     2,     3,     1,     3,     2,     2,     2,     2,     1,
       0,     3,     3,    11,    12,    11,    11,    11,    10,    11,
      11,    11,     1,     2,     2,     3,     1,     1,     1,     3,
       3,     3,     2,     1,     0,     3,     3,     3,     7,     7,
       7,     5,     5,     5,     3,     5,     5,     3,     5,     5,
       5,     4,     4,     4,     4,     7,     7,     7,     7,     7,
       2,     2,     2,     2,     2,     6,     6,     6,     6,     5,
       5,     5,     5,     6,     6,     6,     6,     3,     4,     4,
       4,     3,     4,     4,     3,     4,     6,     6,     6,     6,
       5,     5,     5,     5,     0,     3,     1,     3,     4,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,   134,     0,     0,     4,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     5,     0,    15,     0,     0,     0,     6,     0,
       0,     0,     7,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,    27,    31,    30,    37,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
      61,    59,    55,     0,     0,     0,     0,    24,     0,     0,
      25,     0,     0,    26,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,    21,    22,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       0,   124,   124,   124,   124,     0,     0,     0,    74,     0,
       0,     0,     0,   124,    77,     0,     0,    66,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
     131,   129,   133,   132,     0,    91,     0,    90,    92,    94,
       0,     0,     0,     0,   124,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,     0,
      83,    82,    81,     0,     0,     0,    48,     0,     0,     0,
      11,    12,     0,    10,    13,    14,     8,     0,   124,     0,
       0,   124,     0,   124,     0,     0,     0,     0,     0,     0,
     124,   124,   107,    71,     0,     0,    73,     0,    72,    76,
      75,    80,    79,    78,    45,     0,     0,     0,     0,    46,
      47,    51,    49,    50,    43,     0,     9,    44,   109,   124,
     124,   124,     0,   114,     0,     0,   111,   124,     0,     0,
       0,     0,     0,   124,     0,     0,   124,     0,   110,   108,
       0,   124,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   112,   115,   124,     0,   124,     0,     0,   124,     0,
     100,     0,     0,   124,   124,   124,   124,   124,   101,   124,
     102,    99,   124,   124,    69,    70,    68,    86,    87,    88,
      89,    85,    43,   121,   124,   122,   124,   123,   120,   124,
     124,   127,     0,   125,   104,    97,    96,    98,    95,   105,
     106,   103,   117,   118,   119,   116,     0,   128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     9,    10,   174,    52,   128,    53,    72,
      73,   175,    54,   176,   177,   358,   278,   359,   266,   233
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -276
static const yytype_int16 yypact[] =
{
     132,   509,   314,    10,   427,    53,  -276,   338,   465,  -276,
     497,    34,    63,    71,  -276,   543,   364,   104,   240,   177,
     292,    53,  -276,   543,  -276,    14,   274,   222,  -276,   299,
     301,   318,  -276,    53,    82,   666,   411,   723,  -276,   324,
     341,   277,   350,   732,   732,   732,   348,   210,   145,  -276,
    -276,    91,   241,     2,   432,    91,   355,   366,   372,    91,
     376,   383,   401,   403,   407,   732,   325,  -276,   413,    20,
     789,   574,   412,   102,  -276,  -276,  -276,  -276,  -276,   419,
     732,   732,    80,   446,   450,   439,   457,   466,    91,  -276,
    -276,  -276,  -276,   653,   455,   129,   458,  -276,   740,   110,
    -276,    91,    91,  -276,  -276,   469,   475,   479,   484,   487,
     462,   499,   653,   653,   653,   775,   574,  -276,  -276,   495,
     111,   498,   504,   507,   508,   516,  -276,   653,   519,     4,
     522,   209,   510,  -276,  -276,  -276,   552,   553,   532,   560,
     562,   544,   540,   653,   653,   550,   563,    23,   653,   554,
     564,   587,   568,   577,   575,   751,  -276,  -276,   751,   751,
     751,   751,   247,   582,   583,   598,   601,   602,   751,   629,
       6,   219,   609,   705,   683,   622,  -276,   596,    50,   626,
     627,   628,   387,    95,   296,   296,   619,   296,   296,   635,
     687,  -276,   625,    12,   433,   585,   770,   585,   585,   705,
     138,  -276,   585,  -276,   585,   585,   595,   585,   585,   585,
     634,   585,   751,   633,   648,   296,   649,   143,   585,  -276,
     461,   783,   783,   783,   783,   470,   585,   585,   662,   664,
     207,   585,   248,   783,  -276,   249,   253,  -276,  -276,   650,
     365,   109,   423,    28,   654,   659,   660,   669,    29,   390,
     672,   676,   680,   685,   688,   155,   681,   694,   585,  -276,
    -276,  -276,  -276,  -276,   344,  -276,   585,  -276,  -276,  -276,
     271,   193,   268,   259,   783,   647,   746,   585,  -276,   647,
     647,   647,   647,   684,    30,   691,   693,  -276,   697,    22,
    -276,  -276,  -276,   699,   703,   708,  -276,   712,   170,   585,
    -276,  -276,   713,  -276,  -276,  -276,  -276,   715,   783,   125,
     196,   783,   276,   783,   483,   585,   585,   585,   493,   517,
     783,   783,  -276,  -276,   737,   184,  -276,   665,   742,  -276,
    -276,  -276,  -276,  -276,  -276,   585,   585,   585,   585,  -276,
    -276,  -276,  -276,  -276,  -276,    32,  -276,  -276,  -276,   783,
     783,   783,   527,  -276,   551,   561,  -276,   783,    11,   725,
     735,   745,   187,   783,   752,   386,   783,   260,  -276,  -276,
     647,   773,   328,   647,   647,   739,   747,   748,    41,   189,
    -276,  -276,  -276,   783,   761,   783,   766,   386,   783,   261,
    -276,   585,   617,   783,   783,   783,   783,   783,  -276,   783,
    -276,  -276,   783,   783,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,   783,  -276,   783,  -276,  -276,   783,
     783,  -276,   585,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,    15,  -276
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -276,  -276,   790,   320,  -276,   -26,  -276,    48,   194,    76,
    -276,   -60,  -276,   -54,  -194,  -136,   -17,  -275,  -276,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -127
static const yytype_int16 yytable[] =
{
      11,    13,   234,    75,    18,   143,    20,   194,    51,    55,
      14,    59,   391,   204,    29,    31,   391,    51,    55,    59,
      29,    91,    29,   337,   160,    39,    74,   -33,   195,   291,
     297,   332,    46,   297,  -126,    57,   205,    76,   308,    88,
     206,   144,   410,   364,   367,    92,    67,   -36,   392,   161,
     338,   204,   392,    78,   101,   102,     6,    67,   229,   232,
      25,   235,   236,   292,   298,   333,   239,   379,   240,   241,
     243,   244,   245,   246,   205,   248,   411,   384,   206,   386,
     389,   103,   256,    47,   257,   327,    48,    49,    50,    26,
     273,   274,    70,    39,    67,   257,   160,    27,   179,   180,
     181,   182,    71,    98,    -2,    32,   257,   104,   189,   -29,
     288,   118,   134,    71,    67,   192,   421,   423,   -40,   200,
     201,   212,   309,   203,   213,   214,   349,   216,   217,   -39,
     313,    79,     6,     1,   289,    82,   192,   -38,   135,   237,
     228,   325,     2,   191,   254,   192,    68,   437,   -57,    99,
     350,   113,   249,    66,   178,   252,   305,   178,   178,   178,
     178,   130,   131,   345,   110,   238,   192,   178,   193,    69,
     255,   343,   178,   178,   117,   141,   178,   119,   120,   360,
     361,   362,   306,   178,   178,   371,   178,   178,   396,   193,
     343,   156,   157,   230,   316,   178,   162,   344,   178,   375,
     376,   377,   378,    35,   265,   267,   268,   269,   204,   372,
     146,   178,   397,     6,   178,   351,   412,   317,   352,   230,
     196,   323,   324,    41,   272,   326,   328,   329,   330,   257,
    -124,   277,   147,    42,    66,   206,   259,   260,   261,   262,
     263,   197,    47,   264,   -28,    48,    49,    50,   146,   279,
     281,   257,   -28,    33,   283,   -28,   -28,   322,   -28,   -28,
     320,   402,   419,   312,    94,    96,    34,   -28,   -28,   318,
     183,   280,   282,   203,   178,   178,   284,   354,   178,   178,
     178,   178,   321,   403,   420,    40,   436,   111,    62,    63,
     319,   348,    94,   314,   353,   315,   356,   169,   355,     6,
      48,    49,    50,   368,   369,    36,   129,   129,   129,    94,
     132,   170,    33,   171,   172,    12,   404,     6,    37,   405,
     406,   129,   173,   -29,    17,    43,   178,    44,    22,   337,
      24,    36,   380,   381,   382,    28,    60,   129,   129,    19,
     390,     6,   129,    38,    45,   310,   398,     6,   400,   401,
      89,  -124,   258,    61,   380,   381,   338,   259,   260,   261,
     262,   263,    64,   311,   264,    30,   413,     6,   415,   178,
     417,   418,   178,   178,    65,     6,   424,   425,   426,   427,
     428,    80,   429,    62,    63,   430,   431,   231,   210,     6,
     286,   210,    81,   221,   222,   223,    66,   432,    83,   433,
     287,   211,   434,   435,   299,    84,   224,   225,   226,  -124,
     258,  -124,    56,    85,     6,   259,   260,   261,   262,   263,
     227,  -124,   264,  -124,   231,    86,     6,    -3,    15,    87,
     221,   222,   223,    77,   220,     6,     6,    16,    90,    97,
     221,   222,   223,   224,   225,   226,   100,   -64,   170,   -64,
     171,   172,   105,   224,   225,   226,   106,   227,   290,   173,
     -64,   107,   220,   108,     6,   -17,    21,   227,   221,   222,
     223,   270,   109,     6,   271,    16,   170,   112,   171,   172,
     114,   224,   225,   226,   231,   123,     6,   173,   -64,   126,
     221,   222,   223,   121,   231,   227,     6,   -16,    23,   122,
     221,   222,   223,   224,   225,   226,   357,    16,   124,   -17,
       5,   125,     6,   224,   225,   226,   363,   227,   365,     7,
       6,   127,   133,   136,   221,   222,   223,   227,   231,   137,
       6,   138,   148,   139,   221,   222,   223,   224,   225,   226,
     366,   140,   142,   -17,    21,   145,     6,   224,   225,   226,
     383,   227,   231,    16,     6,   149,   150,   151,   221,   222,
     223,   227,   387,   152,     6,   153,   155,   154,   221,   222,
     223,   224,   225,   226,   385,    95,   158,   163,    48,    49,
      50,   224,   225,   226,   388,   227,   231,   164,     6,   159,
     165,   166,   221,   222,   223,   227,   242,   199,     6,     6,
     167,   168,   221,   222,   223,   224,   225,   226,   184,   185,
     -63,   170,   -63,   171,   172,   224,   225,   226,   422,   227,
       6,   186,   173,   -63,   221,   222,   223,   187,   188,   227,
     190,   198,     6,    48,    49,    50,   202,   224,   225,   226,
     207,   208,   209,   -29,   170,   215,   171,   172,   199,   218,
       6,   227,   219,    66,    47,   173,   -29,    48,    49,    50,
     250,   -64,   170,   -64,   171,   172,   199,    47,     6,   247,
      48,    49,    50,   173,   -64,   251,   253,    40,   275,   -63,
     170,   373,   171,   172,   199,   285,     6,   276,   199,   293,
       6,   173,   -63,   -29,   294,   295,   296,   -64,   170,   300,
     171,   172,   170,   301,   171,   172,   199,   302,     6,   173,
     -64,    66,   303,   173,   -64,   304,   307,   308,   334,   331,
     170,   335,   171,   172,    58,   336,   339,    48,    49,    50,
     340,   173,   -64,    47,    42,   341,    48,    49,    50,   342,
     346,   115,   347,   -29,    48,    49,    50,   199,   393,     6,
     -29,   116,   169,   370,     6,    48,    49,    50,   374,   -29,
     394,   170,   -64,   171,   172,   -29,   170,   -40,   171,   172,
     395,   199,   173,     6,   407,   399,    47,   173,     6,    48,
      49,    50,   408,   409,   414,   170,    93,   171,   172,   416,
      47,     8,     0,    48,    49,    50,   173,   258,     0,    66,
      93,   336,   259,   260,   261,   262,   263,   258,     0,   264,
       0,     0,   259,   260,   261,   262,   263,     0,     0,   264
};

static const yytype_int16 yycheck[] =
{
       1,     2,   196,     1,     5,     1,     7,     1,    34,    35,
       0,    37,     1,     1,    15,    16,     1,    43,    44,    45,
      21,     1,    23,     1,     1,    11,    52,    23,    22,     1,
       1,     1,    33,     1,    23,    36,    24,    35,    23,    65,
      28,    37,     1,   318,   319,    25,    47,    35,    37,    26,
      28,     1,    37,    54,    80,    81,     3,    58,   194,   195,
      26,   197,   198,    35,    35,    35,   202,    35,   204,   205,
     206,   207,   208,   209,    24,   211,    35,   352,    28,   354,
     355,     1,   218,     1,   220,   279,     4,     5,     6,    26,
     226,   227,     1,    11,    95,   231,     1,    26,   158,   159,
     160,   161,    11,     1,     0,     1,   242,    27,   168,    27,
       1,     1,     1,    11,   115,   169,   391,   392,    27,   173,
     174,    26,   258,   177,   184,   185,     1,   187,   188,    27,
     266,    55,     3,     1,    25,    59,   190,    27,    27,     1,
     194,   277,    10,   169,     1,   199,     1,   422,     3,    73,
      25,    22,   212,    24,   155,   215,     1,   158,   159,   160,
     161,   113,   114,   299,    88,    27,   220,   168,   169,    24,
      27,     1,   173,   174,    98,   127,   177,   101,   102,   315,
     316,   317,    27,   184,   185,     1,   187,   188,     1,   190,
       1,   143,   144,   194,     1,   196,   148,    27,   199,   335,
     336,   337,   338,    26,   221,   222,   223,   224,     1,    25,
       1,   212,    25,     3,   215,    19,    27,    24,    22,   220,
       1,   275,   276,     1,   225,   279,   280,   281,   282,   365,
      23,    24,    23,    11,    24,    28,    29,    30,    31,    32,
      33,    22,     1,    36,     3,     4,     5,     6,     1,     1,
       1,   387,    11,    13,     1,    14,    15,   274,    17,    18,
       1,     1,     1,   264,    70,    71,    26,    26,    27,     1,
      23,    23,    23,   327,   275,   276,    23,     1,   279,   280,
     281,   282,    23,    23,    23,    11,   422,    93,    11,    12,
      22,   308,    98,    22,   311,    24,   313,     1,    22,     3,
       4,     5,     6,   320,   321,    13,   112,   113,   114,   115,
     116,    15,    13,    17,    18,     1,   370,     3,    26,   373,
     374,   127,    26,    27,     4,    26,   327,    26,     8,     1,
      10,    13,   349,   350,   351,    15,    12,   143,   144,     1,
     357,     3,   148,    23,    26,     1,   363,     3,   365,   366,
      25,    23,    24,    12,   371,   372,    28,    29,    30,    31,
      32,    33,    12,    19,    36,     1,   383,     3,   385,   370,
     387,   388,   373,   374,    26,     3,   393,   394,   395,   396,
     397,    26,   399,    11,    12,   402,   403,     1,     1,     3,
      25,     1,    26,     7,     8,     9,    24,   414,    22,   416,
      35,    14,   419,   420,    14,    22,    20,    21,    22,    23,
      24,    25,     1,    12,     3,    29,    30,    31,    32,    33,
      34,    35,    36,    37,     1,    22,     3,     0,     1,    22,
       7,     8,     9,     1,     1,     3,     3,    10,    25,    27,
       7,     8,     9,    20,    21,    22,    27,    14,    15,    16,
      17,    18,     6,    20,    21,    22,     6,    34,    35,    26,
      27,    22,     1,     6,     3,     0,     1,    34,     7,     8,
       9,     1,     6,     3,     4,    10,    15,    22,    17,    18,
      22,    20,    21,    22,     1,     6,     3,    26,    27,    27,
       7,     8,     9,    24,     1,    34,     3,     0,     1,    24,
       7,     8,     9,    20,    21,    22,    23,    10,    24,     0,
       1,    24,     3,    20,    21,    22,    23,    34,     1,    10,
       3,    22,    27,    25,     7,     8,     9,    34,     1,    25,
       3,    24,    22,    25,     7,     8,     9,    20,    21,    22,
      23,    25,    23,     0,     1,    23,     3,    20,    21,    22,
      23,    34,     1,    10,     3,     3,     3,    25,     7,     8,
       9,    34,     1,     3,     3,     3,    26,    23,     7,     8,
       9,    20,    21,    22,    23,     1,    26,    23,     4,     5,
       6,    20,    21,    22,    23,    34,     1,    23,     3,    26,
       3,    23,     7,     8,     9,    34,     1,     1,     3,     3,
      23,    26,     7,     8,     9,    20,    21,    22,    26,    26,
      14,    15,    16,    17,    18,    20,    21,    22,     1,    34,
       3,    23,    26,    27,     7,     8,     9,    26,    26,    34,
       1,    22,     3,     4,     5,     6,    14,    20,    21,    22,
      14,    14,    14,    14,    15,    26,    17,    18,     1,    14,
       3,    34,    27,    24,     1,    26,    27,     4,     5,     6,
      27,    14,    15,    16,    17,    18,     1,     1,     3,    35,
       4,     5,     6,    26,    27,    27,    27,    11,    16,    14,
      15,    16,    17,    18,     1,    35,     3,    23,     1,    35,
       3,    26,    27,    27,    35,    35,    27,    14,    15,    27,
      17,    18,    15,    27,    17,    18,     1,    27,     3,    26,
      27,    24,    27,    26,    27,    27,    35,    23,    27,    35,
      15,    28,    17,    18,     1,    28,    27,     4,     5,     6,
      27,    26,    27,     1,    11,    27,     4,     5,     6,    27,
      27,     1,    27,    11,     4,     5,     6,     1,    23,     3,
      27,    11,     1,    16,     3,     4,     5,     6,    16,    27,
      25,    15,    16,    17,    18,    14,    15,    27,    17,    18,
      25,     1,    26,     3,    35,    23,     1,    26,     3,     4,
       5,     6,    35,    35,    23,    15,    11,    17,    18,    23,
       1,     1,    -1,     4,     5,     6,    26,    24,    -1,    24,
      11,    28,    29,    30,    31,    32,    33,    24,    -1,    36,
      -1,    -1,    29,    30,    31,    32,    33,    -1,    -1,    36
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
       6,    43,    44,    46,    50,    43,     1,    57,     1,    43,
      12,    12,    11,    12,    12,    26,    24,    57,     1,    24,
       1,    11,    47,    48,    43,     1,    35,     1,    57,    47,
      26,    26,    47,    22,    22,    12,    22,    22,    43,    25,
      25,     1,    25,    11,    46,     1,    46,    27,     1,    47,
      27,    43,    43,     1,    27,     6,     6,    22,     6,     6,
      47,    46,    22,    22,    22,     1,    11,    47,     1,    47,
      47,    24,    24,     6,    24,    24,    27,    22,    45,    46,
      45,    45,    46,    27,     1,    27,    25,    25,    24,    25,
      25,    45,    23,     1,    37,    23,     1,    23,    22,     3,
       3,    25,     3,     3,    23,    26,    45,    45,    26,    26,
       1,    26,    45,    23,    23,     3,    23,    23,    26,     1,
      15,    17,    18,    26,    43,    49,    51,    52,    57,    49,
      49,    49,    49,    23,    26,    26,    23,    26,    26,    49,
       1,    43,    51,    57,     1,    22,     1,    22,    22,     1,
      51,    51,    14,    51,     1,    24,    28,    14,    14,    14,
       1,    14,    26,    49,    49,    26,    49,    49,    14,    27,
       1,     7,     8,     9,    20,    21,    22,    34,    51,    53,
      57,     1,    53,    57,    52,    53,    53,     1,    27,    53,
      53,    53,     1,    53,    53,    53,    53,    35,    53,    49,
      27,    27,    49,    27,     1,    27,    53,    53,    24,    29,
      30,    31,    32,    33,    36,    54,    56,    54,    54,    54,
       1,     4,    57,    53,    53,    16,    23,    24,    54,     1,
      23,     1,    23,     1,    23,    35,    25,    35,     1,    25,
      35,     1,    35,    35,    35,    35,    27,     1,    35,    14,
      27,    27,    27,    27,    27,     1,    27,    35,    23,    53,
       1,    19,    57,    53,    22,    24,     1,    24,     1,    22,
       1,    23,    54,    51,    51,    53,    51,    52,    51,    51,
      51,    35,     1,    35,    27,    28,    28,     1,    28,    27,
      27,    27,    27,     1,    27,    53,    27,    27,    54,     1,
      25,    19,    22,    54,     1,    22,    54,    23,    53,    55,
      53,    53,    53,    23,    55,     1,    23,    55,    54,    54,
      16,     1,    25,    16,    16,    53,    53,    53,    53,    35,
      54,    54,    54,    23,    55,    23,    55,     1,    23,    55,
      54,     1,    37,    23,    25,    25,     1,    25,    54,    23,
      54,    54,     1,    23,    51,    51,    51,    35,    35,    35,
       1,    35,    27,    54,    23,    54,    23,    54,    54,     1,
      23,    55,     1,    55,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    53,    55
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
#line 57 "miniJava.y"
    {syntaxerror ("main class missing"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 58 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 59 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 60 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 63 "miniJava.y"
    {syntaxerror ("public keyword missing");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 64 "miniJava.y"
    {syntaxerror ("public keyword missing");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 65 "miniJava.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 66 "miniJava.y"
    {syntaxerror ("class identifier missing"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 67 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 68 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 73 "miniJava.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 76 "miniJava.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 77 "miniJava.y"
    {syntaxerror ("parent class identifier missing"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 78 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 80 "miniJava.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 81 "miniJava.y"
    {syntaxerror ("class identifier missing"); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 82 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 89 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 93 "miniJava.y"
    {syntaxerror ("comma missing"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 96 "miniJava.y"
    {syntaxerror ("invalid type"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 97 "miniJava.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 102 "miniJava.y"
    {syntaxerror ("code out of method"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 103 "miniJava.y"
    {syntaxerror ("code out of method"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 106 "miniJava.y"
    {syntaxerror ("public keyword missing"); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 107 "miniJava.y"
    {syntaxerror ("public keyword missing"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 108 "miniJava.y"
    {syntaxerror ("method name missing"); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 109 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 110 "miniJava.y"
    {syntaxerror ("return keyword missing"); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 111 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 112 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 113 "miniJava.y"
    {syntaxerror ("open brace missing"); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 117 "miniJava.y"
    {syntaxerror ("variable declaration not first"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 124 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 125 "miniJava.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 126 "miniJava.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 133 "miniJava.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 134 "miniJava.y"
    {syntaxerror ("opening brace missing"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 136 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 137 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 138 "miniJava.y"
    {syntaxerror ("if condition missing"); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 140 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 141 "miniJava.y"
    {syntaxerror ("if condition missing"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 143 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 144 "miniJava.y"
    {syntaxerror ("while condition missing"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 146 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 147 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 149 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 150 "miniJava.y"
    {syntaxerror ("second expression missing"); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 151 "miniJava.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 153 "miniJava.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 154 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 155 "miniJava.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 156 "miniJava.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 164 "miniJava.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 165 "miniJava.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 166 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 168 "miniJava.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 169 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 170 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 172 "miniJava.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 173 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 174 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 177 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 178 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 182 "miniJava.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 184 "miniJava.y"
    {syntaxerror ("invalid .length"); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 186 "miniJava.y"
    {syntaxerror("invalid identifier"); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 187 "miniJava.y"
    {syntaxerror("opening parentheses missing"); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 188 "miniJava.y"
    {syntaxerror("closing parentheses missing"); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 190 "miniJava.y"
    {syntaxerror("invalid identifier"); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 191 "miniJava.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 192 "miniJava.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 197 "miniJava.y"
    {syntaxerror ("comma missing"); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 198 "miniJava.y"
    {syntaxerror ("no expression after comma"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2296 "miniJava.tab.c"
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
#line 211 "miniJava.y"

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



