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
#line 1 "parser.yy" /* yacc.c:339  */

/*  $Id: parser.yy,v 1.83 2020/02/10 01:58:22 sarrazip Exp $

    CMOC - A C-like cross-compiler
    Copyright (C) 2003-2016 Pierre Sarrazin <http://sarrazip.com/>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "DeclarationSequence.h"
#include "WordConstantExpr.h"
#include "RealConstantExpr.h"
#include "DWordConstantExpr.h"
#include "IdentifierExpr.h"
#include "VariableExpr.h"
#include "FunctionCallExpr.h"
#include "StringLiteralExpr.h"
#include "BinaryOpExpr.h"
#include "UnaryOpExpr.h"
#include "CastExpr.h"
#include "CompoundStmt.h"
#include "IfStmt.h"
#include "SwitchStmt.h"
#include "LabeledStmt.h"
#include "WhileStmt.h"
#include "ForStmt.h"
#include "JumpStmt.h"
#include "Scope.h"
#include "FunctionDef.h"
#include "FormalParameter.h"
#include "FormalParamList.h"
#include "AssemblerStmt.h"
#include "TranslationUnit.h"
#include "ObjectMemberExpr.h"
#include "ClassDef.h"
#include "ConditionalExpr.h"
#include "DeclarationSpecifierList.h"
#include "Pragma.h"
#include "CommaExpr.h"

#include <string.h>
#include <time.h>

using namespace std;

int yyparse(void);
int yylex(void);
void yyerror(const char *msg);
extern char *yytext;

extern string sourceFilename;  // defined in lexer.ll
extern int lineno;  // defined in lexer.ll
int numErrors = 0;  // error counter for yyerror()
int numWarnings = 0;
static bool doubleTypeWarningIssued = false;

void _PARSERTRACE(int parserLineNo, const char *fmt, ...);
#define PARSERTRACE(...) _PARSERTRACE(__LINE__, __VA_ARGS__)


#line 138 "parser.cc" /* yacc.c:339  */

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
    ID = 258,
    STRLIT = 259,
    PRAGMA = 260,
    CHARLIT = 261,
    REAL = 262,
    TYPE_NAME = 263,
    INT = 264,
    CHAR = 265,
    SHORT = 266,
    LONG = 267,
    FLOAT = 268,
    DOUBLE = 269,
    SIGNED = 270,
    UNSIGNED = 271,
    VOID = 272,
    PLUS_PLUS = 273,
    MINUS_MINUS = 274,
    IF = 275,
    ELSE = 276,
    WHILE = 277,
    DO = 278,
    FOR = 279,
    EQUALS_EQUALS = 280,
    BANG_EQUALS = 281,
    LOWER_EQUALS = 282,
    GREATER_EQUALS = 283,
    AMP_AMP = 284,
    PIPE_PIPE = 285,
    LT_LT = 286,
    GT_GT = 287,
    BREAK = 288,
    CONTINUE = 289,
    RETURN = 290,
    ASM = 291,
    NORTS = 292,
    VERBATIM_ASM = 293,
    STRUCT = 294,
    UNION = 295,
    THIS = 296,
    PLUS_EQUALS = 297,
    MINUS_EQUALS = 298,
    ASTERISK_EQUALS = 299,
    SLASH_EQUALS = 300,
    PERCENT_EQUALS = 301,
    LT_LT_EQUALS = 302,
    GT_GT_EQUALS = 303,
    CARET_EQUALS = 304,
    AMP_EQUALS = 305,
    PIPE_EQUALS = 306,
    RIGHT_ARROW = 307,
    INTERRUPT = 308,
    SIZEOF = 309,
    ELLIPSIS = 310,
    TYPEDEF = 311,
    ENUM = 312,
    SWITCH = 313,
    CASE = 314,
    DEFAULT = 315,
    REGISTER = 316,
    GOTO = 317,
    EXTERN = 318,
    STATIC = 319,
    CONST = 320,
    VOLATILE = 321,
    AUTO = 322,
    FUNC_RECEIVES_FIRST_PARAM_IN_REG = 323
  };
#endif
/* Tokens.  */
#define ID 258
#define STRLIT 259
#define PRAGMA 260
#define CHARLIT 261
#define REAL 262
#define TYPE_NAME 263
#define INT 264
#define CHAR 265
#define SHORT 266
#define LONG 267
#define FLOAT 268
#define DOUBLE 269
#define SIGNED 270
#define UNSIGNED 271
#define VOID 272
#define PLUS_PLUS 273
#define MINUS_MINUS 274
#define IF 275
#define ELSE 276
#define WHILE 277
#define DO 278
#define FOR 279
#define EQUALS_EQUALS 280
#define BANG_EQUALS 281
#define LOWER_EQUALS 282
#define GREATER_EQUALS 283
#define AMP_AMP 284
#define PIPE_PIPE 285
#define LT_LT 286
#define GT_GT 287
#define BREAK 288
#define CONTINUE 289
#define RETURN 290
#define ASM 291
#define NORTS 292
#define VERBATIM_ASM 293
#define STRUCT 294
#define UNION 295
#define THIS 296
#define PLUS_EQUALS 297
#define MINUS_EQUALS 298
#define ASTERISK_EQUALS 299
#define SLASH_EQUALS 300
#define PERCENT_EQUALS 301
#define LT_LT_EQUALS 302
#define GT_GT_EQUALS 303
#define CARET_EQUALS 304
#define AMP_EQUALS 305
#define PIPE_EQUALS 306
#define RIGHT_ARROW 307
#define INTERRUPT 308
#define SIZEOF 309
#define ELLIPSIS 310
#define TYPEDEF 311
#define ENUM 312
#define SWITCH 313
#define CASE 314
#define DEFAULT 315
#define REGISTER 316
#define GOTO 317
#define EXTERN 318
#define STATIC 319
#define CONST 320
#define VOLATILE 321
#define AUTO 322
#define FUNC_RECEIVES_FIRST_PARAM_IN_REG 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 75 "parser.yy" /* yacc.c:355  */

    char *str;
    signed char character;
    double real;
    int integer;
    BasicType basicType;
    const TypeDesc *typeDesc;
    TypeSpecifier *typeSpecifier;
    DeclarationSpecifierList *declarationSpecifierList;
    Tree *tree;
    CompoundStmt *compoundStmt;
    TreeSequence *treeSequence;
    FormalParamList *formalParamList;
    FormalParameter *formalParameter;
    DeclarationSequence *declarationSequence;
    Declarator *declarator;
    std::vector<Declarator *> *declaratorVector;
    BinaryOpExpr::Op binop;
    UnaryOpExpr::Op unop;
    Scope *scope;
    FunctionDef *functionDef;
    std::vector<std::string> *strList;
    ClassDef *classDef;
    ClassDef::ClassMember *classMember;
    FilenameAndLineNo *filenameAndLineNo;
    std::vector<ClassDef::ClassMember *> *classMemberList;
    Enumerator *enumerator;
    std::vector<Enumerator *> *enumeratorList;
    TypeQualifierBitFieldVector *typeQualifierBitFieldVector;

#line 345 "parser.cc" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 362 "parser.cc" /* yacc.c:358  */

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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   979

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  245
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  398

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    89,    83,     2,
      71,    73,    72,    86,    70,    87,    92,    88,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    69,
      84,    76,    85,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,    81,    75,    91,     2,     2,     2,
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
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   149,   149,   150,   154,   160,   169,   170,   171,   172,
     176,   205,   206,   207,   213,   214,   219,   229,   242,   260,
     264,   265,   269,   270,   274,   275,   276,   277,   281,   282,
     283,   284,   288,   293,   294,   300,   304,   313,   315,   317,
     319,   321,   323,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   340,   341,   342,   345,   346,   347,   351,   352,
     356,   357,   361,   374,   391,   392,   396,   402,   407,   416,
     417,   421,   422,   426,   427,   431,   432,   433,   434,   435,
     436,   437,   441,   453,   454,   458,   462,   466,   467,   473,
     474,   478,   482,   486,   492,   495,   501,   506,   511,   516,
     523,   529,   540,   541,   545,   549,   550,   554,   555,   556,
     557,   558,   562,   563,   567,   568,   572,   582,   595,   599,
     600,   605,   606,   607,   616,   617,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     637,   640,   643,   647,   653,   654,   658,   662,   663,   667,
     668,   672,   673,   687,   688,   692,   693,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   716,   717,
     722,   723,   728,   729,   734,   735,   739,   740,   744,   745,
     749,   750,   755,   756,   760,   761,   765,   766,   768,   773,
     774,   775,   776,   780,   781,   785,   786,   790,   791,   795,
     796,   797,   801,   802,   822,   823,   824,   825,   829,   830,
     831,   832,   833,   834,   838,   839,   843,   844,   847,   850,
     852,   854,   856,   858,   863,   864,   882,   883,   884,   888,
     889,   898,   899,   903,   904,   908,   909,   913,   917,   918,
     922,   926,   930,   934,   935,   939
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRLIT", "PRAGMA", "CHARLIT",
  "REAL", "TYPE_NAME", "INT", "CHAR", "SHORT", "LONG", "FLOAT", "DOUBLE",
  "SIGNED", "UNSIGNED", "VOID", "PLUS_PLUS", "MINUS_MINUS", "IF", "ELSE",
  "WHILE", "DO", "FOR", "EQUALS_EQUALS", "BANG_EQUALS", "LOWER_EQUALS",
  "GREATER_EQUALS", "AMP_AMP", "PIPE_PIPE", "LT_LT", "GT_GT", "BREAK",
  "CONTINUE", "RETURN", "ASM", "NORTS", "VERBATIM_ASM", "STRUCT", "UNION",
  "THIS", "PLUS_EQUALS", "MINUS_EQUALS", "ASTERISK_EQUALS", "SLASH_EQUALS",
  "PERCENT_EQUALS", "LT_LT_EQUALS", "GT_GT_EQUALS", "CARET_EQUALS",
  "AMP_EQUALS", "PIPE_EQUALS", "RIGHT_ARROW", "INTERRUPT", "SIZEOF",
  "ELLIPSIS", "TYPEDEF", "ENUM", "SWITCH", "CASE", "DEFAULT", "REGISTER",
  "GOTO", "EXTERN", "STATIC", "CONST", "VOLATILE", "AUTO",
  "FUNC_RECEIVES_FIRST_PARAM_IN_REG", "';'", "','", "'('", "'*'", "')'",
  "'{'", "'}'", "'='", "'['", "']'", "':'", "'?'", "'|'", "'^'", "'&'",
  "'<'", "'>'", "'+'", "'-'", "'/'", "'%'", "'!'", "'~'", "'.'", "$accept",
  "goal", "translation_unit", "external_declaration",
  "function_definition", "parameter_type_list", "parameter_list",
  "parameter_declaration", "type_name", "abstract_declarator",
  "function_pointer_cast_opt", "function_pointer_cast", "pointer",
  "specifier_qualifier_list", "compound_stmt", "stmt_list_opt",
  "declaration", "declaration_specifiers", "storage_class_specifier",
  "type_specifier", "type_qualifier", "type_qualifier_list",
  "struct_or_union_specifier", "struct_or_union", "enum_specifier",
  "enumerator_list", "enumerator", "comma_opt", "non_void_basic_type",
  "basic_type", "save_src_fn", "save_line_no", "init_declarator_list",
  "init_declarator", "declarator", "direct_declarator", "subscript_list",
  "subscript", "parameter_type_list_opt", "initializer",
  "initializer_list", "struct_declaration_list_opt",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "stmt_list", "stmt",
  "labeled_stmt", "constant_expr", "expr_stmt", "expr_opt", "expr",
  "arg_expr_list", "assignment_expr", "assignment_op", "conditional_expr",
  "logical_or_expr", "logical_and_expr", "inclusive_or_expr",
  "exclusive_or_expr", "and_expr", "equality_expr", "equality_op",
  "rel_expr", "shift_expr", "rel_op", "add_expr", "add_op", "mul_expr",
  "mul_op", "unary_expr", "unary_op", "cast_expr", "postfix_expr",
  "primary_expr", "strlit_seq", "expr_list_opt", "expr_list",
  "selection_stmt", "if_cond", "else_part_opt", "while_stmt", "while_cond",
  "do_while_stmt", "for_init", "for_stmt", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,    59,
      44,    40,    42,    41,   123,   125,    61,    91,    93,    58,
      63,   124,    94,    38,    60,    62,    43,    45,    47,    37,
      33,   126,    46
};
# endif

#define YYPACT_NINF -201

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-201)))

#define YYTABLE_NINF -86

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     811,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,    12,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,    17,   811,  -201,
    -201,  -201,    62,   911,   911,   911,  -201,     6,  -201,  -201,
    -201,    -4,    90,  -201,  -201,  -201,  -201,   -14,    -5,    42,
       8,  -201,   -56,     2,  -201,  -201,  -201,    25,  -201,   424,
      90,    46,    45,  -201,    39,  -201,  -201,    -5,  -201,  -201,
      42,  -201,   180,  -201,   710,   556,   424,    48,   424,   424,
      49,   424,  -201,    45,   556,    90,    51,   -34,    66,  -201,
    -201,  -201,    56,  -201,  -201,  -201,  -201,  -201,   596,   596,
     645,   501,  -201,   224,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,   -18,   126,    87,    88,    98,   119,    55,   131,
      80,   -36,  -201,   556,   322,     4,  -201,   181,   120,  -201,
    -201,   121,   125,  -201,    42,   122,   133,  -201,   129,   556,
     127,   103,  -201,  -201,  -201,  -201,  -201,   132,  -201,  -201,
    -201,  -201,  -201,   130,   556,    18,  -201,   845,   323,   556,
    -201,  -201,   501,  -201,   135,   104,    24,   136,  -201,  -201,
     -16,   556,   556,   556,   556,   556,   556,  -201,  -201,   556,
    -201,  -201,  -201,  -201,   556,   556,   556,  -201,  -201,   556,
    -201,  -201,  -201,   556,  -201,  -201,  -201,  -201,   207,   556,
     209,  -201,  -201,  -201,  -201,   878,  -201,  -201,   556,  -201,
    -201,   556,  -201,    48,  -201,   845,   138,   143,  -201,  -201,
     146,   141,   150,   151,   323,   152,   155,   156,   526,   158,
    -201,   161,   556,   157,   232,  -201,  -201,   162,  -201,    62,
     323,  -201,  -201,  -201,   108,  -201,  -201,  -201,  -201,   165,
     556,   168,   173,  -201,  -201,  -201,  -201,  -201,   452,  -201,
     126,   -29,    87,    88,    98,   119,    55,   131,    80,    80,
     -36,  -201,   627,  -201,    -6,  -201,   175,  -201,  -201,  -201,
    -201,  -201,   174,  -201,   845,  -201,  -201,   556,   556,   226,
    -201,  -201,  -201,  -201,   110,   245,   556,   171,   323,   184,
    -201,  -201,  -201,  -201,  -201,   183,  -201,  -201,  -201,   556,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,   556,  -201,   550,  -201,   186,   179,   133,   187,   133,
     188,   191,  -201,  -201,    68,    79,   323,  -201,  -201,   193,
    -201,  -201,  -201,    81,  -201,  -201,   323,   323,   323,   556,
     412,   185,   196,   323,  -201,   745,   556,  -201,  -201,   247,
    -201,   199,  -201,   133,   205,   206,  -201,   202,   204,  -201,
    -201,  -201,   208,  -201,   323,  -201,   213,  -201,   556,  -201,
     216,   217,  -201,  -201,  -201,   133,   556,  -201,  -201,   218,
    -201,  -201,   556,   215,  -201,  -201,   323,  -201
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     8,    57,    75,    76,    77,    80,    81,    82,    78,
      79,    84,    46,    47,    64,    65,    43,    45,     0,    48,
      51,    50,    58,    59,    49,    44,     9,     0,     2,     4,
       6,     7,    94,    37,    39,    41,    53,     0,    56,    83,
      52,    68,     0,     1,     5,    93,    35,     0,    24,    94,
       0,    87,    89,    92,    38,    40,    42,    54,    55,   114,
       0,    71,    74,    69,     0,    26,    60,    25,    91,    36,
      94,    85,     0,    10,     0,   149,   114,    94,    29,    31,
       0,   115,   116,    74,     0,    73,     0,     0,     0,    27,
      61,    88,    89,    86,   224,   229,   226,   225,     0,     0,
       0,     0,   211,     0,   210,   208,   209,   212,   213,    90,
     107,   155,   168,   170,   172,   174,   176,   178,   180,   184,
     186,   193,   214,     0,   197,   202,   216,   227,    84,    13,
      97,     0,    11,    14,    94,     0,   150,   151,     0,     0,
     121,     0,   119,    28,    30,    63,   117,     0,    72,   146,
     197,    70,    67,     0,   149,     0,   102,   105,    33,     0,
     204,   205,     0,   207,     0,    20,     0,     0,   110,   112,
       0,     0,     0,     0,     0,     0,     0,   182,   183,     0,
     190,   192,   189,   191,     0,     0,     0,   195,   196,     0,
     199,   200,   201,     0,   203,    86,   220,   221,     0,     0,
       0,    86,   230,    98,    96,     0,    16,    95,     0,    62,
     122,     0,   118,    94,    66,   105,     0,     0,   103,   106,
       0,   224,     0,     0,     0,     0,     0,     0,     0,    46,
     142,     0,     0,     0,     0,   147,   128,     0,   127,    94,
      34,   124,   130,   126,     0,   129,   131,   132,   133,     0,
       0,     0,    20,    17,    21,    19,   228,   111,     0,   108,
     171,     0,   173,   175,   177,   179,   181,   185,   187,   188,
     194,   198,     0,   223,     0,   222,     0,    12,    15,   152,
     123,   120,     0,   104,   105,   100,    86,     0,     0,     0,
      85,   135,   136,   137,     0,     0,     0,     0,     0,     0,
      32,   125,   148,   206,   215,     0,    18,   109,   113,     0,
     158,   159,   160,   161,   162,   166,   167,   163,   164,   165,
     157,     0,   219,     0,    99,     0,     0,   237,     0,   241,
       0,     0,    86,   138,     0,     0,     0,   145,   134,     0,
     169,   156,   217,     0,   153,   101,     0,     0,     0,     0,
     231,     0,     0,     0,   144,     0,     0,   218,   143,   238,
     240,     0,   244,   233,     0,   232,    85,     0,     0,   141,
     236,    23,     0,   154,     0,   235,     0,   243,     0,    86,
       0,     0,    22,   239,   242,   234,   149,   139,   140,     0,
      85,    86,   231,     0,    85,    86,     0,   245
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,  -201,   261,  -201,   -72,  -201,    86,   139,  -201,
      40,  -201,   -37,   -53,   241,  -201,     1,     0,  -201,   -32,
       9,  -201,  -201,  -201,  -201,   237,   219,   220,  -201,  -201,
    -121,  -182,  -201,   230,   -11,  -201,  -201,   147,  -183,   -93,
    -201,   229,  -201,   225,  -201,    96,  -201,  -200,  -201,    85,
    -201,  -147,   -70,  -201,   -66,  -201,   -76,  -201,   142,   145,
     149,   137,   144,  -201,   140,   160,  -201,     5,  -201,   159,
    -201,    61,  -201,   -68,  -201,  -201,  -201,   -71,  -201,  -201,
    -201,  -201,  -201,   -25,  -201,  -201,  -201
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    30,   219,   132,   133,   164,   252,
     253,   254,    49,    77,   236,   237,   238,   239,    33,    34,
      35,    67,    36,    37,    38,    62,    63,    86,    39,    40,
      93,   158,    50,    51,    92,    53,   155,   156,   220,   109,
     170,    80,    81,    82,   141,   142,   240,   241,   242,   148,
     243,   135,   244,   343,   137,   321,   111,   112,   113,   114,
     115,   116,   117,   179,   118,   119,   184,   120,   189,   121,
     193,   122,   123,   124,   125,   126,   127,   364,   365,   245,
     328,   375,   246,   330,   247,   366,   248
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    31,   131,   195,   201,   136,   110,   216,   149,    57,
     169,    65,   171,   272,    58,    41,   150,    43,    71,   276,
      72,    52,   196,   197,   289,   143,   144,    78,    32,    31,
      89,   166,   282,    54,    55,    56,   190,   110,    68,   153,
     301,   208,    87,   154,    78,    45,    78,    78,   165,    78,
     309,    45,   191,   192,   258,   194,   198,    66,    64,   259,
      22,    23,   172,   210,   208,    45,   140,    48,    79,    78,
      60,   150,   322,    74,   134,   -85,    90,    69,    70,    75,
      59,   199,   180,   181,   136,    79,    42,    79,    79,   166,
      79,   217,   166,    61,   208,   154,   200,   256,   337,    76,
     286,   325,   261,   150,   326,   150,   150,   150,   150,   165,
      79,   150,    88,    47,    48,    85,   150,   150,   150,    47,
      48,   150,    84,   206,   145,   271,   152,   139,   255,   274,
      78,    46,    72,    47,    48,   280,   354,   157,   351,   182,
     183,   352,   279,   150,   177,   178,   358,   359,   360,   208,
     350,   356,   353,   370,   357,   173,   149,   134,   294,   160,
     161,   163,   185,   186,   150,   308,   187,   188,   174,   332,
     175,    79,   212,   213,   383,   251,    48,   302,   208,   333,
     208,   176,   304,    94,    95,   202,    96,    97,   367,   368,
     268,   269,   110,   203,   204,   205,   397,   386,    98,    99,
     207,   215,   140,   208,   209,   134,   211,   214,   250,   392,
     273,   257,   275,   396,   284,   134,   283,   327,   329,   285,
     -85,   287,   288,   290,   291,   292,   335,    94,    95,   295,
      96,    97,   296,   340,   100,   299,   298,   300,   303,   389,
     305,   150,    98,    99,   251,   379,   323,   324,   331,   334,
     336,   101,   102,   338,   103,   341,   339,   344,   346,   345,
     347,   348,   349,   104,   355,   369,   105,   106,   374,   391,
     107,   108,   376,   395,   377,   380,   378,   381,   100,   329,
     363,   382,   384,   372,   134,   387,   388,   390,   394,    44,
     373,   278,   306,    73,   167,   101,   102,    83,   103,   168,
      91,   249,   218,   147,   151,   138,   146,   104,   385,   281,
     105,   106,   264,   260,   107,   108,   136,   297,   262,   266,
     265,   393,   363,   263,   361,     0,   221,    95,     0,    96,
      97,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    98,    99,   222,   267,   223,   224,   225,   270,     0,
       0,   362,     0,     0,     0,   134,   226,   227,   228,   229,
      13,   230,    14,    15,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,    16,   100,     0,    17,
      18,   231,   232,   233,    19,   234,    20,    21,    22,    23,
      24,    25,   235,     0,   101,   102,     0,    71,   -85,     0,
       0,     0,     0,     0,     0,     0,   104,     0,     0,   105,
     106,     0,     0,   107,   108,    94,    95,     0,    96,    97,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      98,    99,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,    12,    13,
       0,    14,    15,     0,     0,    94,    95,     0,    96,    97,
       0,     0,     0,    14,    15,    16,   100,     0,    17,    18,
      98,    99,     0,    19,     0,    20,    21,    22,    23,    24,
      25,    18,     0,   101,   102,     0,     0,     0,     0,    22,
      23,     0,     0,     0,     0,   104,     0,     0,   105,   106,
       0,     0,   107,   108,    94,    95,   100,    96,    97,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    98,
      99,     0,     0,   101,   102,     0,   103,   307,     0,    94,
      95,     0,    96,    97,     0,   104,     0,     0,   105,   106,
      14,    15,   107,   108,    98,    99,     0,     0,     0,     0,
       0,     0,     0,    94,    95,   100,    96,    97,    18,    94,
      95,     0,    96,    97,     0,     0,    22,    23,    98,    99,
       0,     0,   101,   102,    98,    99,     0,     0,     0,     0,
     100,     0,     0,     0,   104,     0,     0,   105,   106,     0,
       0,   107,   108,     0,     0,   293,     0,   101,   102,    94,
      95,     0,    96,    97,   100,     0,     0,     0,     0,   104,
     100,     0,   105,   106,    98,    99,   107,   108,     0,     0,
       0,   101,   102,   342,     0,     0,     0,   101,   102,     0,
       0,     0,     0,   104,     0,     0,   105,   106,     0,   104,
     107,   108,   105,   106,     0,     0,   107,   108,    94,    95,
     100,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,     0,     0,   159,   102,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   104,
       0,     0,   105,   106,     0,     0,   107,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,   320,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   162,   102,     2,     3,
       4,     5,     6,     7,     8,     9,    10,   128,   104,     0,
       0,   105,   106,     0,     0,   107,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,    14,
      15,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    16,     0,   129,    17,    18,     0,     0,
       0,    19,     0,    20,    21,    22,    23,    24,    25,     0,
       0,    12,    13,   130,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
     129,    17,    18,     0,     0,     0,    19,     0,    20,    21,
      22,    23,    24,    25,     0,     0,     1,     0,   371,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
      14,    15,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     0,    16,     0,     0,    17,    18,     0,
       0,     0,    19,     0,    20,    21,    22,    23,    24,    25,
      26,    12,    13,     0,    14,    15,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,     0,     0,    16,     0,
     129,    17,    18,     0,     0,     0,    19,     0,    20,    21,
      22,    23,    24,    25,    12,    13,     0,    14,    15,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     0,
       0,    16,     0,   277,    17,    18,     0,     0,     0,    19,
       0,    20,    21,    22,    23,    24,    25,    12,    13,     0,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,    17,    18,     0,
       0,     0,    19,     0,    20,    21,    22,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
       0,     0,    74,   124,   125,    75,    72,   154,    84,     3,
     103,    48,    30,   195,     8,     3,    84,     0,    74,   201,
      76,    32,    18,    19,   224,    78,    79,    59,    28,    28,
      67,   101,   215,    33,    34,    35,    72,   103,    49,    73,
     240,    70,     3,    77,    76,     3,    78,    79,   101,    81,
      79,     3,    88,    89,    70,   123,    52,    48,    72,    75,
      65,    66,    80,   139,    70,     3,    77,    72,    59,   101,
      74,   139,    78,    71,    74,    71,    67,    69,    70,    77,
      74,    77,    27,    28,   154,    76,    74,    78,    79,   159,
      81,    73,   162,     3,    70,    77,    92,    73,   298,    74,
     221,   284,   172,   171,   286,   173,   174,   175,   176,   162,
     101,   179,    73,    71,    72,    70,   184,   185,   186,    71,
      72,   189,    76,   134,    75,   193,    75,    79,   165,   199,
     162,    69,    76,    71,    72,   211,   336,    71,    70,    84,
      85,    73,   208,   211,    25,    26,   346,   347,   348,    70,
     332,    70,    73,   353,    73,    29,   232,   157,   228,    98,
      99,   100,    31,    32,   232,   258,    86,    87,    81,   290,
      82,   162,    69,    70,   374,    71,    72,    69,    70,    69,
      70,    83,   250,     3,     4,     4,     6,     7,     3,     4,
     185,   186,   258,    73,    73,    70,   396,   379,    18,    19,
      78,    71,   213,    70,    75,   205,    79,    75,    73,   391,
       3,    75,     3,   395,    71,   215,    78,   287,   288,    73,
      79,    71,    71,    71,    69,    69,   296,     3,     4,    71,
       6,     7,    71,   309,    54,     3,    79,    75,    73,   386,
      72,   309,    18,    19,    71,   366,    71,    73,    22,     4,
      79,    71,    72,    69,    74,   321,    73,   323,    79,    73,
      73,    73,    71,    83,    71,    69,    86,    87,    21,   390,
      90,    91,    73,   394,    69,    73,    70,    73,    54,   349,
     350,    73,    69,   355,   284,    69,    69,    69,    73,    28,
     356,   205,   252,    52,    70,    71,    72,    60,    74,    75,
      70,   162,   155,    83,    85,    76,    81,    83,   378,   213,
      86,    87,   175,   171,    90,    91,   386,   232,   173,   179,
     176,   392,   392,   174,   349,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   184,    22,    23,    24,   189,    -1,
      -1,   350,    -1,    -1,    -1,   355,    33,    34,    35,    36,
      37,    38,    39,    40,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    72,    -1,    74,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      -1,    39,    40,    -1,    -1,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    39,    40,    53,    54,    -1,    56,    57,
      18,    19,    -1,    61,    -1,    63,    64,    65,    66,    67,
      68,    57,    -1,    71,    72,    -1,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      -1,    -1,    90,    91,     3,     4,    54,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    71,    72,    -1,    74,    75,    -1,     3,
       4,    -1,     6,     7,    -1,    83,    -1,    -1,    86,    87,
      39,    40,    90,    91,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    54,     6,     7,    57,     3,
       4,    -1,     6,     7,    -1,    -1,    65,    66,    18,    19,
      -1,    -1,    71,    72,    18,    19,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,
      -1,    90,    91,    -1,    -1,    69,    -1,    71,    72,     3,
       4,    -1,     6,     7,    54,    -1,    -1,    -1,    -1,    83,
      54,    -1,    86,    87,    18,    19,    90,    91,    -1,    -1,
      -1,    71,    72,    73,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,    83,
      90,    91,    86,    87,    -1,    -1,    90,    91,     3,     4,
      54,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    -1,    -1,    71,    72,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    83,
      -1,    -1,    86,    87,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    83,    -1,
      -1,    86,    87,    -1,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,
      40,    -1,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    53,    -1,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    63,    64,    65,    66,    67,    68,    -1,
      -1,    36,    37,    73,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    64,
      65,    66,    67,    68,    -1,    -1,     5,    -1,    73,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,
      39,    40,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    36,    37,    -1,    39,    40,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    64,
      65,    66,    67,    68,    36,    37,    -1,    39,    40,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,    61,
      -1,    63,    64,    65,    66,    67,    68,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    64,    65,    66,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    36,    37,    39,    40,    53,    56,    57,    61,
      63,    64,    65,    66,    67,    68,    69,    94,    95,    96,
      97,   109,   110,   111,   112,   113,   115,   116,   117,   121,
     122,     3,    74,     0,    96,     3,    69,    71,    72,   105,
     125,   126,   127,   128,   110,   110,   110,     3,     8,    74,
      74,     3,   118,   119,    72,   105,   113,   114,   127,    69,
      70,    74,    76,   107,    71,    77,    74,   106,   112,   113,
     134,   135,   136,   118,    76,    70,   120,     3,    73,   105,
     113,   126,   127,   123,     3,     4,     6,     7,    18,    19,
      54,    71,    72,    74,    83,    86,    87,    90,    91,   132,
     147,   149,   150,   151,   152,   153,   154,   155,   157,   158,
     160,   162,   164,   165,   166,   167,   168,   169,    17,    55,
      73,    98,    99,   100,   110,   144,   145,   147,   134,    79,
     127,   137,   138,   106,   106,    75,   136,   120,   142,   149,
     166,   119,    75,    73,    77,   129,   130,    71,   124,    71,
     164,   164,    71,   164,   101,   106,   145,    70,    75,   132,
     133,    30,    80,    29,    81,    82,    83,    25,    26,   156,
      27,    28,    84,    85,   159,    31,    32,    86,    87,   161,
      72,    88,    89,   163,   166,   123,    18,    19,    52,    77,
      92,   123,     4,    73,    73,    70,   127,    78,    70,    75,
     149,    79,    69,    70,    75,    71,   144,    73,   130,    98,
     131,     3,    20,    22,    23,    24,    33,    34,    35,    36,
      38,    58,    59,    60,    62,    69,   107,   108,   109,   110,
     139,   140,   141,   143,   145,   172,   175,   177,   179,   101,
      73,    71,   102,   103,   104,   105,    73,    75,    70,    75,
     151,   145,   152,   153,   154,   155,   157,   158,   160,   160,
     162,   166,   124,     3,   145,     3,   124,    55,   100,   147,
     149,   138,   131,    78,    71,    73,   123,    71,    71,   140,
      71,    69,    69,    69,   145,    71,    71,   142,    79,     3,
      75,   140,    69,    73,   166,    72,   103,    75,   132,    79,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      76,   148,    78,    71,    73,   131,   124,   145,   173,   145,
     176,    22,   123,    69,     4,   145,    79,   140,    69,    73,
     149,   147,    73,   146,   147,    73,    79,    73,    73,    71,
     124,    70,    73,    73,   140,    71,    70,    73,   140,   140,
     140,   176,   109,   145,   170,   171,   178,     3,     4,    69,
     140,    73,    98,   147,    21,   174,    73,    69,    70,   123,
      73,    73,    73,   140,    69,   145,   124,    69,    69,   144,
      69,   123,   124,   170,    73,   123,   124,   140
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      97,    98,    98,    98,    99,    99,   100,   101,   101,   102,
     103,   103,   104,   104,   105,   105,   105,   105,   106,   106,
     106,   106,   107,   108,   108,   109,   109,   110,   110,   110,
     110,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   122,   123,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   129,   129,   130,   131,   131,   132,   132,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   138,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   141,   141,   141,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   158,   159,
     159,   159,   159,   160,   160,   161,   161,   162,   162,   163,
     163,   163,   164,   164,   164,   164,   164,   164,   165,   165,
     165,   165,   165,   165,   166,   166,   167,   167,   167,   167,
     167,   167,   167,   167,   168,   168,   168,   168,   168,   169,
     169,   170,   170,   171,   171,   172,   172,   173,   174,   174,
     175,   176,   177,   178,   178,   179
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       3,     1,     3,     1,     1,     3,     2,     2,     3,     1,
       0,     1,     6,     5,     1,     2,     2,     3,     2,     1,
       2,     1,     5,     0,     1,     2,     3,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     2,     5,     4,     1,     1,     6,     5,     2,     1,
       3,     1,     3,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     1,     3,     1,
       3,     2,     1,     1,     0,     4,     4,     3,     4,     7,
       6,     8,     1,     2,     3,     0,     1,     1,     3,     4,
       2,     3,     1,     3,     0,     1,     1,     2,     3,     1,
       3,     1,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     2,     3,     7,
       7,     5,     1,     5,     4,     3,     1,     1,     2,     0,
       1,     1,     3,     1,     3,     1,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     2,     2,     2,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     5,     6,     4,
       2,     2,     3,     3,     1,     1,     1,     1,     3,     1,
       2,     0,     1,     1,     3,     6,     5,     1,     0,     2,
       5,     1,     7,     2,     1,    16
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
#line 149 "parser.yy" /* yacc.c:1646  */
    { TranslationUnit::instance().setDefinitionList((yyvsp[0].treeSequence)); }
#line 1878 "parser.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 150 "parser.yy" /* yacc.c:1646  */
    { TranslationUnit::instance().setDefinitionList(NULL); }
#line 1884 "parser.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 155 "parser.yy" /* yacc.c:1646  */
    {
                (yyval.treeSequence) = new TreeSequence();
                if ((yyvsp[0].tree))
                    (yyval.treeSequence)->addTree((yyvsp[0].tree)); 
            }
#line 1894 "parser.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 161 "parser.yy" /* yacc.c:1646  */
    {
                (yyval.treeSequence) = (yyvsp[-1].treeSequence);
                if ((yyvsp[0].tree))
                    (yyval.treeSequence)->addTree((yyvsp[0].tree));
            }
#line 1904 "parser.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 169 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].functionDef); }
#line 1910 "parser.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 170 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].declarationSequence); }
#line 1916 "parser.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 171 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new Pragma((yyvsp[0].str)); free((yyvsp[0].str)); }
#line 1922 "parser.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 172 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 1928 "parser.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 177 "parser.yy" /* yacc.c:1646  */
    {
                DeclarationSpecifierList *dsl = (yyvsp[-2].declarationSpecifierList);
                Declarator *di = (yyvsp[-1].declarator);

                if (dsl->hasEnumeratorList())
                {
                    errormsg("enum with enumerated names is not supported in a function's return type");
                    dsl->detachEnumeratorList();
                }
                if (dsl->isStaticDeclaration() && dsl->isExternDeclaration())
                {
                    errormsg("function definition must not be both static and extern");
                }

                // Example: In byte **f() {}, dsl represents "byte" and
                // di represents **f. Hence, di contains a pointer level of 2,
                // which is applied to the TypeDesc found in dsl, i.e., "byte".
                // di also contains the name of the function, "f".
                //
                (yyval.functionDef) = new FunctionDef(*dsl, *di);
                (yyval.functionDef)->setLineNo(di->getSourceFilename(), di->getLineNo());
                (yyval.functionDef)->setBody((yyvsp[0].compoundStmt));
                delete di;
                delete dsl;
            }
#line 1958 "parser.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 205 "parser.yy" /* yacc.c:1646  */
    { (yyval.formalParamList) = (yyvsp[0].formalParamList); }
#line 1964 "parser.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 206 "parser.yy" /* yacc.c:1646  */
    { (yyval.formalParamList) = (yyvsp[-2].formalParamList); (yyval.formalParamList)->endWithEllipsis(); }
#line 1970 "parser.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 207 "parser.yy" /* yacc.c:1646  */
    { (yyval.formalParamList) = new FormalParamList(); (yyval.formalParamList)->endWithEllipsis(); }
#line 1976 "parser.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 213 "parser.yy" /* yacc.c:1646  */
    { (yyval.formalParamList) = new FormalParamList(); if ((yyvsp[0].formalParameter)) (yyval.formalParamList)->addTree((yyvsp[0].formalParameter)); }
#line 1982 "parser.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 215 "parser.yy" /* yacc.c:1646  */
    { (yyval.formalParamList) = (yyvsp[-2].formalParamList); if ((yyvsp[0].formalParameter)) (yyval.formalParamList)->addTree((yyvsp[0].formalParameter)); }
#line 1988 "parser.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 220 "parser.yy" /* yacc.c:1646  */
    {
                    DeclarationSpecifierList *dsl = (yyvsp[-1].declarationSpecifierList);
                    (yyval.formalParameter) = (yyvsp[0].declarator)->createFormalParameter(*dsl);
                    delete dsl;
                    delete (yyvsp[0].declarator);
                }
#line 1999 "parser.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 230 "parser.yy" /* yacc.c:1646  */
    {
                    if ((yyvsp[0].formalParamList))
                    {
                        (yyval.typeDesc) = TranslationUnit::getTypeManager().getFunctionPointerType(
                                (yyvsp[-1].declarationSpecifierList)->getTypeDesc(), *(yyvsp[0].formalParamList),
                                (yyvsp[-1].declarationSpecifierList)->isInterruptServiceFunction(), (yyvsp[-1].declarationSpecifierList)->isFunctionReceivingFirstParamInReg());
                        delete (yyvsp[0].formalParamList);
                    }
                    else
                        (yyval.typeDesc) = (yyvsp[-1].declarationSpecifierList)->getTypeDesc();
                    delete (yyvsp[-1].declarationSpecifierList);
                }
#line 2016 "parser.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 243 "parser.yy" /* yacc.c:1646  */
    {
                    const TypeDesc *td = TranslationUnit::getTypeManager().getPointerTo((yyvsp[-2].declarationSpecifierList)->getTypeDesc(), *(yyvsp[-1].typeQualifierBitFieldVector));
                    if ((yyvsp[0].formalParamList))
                    {
                        (yyval.typeDesc) = TranslationUnit::getTypeManager().getFunctionPointerType(
                                td, *(yyvsp[0].formalParamList),
                                (yyvsp[-2].declarationSpecifierList)->isInterruptServiceFunction(), (yyvsp[-2].declarationSpecifierList)->isFunctionReceivingFirstParamInReg());
                        delete (yyvsp[0].formalParamList);
                    }
                    else
                        (yyval.typeDesc) = td;
                    delete (yyvsp[-1].typeQualifierBitFieldVector);  /* originally created by 'pointer' rule */
                    delete (yyvsp[-2].declarationSpecifierList);
                }
#line 2035 "parser.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 260 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeQualifierBitFieldVector) = (yyvsp[0].typeQualifierBitFieldVector); }
#line 2041 "parser.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 264 "parser.yy" /* yacc.c:1646  */
    { (yyval.formalParamList) = NULL; }
#line 2047 "parser.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 265 "parser.yy" /* yacc.c:1646  */
    { (yyval.formalParamList) = (yyvsp[0].formalParamList); }
#line 2053 "parser.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 269 "parser.yy" /* yacc.c:1646  */
    { (yyval.formalParamList) = (yyvsp[-1].formalParamList); }
#line 2059 "parser.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 270 "parser.yy" /* yacc.c:1646  */
    { (yyval.formalParamList) = new FormalParamList(); }
#line 2065 "parser.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 274 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeQualifierBitFieldVector) = new TypeQualifierBitFieldVector(); (yyval.typeQualifierBitFieldVector)->push_back(0); }
#line 2071 "parser.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 275 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeQualifierBitFieldVector) = new TypeQualifierBitFieldVector(); (yyval.typeQualifierBitFieldVector)->push_back(TypeQualifierBitField((yyvsp[0].integer))); }
#line 2077 "parser.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 276 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeQualifierBitFieldVector) = (yyvsp[0].typeQualifierBitFieldVector); (yyval.typeQualifierBitFieldVector)->push_back(0); }
#line 2083 "parser.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 277 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeQualifierBitFieldVector) = (yyvsp[0].typeQualifierBitFieldVector); (yyval.typeQualifierBitFieldVector)->push_back((yyvsp[-1].integer)); }
#line 2089 "parser.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 281 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarationSpecifierList) = (yyvsp[0].declarationSpecifierList); (yyval.declarationSpecifierList)->add(*(yyvsp[-1].typeSpecifier)); delete (yyvsp[-1].typeSpecifier); }
#line 2095 "parser.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 282 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarationSpecifierList) = new DeclarationSpecifierList(); (yyval.declarationSpecifierList)->add(*(yyvsp[0].typeSpecifier)); delete (yyvsp[0].typeSpecifier); }
#line 2101 "parser.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 283 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarationSpecifierList) = (yyvsp[0].declarationSpecifierList); if ((yyvsp[-1].integer) != -1) (yyval.declarationSpecifierList)->add(DeclarationSpecifierList::Specifier((yyvsp[-1].integer))); }
#line 2107 "parser.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 284 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarationSpecifierList) = new DeclarationSpecifierList(); if ((yyvsp[0].integer) != -1) (yyval.declarationSpecifierList)->add(DeclarationSpecifierList::Specifier((yyvsp[0].integer))); }
#line 2113 "parser.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 289 "parser.yy" /* yacc.c:1646  */
    { (yyval.compoundStmt) = (yyvsp[-1].compoundStmt); (yyval.compoundStmt)->setLineNo((yyvsp[-3].str), (yyvsp[-2].integer)); free((yyvsp[-3].str)); }
#line 2119 "parser.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 293 "parser.yy" /* yacc.c:1646  */
    { (yyval.compoundStmt) = new CompoundStmt(); }
#line 2125 "parser.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 294 "parser.yy" /* yacc.c:1646  */
    { (yyval.compoundStmt) = (yyvsp[0].compoundStmt); }
#line 2131 "parser.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 301 "parser.yy" /* yacc.c:1646  */
    {
                            (yyval.declarationSequence) = TranslationUnit::instance().createDeclarationSequence((yyvsp[-1].declarationSpecifierList), NULL);  // deletes $1
                        }
#line 2139 "parser.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 305 "parser.yy" /* yacc.c:1646  */
    {
                            (yyval.declarationSequence) = TranslationUnit::instance().createDeclarationSequence((yyvsp[-2].declarationSpecifierList), (yyvsp[-1].declaratorVector));  // deletes $1 and $2
                        }
#line 2147 "parser.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 314 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarationSpecifierList) = new DeclarationSpecifierList(); if ((yyvsp[0].integer) != -1) (yyval.declarationSpecifierList)->add(DeclarationSpecifierList::Specifier((yyvsp[0].integer))); }
#line 2153 "parser.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 316 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarationSpecifierList) = (yyvsp[0].declarationSpecifierList); if ((yyvsp[-1].integer) != -1) (yyval.declarationSpecifierList)->add(DeclarationSpecifierList::Specifier((yyvsp[-1].integer))); }
#line 2159 "parser.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 318 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarationSpecifierList) = new DeclarationSpecifierList(); (yyval.declarationSpecifierList)->add(*(yyvsp[0].typeSpecifier)); delete (yyvsp[0].typeSpecifier); }
#line 2165 "parser.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 320 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarationSpecifierList) = (yyvsp[0].declarationSpecifierList); (yyval.declarationSpecifierList)->add(*(yyvsp[-1].typeSpecifier)); delete (yyvsp[-1].typeSpecifier); }
#line 2171 "parser.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 322 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarationSpecifierList) = new DeclarationSpecifierList(); if ((yyvsp[0].integer) != -1) (yyval.declarationSpecifierList)->add(DeclarationSpecifierList::Specifier((yyvsp[0].integer))); }
#line 2177 "parser.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 324 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarationSpecifierList) = (yyvsp[0].declarationSpecifierList); if ((yyvsp[-1].integer) != -1) (yyval.declarationSpecifierList)->add(DeclarationSpecifierList::Specifier((yyvsp[-1].integer))); }
#line 2183 "parser.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 328 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = DeclarationSpecifierList::INTERRUPT_SPEC; }
#line 2189 "parser.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 329 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = DeclarationSpecifierList::FUNC_RECEIVES_FIRST_PARAM_IN_REG_SPEC; }
#line 2195 "parser.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 330 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = DeclarationSpecifierList::TYPEDEF_SPEC; }
#line 2201 "parser.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 331 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = DeclarationSpecifierList::ASSEMBLY_ONLY_SPEC; }
#line 2207 "parser.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 332 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = DeclarationSpecifierList::NO_RETURN_INSTRUCTION; }
#line 2213 "parser.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 333 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = -1; /* not supported, ignored */ }
#line 2219 "parser.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 334 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = -1; /* not supported, ignored */ }
#line 2225 "parser.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 335 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = DeclarationSpecifierList::STATIC_SPEC; }
#line 2231 "parser.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 336 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = DeclarationSpecifierList::EXTERN_SPEC; }
#line 2237 "parser.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 340 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeSpecifier) = new TypeSpecifier((yyvsp[0].typeDesc), "", NULL); }
#line 2243 "parser.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 341 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeSpecifier) = new TypeSpecifier((yyvsp[0].typeDesc), "", NULL); }
#line 2249 "parser.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 342 "parser.yy" /* yacc.c:1646  */
    { const TypeDesc *td = TranslationUnit::getTypeManager().getClassType((yyvsp[0].str), (yyvsp[-1].integer) == UNION, true);
                                      (yyval.typeSpecifier) = new TypeSpecifier(td, "", NULL);
                                      free((yyvsp[0].str)); }
#line 2257 "parser.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 345 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeSpecifier) = new TypeSpecifier((yyvsp[0].typeDesc), "", NULL); }
#line 2263 "parser.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 346 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeSpecifier) = (yyvsp[0].typeSpecifier); }
#line 2269 "parser.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 347 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeSpecifier) = new TypeSpecifier((yyvsp[0].typeDesc), "", NULL); }
#line 2275 "parser.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 351 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = DeclarationSpecifierList::CONST_QUALIFIER; }
#line 2281 "parser.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 352 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = DeclarationSpecifierList::VOLATILE_QUALIFIER; TranslationUnit::instance().warnAboutVolatile(); }
#line 2287 "parser.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 356 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = ((yyvsp[0].integer) == DeclarationSpecifierList::CONST_QUALIFIER ? CONST_BIT : VOLATILE_BIT); }
#line 2293 "parser.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 357 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-1].integer) | ((yyvsp[0].integer) == DeclarationSpecifierList::CONST_QUALIFIER ? CONST_BIT : VOLATILE_BIT); }
#line 2299 "parser.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 362 "parser.yy" /* yacc.c:1646  */
    {
                        ClassDef *classDef = (yyvsp[-1].classDef);
                        assert(classDef);
                        classDef->setName((yyvsp[-3].str));
                        classDef->setUnion((yyvsp[-4].integer) == UNION);
                        TranslationUnit::instance().getGlobalScope().declareClass(classDef);
                        const TypeDesc *td = TranslationUnit::getTypeManager().getClassType((yyvsp[-3].str), (yyvsp[-4].integer) == UNION, true);
                        assert(td);
                        classDef->setTypeDesc(td);
                        (yyval.typeDesc) = td;
                        free((yyvsp[-3].str));
                    }
#line 2316 "parser.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 375 "parser.yy" /* yacc.c:1646  */
    {
                        string anonStructName = "AnonStruct_" + (yyvsp[-1].classDef)->getLineNo();
                        ClassDef *classDef = (yyvsp[-1].classDef);
                        assert(classDef);
                        classDef->setName(anonStructName);
                        classDef->setUnion((yyvsp[-3].integer) == UNION);
                        TranslationUnit::instance().getGlobalScope().declareClass(classDef);
                        const TypeDesc *td = TranslationUnit::getTypeManager().getClassType(anonStructName, (yyvsp[-3].integer) == UNION, true);
                        assert(td);
                        classDef->setTypeDesc(td);
                        (yyval.typeDesc) = td;
                    }
#line 2333 "parser.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 391 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = STRUCT; }
#line 2339 "parser.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 392 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = UNION;  }
#line 2345 "parser.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 397 "parser.yy" /* yacc.c:1646  */
    {
                            const TypeDesc *td = TranslationUnit::getTypeManager().getIntType(WORD_TYPE, true);
                            (yyval.typeSpecifier) = new TypeSpecifier(td, (yyvsp[-4].str), (yyvsp[-2].enumeratorList));
                            free((yyvsp[-4].str));
                        }
#line 2355 "parser.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 403 "parser.yy" /* yacc.c:1646  */
    {
                            const TypeDesc *td = TranslationUnit::getTypeManager().getIntType(WORD_TYPE, true);
                            (yyval.typeSpecifier) = new TypeSpecifier(td, "", (yyvsp[-2].enumeratorList));
                        }
#line 2364 "parser.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 408 "parser.yy" /* yacc.c:1646  */
    {
                            const TypeDesc *td = TranslationUnit::getTypeManager().getIntType(WORD_TYPE, true);
                            (yyval.typeSpecifier) = new TypeSpecifier(td, (yyvsp[0].str), NULL);
                            free((yyvsp[0].str));
                        }
#line 2374 "parser.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 416 "parser.yy" /* yacc.c:1646  */
    { (yyval.enumeratorList) = new vector<Enumerator *>(); (yyval.enumeratorList)->push_back((yyvsp[0].enumerator)); }
#line 2380 "parser.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 417 "parser.yy" /* yacc.c:1646  */
    { (yyval.enumeratorList) = (yyvsp[-2].enumeratorList); (yyval.enumeratorList)->push_back((yyvsp[0].enumerator)); }
#line 2386 "parser.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 421 "parser.yy" /* yacc.c:1646  */
    { (yyval.enumerator) = new Enumerator((yyvsp[0].str), NULL, getSourceLineNo()); free((yyvsp[0].str)); }
#line 2392 "parser.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 422 "parser.yy" /* yacc.c:1646  */
    { (yyval.enumerator) = new Enumerator((yyvsp[-2].str), (yyvsp[0].tree),   getSourceLineNo()); free((yyvsp[-2].str)); }
#line 2398 "parser.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 431 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeDesc) = TranslationUnit::getTypeManager().getIntType(WORD_TYPE, true); }
#line 2404 "parser.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 432 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeDesc) = TranslationUnit::getTypeManager().getIntType(BYTE_TYPE, true); }
#line 2410 "parser.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 433 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeDesc) = TranslationUnit::getTypeManager().getIntType(WORD_TYPE, true); }
#line 2416 "parser.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 434 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeDesc) = TranslationUnit::getTypeManager().getSizelessType(true);  }
#line 2422 "parser.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 435 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeDesc) = TranslationUnit::getTypeManager().getSizelessType(false); }
#line 2428 "parser.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 436 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeDesc) = TranslationUnit::getTypeManager().getLongType(true); }
#line 2434 "parser.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 437 "parser.yy" /* yacc.c:1646  */
    {
                    TranslationUnit::instance().warnIfFloatUnsupported();
                    (yyval.typeDesc) = TranslationUnit::getTypeManager().getRealType(false);
                }
#line 2443 "parser.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 441 "parser.yy" /* yacc.c:1646  */
    {
                    TranslationUnit::instance().warnIfFloatUnsupported();
                    (yyval.typeDesc) = TranslationUnit::getTypeManager().getRealType(false);
                    if (!doubleTypeWarningIssued)
                    {
                        warnmsg("`double' is an alias for `float' for this compiler");
                        doubleTypeWarningIssued = true;
                    }
                }
#line 2457 "parser.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 453 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeDesc) = (yyvsp[0].typeDesc); }
#line 2463 "parser.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 454 "parser.yy" /* yacc.c:1646  */
    { (yyval.typeDesc) = TranslationUnit::getTypeManager().getVoidType(); }
#line 2469 "parser.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 458 "parser.yy" /* yacc.c:1646  */
    { (yyval.str) = strdup(sourceFilename.c_str()); }
#line 2475 "parser.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 462 "parser.yy" /* yacc.c:1646  */
    { (yyval.integer) = lineno; }
#line 2481 "parser.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 466 "parser.yy" /* yacc.c:1646  */
    { (yyval.declaratorVector) = new std::vector<Declarator *>(); (yyval.declaratorVector)->push_back((yyvsp[0].declarator)); }
#line 2487 "parser.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 467 "parser.yy" /* yacc.c:1646  */
    { (yyval.declaratorVector) = (yyvsp[-2].declaratorVector); (yyval.declaratorVector)->push_back((yyvsp[0].declarator)); }
#line 2493 "parser.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 473 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarator) = (yyvsp[0].declarator); }
#line 2499 "parser.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 474 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarator) = (yyvsp[-2].declarator); (yyval.declarator)->setInitExpr((yyvsp[0].tree)); }
#line 2505 "parser.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 478 "parser.yy" /* yacc.c:1646  */
    {
                                            (yyval.declarator) = (yyvsp[0].declarator);
                                            (yyval.declarator)->setPointerLevel((yyvsp[-1].typeQualifierBitFieldVector));  // ownership of $1 transfered to the Declarator
                                        }
#line 2514 "parser.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 482 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarator) = (yyvsp[0].declarator); }
#line 2520 "parser.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 487 "parser.yy" /* yacc.c:1646  */
    {
                (yyval.declarator) = new Declarator((yyvsp[0].str), sourceFilename, lineno);
                free((yyvsp[0].str));
            }
#line 2529 "parser.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 492 "parser.yy" /* yacc.c:1646  */
    {
                (yyval.declarator) = new Declarator(string(), sourceFilename, lineno);
            }
#line 2537 "parser.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 496 "parser.yy" /* yacc.c:1646  */
    {
                (yyval.declarator) = (yyvsp[-3].declarator);
                (yyval.declarator)->checkForFunctionReturningArray();
                (yyval.declarator)->addArraySizeExpr((yyvsp[-1].tree));
            }
#line 2547 "parser.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 502 "parser.yy" /* yacc.c:1646  */
    {
                (yyval.declarator) = (yyvsp[-3].declarator);
                (yyval.declarator)->setFormalParamList((yyvsp[-1].formalParamList));
            }
#line 2556 "parser.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 507 "parser.yy" /* yacc.c:1646  */
    {
                (yyval.declarator) = (yyvsp[-2].declarator);
                (yyval.declarator)->setFormalParamList(new FormalParamList());
            }
#line 2565 "parser.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 512 "parser.yy" /* yacc.c:1646  */
    {
                (yyval.declarator) = (yyvsp[-3].declarator);
                (yyval.declarator)->setFormalParamList(new FormalParamList());
            }
#line 2574 "parser.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 517 "parser.yy" /* yacc.c:1646  */
    {
                (yyval.declarator) = new Declarator((yyvsp[-4].str), sourceFilename, lineno);
                (yyval.declarator)->setAsFunctionPointer((yyvsp[-1].formalParamList));  // takes ownership of FormalParamList
                free((yyvsp[-4].str));
                TranslationUnit::checkForEllipsisWithoutNamedArgument((yyvsp[-1].formalParamList));
            }
#line 2585 "parser.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 524 "parser.yy" /* yacc.c:1646  */
    {
                (yyval.declarator) = new Declarator(string(), sourceFilename, lineno);
                (yyval.declarator)->setAsFunctionPointer((yyvsp[-1].formalParamList));  // takes ownership of FormalParamList
                TranslationUnit::checkForEllipsisWithoutNamedArgument((yyvsp[-1].formalParamList));
            }
#line 2595 "parser.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 530 "parser.yy" /* yacc.c:1646  */
    {
                (yyval.declarator) = new Declarator((yyvsp[-5].str), sourceFilename, lineno);
                (yyval.declarator)->setAsArrayOfFunctionPointers((yyvsp[-1].formalParamList), (yyvsp[-4].treeSequence));  // takes ownership of FormalParamList ($7), deletes $4
                free((yyvsp[-5].str));
                TranslationUnit::checkForEllipsisWithoutNamedArgument((yyvsp[-1].formalParamList));
            }
#line 2606 "parser.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 540 "parser.yy" /* yacc.c:1646  */
    { (yyval.treeSequence) = new TreeSequence(); (yyval.treeSequence)->addTree((yyvsp[0].tree)); }
#line 2612 "parser.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 541 "parser.yy" /* yacc.c:1646  */
    { (yyval.treeSequence) = (yyvsp[-1].treeSequence); (yyval.treeSequence)->addTree((yyvsp[0].tree)); }
#line 2618 "parser.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 545 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-1].tree); }
#line 2624 "parser.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 549 "parser.yy" /* yacc.c:1646  */
    { (yyval.formalParamList) = new FormalParamList(); }
#line 2630 "parser.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 550 "parser.yy" /* yacc.c:1646  */
    { (yyval.formalParamList) = (yyvsp[0].formalParamList); }
#line 2636 "parser.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 554 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 2642 "parser.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 555 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-1].treeSequence); }
#line 2648 "parser.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 556 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-2].treeSequence); }
#line 2654 "parser.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 557 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new TreeSequence(); }
#line 2660 "parser.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 558 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new TreeSequence(); }
#line 2666 "parser.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 562 "parser.yy" /* yacc.c:1646  */
    { (yyval.treeSequence) = new TreeSequence(); (yyval.treeSequence)->addTree((yyvsp[0].tree)); }
#line 2672 "parser.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 563 "parser.yy" /* yacc.c:1646  */
    { (yyval.treeSequence) = (yyvsp[-2].treeSequence); (yyval.treeSequence)->addTree((yyvsp[0].tree)); }
#line 2678 "parser.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 567 "parser.yy" /* yacc.c:1646  */
    { (yyval.classDef) = new ClassDef(); }
#line 2684 "parser.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 568 "parser.yy" /* yacc.c:1646  */
    { (yyval.classDef) = (yyvsp[0].classDef); }
#line 2690 "parser.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 573 "parser.yy" /* yacc.c:1646  */
    {
                    (yyval.classDef) = new ClassDef();
                    if ((yyvsp[0].classMemberList))
                        for (std::vector<ClassDef::ClassMember *>::iterator it = (yyvsp[0].classMemberList)->begin(); it != (yyvsp[0].classMemberList)->end(); ++it)
                            (yyval.classDef)->addDataMember(*it);
                    else
                        assert(0);
                    delete (yyvsp[0].classMemberList);  // destroy the std::vector<ClassDef::ClassMember *>
                }
#line 2704 "parser.cc" /* yacc.c:1646  */
    break;

  case 117:
#line 583 "parser.yy" /* yacc.c:1646  */
    {
                    (yyval.classDef) = (yyvsp[-1].classDef);
                    if ((yyvsp[0].classMemberList))
                        for (std::vector<ClassDef::ClassMember *>::iterator it = (yyvsp[0].classMemberList)->begin(); it != (yyvsp[0].classMemberList)->end(); ++it)
                            (yyval.classDef)->addDataMember(*it);
                    else
                        assert(0);
                    delete (yyvsp[0].classMemberList);  // destroy the std::vector<ClassDef::ClassMember *>
                }
#line 2718 "parser.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 595 "parser.yy" /* yacc.c:1646  */
    { (yyval.classMemberList) = ClassDef::createClassMembers((yyvsp[-2].declarationSpecifierList), (yyvsp[-1].declaratorVector)); }
#line 2724 "parser.cc" /* yacc.c:1646  */
    break;

  case 119:
#line 599 "parser.yy" /* yacc.c:1646  */
    { (yyval.declaratorVector) = new std::vector<Declarator *>(); if ((yyvsp[0].declarator)) (yyval.declaratorVector)->push_back((yyvsp[0].declarator)); }
#line 2730 "parser.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 600 "parser.yy" /* yacc.c:1646  */
    { (yyval.declaratorVector) = (yyvsp[-2].declaratorVector); if ((yyvsp[0].declarator)) (yyval.declaratorVector)->push_back((yyvsp[0].declarator)); }
#line 2736 "parser.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 605 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarator) = (yyvsp[0].declarator); }
#line 2742 "parser.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 606 "parser.yy" /* yacc.c:1646  */
    { (yyval.declarator) = NULL; }
#line 2748 "parser.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 608 "parser.yy" /* yacc.c:1646  */
    {
                    (yyval.declarator) = (yyvsp[-2].declarator);
                    (yyval.declarator)->setBitFieldWidth(*(yyvsp[0].tree));  // emits error if $3 is not constant expression
                    delete (yyvsp[0].tree);
                }
#line 2758 "parser.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 616 "parser.yy" /* yacc.c:1646  */
    { (yyval.compoundStmt) = new CompoundStmt(); if ((yyvsp[0].tree) != NULL) (yyval.compoundStmt)->addTree((yyvsp[0].tree)); }
#line 2764 "parser.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 617 "parser.yy" /* yacc.c:1646  */
    { (yyval.compoundStmt) = (yyvsp[-1].compoundStmt); if ((yyvsp[0].tree) != NULL) (yyval.compoundStmt)->addTree((yyvsp[0].tree)); }
#line 2770 "parser.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 621 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 2776 "parser.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 622 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = ((yyvsp[0].declarationSequence) ? (yyvsp[0].declarationSequence) : new TreeSequence()); }
#line 2782 "parser.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 623 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].compoundStmt); }
#line 2788 "parser.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 624 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 2794 "parser.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 625 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 2800 "parser.cc" /* yacc.c:1646  */
    break;

  case 131:
#line 626 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 2806 "parser.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 627 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 2812 "parser.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 628 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 2818 "parser.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 629 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new JumpStmt((yyvsp[-1].str)); free((yyvsp[-1].str)); }
#line 2824 "parser.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 630 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new JumpStmt(JumpStmt::BRK, NULL); }
#line 2830 "parser.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 631 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new JumpStmt(JumpStmt::CONT, NULL); }
#line 2836 "parser.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 632 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new JumpStmt(JumpStmt::RET, NULL); }
#line 2842 "parser.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 633 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new JumpStmt(JumpStmt::RET, (yyvsp[-1].tree)); }
#line 2848 "parser.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 635 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new AssemblerStmt((yyvsp[-4].str), (yyvsp[-2].str), true);
                          free((yyvsp[-4].str)); free((yyvsp[-2].str)); }
#line 2855 "parser.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 638 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new AssemblerStmt((yyvsp[-4].str), (yyvsp[-2].str), false);
                          free((yyvsp[-4].str)); free((yyvsp[-2].str)); }
#line 2862 "parser.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 641 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new AssemblerStmt((yyvsp[-2].str), "", false);
                          free((yyvsp[-2].str)); }
#line 2869 "parser.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 643 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new AssemblerStmt(yytext); }
#line 2875 "parser.cc" /* yacc.c:1646  */
    break;

  case 143:
#line 648 "parser.yy" /* yacc.c:1646  */
    {
                                      (yyval.tree) = new LabeledStmt((yyvsp[-4].str), TranslationUnit::instance().generateLabel('L'), (yyvsp[0].tree));
                                      (yyval.tree)->setLineNo((yyvsp[-3].str), (yyvsp[-2].integer));
                                      free((yyvsp[-4].str)); free((yyvsp[-3].str));
                                    }
#line 2885 "parser.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 653 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new LabeledStmt((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2891 "parser.cc" /* yacc.c:1646  */
    break;

  case 145:
#line 654 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new LabeledStmt((yyvsp[0].tree)); }
#line 2897 "parser.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 658 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 2903 "parser.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 662 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new TreeSequence(); }
#line 2909 "parser.cc" /* yacc.c:1646  */
    break;

  case 148:
#line 663 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-1].tree); }
#line 2915 "parser.cc" /* yacc.c:1646  */
    break;

  case 149:
#line 667 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 2921 "parser.cc" /* yacc.c:1646  */
    break;

  case 150:
#line 668 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 2927 "parser.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 672 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 2933 "parser.cc" /* yacc.c:1646  */
    break;

  case 152:
#line 673 "parser.yy" /* yacc.c:1646  */
    {
                                    Tree *left = (yyvsp[-2].tree);
                                    Tree *right = (yyvsp[0].tree);
                                    if (CommaExpr *ts = dynamic_cast<CommaExpr *>(left))
                                    {
                                        ts->addTree(right);
                                        (yyval.tree) = ts;
                                    }
                                    else
                                        (yyval.tree) = new CommaExpr(left, right);
                                }
#line 2949 "parser.cc" /* yacc.c:1646  */
    break;

  case 153:
#line 687 "parser.yy" /* yacc.c:1646  */
    { (yyval.treeSequence) = new TreeSequence(); (yyval.treeSequence)->addTree((yyvsp[0].tree)); }
#line 2955 "parser.cc" /* yacc.c:1646  */
    break;

  case 154:
#line 688 "parser.yy" /* yacc.c:1646  */
    { (yyvsp[-2].treeSequence)->addTree((yyvsp[0].tree)); (yyval.treeSequence) = (yyvsp[-2].treeSequence); }
#line 2961 "parser.cc" /* yacc.c:1646  */
    break;

  case 155:
#line 692 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 2967 "parser.cc" /* yacc.c:1646  */
    break;

  case 156:
#line 698 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr((yyvsp[-1].binop), (yyvsp[-4].tree), (yyvsp[0].tree)); free((yyvsp[-3].str)); }
#line 2973 "parser.cc" /* yacc.c:1646  */
    break;

  case 157:
#line 702 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::ASSIGNMENT; }
#line 2979 "parser.cc" /* yacc.c:1646  */
    break;

  case 158:
#line 703 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::INC_ASSIGN; }
#line 2985 "parser.cc" /* yacc.c:1646  */
    break;

  case 159:
#line 704 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::DEC_ASSIGN; }
#line 2991 "parser.cc" /* yacc.c:1646  */
    break;

  case 160:
#line 705 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::MUL_ASSIGN; }
#line 2997 "parser.cc" /* yacc.c:1646  */
    break;

  case 161:
#line 706 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::DIV_ASSIGN; }
#line 3003 "parser.cc" /* yacc.c:1646  */
    break;

  case 162:
#line 707 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::MOD_ASSIGN; }
#line 3009 "parser.cc" /* yacc.c:1646  */
    break;

  case 163:
#line 708 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::XOR_ASSIGN; }
#line 3015 "parser.cc" /* yacc.c:1646  */
    break;

  case 164:
#line 709 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::AND_ASSIGN; }
#line 3021 "parser.cc" /* yacc.c:1646  */
    break;

  case 165:
#line 710 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::OR_ASSIGN; }
#line 3027 "parser.cc" /* yacc.c:1646  */
    break;

  case 166:
#line 711 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::LEFT_ASSIGN; }
#line 3033 "parser.cc" /* yacc.c:1646  */
    break;

  case 167:
#line 712 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::RIGHT_ASSIGN; }
#line 3039 "parser.cc" /* yacc.c:1646  */
    break;

  case 168:
#line 716 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3045 "parser.cc" /* yacc.c:1646  */
    break;

  case 169:
#line 718 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new ConditionalExpr((yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3051 "parser.cc" /* yacc.c:1646  */
    break;

  case 170:
#line 722 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3057 "parser.cc" /* yacc.c:1646  */
    break;

  case 171:
#line 724 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr(BinaryOpExpr::LOGICAL_OR, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3063 "parser.cc" /* yacc.c:1646  */
    break;

  case 172:
#line 728 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3069 "parser.cc" /* yacc.c:1646  */
    break;

  case 173:
#line 730 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr(BinaryOpExpr::LOGICAL_AND, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3075 "parser.cc" /* yacc.c:1646  */
    break;

  case 174:
#line 734 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3081 "parser.cc" /* yacc.c:1646  */
    break;

  case 175:
#line 736 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr(BinaryOpExpr::BITWISE_OR, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3087 "parser.cc" /* yacc.c:1646  */
    break;

  case 176:
#line 739 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3093 "parser.cc" /* yacc.c:1646  */
    break;

  case 177:
#line 741 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr(BinaryOpExpr::BITWISE_XOR, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3099 "parser.cc" /* yacc.c:1646  */
    break;

  case 178:
#line 744 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3105 "parser.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 746 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr(BinaryOpExpr::BITWISE_AND, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3111 "parser.cc" /* yacc.c:1646  */
    break;

  case 180:
#line 749 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3117 "parser.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 751 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr((yyvsp[-1].binop), (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3123 "parser.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 755 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::EQUALITY; }
#line 3129 "parser.cc" /* yacc.c:1646  */
    break;

  case 183:
#line 756 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::INEQUALITY; }
#line 3135 "parser.cc" /* yacc.c:1646  */
    break;

  case 184:
#line 760 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3141 "parser.cc" /* yacc.c:1646  */
    break;

  case 185:
#line 761 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr((yyvsp[-1].binop), (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3147 "parser.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 765 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3153 "parser.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 766 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr(
                                        BinaryOpExpr::LEFT_SHIFT, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3160 "parser.cc" /* yacc.c:1646  */
    break;

  case 188:
#line 768 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr(
                                        BinaryOpExpr::RIGHT_SHIFT, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3167 "parser.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 773 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::INFERIOR; }
#line 3173 "parser.cc" /* yacc.c:1646  */
    break;

  case 190:
#line 774 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::INFERIOR_OR_EQUAL; }
#line 3179 "parser.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 775 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::SUPERIOR; }
#line 3185 "parser.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 776 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::SUPERIOR_OR_EQUAL; }
#line 3191 "parser.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 780 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3197 "parser.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 781 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr((yyvsp[-1].binop), (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3203 "parser.cc" /* yacc.c:1646  */
    break;

  case 195:
#line 785 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::ADD; }
#line 3209 "parser.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 786 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::SUB; }
#line 3215 "parser.cc" /* yacc.c:1646  */
    break;

  case 197:
#line 790 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3221 "parser.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 791 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr((yyvsp[-1].binop), (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3227 "parser.cc" /* yacc.c:1646  */
    break;

  case 199:
#line 795 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::MUL; }
#line 3233 "parser.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 796 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::DIV; }
#line 3239 "parser.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 797 "parser.yy" /* yacc.c:1646  */
    { (yyval.binop) = BinaryOpExpr::MOD; }
#line 3245 "parser.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 801 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3251 "parser.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 802 "parser.yy" /* yacc.c:1646  */
    {
                                    RealConstantExpr *rce;
                                    DWordConstantExpr *dwce;
                                    if ((yyvsp[-1].unop) == UnaryOpExpr::NEG && (rce = dynamic_cast<RealConstantExpr *>((yyvsp[0].tree))) != NULL)
                                    {
                                        // We have the negation of a real constant.
                                        // Simplify by negating the value in the RealConstantExpr and getting rid of the negation operator.
                                        rce->negateValue();
                                        (yyval.tree) = rce;
                                    }
                                    else if ((yyvsp[-1].unop) == UnaryOpExpr::NEG && (dwce = dynamic_cast<DWordConstantExpr *>((yyvsp[0].tree))) != NULL)
                                    {
                                        dwce->negateValue();
                                        (yyval.tree) = dwce;
                                    }
                                    else
                                    {
                                        (yyval.tree) = new UnaryOpExpr((yyvsp[-1].unop), (yyvsp[0].tree));
                                    }
                                }
#line 3276 "parser.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 822 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new UnaryOpExpr(UnaryOpExpr::PREINC, (yyvsp[0].tree)); }
#line 3282 "parser.cc" /* yacc.c:1646  */
    break;

  case 205:
#line 823 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new UnaryOpExpr(UnaryOpExpr::PREDEC, (yyvsp[0].tree)); }
#line 3288 "parser.cc" /* yacc.c:1646  */
    break;

  case 206:
#line 824 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new UnaryOpExpr((yyvsp[-1].typeDesc)); }
#line 3294 "parser.cc" /* yacc.c:1646  */
    break;

  case 207:
#line 825 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new UnaryOpExpr(UnaryOpExpr::SIZE_OF, (yyvsp[0].tree)); }
#line 3300 "parser.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 829 "parser.yy" /* yacc.c:1646  */
    { (yyval.unop) = UnaryOpExpr::IDENTITY; }
#line 3306 "parser.cc" /* yacc.c:1646  */
    break;

  case 209:
#line 830 "parser.yy" /* yacc.c:1646  */
    { (yyval.unop) = UnaryOpExpr::NEG; }
#line 3312 "parser.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 831 "parser.yy" /* yacc.c:1646  */
    { (yyval.unop) = UnaryOpExpr::ADDRESS_OF; }
#line 3318 "parser.cc" /* yacc.c:1646  */
    break;

  case 211:
#line 832 "parser.yy" /* yacc.c:1646  */
    { (yyval.unop) = UnaryOpExpr::INDIRECTION; }
#line 3324 "parser.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 833 "parser.yy" /* yacc.c:1646  */
    { (yyval.unop) = UnaryOpExpr::BOOLEAN_NEG; }
#line 3330 "parser.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 834 "parser.yy" /* yacc.c:1646  */
    { (yyval.unop) = UnaryOpExpr::BITWISE_NOT; }
#line 3336 "parser.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 838 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3342 "parser.cc" /* yacc.c:1646  */
    break;

  case 215:
#line 839 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new CastExpr((yyvsp[-2].typeDesc), (yyvsp[0].tree)); }
#line 3348 "parser.cc" /* yacc.c:1646  */
    break;

  case 216:
#line 843 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3354 "parser.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 845 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new FunctionCallExpr((yyvsp[-4].tree), new TreeSequence());
                          free((yyvsp[-3].str)); }
#line 3361 "parser.cc" /* yacc.c:1646  */
    break;

  case 218:
#line 848 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new FunctionCallExpr((yyvsp[-5].tree), (yyvsp[-1].treeSequence));
                          free((yyvsp[-4].str)); }
#line 3368 "parser.cc" /* yacc.c:1646  */
    break;

  case 219:
#line 851 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new BinaryOpExpr(BinaryOpExpr::ARRAY_REF, (yyvsp[-3].tree), (yyvsp[-1].tree)); }
#line 3374 "parser.cc" /* yacc.c:1646  */
    break;

  case 220:
#line 853 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new UnaryOpExpr(UnaryOpExpr::POSTINC, (yyvsp[-1].tree)); }
#line 3380 "parser.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 855 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new UnaryOpExpr(UnaryOpExpr::POSTDEC, (yyvsp[-1].tree)); }
#line 3386 "parser.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 857 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new ObjectMemberExpr((yyvsp[-2].tree), (yyvsp[0].str), true); free((yyvsp[0].str)); }
#line 3392 "parser.cc" /* yacc.c:1646  */
    break;

  case 223:
#line 859 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new ObjectMemberExpr((yyvsp[-2].tree), (yyvsp[0].str), false); free((yyvsp[0].str)); }
#line 3398 "parser.cc" /* yacc.c:1646  */
    break;

  case 224:
#line 863 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new IdentifierExpr((yyvsp[0].str)); free((yyvsp[0].str)); }
#line 3404 "parser.cc" /* yacc.c:1646  */
    break;

  case 225:
#line 864 "parser.yy" /* yacc.c:1646  */
    {
                            bool isHexOrBin = (yytext[0] == '0' && (tolower(yytext[1]) == 'x' || tolower(yytext[1]) == 'b'));
                            double value = (yyvsp[0].real);
                            if (!isHexOrBin
                                    && (strchr(yytext, '.') || strchr(yytext, 'e') || strchr(yytext, 'E')))  // if point or exponential
                            {
                                (yyval.tree) = new RealConstantExpr(value, yytext);
                            }
                            else if (strchr(yytext, 'l') || strchr(yytext, 'L') || value > 65535.0 || value <= -32769.0)
                            {
                                bool uSuffix = (strchr(yytext, 'u') || strchr(yytext, 'U'));
                                (yyval.tree) = new DWordConstantExpr(value, !uSuffix && value <= 0x7FFFFFFFUL);
                            } 
                            else
                            {
                                (yyval.tree) = new WordConstantExpr(value, yytext);
                            }
                        }
#line 3427 "parser.cc" /* yacc.c:1646  */
    break;

  case 226:
#line 882 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new WordConstantExpr((int8_t) (yyvsp[0].character), false, true); }
#line 3433 "parser.cc" /* yacc.c:1646  */
    break;

  case 227:
#line 883 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new StringLiteralExpr((yyvsp[0].str)); free((yyvsp[0].str)); }
#line 3439 "parser.cc" /* yacc.c:1646  */
    break;

  case 228:
#line 884 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-1].tree); }
#line 3445 "parser.cc" /* yacc.c:1646  */
    break;

  case 229:
#line 888 "parser.yy" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 3451 "parser.cc" /* yacc.c:1646  */
    break;

  case 230:
#line 889 "parser.yy" /* yacc.c:1646  */
    {
                            (yyval.str) = (char *) malloc(strlen((yyvsp[-1].str)) + strlen((yyvsp[0].str)) + 1);
                            strcpy((yyval.str), (yyvsp[-1].str));
                            strcat((yyval.str), (yyvsp[0].str));
                            free((yyvsp[-1].str)); free((yyvsp[0].str));
                        }
#line 3462 "parser.cc" /* yacc.c:1646  */
    break;

  case 231:
#line 898 "parser.yy" /* yacc.c:1646  */
    { (yyval.treeSequence) = NULL; }
#line 3468 "parser.cc" /* yacc.c:1646  */
    break;

  case 232:
#line 899 "parser.yy" /* yacc.c:1646  */
    { (yyval.treeSequence) = (yyvsp[0].treeSequence); }
#line 3474 "parser.cc" /* yacc.c:1646  */
    break;

  case 233:
#line 903 "parser.yy" /* yacc.c:1646  */
    { (yyval.treeSequence) = new TreeSequence(); (yyval.treeSequence)->addTree((yyvsp[0].tree)); }
#line 3480 "parser.cc" /* yacc.c:1646  */
    break;

  case 234:
#line 904 "parser.yy" /* yacc.c:1646  */
    { (yyval.treeSequence) = (yyvsp[-2].treeSequence); (yyval.treeSequence)->addTree((yyvsp[0].tree)); }
#line 3486 "parser.cc" /* yacc.c:1646  */
    break;

  case 235:
#line 908 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new IfStmt((yyvsp[-3].tree), (yyvsp[-1].tree), (yyvsp[0].tree)); }
#line 3492 "parser.cc" /* yacc.c:1646  */
    break;

  case 236:
#line 909 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new SwitchStmt((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3498 "parser.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 913 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3504 "parser.cc" /* yacc.c:1646  */
    break;

  case 238:
#line 917 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 3510 "parser.cc" /* yacc.c:1646  */
    break;

  case 239:
#line 918 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3516 "parser.cc" /* yacc.c:1646  */
    break;

  case 240:
#line 922 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new WhileStmt((yyvsp[-2].tree), (yyvsp[0].tree), false); }
#line 3522 "parser.cc" /* yacc.c:1646  */
    break;

  case 241:
#line 926 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3528 "parser.cc" /* yacc.c:1646  */
    break;

  case 242:
#line 930 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = new WhileStmt((yyvsp[-2].tree), (yyvsp[-5].tree), true); }
#line 3534 "parser.cc" /* yacc.c:1646  */
    break;

  case 243:
#line 934 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-1].treeSequence); }
#line 3540 "parser.cc" /* yacc.c:1646  */
    break;

  case 244:
#line 935 "parser.yy" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].declarationSequence); }
#line 3546 "parser.cc" /* yacc.c:1646  */
    break;

  case 245:
#line 943 "parser.yy" /* yacc.c:1646  */
    { if ( (yyvsp[-11].tree))  (yyvsp[-11].tree)->setLineNo((yyvsp[-13].str), (yyvsp[-12].integer));
                                  if ( (yyvsp[-8].tree))  (yyvsp[-8].tree)->setLineNo((yyvsp[-10].str), (yyvsp[-9].integer));
                                  if ((yyvsp[-4].treeSequence)) (yyvsp[-4].treeSequence)->setLineNo((yyvsp[-6].str), (yyvsp[-5].integer));
                                  (yyval.tree) = new ForStmt((yyvsp[-11].tree), (yyvsp[-8].tree), (yyvsp[-4].treeSequence), (yyvsp[0].tree));
                                  free((yyvsp[-13].str)); free((yyvsp[-10].str)); free((yyvsp[-6].str)); free((yyvsp[-2].str));
                                }
#line 3557 "parser.cc" /* yacc.c:1646  */
    break;


#line 3561 "parser.cc" /* yacc.c:1646  */
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
#line 951 "parser.yy" /* yacc.c:1906  */


#if 0
void _PARSERTRACE(int parserLineNo, const char *fmt, ...)
{
    printf("# P%d U%d: ", parserLineNo, lineno);
    va_list ap;
    va_start(ap, fmt);
    vprintf(fmt, ap);
    va_end(ap);
    putchar('\n');
    fflush(stdout);
}
#endif
