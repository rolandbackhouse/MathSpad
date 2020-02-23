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
#line 1 "parse.y" /* yacc.c:339  */

#include <config.h>
#include <mpconfig.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "language.h"
#include "loadlib.h"
#include "parse.h"
#include "unicode.h"
#include "unistring.h"
#include "unitype.h"
#include "translate.h"

typedef struct {
    Sequence *first;
    Sequence *last;
} SeqPair;

typedef struct {
    int nr;
    Argument *list;
} ArgList;

typedef struct {
    Expression *first;
    Expression *last;
} ExprPair;

typedef struct {
    Expression *first;
    Expression *last;
    int nr;
} ExprList;

typedef struct {
    FuncRef func;
    int is_userfunc;
} FuncDesc;

typedef struct {
  KeyNum key;
  KeyMode mode;
} KeyDesc;

typedef struct {
  KeyNum *key;
  KeyMode *mode;
  short len;
} KeyList;

/* the parser only uses one KeyList at a time. So, static arrays
** are used to store the keys and modes
*/

static KeyNum keys[500];
static KeyMode mode[500];
static KeyMap *current_keymap=0;

static int current_type=0;

static PopupMenu *current_menu =0;

int yyerror(char *message);
int yylex(void);


#line 135 "y.tab.c" /* yacc.c:339  */

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
    LOGICOR = 258,
    LOGICXOR = 259,
    LOGICAND = 260,
    BITOR = 261,
    BITXOR = 262,
    BITAND = 263,
    EQUAL = 264,
    LESS = 265,
    GREATER = 266,
    LESSEQUAL = 267,
    GREATEREQUAL = 268,
    NOTEQUAL = 269,
    SHIFTLEFT = 270,
    SHIFTRIGHT = 271,
    ADD = 272,
    MINUS = 273,
    MULTIPLY = 274,
    DIVIDE = 275,
    REMAINDER = 276,
    LOGICNOT = 277,
    BITNOT = 278,
    LAZYREF = 279,
    STRING = 280,
    IDENTIFIER = 281,
    INTEGER = 282,
    TYPEVAL = 283,
    REAL = 284,
    KEY = 285,
    INPUT = 286,
    LAYOUT = 287,
    MENU = 288,
    KEYBOARD = 289,
    FUNCTION = 290,
    VARIABLE = 291,
    IF = 292,
    ELSEIF = 293,
    ELSE = 294,
    FI = 295,
    DO = 296,
    ELSEDO = 297,
    OD = 298,
    OPTIONS = 299,
    PIN = 300,
    LEFTRIGHT = 301,
    RIGHTLEFT = 302,
    SEPARATOR = 303,
    TITLE = 304,
    DEFAULT = 305,
    BUTTON = 306,
    IMAGE = 307,
    SCROLLBAR = 308,
    LEFT = 309,
    RIGHT = 310,
    BOTTOM = 311,
    TOP = 312,
    GEOMETRY = 313,
    TYPE = 314,
    EDIT = 315,
    COMMENT = 316,
    PROGRAM = 317,
    CONSOLE = 318,
    BUFFER = 319,
    SYMBOL = 320,
    STENCIL = 321,
    DEFINE = 322,
    FINDREPLACE = 323,
    ALL = 324,
    SHELL = 325,
    FILESELECT = 326,
    REMARK = 327,
    CLEAR = 328,
    INCLUDE = 329,
    ASSIGN = 330,
    RANGE = 331,
    TRANSLATION = 332
  };
#endif
/* Tokens.  */
#define LOGICOR 258
#define LOGICXOR 259
#define LOGICAND 260
#define BITOR 261
#define BITXOR 262
#define BITAND 263
#define EQUAL 264
#define LESS 265
#define GREATER 266
#define LESSEQUAL 267
#define GREATEREQUAL 268
#define NOTEQUAL 269
#define SHIFTLEFT 270
#define SHIFTRIGHT 271
#define ADD 272
#define MINUS 273
#define MULTIPLY 274
#define DIVIDE 275
#define REMAINDER 276
#define LOGICNOT 277
#define BITNOT 278
#define LAZYREF 279
#define STRING 280
#define IDENTIFIER 281
#define INTEGER 282
#define TYPEVAL 283
#define REAL 284
#define KEY 285
#define INPUT 286
#define LAYOUT 287
#define MENU 288
#define KEYBOARD 289
#define FUNCTION 290
#define VARIABLE 291
#define IF 292
#define ELSEIF 293
#define ELSE 294
#define FI 295
#define DO 296
#define ELSEDO 297
#define OD 298
#define OPTIONS 299
#define PIN 300
#define LEFTRIGHT 301
#define RIGHTLEFT 302
#define SEPARATOR 303
#define TITLE 304
#define DEFAULT 305
#define BUTTON 306
#define IMAGE 307
#define SCROLLBAR 308
#define LEFT 309
#define RIGHT 310
#define BOTTOM 311
#define TOP 312
#define GEOMETRY 313
#define TYPE 314
#define EDIT 315
#define COMMENT 316
#define PROGRAM 317
#define CONSOLE 318
#define BUFFER 319
#define SYMBOL 320
#define STENCIL 321
#define DEFINE 322
#define FINDREPLACE 323
#define ALL 324
#define SHELL 325
#define FILESELECT 326
#define REMARK 327
#define CLEAR 328
#define INCLUDE 329
#define ASSIGN 330
#define RANGE 331
#define TRANSLATION 332

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 69 "parse.y" /* yacc.c:355  */

	int ival;
	double rval;
        Uchar *utval;
	char *tval;
	FuncRef *uval;
	Expression *eval;
	ExprPair epval;
	ExprList elval;
	Argument aval;
	ArgList alval;
	SeqPair spval;
	FuncDesc fref;
	Sequence *seqval;
        Prototype *protval;
        KeyDesc keyval;
        KeyList klistval;
	

#line 346 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 363 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   474

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

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
      79,    80,     2,     2,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    78,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,    82,     2,     2,     2,     2,
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
      75,    76,    77
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   122,   123,   124,   125,   126,   127,   128,
     132,   133,   134,   150,   149,   165,   166,   170,   174,   179,
     180,   182,   183,   186,   185,   189,   191,   194,   196,   198,
     209,   208,   215,   217,   221,   222,   224,   228,   235,   241,
     242,   248,   249,   254,   265,   270,   277,   283,   291,   292,
     294,   302,   301,   318,   320,   322,   324,   326,   336,   335,
     348,   350,   352,   354,   356,   358,   360,   362,   364,   366,
     368,   370,   372,   374,   376,   378,   380,   382,   384,   386,
     388,   390,   392,   396,   395,   400,   401,   403,   404,   406,
     410,   415,   419,   426,   428,   429,   431,   438,   437,   443,
     444,   446,   447,   449,   451,   453,   456,   457,   459,   460,
     462,   464,   466,   468,   471,   473,   474,   476,   477,   480,
     482,   483,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   499,   500,   501,   502,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   517,   519,   521,   523
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LOGICOR", "LOGICXOR", "LOGICAND",
  "BITOR", "BITXOR", "BITAND", "EQUAL", "LESS", "GREATER", "LESSEQUAL",
  "GREATEREQUAL", "NOTEQUAL", "SHIFTLEFT", "SHIFTRIGHT", "ADD", "MINUS",
  "MULTIPLY", "DIVIDE", "REMAINDER", "LOGICNOT", "BITNOT", "LAZYREF",
  "STRING", "IDENTIFIER", "INTEGER", "TYPEVAL", "REAL", "KEY", "INPUT",
  "LAYOUT", "MENU", "KEYBOARD", "FUNCTION", "VARIABLE", "IF", "ELSEIF",
  "ELSE", "FI", "DO", "ELSEDO", "OD", "OPTIONS", "PIN", "LEFTRIGHT",
  "RIGHTLEFT", "SEPARATOR", "TITLE", "DEFAULT", "BUTTON", "IMAGE",
  "SCROLLBAR", "LEFT", "RIGHT", "BOTTOM", "TOP", "GEOMETRY", "TYPE",
  "EDIT", "COMMENT", "PROGRAM", "CONSOLE", "BUFFER", "SYMBOL", "STENCIL",
  "DEFINE", "FINDREPLACE", "ALL", "SHELL", "FILESELECT", "REMARK", "CLEAR",
  "INCLUDE", "ASSIGN", "RANGE", "TRANSLATION", "';'", "'('", "')'", "'{'",
  "'}'", "','", "'['", "']'", "':'", "$accept", "file", "functiondef",
  "@1", "prototype", "proto", "vardefs", "vardeflist", "variabledef",
  "$@2", "defidents", "sequence", "block", "$@3", "funcseq", "statement",
  "elseiflist", "elsedolist", "assignment", "identlist", "assexprlist",
  "exprlist", "functioncall", "@4", "expression", "@5", "keyboarddef",
  "$@6", "keydefs", "keydef", "keylist", "inputdef", "inputitems",
  "menudef", "$@7", "options", "opitems", "opitem", "menulines",
  "menuline", "translation", "translines", "transline", "layoutdef",
  "layoutlines", "layoutline", "location", "windowtype", "keyidents",
  "stringlist", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331,   332,    59,    40,
      41,   123,   125,    44,    91,    93,    58
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -113

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -110,    14,  -110,   -74,   -72,   -19,   -10,    26,    63,    69,
      91,    73,  -110,  -110,  -110,  -110,  -110,   -73,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,    95,   103,   117,   115,
    -110,  -110,   129,   156,   196,   156,    13,    45,  -110,  -110,
    -110,   204,   211,   156,   156,   156,  -110,    33,  -110,  -110,
     156,   158,  -110,   364,  -110,   -41,   364,  -110,  -110,  -110,
     222,  -110,   191,   212,   189,   229,   258,   232,   284,   285,
      31,  -110,   268,   -22,   283,  -110,   230,   228,   113,  -110,
    -110,  -110,  -110,  -110,   116,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,  -110,   156,  -110,   233,  -110,
    -110,   -11,  -110,  -110,  -110,  -110,  -110,   288,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,   291,  -110,  -110,    45,  -110,   214,   164,   244,  -110,
     121,  -110,   -13,   293,     7,  -110,   419,   421,   211,  -110,
     156,  -110,   364,   344,   381,   325,   396,   410,   423,    65,
      65,    65,    65,    65,    65,   234,   234,   243,   243,  -110,
    -110,  -110,   364,   422,   424,  -110,   420,   400,  -110,  -110,
    -110,  -110,    30,  -110,   365,  -110,   427,   164,   122,  -110,
     425,   -22,  -110,  -110,   428,  -110,   372,   283,  -110,  -110,
    -110,    16,  -110,   428,  -110,   431,  -110,  -110,   432,  -110,
    -110,   164,  -110,   371,  -110,  -110,   426,  -110,  -110,  -110,
    -110,   376,   108,  -110,  -110,   428,   151,   382,  -110,   436,
    -110,   384,   385,  -110,   123,  -110,  -110,  -110,   426,  -110,
     156,   156,   426,    74,  -110,  -110,   135,   154,   151,  -110,
     151,   151,   141,   387,   387,  -110,   227,   184,   388,   151,
    -110,   389,  -110,   156,   -34,   156,   267,  -110,   286,   151,
     151,   387,   387
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     3,    11,     9,    32,     0,    33,     5,
      10,     4,     7,     6,    51,    94,     0,     0,     0,     0,
      23,    12,     0,     0,     0,    48,     0,     0,    97,    83,
      13,     0,   117,     0,     0,     0,    54,    57,    53,    55,
       0,    43,    56,    46,    45,     0,    49,    95,    96,    93,
       0,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,    99,    87,    15,    25,    24,     0,     0,   115,
      70,    74,    60,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,   151,   129,   122,
     123,     0,   135,   136,   137,   138,   126,     0,   148,   140,
     139,   141,   142,   143,   144,   145,   146,   147,   149,   150,
     128,     0,   133,   134,     0,   119,     0,   108,    91,    88,
       0,    85,     0,     0,     0,    16,     0,     0,   117,   114,
       0,    61,    47,    68,    69,    67,    72,    73,    71,    75,
      78,    77,    79,    80,    76,    81,    82,    62,    63,    64,
      65,    66,    50,     0,     0,   124,     0,   131,   121,   103,
     104,   105,     0,   101,     0,   109,     0,   108,     0,   106,
       0,    87,    84,    92,     0,    18,     0,     0,    26,   118,
     116,     0,   152,     0,   127,     0,   100,   102,     0,   110,
     113,   108,    98,     0,    86,    89,    19,    17,    59,   125,
     153,   132,    44,   111,   107,     0,    34,     0,    21,     0,
      90,     0,     0,    30,     0,    28,    35,    27,    20,   154,
       0,     0,    19,    34,    14,    22,     0,     0,    34,    29,
      34,    34,     0,    39,    41,    31,     0,     0,     0,    34,
      36,     0,    38,     0,     0,     0,     0,    37,     0,    34,
      34,    40,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,  -110,   269,   231,  -110,     0,  -110,
    -110,   -30,  -110,  -110,     3,   226,  -110,  -110,  -110,  -110,
    -110,  -110,    -1,  -110,   -32,  -110,  -110,  -110,  -110,   279,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,   289,  -110,  -109,
    -110,  -110,   324,  -110,  -110,   340,  -110,  -110,  -110,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,    74,   144,   145,   226,   227,   228,    41,
      76,   234,   235,   242,   236,   237,   256,   257,    16,    17,
      51,    55,    52,    35,    53,   150,    19,    73,   140,   141,
     142,    20,    36,    21,    72,   137,   182,   183,   188,   189,
      22,    78,    79,    23,    70,    71,   116,   130,   108,   221
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    14,    33,    56,    15,    24,   267,    26,   138,    25,
      34,    80,    81,    82,     2,     3,    27,   193,    84,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    57,   105,
       3,   174,   106,    58,   243,     4,     5,     6,     7,     8,
       9,   139,    28,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   194,   172,   179,   180,   181,   210,    60,
      98,    99,   100,   101,   102,   103,   104,   196,    10,    29,
     197,    11,    12,    61,    62,    59,    63,    30,    64,    32,
       3,   218,   224,    65,    66,    67,    68,    69,   206,   134,
      18,   231,    24,   135,   175,   232,    31,    83,   201,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    37,     3,    43,    44,
      45,    46,    47,    48,    38,    49,  -112,    24,   231,   184,
    -112,   148,   232,    18,    40,   149,   151,   215,    39,   191,
     211,   243,    18,   192,   212,   244,   219,    18,   246,   247,
      42,   223,   185,   186,   187,   250,   109,   110,   252,   243,
     253,   254,    54,   255,    18,    18,   261,   262,   230,   264,
      75,   266,   233,   268,   251,    50,    77,   111,   245,   271,
     272,    85,    18,   112,   113,   114,   115,    18,   107,    18,
      18,   100,   101,   102,   103,   104,   117,   131,    18,   179,
     180,   181,   102,   103,   104,   258,   259,   260,    18,    18,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   118,   132,
     133,   143,   136,   146,   147,   176,   173,   177,   119,   195,
     190,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   269,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   270,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   198,   199,   204,   202,   203,
     205,   208,   209,   216,     3,   213,   220,   225,   222,   229,
     238,   239,     9,   240,   241,   243,   217,   263,   265,   249,
     214,   207,   200,   248,   178
};

static const yytype_uint16 yycheck[] =
{
       1,     1,    75,    35,     1,    79,    40,    26,    30,    81,
      83,    43,    44,    45,     0,    26,    26,    30,    50,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    25,    80,
      26,    52,    83,    30,    78,    31,    32,    33,    34,    35,
      36,    73,    26,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    86,   106,    45,    46,    47,   187,    34,
      15,    16,    17,    18,    19,    20,    21,    80,    74,    26,
      83,    77,    78,    48,    49,    82,    51,    28,    53,    26,
      26,    85,   211,    58,    59,    60,    61,    62,    78,    78,
     111,    37,    79,    82,   111,    41,    25,    84,   150,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    81,    26,    22,    23,
      24,    25,    26,    27,    81,    29,    78,    79,    37,    25,
      82,    78,    41,   194,    79,    82,    80,   194,    81,    78,
      78,    78,   203,    82,    82,    82,   203,   208,   240,   241,
      81,   208,    48,    49,    50,    80,    25,    26,   248,    78,
     250,   251,    26,    82,   225,   226,    42,    43,   225,   259,
      26,   263,    81,   265,    80,    79,    25,    25,   238,   269,
     270,    83,   243,    54,    55,    56,    57,   248,    26,   250,
     251,    17,    18,    19,    20,    21,    27,    25,   259,    45,
      46,    47,    19,    20,    21,    38,    39,    40,   269,   270,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    50,    25,
      25,    28,    44,    83,    86,    27,    83,    26,    60,    26,
      76,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    80,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    80,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    26,    25,    27,    26,    25,
      50,    86,    25,    81,    26,    30,    25,    86,    26,    83,
      78,    25,    36,    79,    79,    78,   197,    79,    79,   243,
     191,   182,   148,   242,   134
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    88,     0,    26,    31,    32,    33,    34,    35,    36,
      74,    77,    78,    89,    95,   101,   105,   106,   109,   113,
     118,   120,   127,   130,    79,    81,    26,    26,    26,    26,
      28,    25,    26,    75,    83,   110,   119,    81,    81,    81,
      79,    96,    81,    22,    23,    24,    25,    26,    27,    29,
      79,   107,   109,   111,    26,   108,   111,    25,    30,    82,
      34,    48,    49,    51,    53,    58,    59,    60,    61,    62,
     131,   132,   121,   114,    90,    26,    97,    25,   128,   129,
     111,   111,   111,    84,   111,    83,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    80,    83,    26,   135,    25,
      26,    25,    54,    55,    56,    57,   133,    27,    50,    60,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
     134,    25,    25,    25,    78,    82,    44,   122,    30,    73,
     115,   116,   117,    28,    91,    92,    83,    86,    78,    82,
     112,    80,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,    83,    52,   101,    27,    26,   132,    45,
      46,    47,   123,   124,    25,    48,    49,    50,   125,   126,
      76,    78,    82,    30,    86,    26,    80,    83,    26,    25,
     129,   111,    26,    25,    27,    50,    78,   124,    86,    25,
     126,    78,    82,    30,   116,   101,    81,    92,    85,   101,
      25,   136,    26,   101,   126,    86,    93,    94,    95,    83,
     101,    37,    41,    81,    98,    99,   101,   102,    78,    25,
      79,    79,   100,    78,    82,    95,   111,   111,    93,   102,
      80,    80,    98,    98,    98,    82,   103,   104,    38,    39,
      40,    42,    43,    79,    98,    79,   111,    40,   111,    80,
      80,    98,    98
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    90,    89,    91,    91,    91,    92,    93,
      93,    94,    94,    96,    95,    97,    97,    98,    98,    98,
     100,    99,   101,   101,   102,   102,   102,   102,   102,   103,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   110,   109,   111,   111,   111,   111,   111,   112,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   114,   113,   115,   115,   116,   116,   116,
     116,   117,   117,   118,   119,   119,   119,   121,   120,   122,
     122,   123,   123,   124,   124,   124,   125,   125,   126,   126,
     126,   126,   126,   126,   127,   128,   128,   129,   129,   130,
     131,   131,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   133,   133,   133,   133,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   135,   135,   136,   136
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     0,    10,     0,     1,     3,     2,     0,
       2,     1,     3,     0,     4,     1,     3,     1,     1,     3,
       0,     5,     1,     1,     0,     1,     7,     9,     7,     0,
       6,     0,     6,     3,     1,     3,     1,     3,     0,     1,
       3,     0,     5,     1,     1,     1,     1,     1,     0,     5,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     0,     6,     1,     3,     0,     1,     3,
       5,     1,     2,     4,     0,     2,     2,     0,     7,     0,
       3,     1,     2,     1,     1,     1,     1,     3,     0,     1,
       2,     3,     3,     2,     5,     1,     3,     0,     3,     5,
       1,     3,     2,     2,     3,     5,     2,     4,     2,     2,
       1,     3,     5,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3
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
        case 9:
#line 129 "parse.y" /* yacc.c:1646  */
    { eval_sequence((yyvsp[0].seqval));
			  free_sequence((yyvsp[0].seqval));
			}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 135 "parse.y" /* yacc.c:1646  */
    { char *conv;
			  conv = UstrtoFilename((yyvsp[0].utval));
			  if (strstr(conv, ".so")) {
			      if (!load_library(conv)) {
				if (!lex_open_file(conv)) {
				  yyerror("Include file or library not found.");
				}
			      }
			  } else if (!lex_open_file(conv)) {
			      yyerror("Include file not found");
			  }
			  free((yyvsp[0].utval));
			}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 150 "parse.y" /* yacc.c:1646  */
    { new_local_variables();
			  (yyval.tval)=malloc(strlen((yyvsp[-1].tval))+1);
			  strcpy((yyval.tval), (yyvsp[-1].tval));
			}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 155 "parse.y" /* yacc.c:1646  */
    { Value *lvlist;
			  char **lnames;
			  int nrlvar;
			  lnames=get_local_names();
			  lvlist=get_local_variables(&nrlvar);
			  user_define((yyvsp[-6].tval), NULL, (yyvsp[-5].protval),
				      nrlvar, lvlist, lnames, (yyvsp[-1].spval).first);
			}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 165 "parse.y" /* yacc.c:1646  */
    { (yyval.protval)=ProtoEmpty; }
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 167 "parse.y" /* yacc.c:1646  */
    { (yyval.protval)=create_prototype(NULL);
			  add_type((yyval.protval), (yyvsp[0].ival));
			}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 171 "parse.y" /* yacc.c:1646  */
    { add_type((yyvsp[-2].protval), (yyvsp[0].ival)); (yyval.protval)=(yyvsp[-2].protval);
			}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 175 "parse.y" /* yacc.c:1646  */
    { define_local_variable((yyvsp[-1].ival), (yyvsp[0].tval));
			  (yyval.ival)=(yyvsp[-1].ival);
			}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 186 "parse.y" /* yacc.c:1646  */
    { current_type=(yyvsp[0].ival); }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 190 "parse.y" /* yacc.c:1646  */
    { define_local_variable(current_type, (yyvsp[0].tval)); }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 192 "parse.y" /* yacc.c:1646  */
    { define_local_variable(current_type, (yyvsp[0].tval)); }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 195 "parse.y" /* yacc.c:1646  */
    { (yyval.spval) = (yyvsp[0].spval); }
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 197 "parse.y" /* yacc.c:1646  */
    { (yyval.spval) = (yyvsp[0].spval); }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 199 "parse.y" /* yacc.c:1646  */
    { if (!((yyvsp[-2].spval).first)) (yyval.spval)=(yyvsp[0].spval);
			  else if (!((yyvsp[0].spval).first)) (yyval.spval)=(yyvsp[-2].spval);
			  else {
			      (yyval.spval).first=(yyvsp[-2].spval).first;
			      (yyvsp[-2].spval).last->next=(yyvsp[0].spval).first;
			      (yyval.spval).last=(yyvsp[0].spval).last;
			  }
			}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 209 "parse.y" /* yacc.c:1646  */
    { new_local_variables(); /* open variable block */ }
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 211 "parse.y" /* yacc.c:1646  */
    { get_local_variables(NULL); /* close variable block */
			  (yyval.spval)=(yyvsp[-1].spval);
			}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 216 "parse.y" /* yacc.c:1646  */
    { (yyval.seqval)=(yyvsp[0].seqval); }
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 218 "parse.y" /* yacc.c:1646  */
    { (yyval.seqval)=seq_expression((yyvsp[0].eval)); }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 221 "parse.y" /* yacc.c:1646  */
    { (yyval.spval).first=(yyval.spval).last=0; }
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 223 "parse.y" /* yacc.c:1646  */
    { (yyval.spval).first=(yyval.spval).last=(yyvsp[0].seqval); }
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 225 "parse.y" /* yacc.c:1646  */
    { (yyval.spval).first = seq_if_statement((yyvsp[-4].eval), (yyvsp[-2].spval).first, (yyvsp[-2].spval).last,
						(yyvsp[-1].spval).first, (yyvsp[-1].spval).last, &((yyval.spval).last));
			}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 229 "parse.y" /* yacc.c:1646  */
    { (yyval.spval).first = seq_elseif((yyvsp[-3].spval).first, (yyvsp[-3].spval).last, NULL,
						(yyvsp[-1].spval).first, (yyvsp[-1].spval).last, &((yyval.spval).last));
			  (yyvsp[-3].spval)=(yyval.spval);
			  (yyval.spval).first = seq_if_statement((yyvsp[-6].eval), (yyvsp[-4].spval).first, (yyvsp[-4].spval).last,
						(yyvsp[-3].spval).first, (yyvsp[-3].spval).last, &((yyval.spval).last));
			}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 236 "parse.y" /* yacc.c:1646  */
    { (yyval.spval).first = seq_do_statement((yyvsp[-4].eval), (yyvsp[-2].spval).first, (yyvsp[-2].spval).last,
						(yyvsp[-1].spval).first, (yyvsp[-1].spval).last, &((yyval.spval).last));
			}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 241 "parse.y" /* yacc.c:1646  */
    { (yyval.spval).first=(yyval.spval).last=0; }
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 243 "parse.y" /* yacc.c:1646  */
    { (yyval.spval).first = seq_elseif((yyvsp[-5].spval).first, (yyvsp[-5].spval).last, (yyvsp[-2].eval),
						(yyvsp[0].spval).first, (yyvsp[0].spval).last, &((yyval.spval).last));
			}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 248 "parse.y" /* yacc.c:1646  */
    { (yyval.spval).first=(yyval.spval).last=0; }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 250 "parse.y" /* yacc.c:1646  */
    { (yyval.spval).first=seq_elsedo((yyvsp[-5].spval).first, (yyvsp[-5].spval).last, (yyvsp[-2].eval),
					     (yyvsp[0].spval).first, (yyvsp[0].spval).last, &((yyval.spval).last));
			}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 255 "parse.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].alval).nr < (yyvsp[0].elval).nr)
				yyerror("Too many expressions in "
					"concurrent assignment");
			  else if ((yyvsp[-2].alval).nr > (yyvsp[0].elval).nr)
				yyerror("Too many variables in "
					"concurrent assignment");
			  else
				(yyval.seqval)=seq_assign((yyvsp[-2].alval).nr, (yyvsp[-2].alval).list, (yyvsp[0].elval).first);
			}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 266 "parse.y" /* yacc.c:1646  */
    { (yyval.alval).nr=1;
			  (yyval.alval).list= (Argument*) malloc(sizeof(Argument));
			  (yyval.alval).list[0]=lookup_variable((yyvsp[0].tval));
			}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 271 "parse.y" /* yacc.c:1646  */
    { (yyval.alval).nr=(yyvsp[-2].alval).nr+1;
			  (yyval.alval).list = (Argument*)
				realloc((yyvsp[-2].alval).list, sizeof(Argument)*(yyval.alval).nr);
			  (yyval.alval).list[(yyvsp[-2].alval).nr]=lookup_variable((yyvsp[0].tval));
			}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 278 "parse.y" /* yacc.c:1646  */
    { (yyval.elval).first =
			    (yyval.elval).last =
			    combine_expression((yyvsp[0].eval),0,0);
			  (yyval.elval).nr=1;
			}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 284 "parse.y" /* yacc.c:1646  */
    { (yyval.elval).first = (yyvsp[-2].elval).first;
			  (yyval.elval).last = combine_expression((yyvsp[0].eval),0,0);
	                  combine_expression((yyvsp[-2].elval).last, (yyval.elval).last, 0);
			  (yyval.elval).nr=(yyvsp[-2].elval).nr+1;
			}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 291 "parse.y" /* yacc.c:1646  */
    { (yyval.elval).first = (yyval.elval).last = 0; (yyval.elval).nr=0; }
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 293 "parse.y" /* yacc.c:1646  */
    { (yyval.elval).first = (yyval.elval).last = (yyvsp[0].eval); (yyval.elval).nr=1; }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 295 "parse.y" /* yacc.c:1646  */
    { (yyval.elval).first = (yyvsp[-2].elval).first;
			  (yyval.elval).last = (yyvsp[0].eval);
	                  combine_expression((yyvsp[-2].elval).last, (yyvsp[0].eval), 0);
			  (yyval.elval).nr=(yyvsp[-2].elval).nr+1;
			}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 302 "parse.y" /* yacc.c:1646  */
    { (yyval.fref).func = lookup_user_function((yyvsp[-1].tval));
			  if (!((yyval.fref).func)) {
				(yyval.fref).func = lookup_function((yyvsp[-1].tval));
				(yyval.fref).is_userfunc=0;
			  } else { (yyval.fref).is_userfunc=1; }
			  if (!((yyval.fref).func)) {
				yyerror("Undefined function.");
				yyerror((yyvsp[-1].tval));
			  }
			}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 313 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=func_expression((yyvsp[-1].elval).first, (yyvsp[-1].elval).nr, (yyvsp[-2].fref).func,
					(yyvsp[-2].fref).is_userfunc);
			  if (!(yyval.eval)) { yyerror("Incorrect functioncall."); }
			}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 319 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=make_expression(lookup_int_constant((yyvsp[0].ival))); }
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 321 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=make_expression(lookup_string_constant((yyvsp[0].utval))); }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 323 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=make_expression(lookup_real_constant((yyvsp[0].rval))); }
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 325 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=(yyvsp[0].eval); }
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 327 "parse.y" /* yacc.c:1646  */
    { Argument a;
			  a=lookup_variable((yyvsp[0].tval));
			  if (!a) {
			       yyerror("Undefined identifier");
			       yyerror((yyvsp[0].tval));
			  }
			  (yyval.eval)=make_expression(a);
			}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 336 "parse.y" /* yacc.c:1646  */
    { (yyval.aval)=lookup_variable((yyvsp[-1].tval));
			  if (!((yyval.aval))) {
				yyerror("Undefined identifier");
				yyerror((yyvsp[-1].tval));
				/* conerror=1; */
			  }
			}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 344 "parse.y" /* yacc.c:1646  */
    {
			  (yyval.eval)=combine_expression(make_expression((yyvsp[-2].aval)),
					      (yyvsp[-1].eval), OPARRAY);
			}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 349 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=make_lazy_expression((yyvsp[0].eval)); }
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 351 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=(yyvsp[-1].eval); }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 353 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPADD); }
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 355 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPSUB); }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 357 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPMULT); }
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 359 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPDIV); }
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 361 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPREMAIN); }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 363 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPLOGICAND); }
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 365 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPLOGICOR); }
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 367 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPLOGICXOR); }
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 369 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[0].eval),0,OPLOGICNOT); }
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 371 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPAND); }
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 373 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPOR); }
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 375 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPXOR); }
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 377 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[0].eval),0,OPNOT); }
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 379 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPEQUAL); }
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 381 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPNOTEQUAL); }
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 383 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPGREATER); }
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 385 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPLESS); }
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 387 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPLESSEQUAL); }
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 389 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPGREATEREQUAL); }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 391 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPSHIFTLEFT); }
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 393 "parse.y" /* yacc.c:1646  */
    { (yyval.eval)=combine_expression((yyvsp[-2].eval),(yyvsp[0].eval),OPSHIFTRIGHT); }
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 396 "parse.y" /* yacc.c:1646  */
    { current_keymap=get_map(LocaletoUstr((yyvsp[-1].tval))); }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 398 "parse.y" /* yacc.c:1646  */
    { current_keymap=0; }
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 405 "parse.y" /* yacc.c:1646  */
    { clear_keymap(current_keymap); }
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 407 "parse.y" /* yacc.c:1646  */
    { define_keysequence(current_keymap, (yyvsp[-2].klistval).len, (yyvsp[-2].klistval).key,
					     (yyvsp[-2].klistval).mode, (yyvsp[0].seqval));
			}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 411 "parse.y" /* yacc.c:1646  */
    { define_keyrange(current_keymap, (yyvsp[-4].keyval).key, (yyvsp[-2].keyval).key,
					  (yyvsp[-4].keyval).mode, (yyvsp[0].seqval));
			}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 416 "parse.y" /* yacc.c:1646  */
    { (yyval.klistval).key=keys; (yyval.klistval).mode=mode; (yyval.klistval).len=1;
			  (yyval.klistval).key[0]=(yyvsp[0].keyval).key; (yyval.klistval).mode[0]=(yyvsp[0].keyval).mode;
			}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 420 "parse.y" /* yacc.c:1646  */
    { (yyval.klistval)=(yyvsp[-1].klistval);
			  (yyval.klistval).key[(yyval.klistval).len]=(yyvsp[0].keyval).key;
			  (yyval.klistval).mode[(yyval.klistval).len]=(yyvsp[0].keyval).mode;
			  (yyval.klistval).len++;
			}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 430 "parse.y" /* yacc.c:1646  */
    { KeyMap *km = get_map((yyvsp[0].utval)); free((yyvsp[0].utval)); push_keymap(km);}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 432 "parse.y" /* yacc.c:1646  */
    { (yyvsp[0].keyval).mode=((yyvsp[0].keyval).mode)>>16;
			  (yyvsp[0].keyval).mode=(((yyvsp[0].keyval).mode)<<16)|((yyvsp[0].keyval).mode);
			  handle_key((yyvsp[0].keyval).key, (yyvsp[0].keyval).mode);
			}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 438 "parse.y" /* yacc.c:1646  */
    { current_menu = popup_define(LocaletoUstr((yyvsp[-1].tval)));
			}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 441 "parse.y" /* yacc.c:1646  */
    { popup_store(current_menu); }
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 450 "parse.y" /* yacc.c:1646  */
    { popup_pinable(current_menu); }
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 452 "parse.y" /* yacc.c:1646  */
    { popup_direction(current_menu, 0); }
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 454 "parse.y" /* yacc.c:1646  */
    { popup_direction(current_menu, 1); }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 461 "parse.y" /* yacc.c:1646  */
    { popup_add_separator(current_menu); }
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 463 "parse.y" /* yacc.c:1646  */
    { popup_set_title(current_menu, (yyvsp[0].utval)); }
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 465 "parse.y" /* yacc.c:1646  */
    { popup_add_line(current_menu, (yyvsp[-2].utval), (yyvsp[0].seqval)); }
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 467 "parse.y" /* yacc.c:1646  */
    { popup_add_submenu(current_menu, (yyvsp[-2].utval), LocaletoUstr((yyvsp[0].tval))); }
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 469 "parse.y" /* yacc.c:1646  */
    { popup_make_default(current_menu); }
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 478 "parse.y" /* yacc.c:1646  */
    { set_translation((yyvsp[-2].utval), (yyvsp[0].utval)); }
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 518 "parse.y" /* yacc.c:1646  */
    { ; }
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 520 "parse.y" /* yacc.c:1646  */
    { ; }
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 522 "parse.y" /* yacc.c:1646  */
    { ; }
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 524 "parse.y" /* yacc.c:1646  */
    { ; }
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2356 "y.tab.c" /* yacc.c:1646  */
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
#line 526 "parse.y" /* yacc.c:1906  */

/*
**  lex related functions
*/

typedef struct FILESTACK FILESTACK;

struct FILESTACK {
    FILE *finput;  /* the file */
    char *memory;  /* the internal string */
    char *name;    /* the name of the file (or a pointer in memory) */
    int linecount; /* number of lines processed so far */
    char *buffer;  /* unput buffer (shared) */
    int bufpos;    /* number of unput characters */
    FILESTACK *next; /* next file */
};

static FILESTACK *inputstack=0;
static char lex_unput_buffer[1024];
#define MAXIDENTIFIER 10
#define IDENTLENGTH 256
static char ident_buffer[MAXIDENTIFIER][IDENTLENGTH];
static int current_id=0;

static int current_line_number(void)
{
    return (!inputstack? 0: inputstack->linecount);
}

static char *current_file(void)
{
    return (!inputstack? "stdin" : inputstack->finput ? inputstack->name : "string");
}

static int layout_input(void)
{
    int c;
    if (!inputstack) return 0;
    if (inputstack->bufpos) c= (unsigned)(inputstack->buffer[--inputstack->bufpos]);
    else if (inputstack->finput) c=getc(inputstack->finput);
    else c=(unsigned)(*inputstack->name++);
    if (c=='\n') inputstack->linecount++;
    if (c==EOF) return 0;
    else return c;
}

static void layout_unput(char c)
{
    if (c=='\n') inputstack->linecount--;
    inputstack->buffer[inputstack->bufpos++]=c;
}

static void layout_output(char c)
{
    putc(c,stdout);
}

#include "filefind.h"
static PathInfo mpkpath = 0;

int lex_open_file(char *name)
{
    FILESTACK *fstack;
    FILE *f;
    int i;
    if (!mpkpath) {
      mpkpath = make_pathinfo("MPKPATH", DEFAULTMPKPATH, ".mpk");
    }
    f = open_file(mpkpath,name, "rb");
    if (!f) return 0;
    fstack = (FILESTACK*) malloc(sizeof(FILESTACK));
    fstack->finput=f;
    fstack->memory=0;
    fstack->name=malloc(strlen(name)+1);
    strcpy(fstack->name, name);
    fstack->linecount=1;
    fstack->next = inputstack;
    /* lex uses look-ahead and remembers which are unput */
    if (inputstack) {
        fstack->buffer = inputstack->buffer+inputstack->bufpos;
        for (i=0; i<inputstack->bufpos; i++) {
            fstack->buffer[i]=inputstack->buffer[i];
            if (fstack->buffer[i]=='\n') fstack->linecount--;
            else if (!isspace(fstack->buffer[i]))
                printf("Unput character %c.\n", fstack->buffer[i]);
        }
        fstack->bufpos=inputstack->bufpos;
    } else {
        fstack->buffer = lex_unput_buffer;
        fstack->bufpos=0;
    }
    inputstack=fstack;
    return 1;
}

void lex_open_string(char *s)
{
    FILESTACK *fstack;
    int i;
    fstack = (FILESTACK*) malloc(sizeof(FILESTACK));
    fstack->finput=0;
    fstack->memory=s;
    fstack->name=s;
    fstack->linecount=1;
    fstack->next = inputstack;
    /* lex uses look-ahead and remembers which are unput */
    if (inputstack) {
        fstack->buffer = inputstack->buffer+inputstack->bufpos;
        for (i=0; i<inputstack->bufpos; i++) {
            fstack->buffer[i]=inputstack->buffer[i];
            if (fstack->buffer[i]=='\n') fstack->linecount--;
            else if (!isspace(fstack->buffer[i]))
                printf("Unput character %c.\n", fstack->buffer[i]);
        }
        fstack->bufpos=inputstack->bufpos;
    } else {
        fstack->buffer = lex_unput_buffer;
        fstack->bufpos=0;
    }
    inputstack=fstack;
}

static int layout_wrapup(void)
{
    FILESTACK *fstack;
    if (inputstack) {
        if (inputstack->finput) {
            close_file(inputstack->finput);
            free(inputstack->name);
        }
        fstack=inputstack;
        inputstack=inputstack->next;
        free(fstack);
    }
    return (inputstack? 0 : 1);
}

static void convertslash(Uchar *res, Uchar *s)
{
    int i=0,j=0,k;
    while (s[i]) {
        if (s[i]!='\\') {
            res[j++]=s[i++];
        } else {
            i++;
            if (Uisdigit(s[i]) && Utovalue(s[i])<8) {
                res[j]=0;
                k=0;
                do {
                    k++;
                    res[j]=res[j]*8+Utovalue(s[i]);
		    i++;
                } while (k<3 && Uisdigit(s[i]) && Utovalue(s[i])<8);
                j++;
            } else if (s[i]=='x' && Uisxdigit(s[i+1])) {
                res[j]=0;
                k=0;
                i++;
                do {
                    k++;
                    res[j]=res[j]*16+Utoxvalue(s[i]);
                    i++;
                } while (k<2 && Uisxdigit(s[i]));
                j++;
            } else if (s[i]=='u' && Uisxdigit(s[i+1])) {
 	        res[j]=0;
	        k=0;
	        i++;
	        do {
		    k++;
                    res[j]=res[j]*16+Utoxvalue(s[i]);
                    i++;
                } while (k<4 && Uisxdigit(s[i]));
                j++;
	    } else {
                switch (s[i]) {
                case 'a': res[j++]='\a'; break;
                case 'b': res[j++]='\b'; break;
                case 'f': res[j++]='\f'; break;
                case 'n': res[j++]='\n'; break;
                case 'r': res[j++]='\r'; break;
                case 't': res[j++]='\t'; break;
                case 'v': res[j++]='\v'; break;
                default: 
		  if (s[i]) res[j++]=s[i];
		  break;
                }
                i++;
            }
        }
    }
    res[j]='\0';
}

static void convertslashascii(char *res, char *s, int limit)
{
    int i=0,j=0,k;
    while (i<limit) {
        if (s[i]!='\\') {
            res[j++]=s[i++];
        } else {
            i++;
            if (isdigit(s[i]) && s[i]<'8') {
                res[j]=0;
                k=0;
                do {
                    k++;
                    res[j]=res[j]*8+s[i]-'0';
		    i++;
                } while (k<3 && isdigit(s[i]) && s[i]<'8');
                j++;
            } else if (s[i]=='x' && isxdigit(s[i+1])) {
                res[j]=0;
                k=0;
                i++;
                do {
                    k++;
                    if (isdigit(s[i])) res[j]=res[j]*16+s[i]-'0';
                    else res[j]=res[j]*16+(toupper(s[i])+10-'A');
                    i++;
                } while (k<2 && isxdigit(s[i]));
                j++;
	    } else {
                switch (s[i]) {
                case 'a': res[j++]='\a'; break;
                case 'b': res[j++]='\b'; break;
                case 'f': res[j++]='\f'; break;
                case 'n': res[j++]='\n'; break;
                case 'r': res[j++]='\r'; break;
                case 't': res[j++]='\t'; break;
                case 'v': res[j++]='\v'; break;
                default: 
		  if (s[i]) res[j++]=s[i];
		  break;
                }
                i++;
            }
        }
    }
    res[j]='\0';
}

void parse_input(void)
{
	yyparse();
}

#include "parselex.c"

int yyerror(char *s)
{
	fprintf( stderr, "%s:%i: %s\n", current_file(),
		 current_line_number(),s);
	return (0);
}

