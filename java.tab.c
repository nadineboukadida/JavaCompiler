
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
#line 1 "java.y"

	

#include <stdio.h>	
 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;



/* Line 189 of yacc.c  */
#line 85 "java.tab.c"

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
     PROGRAM = 258,
     point_virgule = 259,
     identifier = 260,
     OPER = 261,
     THIS = 262,
     NEW = 263,
     INT = 264,
     OPEN_BRACKET = 265,
     CLOSED_BRACKET = 266,
     OPEN_PARENTH = 267,
     CLOSED_PARENTH = 268,
     NOT = 269,
     INTEGER_LITERAL = 270,
     BOOLEAN_LITERAL = 271,
     LENGTH = 272,
     DOT = 273,
     AESTRIK = 274,
     COMMA = 275,
     QMARK = 276,
     OPEN_CURLY = 277,
     CLOSE_CURLY = 278,
     IF = 279,
     ELSE = 280,
     WHILE = 281,
     PRINT = 282,
     AFFECT = 283,
     BOOLEAN = 284,
     RETURN = 285,
     PUBLIC = 286,
     STRING = 287,
     EXTENDS = 288,
     CLASS = 289,
     STATIC = 290,
     VOID = 291,
     MAIN = 292
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
#line 164 "java.tab.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNRULES -- Number of states.  */
#define YYNSTATES  490

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
       0,     0,     3,     6,    24,    42,    60,    78,    96,   114,
     132,   150,   168,   186,   204,   222,   240,   258,   276,   294,
     303,   310,   317,   324,   326,   329,   333,   338,   342,   346,
     349,   354,   368,   381,   395,   409,   423,   437,   451,   465,
     479,   493,   494,   510,   511,   527,   528,   544,   546,   549,
     553,   557,   561,   565,   567,   569,   571,   575,   583,   591,
     599,   607,   615,   623,   631,   639,   645,   651,   657,   663,
     669,   675,   681,   687,   693,   699,   705,   711,   716,   721,
     726,   731,   736,   744,   752,   760,   768,   776,   784,   792,
     800,   802,   805,   809,   813,   817,   822,   827,   832,   836,
     840,   844,   846,   848,   850,   852,   858,   864,   870,   876,
     882,   888,   893,   898,   903,   908,   913,   916,   919,   923,
     927,   931
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    40,    42,    -1,    34,     5,    22,    31,
      35,    36,    37,    12,    32,    10,    11,     5,    13,    22,
      51,    23,    23,    -1,    34,     1,    22,    31,    35,    36,
      37,    12,    32,    10,    11,     5,    13,    22,    51,    23,
      23,    -1,    34,     5,     1,    31,    35,    36,    37,    12,
      32,    10,    11,     5,    13,    22,    51,    23,    23,    -1,
      34,     5,    22,     1,    35,    36,    37,    12,    32,    10,
      11,     5,    13,    22,    51,    23,    23,    -1,    34,     5,
      22,    31,     1,    36,    37,    12,    32,    10,    11,     5,
      13,    22,    51,    23,    23,    -1,    34,     5,    22,    31,
      35,     1,    37,    12,    32,    10,    11,     5,    13,    22,
      51,    23,    23,    -1,    34,     5,    22,    31,    35,    36,
       1,    12,    32,    10,    11,     5,    13,    22,    51,    23,
      23,    -1,    34,     5,    22,    31,    35,    36,    37,     1,
      32,    10,    11,     5,    13,    22,    51,    23,    23,    -1,
      34,     5,    22,    31,    35,    36,    37,    12,     1,    10,
      11,     5,    13,    22,    51,    23,    23,    -1,    34,     5,
      22,    31,    35,    36,    37,    12,    32,     1,    11,     5,
      13,    22,    51,    23,    23,    -1,    34,     5,    22,    31,
      35,    36,    37,    12,    32,    10,     1,     5,    13,    22,
      51,    23,    23,    -1,    34,     5,    22,    31,    35,    36,
      37,    12,    32,    10,    11,     1,    13,    22,    51,    23,
      23,    -1,    34,     5,    22,    31,    35,    36,    37,    12,
      32,    10,    11,     5,     1,    22,    51,    23,    23,    -1,
      34,     5,    22,    31,    35,    36,    37,    12,    32,    10,
      11,     5,    13,     1,    51,    23,    23,    -1,    34,     5,
      22,    31,    35,    36,    37,    12,    32,    10,    11,     5,
      13,    22,    51,     1,    23,    -1,    34,     5,    22,    31,
      35,    36,    37,    12,    32,    10,    11,     5,    13,    22,
      51,    23,     1,    -1,    34,     5,    33,     5,    22,    43,
      49,    23,    -1,    34,     1,    22,    43,    49,    23,    -1,
      34,     5,     1,    43,    49,    23,    -1,    34,     5,    22,
      43,    49,    23,    -1,    41,    -1,    41,    42,    -1,    50,
       5,     4,    -1,    50,     5,     4,    43,    -1,    50,     1,
       4,    -1,    50,     5,     1,    -1,    50,     5,    -1,    50,
       5,    20,    44,    -1,    31,    50,     5,    12,    44,    13,
      22,    43,    52,    30,    53,     4,    23,    -1,    31,    50,
       5,    12,    13,    22,    43,    52,    30,    53,     4,    23,
      -1,     1,    50,     5,    12,    44,    13,    22,    43,    52,
      30,    53,     4,    23,    -1,    31,     1,     5,    12,    44,
      13,    22,    43,    52,    30,    53,     4,    23,    -1,    31,
      50,     1,    12,    44,    13,    22,    43,    52,    30,    53,
       4,    23,    -1,    31,    50,     5,     1,    44,    13,    22,
      43,    52,    30,    53,     4,    23,    -1,    31,    50,     5,
      12,    44,     1,    22,    43,    52,    30,    53,     4,    23,
      -1,    31,    50,     5,    12,    44,    13,     1,    43,    52,
      30,    53,     4,    23,    -1,    31,    50,     5,    12,    44,
      13,    22,     1,    52,    30,    53,     4,    23,    -1,    31,
      50,     5,    12,    44,    13,    22,    43,     1,    30,    53,
       4,    23,    -1,    -1,    31,    50,     5,    12,    44,    13,
      22,    43,    52,    30,     1,     4,    23,    46,    30,    -1,
      -1,    31,    50,     5,    12,    44,    13,    22,    43,    52,
      30,    53,     1,    23,    47,    30,    -1,    -1,    31,    50,
       5,    12,    44,    13,    22,    43,    52,    30,    53,     4,
       1,    48,    30,    -1,    45,    -1,    45,    49,    -1,     9,
      10,    11,    -1,     1,    10,    11,    -1,     9,     1,    11,
      -1,     9,    10,     1,    -1,    29,    -1,     9,    -1,     5,
      -1,    22,    52,    23,    -1,    24,    12,    53,    13,    51,
      25,    51,    -1,     1,    12,    53,    13,    51,    25,    51,
      -1,    24,     1,    53,    13,    51,    25,    51,    -1,    24,
      12,     1,    13,    51,    25,    51,    -1,    24,    12,    53,
       1,    51,    25,    51,    -1,    24,    12,    53,    13,     1,
      25,    51,    -1,    24,    12,    53,    13,    51,     1,    51,
      -1,    24,    12,    53,    13,    51,    25,     1,    -1,    26,
      12,    53,    13,    51,    -1,     1,    12,    53,    13,    51,
      -1,    26,     1,    53,    13,    51,    -1,    26,    12,     1,
       1,    51,    -1,    26,    12,    53,     1,    51,    -1,    26,
      12,    53,    13,     1,    -1,    27,    12,    53,    13,     4,
      -1,     1,    12,    53,    13,     4,    -1,    27,     1,    53,
      13,     4,    -1,    27,    12,     1,    13,     4,    -1,    27,
      12,    53,     1,     4,    -1,    27,    12,    53,    13,     1,
      -1,     5,    28,    53,     4,    -1,     1,    28,    53,     4,
      -1,     5,     1,    53,     4,    -1,     5,    28,     1,     4,
      -1,     5,    28,    53,     1,    -1,     5,    10,    53,    11,
      28,    53,     4,    -1,     1,    10,    53,    11,    28,    53,
       4,    -1,     5,     1,    53,    11,    28,    53,     4,    -1,
       5,    10,     1,    11,    28,    53,     4,    -1,     5,    10,
      53,     1,    28,    53,     4,    -1,     5,    10,    53,    11,
       1,    53,     4,    -1,     5,    10,    53,    11,    28,     1,
       4,    -1,     5,    10,    53,    11,    28,    53,     1,    -1,
      51,    -1,    51,    52,    -1,    53,     6,    53,    -1,    53,
      19,    53,    -1,    53,     1,    53,    -1,    53,    10,    53,
      11,    -1,    53,    10,    53,     1,    -1,    53,    10,     1,
      11,    -1,    53,    18,    17,    -1,    53,     1,    17,    -1,
      53,    18,     1,    -1,    15,    -1,    16,    -1,     5,    -1,
       7,    -1,     8,     9,    10,    53,    11,    -1,     1,     9,
      10,    53,    11,    -1,     8,     1,    10,    53,    11,    -1,
       8,     9,     1,    53,    11,    -1,     8,     9,    10,     1,
      11,    -1,     8,     9,    10,    53,     1,    -1,     8,     5,
      12,    13,    -1,     1,     5,    12,    13,    -1,     8,     1,
      12,    13,    -1,     8,     5,     1,    13,    -1,     8,     5,
      12,     1,    -1,    14,    53,    -1,    14,     1,    -1,    12,
      53,    13,    -1,     1,    53,    13,    -1,    12,     1,    13,
      -1,    12,    53,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    88,    88,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   109,
     110,   111,   112,   115,   116,   119,   120,   121,   122,   125,
     125,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   138,   139,   139,   140,   140,   142,   143,   146,
     147,   148,   149,   150,   151,   152,   155,   157,   158,   159,
     160,   161,   162,   163,   164,   166,   167,   168,   169,   170,
     171,   173,   174,   175,   176,   177,   178,   180,   181,   182,
     183,   184,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   210,   211,   212,   213,   214,   215,
     216,   218,   219,   220,   221,   222,   224,   225,   226,   227,
     228,   229
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "point_virgule", "identifier",
  "OPER", "THIS", "NEW", "INT", "OPEN_BRACKET", "CLOSED_BRACKET",
  "OPEN_PARENTH", "CLOSED_PARENTH", "NOT", "INTEGER_LITERAL",
  "BOOLEAN_LITERAL", "LENGTH", "DOT", "AESTRIK", "COMMA", "QMARK",
  "OPEN_CURLY", "CLOSE_CURLY", "IF", "ELSE", "WHILE", "PRINT", "AFFECT",
  "BOOLEAN", "RETURN", "PUBLIC", "STRING", "EXTENDS", "CLASS", "STATIC",
  "VOID", "MAIN", "$accept", "programme", "MAINCLASS", "CLASS_DECLARATION",
  "CLASS_DECLARATIONS", "VAR_DECLARATIONS", "ARGUMENTS",
  "METHOD_DECLARATION", "$@1", "$@2", "$@3", "METHOD_DECLARATIONS", "TYPE",
  "STATEMENT", "STATEMENTLIST", "EXPRESSION", 0
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
       0,    38,    39,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    41,
      41,    41,    41,    42,    42,    43,    43,    43,    43,    44,
      44,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    46,    45,    47,    45,    48,    45,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,     8,
       6,     6,     6,     1,     2,     3,     4,     3,     3,     2,
       4,    13,    12,    13,    13,    13,    13,    13,    13,    13,
      13,     0,    15,     0,    15,     0,    15,     1,     2,     3,
       3,     3,     3,     1,     1,     1,     3,     7,     7,     7,
       7,     7,     7,     7,     7,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     4,     4,     4,
       4,     4,     7,     7,     7,     7,     7,     7,     7,     7,
       1,     2,     3,     3,     3,     4,     4,     4,     3,     3,
       3,     1,     1,     1,     1,     5,     5,     5,     5,     5,
       5,     4,     4,     4,     4,     4,     2,     2,     3,     3,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     1,     0,    23,     2,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,     0,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,    52,    49,     0,     0,     0,
      48,    20,    27,    28,    25,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   104,     0,     0,     0,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,     0,     0,    80,    81,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     3,     0,     0,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,   120,   121,   118,    99,    94,
       0,     0,     0,     0,   100,    98,     0,    72,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,     0,    68,    69,    70,    65,    73,    74,    75,
      76,    71,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,   112,     0,     0,   113,   114,   115,
     111,     0,     0,     0,    97,    96,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,    40,    41,    43,    45,    31,
     106,   107,   108,   109,   110,   105,    83,    58,    84,    85,
      86,    87,    88,    89,    82,    59,    60,     0,    61,    62,
      63,    64,    57,     0,     0,     0,     0,    42,    44,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    33,   117,    49,   483,   484,
     485,    50,    34,   188,   189,   303
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -195
static const yytype_int16 yypact[] =
{
      -2,    34,    86,    53,   106,    81,  -195,   229,    53,  -195,
     126,   146,    32,   134,    35,  -195,   158,   175,   183,    13,
      96,    96,    96,   221,   238,   245,   255,   262,    24,   250,
    -195,   261,  -195,    33,   241,    33,    33,   239,   264,   265,
     273,   274,   275,    18,   302,   304,   160,    96,   144,    60,
     297,   318,   278,   303,   306,    96,   315,   321,   322,   323,
     324,   325,    25,  -195,  -195,  -195,  -195,   334,   190,   244,
    -195,  -195,  -195,  -195,   122,  -195,  -195,    33,   317,   320,
     331,   342,   344,   347,   352,    26,   336,   343,   375,    29,
    -195,   378,   383,   395,   397,   399,   402,   403,   405,   412,
     249,    96,    96,    96,    96,    93,  -195,   393,   416,   418,
     422,   427,   429,   433,   438,   440,   232,   341,   450,   447,
     449,   456,   437,    87,   466,   467,   469,   479,   480,   484,
     485,   486,   491,   492,   267,   459,   478,   465,   481,   483,
      96,   487,    94,   494,   497,   499,   500,   501,   506,   508,
     513,   515,   517,   520,   131,    96,    96,    96,    96,    96,
     364,    96,    96,   149,   522,   525,   527,   528,   530,   537,
     538,   540,   548,   550,   556,   558,    98,   364,  -195,   364,
     364,   364,   225,    65,   364,   118,   179,   184,    91,   512,
     364,   364,   346,   370,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   547,   552,
     557,   560,  1012,  1012,  1012,  1012,  1024,  1036,   534,  1012,
    1048,  1012,  1060,  1012,  1072,  -195,  1012,   562,   567,   568,
     164,   570,   544,   579,   584,   587,   589,   594,   596,   597,
     599,   604,   606,   607,   609,    66,  1012,  1012,  1012,  1012,
     988,  -195,  -195,   279,  1084,  1096,  -195,  -195,   457,   460,
     476,   446,   860,   482,   876,   498,  -195,   505,   888,   519,
     521,  1000,   535,   545,   904,   555,   565,  1012,  1012,  1012,
    1012,  1108,   614,   617,   619,   624,   627,   629,   634,   637,
     639,   644,   647,   649,   654,   657,    89,   575,   585,   595,
     605,   523,   533,   615,   117,   186,   263,   920,   625,  1169,
     413,   843,  1012,  1120,   580,    23,  1012,   356,  -195,  -195,
     590,   620,   200,    37,  -195,  1179,  -195,   364,   364,   292,
     376,   364,   316,   292,   384,   664,   674,   809,   285,   663,
     635,   645,   655,   665,   936,   675,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,   666,   667,   672,   679,   684,  1012,  -195,  1012,
     691,   696,   159,  1012,  1132,  -195,  1156,  -195,  -195,  -195,
     424,   948,   681,  1012,  -195,  -195,   435,  -195,   563,  1012,
    1012,  1012,  1012,  1144,   633,   685,   174,   277,   686,   199,
      79,  -195,   257,  -195,  -195,   225,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,   701,   702,   703,   708,   709,   224,   125,
    -195,  -195,  -195,  -195,  -195,   695,   697,  -195,  -195,  -195,
    -195,   711,   960,   717,  -195,  1156,  -195,   733,   364,   740,
     756,   763,   779,   976,   786,   364,   364,  1084,   364,   364,
     364,   394,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  1156,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  1179,  -195,  -195,  -195,   793,  -195,  -195,
    -195,   225,  -195,   658,   689,   690,   340,  -195,  -195,  -195
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -195,  -195,  -195,  -195,   725,     7,   -82,  -195,  -195,  -195,
    -195,   -18,   -32,  -194,   650,  -170
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -119
static const yytype_int16 yytable[] =
{
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    27,    67,    69,    53,    54,    61,
     119,   120,   121,   123,   384,    42,    84,    99,    35,    36,
     104,    70,     1,    18,    47,     4,    21,    85,   392,     5,
     385,   105,   258,   259,   260,   261,   263,   265,    28,   267,
     269,   270,   272,   273,   275,    62,   276,    22,   100,    91,
      43,    47,    77,    19,    48,   393,   215,   295,    23,   118,
     118,   118,   118,   118,   178,   216,   297,   298,   299,   300,
     450,    90,    11,   -47,   308,   310,     6,     7,   141,   296,
     360,    48,   182,   217,    29,   162,   183,    29,    30,   206,
     142,    30,    31,    12,   451,    31,   122,   340,   341,   342,
     343,   345,   361,   184,   -90,   185,   163,   186,   187,   219,
     207,   -90,    32,   388,   118,    32,   458,   369,    10,   370,
     220,    31,   175,   394,   395,   398,   400,   401,   403,   404,
     406,   379,   380,   382,   176,    68,   386,   160,   459,    30,
     192,    32,   379,    31,    30,   379,    20,    16,    31,   379,
     429,    65,   177,   379,   179,   180,   181,   379,   190,   191,
     193,    66,   430,    32,   212,   250,   213,    17,    32,   301,
     221,   252,   253,   302,   212,   223,   447,   371,   255,   256,
     257,   222,   214,    24,   280,    87,   224,   425,   372,   426,
      44,   250,   214,   431,   433,   251,   379,   252,   253,   212,
      25,   213,   254,   437,   255,   256,   257,   378,    26,   439,
     440,   441,   442,   444,   449,   250,    37,   214,   391,   251,
      13,   252,   253,   133,    14,   212,   254,   213,   255,   256,
     257,   378,    51,   134,   467,    88,    52,   457,   379,    89,
     115,   475,   476,   214,   478,   479,   480,   482,   215,   116,
      44,    55,    45,  -103,   373,   379,   -54,   216,   153,   366,
    -103,    46,   154,   374,    38,  -103,  -103,   477,   215,    73,
     304,    39,    74,  -103,   305,   217,   410,   216,   306,   411,
    -103,    40,   388,   396,   379,  -103,  -103,   397,    41,   252,
     253,    56,    57,   379,   254,   217,   255,   256,   257,   378,
      58,    59,    60,    63,   184,    64,   185,   396,   186,   187,
      71,   402,    72,   252,   253,   302,    75,    78,   254,    76,
     255,   256,   257,    79,    80,    81,    82,    83,   184,    86,
     185,   182,   186,   187,   387,   183,  -118,   182,   101,    92,
    -118,   183,    93,  -118,   135,   102,    44,   182,  -118,  -118,
     387,   183,   184,    94,   185,   182,   186,   187,   184,   183,
     185,   230,   186,   187,    95,   183,    96,   399,   184,    97,
     185,   183,   186,   187,    98,   405,   184,   103,   185,   183,
     186,   187,   184,   107,   185,   481,   186,   187,   184,   183,
     185,   106,   186,   187,   124,   108,   184,   109,   185,   110,
     186,   187,   111,   112,   311,   113,   184,  -116,   185,  -116,
     186,   187,   114,  -116,  -116,   311,  -116,   125,   -92,   126,
     -92,   315,   316,   127,   313,   -92,   311,   -92,   128,   -93,
     129,   -93,   315,   316,   130,   -93,   -93,   311,   -93,   131,
     319,   132,   312,   -93,   -93,   136,   313,   320,   311,   140,
     137,   311,   138,   312,   315,   316,   312,   313,   314,   139,
     313,   143,   144,   317,   145,   315,   316,   311,   315,   316,
     318,   155,   312,   322,   146,   147,   313,   157,   312,   148,
     149,   150,   313,   323,   315,   316,   151,   152,   156,   325,
     315,   316,   326,   158,   312,   159,   311,   164,   313,   161,
     165,   312,   166,   167,   168,   313,   315,   316,   327,   169,
     329,   170,   311,   315,   316,   312,   171,   312,   172,   313,
     173,   313,   330,   174,   331,   366,   333,   315,   316,   315,
     316,   312,   226,   367,   194,   313,   311,   195,   334,   196,
     197,   312,   198,   315,   316,   313,   337,   266,   335,   199,
     200,   312,   201,   315,   316,   313,   311,   282,   338,   339,
     202,   312,   203,   315,   316,   313,   311,   246,   204,   362,
     205,   312,   247,   315,   316,   313,   311,   248,   438,   363,
     249,   312,   277,   315,   316,   313,   311,   278,   279,   364,
     281,   312,   283,   315,   316,   313,   311,   284,   383,   365,
     285,   312,   286,   315,   316,   313,   311,   287,   389,   288,
     289,   312,   290,   315,   316,   313,   376,   291,   368,   292,
     293,   312,   294,   315,   316,   313,   311,   346,   377,   413,
     347,   312,   348,   315,   316,   313,   311,   349,   390,   414,
     350,   312,   351,   315,   316,   313,   311,   352,   445,   415,
     353,   312,   354,   315,   316,   313,   311,   355,   407,   416,
     356,   312,   357,   315,   316,   313,   418,   358,   408,   419,
     359,   312,   435,   315,   316,   313,   412,   312,   487,   420,
     421,   313,   436,   315,   316,   422,   311,   424,   311,   315,
     316,   312,   423,   312,   427,   313,   460,   313,   461,   428,
     446,   448,   311,   315,   316,   315,   316,   312,   464,   488,
     489,   313,   462,   312,   452,   453,   454,   313,   465,   315,
     316,   455,   456,    15,   311,   315,   316,   466,     0,   312,
       0,   311,     0,   313,   468,     0,   312,     0,     0,     0,
     313,   315,   316,     0,     0,     0,     0,   311,   315,   316,
     469,     0,   312,     0,   311,     0,   313,   470,     0,   312,
       0,     0,     0,   313,   315,   316,     0,     0,     0,     0,
     311,   315,   316,   471,     0,   312,     0,   473,     0,   313,
     474,     0,   312,     0,   376,     0,   313,   315,   316,   312,
       0,     0,     0,   313,   315,   316,   486,     0,     0,     0,
     250,   315,   316,   409,   251,     0,   252,   253,     0,     0,
       0,   254,     0,   255,   256,   257,   378,   208,     0,   209,
     210,   211,     0,     0,   218,     0,     0,     0,   225,     0,
     227,   228,   229,   231,   250,     0,     0,     0,   251,     0,
     252,   253,     0,     0,     0,   254,     0,   255,   256,   257,
     378,   250,     0,     0,     0,   301,     0,   252,   253,   302,
       0,   321,   254,     0,   255,   256,   257,   250,     0,     0,
     324,   301,     0,   252,   253,   302,     0,     0,   254,   250,
     255,   256,   257,   301,     0,   252,   253,   302,     0,     0,
     254,   328,   255,   256,   257,   250,     0,     0,     0,   301,
       0,   252,   253,   302,     0,     0,   254,   336,   255,   256,
     257,   250,     0,     0,     0,   301,     0,   252,   253,   302,
       0,     0,   254,   375,   255,   256,   257,   250,     0,     0,
     417,   301,     0,   252,   253,   302,     0,     0,   254,   250,
     255,   256,   257,   301,     0,   252,   253,   302,     0,   434,
     254,   250,   255,   256,   257,   301,     0,   252,   253,   302,
       0,   463,   254,     0,   255,   256,   257,   250,     0,     0,
     472,   301,     0,   252,   253,   302,     0,     0,   254,   250,
     255,   256,   257,   301,     0,   252,   253,   302,     0,     0,
     254,   332,   255,   256,   257,   301,     0,   252,   253,   302,
       0,     0,   254,   250,   255,   256,   257,   251,     0,   252,
     253,     0,     0,     0,   254,   262,   255,   256,   257,   251,
       0,   252,   253,     0,     0,     0,   254,   264,   255,   256,
     257,   251,     0,   252,   253,     0,     0,     0,   254,   268,
     255,   256,   257,   251,     0,   252,   253,     0,     0,     0,
     254,   271,   255,   256,   257,   251,     0,   252,   253,     0,
       0,     0,   254,   274,   255,   256,   257,   251,     0,   252,
     253,     0,     0,     0,   254,   307,   255,   256,   257,   251,
       0,   252,   253,     0,     0,     0,   254,   309,   255,   256,
     257,   251,     0,   252,   253,     0,     0,     0,   254,   344,
     255,   256,   257,   251,     0,   252,   253,     0,     0,     0,
     254,   381,   255,   256,   257,   251,     0,   252,   253,     0,
       0,     0,   254,   432,   255,   256,   257,   251,     0,   252,
     253,     0,     0,     0,   254,   443,   255,   256,   257,   251,
       0,   252,   253,     0,     0,     0,   254,     0,   255,   256,
     257,   251,     0,   252,   253,     0,     0,     0,   254,     0,
     255,   256,   257,   378,   301,     0,   252,   253,   302,     0,
       0,   254,     0,   255,   256,   257,   252,   253,     0,     0,
       0,   254,     0,   255,   256,   257,   378
};

static const yytype_int16 yycheck[] =
{
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     1,    47,    48,    35,    36,     1,
     102,   103,   104,   105,     1,     1,     1,     1,    21,    22,
       1,    49,    34,     1,     1,     1,     1,    12,     1,     5,
      17,    12,   212,   213,   214,   215,   216,   217,    35,   219,
     220,   221,   222,   223,   224,    37,   226,    22,    32,    77,
      36,     1,    55,    31,    31,    28,     1,     1,    33,   101,
     102,   103,   104,   105,   156,    10,   246,   247,   248,   249,
       1,    74,     1,    23,   254,   255,     0,    34,     1,    23,
       1,    31,     1,    28,     1,     1,     5,     1,     5,     1,
      13,     5,     9,    22,    25,     9,    13,   277,   278,   279,
     280,   281,    23,    22,    23,    24,    22,    26,    27,     1,
      22,    30,    29,   317,   156,    29,     1,    10,    22,    12,
      12,     9,     1,   327,   328,   329,   330,   331,   332,   333,
     334,   311,   312,   313,    13,     1,   316,   140,    23,     5,
       1,    29,   322,     9,     5,   325,    22,    31,     9,   329,
       1,     1,   155,   333,   157,   158,   159,   337,   161,   162,
     163,    11,    13,    29,    10,     1,    12,    31,    29,     5,
       1,     7,     8,     9,    10,     1,    12,     1,    14,    15,
      16,    12,    28,    35,    30,     5,    12,   367,    12,   369,
      10,     1,    28,   373,   374,     5,   376,     7,     8,    10,
      35,    12,    12,   383,    14,    15,    16,    17,    35,   389,
     390,   391,   392,   393,    25,     1,     5,    28,    28,     5,
       1,     7,     8,     1,     5,    10,    12,    12,    14,    15,
      16,    17,     1,    11,   438,     1,     5,    23,   418,     5,
       1,   445,   446,    28,   448,   449,   450,   451,     1,    10,
      10,    22,     1,     6,     1,   435,     5,    10,     1,    12,
      13,    10,     5,    10,    36,    18,    19,   447,     1,     1,
       1,    36,     4,     6,     5,    28,     1,    10,     9,     4,
      13,    36,   486,     1,   464,    18,    19,     5,    36,     7,
       8,    37,    37,   473,    12,    28,    14,    15,    16,    17,
      37,    37,    37,    11,    22,    11,    24,     1,    26,    27,
      23,     5,     4,     7,     8,     9,    23,    12,    12,    23,
      14,    15,    16,    12,    12,    12,    12,    12,    22,     5,
      24,     1,    26,    27,     4,     5,     6,     1,    12,    32,
      10,     5,    32,    13,    13,    12,    10,     1,    18,    19,
       4,     5,    22,    32,    24,     1,    26,    27,    22,     5,
      24,     1,    26,    27,    32,     5,    32,     1,    22,    32,
      24,     5,    26,    27,    32,     1,    22,    12,    24,     5,
      26,    27,    22,    10,    24,     1,    26,    27,    22,     5,
      24,    23,    26,    27,    11,    10,    22,    10,    24,    10,
      26,    27,    10,    10,     1,    10,    22,     4,    24,     6,
      26,    27,    10,    10,    11,     1,    13,    11,     4,    11,
       6,    18,    19,    11,    10,    11,     1,    13,    11,     4,
      11,     6,    18,    19,    11,    10,    11,     1,    13,    11,
       4,    11,     6,    18,    19,     5,    10,    11,     1,    22,
      13,     1,    13,     6,    18,    19,     6,    10,    11,    13,
      10,     5,     5,    13,     5,    18,    19,     1,    18,    19,
       4,    22,     6,     1,     5,     5,    10,    22,     6,     5,
       5,     5,    10,    11,    18,    19,     5,     5,    20,     1,
      18,    19,     4,    22,     6,    22,     1,    13,    10,    22,
      13,     6,    13,    13,    13,    10,    18,    19,    13,    13,
       1,    13,     1,    18,    19,     6,    13,     6,    13,    10,
      13,    10,    13,    13,    13,    12,     1,    18,    19,    18,
      19,     6,    30,    10,    22,    10,     1,    22,    13,    22,
      22,     6,    22,    18,    19,    10,     1,    23,    13,    22,
      22,     6,    22,    18,    19,    10,     1,    23,    13,     4,
      22,     6,    22,    18,    19,    10,     1,    30,    22,     4,
      22,     6,    30,    18,    19,    10,     1,    30,    25,     4,
      30,     6,    30,    18,    19,    10,     1,    30,    30,     4,
      30,     6,    23,    18,    19,    10,     1,    23,    28,     4,
      23,     6,    23,    18,    19,    10,     1,    23,    28,    23,
      23,     6,    23,    18,    19,    10,     1,    23,    13,    23,
      23,     6,    23,    18,    19,    10,     1,    23,    13,     4,
      23,     6,    23,    18,    19,    10,     1,    23,    28,     4,
      23,     6,    23,    18,    19,    10,     1,    23,    25,     4,
      23,     6,    23,    18,    19,    10,     1,    23,     4,     4,
      23,     6,    23,    18,    19,    10,     1,    23,     4,     4,
      23,     6,     1,    18,    19,    10,    23,     6,    30,    23,
      23,    10,    11,    18,    19,    23,     1,    13,     1,    18,
      19,     6,    23,     6,    13,    10,    11,    10,    11,    13,
      25,    25,     1,    18,    19,    18,    19,     6,     1,    30,
      30,    10,    11,     6,    23,    23,    23,    10,    11,    18,
      19,    23,    23,     8,     1,    18,    19,     4,    -1,     6,
      -1,     1,    -1,    10,     4,    -1,     6,    -1,    -1,    -1,
      10,    18,    19,    -1,    -1,    -1,    -1,     1,    18,    19,
       4,    -1,     6,    -1,     1,    -1,    10,     4,    -1,     6,
      -1,    -1,    -1,    10,    18,    19,    -1,    -1,    -1,    -1,
       1,    18,    19,     4,    -1,     6,    -1,     1,    -1,    10,
       4,    -1,     6,    -1,     1,    -1,    10,    18,    19,     6,
      -1,    -1,    -1,    10,    18,    19,    13,    -1,    -1,    -1,
       1,    18,    19,     4,     5,    -1,     7,     8,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    17,   177,    -1,   179,
     180,   181,    -1,    -1,   184,    -1,    -1,    -1,   188,    -1,
     190,   191,   192,   193,     1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    14,    15,    16,
      17,     1,    -1,    -1,    -1,     5,    -1,     7,     8,     9,
      -1,    11,    12,    -1,    14,    15,    16,     1,    -1,    -1,
       4,     5,    -1,     7,     8,     9,    -1,    -1,    12,     1,
      14,    15,    16,     5,    -1,     7,     8,     9,    -1,    -1,
      12,    13,    14,    15,    16,     1,    -1,    -1,    -1,     5,
      -1,     7,     8,     9,    -1,    -1,    12,    13,    14,    15,
      16,     1,    -1,    -1,    -1,     5,    -1,     7,     8,     9,
      -1,    -1,    12,    13,    14,    15,    16,     1,    -1,    -1,
       4,     5,    -1,     7,     8,     9,    -1,    -1,    12,     1,
      14,    15,    16,     5,    -1,     7,     8,     9,    -1,    11,
      12,     1,    14,    15,    16,     5,    -1,     7,     8,     9,
      -1,    11,    12,    -1,    14,    15,    16,     1,    -1,    -1,
       4,     5,    -1,     7,     8,     9,    -1,    -1,    12,     1,
      14,    15,    16,     5,    -1,     7,     8,     9,    -1,    -1,
      12,     1,    14,    15,    16,     5,    -1,     7,     8,     9,
      -1,    -1,    12,     1,    14,    15,    16,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,     1,    14,    15,    16,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,     1,    14,    15,
      16,     5,    -1,     7,     8,    -1,    -1,    -1,    12,     1,
      14,    15,    16,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,     1,    14,    15,    16,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,     1,    14,    15,    16,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,     1,    14,    15,    16,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,     1,    14,    15,
      16,     5,    -1,     7,     8,    -1,    -1,    -1,    12,     1,
      14,    15,    16,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,     1,    14,    15,    16,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,     1,    14,    15,    16,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,     1,    14,    15,    16,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    14,    15,
      16,     5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      14,    15,    16,    17,     5,    -1,     7,     8,     9,    -1,
      -1,    12,    -1,    14,    15,    16,     7,     8,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    17
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    39,    40,     1,     5,     0,    34,    41,    42,
      22,     1,    22,     1,     5,    42,    31,    31,     1,    31,
      22,     1,    22,    33,    35,    35,    35,     1,    35,     1,
       5,     9,    29,    43,    50,    43,    43,     5,    36,    36,
      36,    36,     1,    36,    10,     1,    10,     1,    31,    45,
      49,     1,     5,    49,    49,    22,    37,    37,    37,    37,
      37,     1,    37,    11,    11,     1,    11,    50,     1,    50,
      49,    23,     4,     1,     4,    23,    23,    43,    12,    12,
      12,    12,    12,    12,     1,    12,     5,     5,     1,     5,
      43,    49,    32,    32,    32,    32,    32,    32,    32,     1,
      32,    12,    12,    12,     1,    12,    23,    10,    10,    10,
      10,    10,    10,    10,    10,     1,    10,    44,    50,    44,
      44,    44,    13,    44,    11,    11,    11,    11,    11,    11,
      11,    11,    11,     1,    11,    13,     5,    13,    13,    13,
      22,     1,    13,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     1,     5,    22,    20,    22,    22,    22,
      43,    22,     1,    22,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,     1,    13,    43,    44,    43,
      43,    43,     1,     5,    22,    24,    26,    27,    51,    52,
      43,    43,     1,    43,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,     1,    22,    52,    52,
      52,    52,    10,    12,    28,     1,    10,    28,    52,     1,
      12,     1,    12,     1,    12,    52,    30,    52,    52,    52,
       1,    52,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    30,    30,    30,    30,
       1,     5,     7,     8,    12,    14,    15,    16,    53,    53,
      53,    53,     1,    53,     1,    53,    23,    53,     1,    53,
      53,     1,    53,    53,     1,    53,    53,    30,    30,    30,
      30,    30,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,     1,    23,    53,    53,    53,
      53,     5,     9,    53,     1,     5,     9,     1,    53,     1,
      53,     1,     6,    10,    11,    18,    19,    13,     4,     4,
      11,    11,     1,    11,     4,     1,     4,    13,    13,     1,
      13,    13,     1,     1,    13,    13,    13,     1,    13,     4,
      53,    53,    53,    53,     1,    53,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
       1,    23,     4,     4,     4,     4,    12,    10,    13,    10,
      12,     1,    12,     1,    10,    13,     1,    13,    17,    53,
      53,     1,    53,    28,     1,    17,    53,     4,    51,    28,
      28,    28,     1,    28,    51,    51,     1,     5,    51,     1,
      51,    51,     5,    51,    51,     1,    51,     4,     4,     4,
       1,     4,    23,     4,     4,     4,     4,     4,     1,     4,
      23,    23,    23,    23,    13,    53,    53,    13,    13,     1,
      13,    53,     1,    53,    11,     1,    11,    53,    25,    53,
      53,    53,    53,     1,    53,    25,    25,    12,    25,    25,
       1,    25,    23,    23,    23,    23,    23,    23,     1,    23,
      11,    11,    11,    11,     1,    11,     4,    51,     4,     4,
       4,     4,     4,     1,     4,    51,    51,    53,    51,    51,
      51,     1,    51,    46,    47,    48,    13,    30,    30,    30
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
#line 90 "java.y"
    { printf("***MAIN CLASS DECLARED***.\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 91 "java.y"
    {yyerror (" identifier attendu on line : "); YYABORT;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 92 "java.y"
    {yyerror (" OPEN_CURLY attendu on line : "); YYABORT;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 93 "java.y"
    {yyerror (" PUBLIC attendu on line : "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 94 "java.y"
    {yyerror (" STATIC attendu on line : "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 95 "java.y"
    {yyerror (" VOID attendu on line : "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 96 "java.y"
    {yyerror (" MAIN attendu on line : "); YYABORT;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 97 "java.y"
    {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 98 "java.y"
    {yyerror (" STRING attendu on line : "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 99 "java.y"
    {yyerror (" OPEN_BRACKET attendu on line : "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 100 "java.y"
    {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 101 "java.y"
    {yyerror (" identifier attendu on line : "); YYABORT;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 102 "java.y"
    {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 103 "java.y"
    {yyerror (" OPEN_CURLY attendu on line : "); YYABORT;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 104 "java.y"
    {yyerror (" CLOSE_CURLY attendu on line : "); YYABORT;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 105 "java.y"
    {yyerror (" CLOSE_CURLY attendu on line : "); YYABORT;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 109 "java.y"
    { printf("***IDENTIFY CLASS WITH EXTENDS***.\n"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 110 "java.y"
    {yyerror (" identifier attendu on line : "); YYABORT;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 111 "java.y"
    {yyerror (" OPEN_CURLY attendu on line : "); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 112 "java.y"
    {yyerror (" CLOSE_CURLY attendu on line : "); YYABORT;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 119 "java.y"
    { printf("***VARIABLES DECLARED***.\n"); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 121 "java.y"
    {yyerror (" identifier attendu on line : "); YYABORT;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 122 "java.y"
    {yyerror (" point_virgule attendu on line : "); YYABORT;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 125 "java.y"
    { printf("***ARGUMENTS DECLARED***.\n"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 128 "java.y"
    { printf("***METHOD DECLARED***.\n"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 129 "java.y"
    { printf("***METHOD DECLARED***.\n"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 130 "java.y"
    {yyerror (" PUBLIC attendu on line : "); YYABORT;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 131 "java.y"
    {yyerror (" TYPE attendu on line : "); YYABORT;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 132 "java.y"
    {yyerror (" identifier attendu on line : "); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 133 "java.y"
    {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 134 "java.y"
    {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 135 "java.y"
    {yyerror (" OPEN_CURLY attendu on line : "); YYABORT;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 136 "java.y"
    {yyerror (" VAR_DECLARATIONS attendu on line : "); YYABORT;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 137 "java.y"
    {yyerror (" STATEMENTLIST attendu on line : "); YYABORT;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 138 "java.y"
    {yyerror (" EXPRESSION attendu on line : "); YYABORT;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 139 "java.y"
    {yyerror (" point_virgule attendu on line : "); YYABORT;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 140 "java.y"
    {yyerror (" CLOSE_CURLY attendu on line : "); YYABORT;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 146 "java.y"
    { printf("***TYPE ARRAY of int***.\n"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 147 "java.y"
    {yyerror (" INT attendu on line : "); YYABORT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 148 "java.y"
    {yyerror (" OPEN_BRACKET attendu on line : "); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 149 "java.y"
    {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 155 "java.y"
    { printf("***STATEMENTS***.\n"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 157 "java.y"
    { printf("***IF STATEMENT***.\n"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 158 "java.y"
    {yyerror (" IF attendu on line : "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 159 "java.y"
    {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 160 "java.y"
    {yyerror (" EXPRESSION attendu on line : "); YYABORT;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 161 "java.y"
    {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 162 "java.y"
    {yyerror (" IF attendu on line : "); YYABORT;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 163 "java.y"
    {yyerror (" ELSE attendu on line : "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 164 "java.y"
    {yyerror (" STATEMENT attendu on line : "); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 166 "java.y"
    { printf("***WHILE STATEMENT***.\n"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 167 "java.y"
    {yyerror (" WHILE attendu on line : "); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 168 "java.y"
    {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 169 "java.y"
    {yyerror (" EXPRESSION attendu on line : "); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 170 "java.y"
    {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 171 "java.y"
    {yyerror (" STATEMENT attendu on line : "); YYABORT;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 173 "java.y"
    { printf("***PRINT STATEMENT***.\n"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 174 "java.y"
    {yyerror (" PRINT attendu on line : "); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 175 "java.y"
    {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 176 "java.y"
    {yyerror (" EXPRESSION attendu on line : "); YYABORT;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 177 "java.y"
    {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 178 "java.y"
    {yyerror (" point_virgule attendu on line : "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 180 "java.y"
    { printf("***AFFECT STATEMENT***.\n"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 181 "java.y"
    {yyerror (" identifier attendu on line : "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 182 "java.y"
    {yyerror (" AFFECT attendu on line : "); YYABORT;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 183 "java.y"
    {yyerror (" EXPRESSION attendu on line : "); YYABORT;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 184 "java.y"
    {yyerror (" point_virgule attendu on line : "); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 186 "java.y"
    { printf("*** AFFECT STATEMENT in array***.\n"); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 187 "java.y"
    {yyerror (" identifier attendu on line : "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 188 "java.y"
    {yyerror (" OPEN_BRACKET attendu on line : "); YYABORT;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 189 "java.y"
    {yyerror (" EXPRESSION attendu on line : "); YYABORT;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 190 "java.y"
    {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 191 "java.y"
    {yyerror (" AFFECT attendu on line : "); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 192 "java.y"
    {yyerror (" EXPRESSION attendu on line : "); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 193 "java.y"
    {yyerror (" point_virgule attendu on line : "); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 197 "java.y"
    { printf("***expression avec operateur***.\n"); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 198 "java.y"
    { printf("***expression avec operateur***.\n"); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 199 "java.y"
    {yyerror (" OPER/AESTRIK attendu on line : "); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 200 "java.y"
    { printf("***expression avec accees par cle***.\n"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 201 "java.y"
    {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 202 "java.y"
    {yyerror (" EXPRESSION attendu on line : "); YYABORT;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 203 "java.y"
    { printf("***access longeur valide***.\n"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 204 "java.y"
    {yyerror (" DOT attendu on line : "); YYABORT;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 205 "java.y"
    {yyerror (" LENGTH attendu on line : "); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 211 "java.y"
    { printf("***instanciation int valide***.\n"); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 212 "java.y"
    {yyerror (" NEW attendu on line : "); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 213 "java.y"
    {yyerror (" INT attendu on line : "); YYABORT;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 214 "java.y"
    {yyerror (" OPEN_BRACKET attendu on line : "); YYABORT;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 215 "java.y"
    {yyerror (" EXPRESSION attendu on line : "); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 216 "java.y"
    {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 218 "java.y"
    { printf("***instanciation classe valide***.\n"); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 219 "java.y"
    {yyerror (" NEW attendu on line : "); YYABORT;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 220 "java.y"
    {yyerror (" identifier attendu on line : "); YYABORT;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 221 "java.y"
    {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 222 "java.y"
    {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 224 "java.y"
    { printf("***expression avec operateur non valide***.\n"); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 225 "java.y"
    {yyerror (" EXPRESSION attendu on line : "); YYABORT;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 226 "java.y"
    { printf("***expression entre parentheses valide***.\n"); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 227 "java.y"
    {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 228 "java.y"
    {yyerror (" EXPRESSION attendu on line : "); YYABORT;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 229 "java.y"
    {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2588 "java.tab.c"
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
#line 233 "java.y"
 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
 
}

  
                   

