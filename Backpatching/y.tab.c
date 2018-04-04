/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "backpatch.y" /* yacc.c:339  */

	#include<bits/stdc++.h>
	typedef long long ll;
	using namespace std;
	int yylex();
	void yyerror(char *s);
	int tempcount=0;
	int getTemp()
	{
		return tempcount++;
	}
	typedef struct node
	{
		string  addr, array;
		pair<string,vector<ll> > type;
		vector<ll> trueList,falseList,nextList;
		int instNum;
	}NODE;

	NODE* makeNode()
	{
		NODE *temp=new NODE();
		ostringstream ss;
		ss<<"t"<<getTemp();
		temp->addr=ss.str();
		ss.str("");
		temp->array="";
		return temp;
	}
	NODE* makeNode(string *x)
	{
		NODE *temp=new NODE();
		temp->addr=*x;
		temp->array="";
		return temp;
	}

	//for symbol table
	deque<string> s;
	deque<int> vars;
	deque<int> blocks;
	int blocknum=-1,varnum=0;
	map<ll,map<string,pair<pair<string,vector<ll> >,string> > > table;
	map<string,ll> width;
	ll getWidth(pair<string,vector<ll> > type);
	string to_string(ll val);
	void insertID(int bno,string varname);
	void printTable();

	// for backpatch
	int instCounter=0;
	map<ll,string> instList;
	int nextInst();
	vector<ll> merge(vector<ll> a,vector<ll> b);
	void backpatch(vector<ll> list,int num);

#line 123 "y.tab.c" /* yacc.c:339  */

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    KEY = 258,
    AND = 259,
    OR = 260,
    NOT = 261,
    RELOP = 262,
    ID = 263,
    VAL = 264,
    SC = 265,
    CM = 266,
    PL = 267,
    MI = 268,
    MUL = 269,
    DIV = 270,
    POW = 271,
    OP = 272,
    CL = 273,
    AO = 274,
    AC = 275,
    EQ = 276,
    BO = 277,
    BC = 278,
    UNR = 279,
    TRUE = 280,
    FALSE = 281,
    IF = 282,
    ELSE = 283
  };
#endif
/* Tokens.  */
#define KEY 258
#define AND 259
#define OR 260
#define NOT 261
#define RELOP 262
#define ID 263
#define VAL 264
#define SC 265
#define CM 266
#define PL 267
#define MI 268
#define MUL 269
#define DIV 270
#define POW 271
#define OP 272
#define CL 273
#define AO 274
#define AC 275
#define EQ 276
#define BO 277
#define BC 278
#define UNR 279
#define TRUE 280
#define FALSE 281
#define IF 282
#define ELSE 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 58 "backpatch.y" /* yacc.c:355  */

	typedef struct node NODE;
	string *str;
	NODE *node;


#line 226 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 241 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   99

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  99

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

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
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    72,    72,    72,    86,    87,    88,    89,    90,    92,
      97,   104,   104,   124,   129,   130,   130,   135,   135,   137,
     137,   139,   139,   142,   144,   145,   153,   164,   174,   177,
     183,   189,   191,   192,   193,   200,   201,   202,   203,   205,
     206,   207,   208,   210,   211,   212,   214,   215,   217,   218,
     225,   226
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KEY", "AND", "OR", "NOT", "RELOP", "ID",
  "VAL", "SC", "CM", "PL", "MI", "MUL", "DIV", "POW", "OP", "CL", "AO",
  "AC", "EQ", "BO", "BC", "UNR", "TRUE", "FALSE", "IF", "ELSE", "$accept",
  "ss", "$@1", "stmt", "if", "ifelse", "block", "$@2", "stmt_list", "decl",
  "$@3", "id", "arr", "d", "$@4", "a", "l", "r", "bool", "bb", "m", "n",
  "e", "t", "f", "g", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -60,     5,     8,   -60,     4,    15,   -60,     9,   -60,   -60,
     -60,   -60,   -60,   -60,    61,    -4,   -60,    35,    35,     8,
      14,    35,    35,    12,    17,    30,    49,   -60,    45,    35,
      62,    44,    69,   -60,    31,    39,    74,   -60,    40,    14,
      14,   -60,   -60,    24,   -60,    58,    47,    56,    57,    81,
       4,    82,   -60,   -60,    60,    45,    45,   -60,    45,    45,
      45,   -60,   -60,     8,   -60,    28,     6,   -60,   -60,   -60,
      35,   -60,   -60,    -4,   -60,   -60,   -60,   -60,    69,    69,
     -60,   -60,   -60,   -60,   -60,    14,    14,     8,    74,   -60,
      30,   -60,   -60,    63,   -60,   -60,   -60,     8,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,    11,     0,     3,     4,
       5,     6,     8,     7,     0,    20,    15,     0,     0,     0,
       0,     0,     0,     0,    17,    23,    49,    50,     0,     0,
      42,     0,    41,    45,    47,     0,    28,    14,    37,     0,
       0,    35,    36,     0,    31,     0,     0,     0,     0,     0,
       0,     0,    49,    51,     0,     0,     0,    26,     0,     0,
       0,    25,    12,     0,    32,     0,     0,    37,    37,    37,
       0,    27,    24,    20,    18,    21,    16,    48,    39,    40,
      43,    44,    46,    13,    33,     0,     0,     0,    34,    19,
      23,    30,    29,     9,    22,    38,    37,     0,    10
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -60,   -60,   -60,   -18,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,    43,    21,     7,   -60,   -60,    -2,    76,    59,   -35,
     -59,   -60,   -15,    33,    16,    68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     8,     9,    10,    11,    19,    38,    12,
      25,    16,    24,    51,    90,    13,    30,    35,    43,    44,
      63,    96,    45,    32,    33,    34
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      14,    37,    31,    36,    64,     3,    46,    36,    85,    86,
      87,     4,    15,    70,    54,    23,     5,    14,    55,    56,
      39,    48,    26,    27,    77,    66,    20,    28,    67,    68,
       6,    40,    67,    68,    17,     7,    18,    97,    49,    41,
      42,    50,    69,    26,    27,    83,    84,    60,    28,    61,
      91,    92,    29,    52,    27,    88,    55,    56,    28,    55,
      56,    14,    29,    62,    57,    70,    72,    71,    17,    93,
      55,    56,    55,    56,    80,    81,    82,    73,    77,    98,
      21,    21,    22,    58,    59,    14,    55,    56,    78,    79,
      74,    95,    76,    75,    89,    14,    53,    94,    47,    65
};

static const yytype_uint8 yycheck[] =
{
       2,    19,    17,    18,    39,     0,    21,    22,    67,    68,
      69,     3,     8,     7,    29,    19,     8,    19,    12,    13,
       6,     9,     8,     9,    18,    40,    17,    13,     4,     5,
      22,    17,     4,     5,    19,    27,    21,    96,    21,    25,
      26,    11,    18,     8,     9,    63,    18,    16,    13,    10,
      85,    86,    17,     8,     9,    70,    12,    13,    13,    12,
      13,    63,    17,    23,    20,     7,    10,    20,    19,    87,
      12,    13,    12,    13,    58,    59,    60,    20,    18,    97,
      19,    19,    21,    14,    15,    87,    12,    13,    55,    56,
       9,    28,    10,    50,    73,    97,    28,    90,    22,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    31,     0,     3,     8,    22,    27,    32,    33,
      34,    35,    38,    44,    45,     8,    40,    19,    21,    36,
      17,    19,    21,    19,    41,    39,     8,     9,    13,    17,
      45,    51,    52,    53,    54,    46,    51,    32,    37,     6,
      17,    25,    26,    47,    48,    51,    51,    46,     9,    21,
      11,    42,     8,    54,    51,    12,    13,    20,    14,    15,
      16,    10,    23,    49,    48,    47,    51,     4,     5,    18,
       7,    20,    10,    20,     9,    40,    10,    18,    52,    52,
      53,    53,    53,    32,    18,    49,    49,    49,    51,    41,
      43,    48,    48,    32,    42,    28,    50,    49,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    29,    31,    30,    32,    32,    32,    32,    32,    33,
      34,    36,    35,    37,    37,    39,    38,    40,    40,    41,
      41,    43,    42,    42,    44,    44,    45,    45,    46,    47,
      47,    47,    48,    48,    48,    48,    48,    49,    50,    51,
      51,    51,    51,    52,    52,    52,    53,    53,    54,    54,
      54,    54
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     6,
      10,     0,     4,     3,     1,     0,     5,     2,     4,     4,
       0,     0,     4,     0,     4,     4,     4,     4,     1,     4,
       4,     1,     2,     3,     3,     1,     1,     0,     0,     3,
       3,     1,     1,     3,     3,     1,     3,     1,     3,     1,
       1,     2
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
        case 2:
#line 72 "backpatch.y" /* yacc.c:1646  */
    {
			blocknum++;
			blocks.push_back(blocknum);
			vars.push_back(varnum);
			varnum=0;
		}
#line 1384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "backpatch.y" /* yacc.c:1646  */
    {
			for(map<ll,string>::iterator it=instList.begin();it!=instList.end();it++)
			{
				cout<<it->first<<" "<<it->second<<endl;
			}
		}
#line 1395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 86 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)->nextList=(yyvsp[0].node)->nextList;}
#line 1401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 87 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)->nextList=(yyvsp[0].node)->nextList;}
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 88 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)->nextList=(yyvsp[0].node)->nextList;}
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 89 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)->nextList=(yyvsp[0].node)->nextList;}
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)->nextList=(yyvsp[0].node)->nextList;}
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 92 "backpatch.y" /* yacc.c:1646  */
    {
								(yyval.node)=new NODE();
								backpatch((yyvsp[-3].node)->trueList,(yyvsp[-1].node)->instNum);
								(yyval.node)->nextList=merge((yyvsp[-3].node)->falseList,(yyvsp[0].node)->nextList);
							}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 97 "backpatch.y" /* yacc.c:1646  */
    {
											(yyval.node)=new NODE();
											backpatch((yyvsp[-7].node)->trueList,(yyvsp[-5].node)->instNum);
											backpatch((yyvsp[-7].node)->falseList,(yyvsp[-1].node)->instNum);
											(yyval.node)->nextList=merge((yyvsp[-4].node)->nextList,(yyvsp[-2].node)->nextList);
											(yyval.node)->nextList=merge((yyval.node)->nextList,(yyvsp[0].node)->nextList);
										}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 104 "backpatch.y" /* yacc.c:1646  */
    {
			blocknum++;
			blocks.push_back(blocknum);
			for(int i=0;i<s.size();i++)
			{
				insertID(blocknum,s[i]);
			}
			vars.push_back(varnum);
			varnum=0;
		}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 115 "backpatch.y" /* yacc.c:1646  */
    {
			blocks.pop_back();
			for(int i=0;i<varnum;i++)
				s.pop_back();
			varnum=vars.back();
			vars.pop_back();	
			(yyval.node)=new NODE();
			(yyval.node)->nextList=(yyvsp[-1].node)->nextList;
		}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 124 "backpatch.y" /* yacc.c:1646  */
    {
								(yyval.node)=new NODE();
								backpatch((yyvsp[-2].node)->nextList,(yyvsp[-1].node)->instNum);
								(yyval.node)->nextList=(yyvsp[0].node)->nextList;
							}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 129 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)->nextList=(yyvsp[0].node)->nextList;}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 130 "backpatch.y" /* yacc.c:1646  */
    {
				varnum++;s.push_back(*(yyvsp[-1].str)+" "+*(yyvsp[0].str));
				insertID(blocks.back(),*(yyvsp[-1].str)+" "+*(yyvsp[0].str));
			}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 133 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 135 "backpatch.y" /* yacc.c:1646  */
    {(yyval.str)=new string(*(yyvsp[-1].str)+*(yyvsp[0].str));}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 135 "backpatch.y" /* yacc.c:1646  */
    {(yyval.str)=new string(*(yyvsp[-3].str)+*(yyvsp[-2].str)+*(yyvsp[-1].str)+*(yyvsp[0].str));}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 137 "backpatch.y" /* yacc.c:1646  */
    {(yyval.str)=new string(*(yyvsp[-3].str)+*(yyvsp[-2].str)+*(yyvsp[-1].str)+*(yyvsp[0].str));}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 137 "backpatch.y" /* yacc.c:1646  */
    {(yyval.str)=new string("");}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 139 "backpatch.y" /* yacc.c:1646  */
    {
			varnum++;s.push_back(*(yyvsp[0].str));
			insertID(blocks.back(),*(yyvsp[0].str));
		}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 142 "backpatch.y" /* yacc.c:1646  */
    {}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 144 "backpatch.y" /* yacc.c:1646  */
    {instList[nextInst()]=(yyvsp[-3].node)->array+"["+(yyvsp[-3].node)->addr+"]= "+(yyvsp[-1].node)->addr;	}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 145 "backpatch.y" /* yacc.c:1646  */
    {
	  					if(table[blocks.back()].find(*(yyvsp[-3].str))==table[blocks.back()].end())
						{
							yyerror("variable not declared");
						}
	  					instList[nextInst()]=*(yyvsp[-3].str)+" = "+(yyvsp[-1].node)->addr;
	  					(yyval.node)=new NODE();
	  				}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 154 "backpatch.y" /* yacc.c:1646  */
    {
					(yyval.node)=makeNode();
					(yyval.node)->array=*(yyvsp[-3].str);
					if(table[blocks.back()].find(*(yyvsp[-3].str))==table[blocks.back()].end())
					{
						yyerror("variable not declared");
					}
					(yyval.node)->type=table[blocks.back()][*(yyvsp[-3].str)].first;
					instList[nextInst()]=(yyval.node)->addr+" = "+(yyvsp[-1].node)->addr+" * "+to_string(getWidth((yyval.node)->type));
				}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 165 "backpatch.y" /* yacc.c:1646  */
    {
		 			NODE *myTemp=makeNode();
		 			(yyval.node)=makeNode();
		 			(yyval.node)->array=(yyvsp[-3].node)->array;
		 			(yyval.node)->type=(yyvsp[-3].node)->type;
		 			(yyval.node)->type.second.erase((yyval.node)->type.second.begin());
		 			instList[nextInst()]=myTemp->addr + " = "+(yyvsp[-1].node)->addr +" * "+to_string(getWidth((yyval.node)->type));
		 			instList[nextInst()]=(yyval.node)->addr+" = "+(yyvsp[-3].node)->addr+ " + " + myTemp->addr;
		 		}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 174 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 177 "backpatch.y" /* yacc.c:1646  */
    {
					(yyval.node)=new NODE();
					backpatch((yyvsp[-3].node)->falseList,(yyvsp[-1].node)->instNum);
					(yyval.node)->trueList=merge((yyvsp[-3].node)->trueList,(yyvsp[0].node)->trueList);
					(yyval.node)->falseList=(yyvsp[0].node)->falseList;
				}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 183 "backpatch.y" /* yacc.c:1646  */
    {
	 				(yyval.node)=new NODE();
	 				backpatch((yyvsp[-3].node)->trueList,(yyvsp[-1].node)->instNum);
	 				(yyval.node)->trueList=(yyvsp[0].node)->trueList;
	 				(yyval.node)->falseList=merge((yyvsp[-3].node)->falseList,(yyvsp[0].node)->falseList);
				}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 189 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)->trueList=(yyvsp[0].node)->trueList;(yyval.node)->falseList=(yyvsp[0].node)->falseList;}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 191 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)->trueList=(yyvsp[0].node)->falseList;(yyval.node)->falseList=(yyvsp[0].node)->trueList;}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 192 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)->trueList=(yyvsp[-1].node)->trueList;(yyval.node)->falseList=(yyvsp[-1].node)->falseList;}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 193 "backpatch.y" /* yacc.c:1646  */
    {
	    				(yyval.node)=new NODE();
	    				(yyval.node)->trueList.push_back(nextInst());
	    				instList[(yyval.node)->trueList.back()]="if("+(yyvsp[-2].node)->addr+" "+*(yyvsp[-1].str)+" "+(yyvsp[0].node)->addr+") goto";
	    				(yyval.node)->falseList.push_back(nextInst());
	    				instList[(yyval.node)->falseList.back()]="goto";
	    			}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 200 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)->trueList.push_back(nextInst());instList[(yyval.node)->trueList.back()]="goto";}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 201 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)->falseList.push_back(nextInst());instList[(yyval.node)->falseList.back()]="goto";}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 202 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)=new NODE();(yyval.node)->instNum=instCounter;}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 203 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=new NODE();(yyval.node)->nextList.push_back(nextInst());instList[(yyval.node)->nextList.back()]="goto";}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 205 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=makeNode();instList[nextInst()]=(yyval.node)->addr+" = "+(yyvsp[-2].node)->addr+" + "+(yyvsp[0].node)->addr;}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 206 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=makeNode();instList[nextInst()]=(yyval.node)->addr+" = "+(yyvsp[-2].node)->addr+" - "+(yyvsp[0].node)->addr;}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 207 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 208 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=makeNode();instList[nextInst()]=(yyval.node)->addr+" = "+(yyvsp[0].node)->array+"["+(yyvsp[0].node)->addr+"]";}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 210 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=makeNode();instList[nextInst()]=(yyval.node)->addr+" = "+(yyvsp[-2].node)->addr+" * "+(yyvsp[0].node)->addr;}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 211 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=makeNode();instList[nextInst()]=(yyval.node)->addr+" = "+(yyvsp[-2].node)->addr+" / "+(yyvsp[0].node)->addr;}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 212 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 214 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=makeNode();instList[nextInst()]=(yyval.node)->addr+" = "+(yyvsp[-2].node)->addr+" ^ "+(yyvsp[0].node)->addr;}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 215 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 217 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 218 "backpatch.y" /* yacc.c:1646  */
    {
	 		if(table[blocks.back()].find(*(yyvsp[0].str))==table[blocks.back()].end())
			{
				yyerror("variable not declared");
			}
			(yyval.node)=makeNode((yyvsp[0].str));
		}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 225 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=makeNode((yyvsp[0].str));}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 226 "backpatch.y" /* yacc.c:1646  */
    {(yyval.node)=makeNode();instList[nextInst()]=(yyval.node)->addr+" = - "+(yyvsp[0].node)->addr;}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1764 "y.tab.c" /* yacc.c:1646  */
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
#line 228 "backpatch.y" /* yacc.c:1906  */

int nextInst()
{
	return instCounter++;
}
vector<ll> merge(vector<ll> a,vector<ll> b)
{
	a.insert(a.end(),b.begin(),b.end());
	return a;
}
void backpatch(vector<ll> list,int num)
{
	for(ll i=0;i<list.size();i++)
	{
		if(instList[list[i]].find("goto")==instList[list[i]].length()-4)
		{
			instList[list[i]]+=" "+to_string(num);
		}
	}
}
void insertID(int bno,string varname)
{
	string type,value;
	int ind=varname.find(" ");
	if(ind!=-1)
	{
		type=varname.substr(0,ind);
		varname=varname.substr(ind+1);
	}
	ind=varname.find("=");
	value="";
	if(ind!=-1)
	{
		value=varname.substr(ind+1);
		varname=varname.substr(0,ind);
	}
	ind=varname.find("[");
	vector<ll> dims;
	if(ind!=-1)
	{
		string indexes=varname.substr(ind);
		varname=varname.substr(0,ind);
		for(ll i=0;i<indexes.length();i++)
		{
			if(indexes[i]=='[' || indexes[i]==']')
				indexes[i]=' ';
		}
		istringstream in(indexes.c_str());
		int dim;
		while(in>>dim)
		{
			dims.push_back(dim);
		}
	}
	table[bno][varname]=make_pair(make_pair(type,dims),value);
}
ll getWidth(pair<string,vector<ll> > type)
{
	ll ans=width[type.first];
	for(ll i=1;i<type.second.size();i++)
	{
		ans=ans*type.second[i];
	}
	return ans;
}
void printTable()
{
	for(map<ll,map<string,pair<pair<string,vector<ll> >,string> > >::iterator it=table.begin();it!=table.end();it++)
	{
		cout<<it->first<<endl;
		for(map<string,pair<pair<string,vector<ll> >,string> >::iterator it2=it->second.begin();it2!=it->second.end();it2++)
		{
			cout<<it2->first<<" "<<it2->second.first.first<<" "<<it2->second.second;
			for(vector<ll>::iterator it3=it2->second.first.second.begin();it3!=it2->second.first.second.end();it3++)
				cout<<*it3<<' ';
			cout<<endl;
		}
		cout<<endl;
	}
}
void setWidths()
{
	width["int"]=4;
	width["float"]=4;
	width["char"]=1;
	width["double"]=8;
}
string to_string(ll val)
{
	ostringstream ss;
	ss<<val;
	return ss.str();
}
void yyerror(char* s)
{
	cout<<s<<endl;
	exit(0);
}
int main()
{
	setWidths();
	yyparse();
}
