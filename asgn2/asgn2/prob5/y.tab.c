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
#line 12 "prob5.y"

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <complex.h>
#undef  I
#include <limits.h>
#include "quant.h"
int yylex(void);
void yyerror(char *);
int yydebug=0;   /*  set to 1 if using with yacc's debug/verbose flags   */
int  printMatrix(Matrix x);
Matrix  identity();
Matrix  had();
Matrix  pauliX();
Matrix  pauliY();
Matrix  pauliZ();
Matrix  cNot();
Matrix  toffoli();
Matrix  productMxMx(Matrix a, Matrix b);
Matrix  kroneckerProductMx(Matrix a, Matrix b);
int  printRegister(Register x);
Register  ket0();
Register  ket1();
Register  productMxReg(Matrix a, Register v);
Register  kroneckerProductReg(Register v, Register w);

#line 99 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    I = 259,                       /* I  */
    H = 260,                       /* H  */
    X = 261,                       /* X  */
    Y = 262,                       /* Y  */
    Z = 263,                       /* Z  */
    CNOT = 264,                    /* CNOT  */
    TOF = 265,                     /* TOF  */
    KET0 = 266,                    /* KET0  */
    KET1 = 267,                    /* KET1  */
    KRONECKERPROD = 268            /* KRONECKERPROD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUMBER 258
#define I 259
#define H 260
#define X 261
#define Y 262
#define Z 263
#define CNOT 264
#define TOF 265
#define KET0 266
#define KET1 267
#define KRONECKERPROD 268

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "prob5.y"

    int  iValue;
    char *str;
    Matrix  qmx;
    Register  qreg;
    double num;

#line 186 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_I = 4,                          /* I  */
  YYSYMBOL_H = 5,                          /* H  */
  YYSYMBOL_X = 6,                          /* X  */
  YYSYMBOL_Y = 7,                          /* Y  */
  YYSYMBOL_Z = 8,                          /* Z  */
  YYSYMBOL_CNOT = 9,                       /* CNOT  */
  YYSYMBOL_TOF = 10,                       /* TOF  */
  YYSYMBOL_KET0 = 11,                      /* KET0  */
  YYSYMBOL_KET1 = 12,                      /* KET1  */
  YYSYMBOL_KRONECKERPROD = 13,             /* KRONECKERPROD  */
  YYSYMBOL_14_ = 14,                       /* '*'  */
  YYSYMBOL_15_n_ = 15,                     /* '\n'  */
  YYSYMBOL_16_ = 16,                       /* '('  */
  YYSYMBOL_17_ = 17,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 18,                  /* $accept  */
  YYSYMBOL_start = 19,                     /* start  */
  YYSYMBOL_line = 20,                      /* line  */
  YYSYMBOL_expr = 21,                      /* expr  */
  YYSYMBOL_expr_reg = 22                   /* expr_reg  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   67

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  18
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  5
/* YYNRULES -- Number of rules.  */
#define YYNRULES  23
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  42

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   268


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
      15,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      16,    17,    14,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    76,    76,    77,    80,    81,    82,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    97,    98,    99,
     100,   101,   102,   103
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
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "I", "H",
  "X", "Y", "Z", "CNOT", "TOF", "KET0", "KET1", "KRONECKERPROD", "'*'",
  "'\\n'", "'('", "')'", "$accept", "start", "line", "expr", "expr_reg", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-13)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      38,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
      38,    25,     1,    -5,    13,   -11,    26,   -13,     8,   -13,
      51,    38,    38,    38,    38,   -13,    38,   -13,    51,    37,
     -13,   -13,    -5,    39,   -13,   -12,   -10,     5,    51,   -13,
     -13,   -13
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     8,     9,    10,    11,    12,    13,    14,    17,    18,
       0,     6,     0,     4,     5,     0,     0,     1,     0,     2,
       0,     0,     0,     0,     0,     7,     0,     3,     0,    16,
      15,    19,     0,    23,    22,    19,    23,     0,     0,    20,
      21,    15
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -13,   -13,    41,     0,    -9
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    11,    12,    32,    14
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      13,    16,    20,    24,    23,    39,    25,    40,    20,    21,
      15,    13,    31,    33,    34,    35,    19,    36,    20,    38,
      29,    30,    25,    27,    30,    17,    22,    23,    37,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    41,    26,
      23,    10,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    38,    18,    23,    10,     1,     2,     3,     4,     5,
       6,     7,     0,     0,     0,     0,     0,    28
};

static const yytype_int8 yycheck[] =
{
       0,    10,    13,    14,    14,    17,    17,    17,    13,    14,
      10,    11,    21,    22,    23,    24,    15,    26,    13,    14,
      20,    21,    17,    15,    24,     0,    13,    14,    28,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    38,    13,
      14,    16,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    14,    11,    14,    16,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      16,    19,    20,    21,    22,    21,    22,     0,    20,    15,
      13,    14,    13,    14,    14,    17,    13,    15,    16,    21,
      21,    22,    21,    22,    22,    22,    22,    21,    14,    17,
      17,    21
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    18,    19,    19,    20,    20,    20,    21,    21,    21,
      21,    21,    21,    21,    21,    21,    21,    22,    22,    22,
      22,    22,    22,    22
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     3,
       5,     5,     3,     3
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
  case 2: /* start: line '\n'  */
#line 76 "prob5.y"
                               {  }
#line 1205 "y.tab.c"
    break;

  case 3: /* start: start line '\n'  */
#line 77 "prob5.y"
                                         {  }
#line 1211 "y.tab.c"
    break;

  case 4: /* line: expr  */
#line 80 "prob5.y"
                   {  printMatrix((yyvsp[0].qmx));  }
#line 1217 "y.tab.c"
    break;

  case 5: /* line: expr_reg  */
#line 81 "prob5.y"
                       {  printRegister((yyvsp[0].qreg));  }
#line 1223 "y.tab.c"
    break;

  case 6: /* line: %empty  */
#line 82 "prob5.y"
                                                             {     }
#line 1229 "y.tab.c"
    break;

  case 7: /* expr: '(' expr ')'  */
#line 85 "prob5.y"
                            {  (yyval.qmx) = (yyvsp[-1].qmx);  }
#line 1235 "y.tab.c"
    break;

  case 8: /* expr: I  */
#line 86 "prob5.y"
                         {  (yyval.qmx) = identity();  }
#line 1241 "y.tab.c"
    break;

  case 9: /* expr: H  */
#line 87 "prob5.y"
                         {  (yyval.qmx) = had();  }
#line 1247 "y.tab.c"
    break;

  case 10: /* expr: X  */
#line 88 "prob5.y"
                         {  (yyval.qmx) = pauliX();  }
#line 1253 "y.tab.c"
    break;

  case 11: /* expr: Y  */
#line 89 "prob5.y"
                         {  (yyval.qmx) = pauliY();  }
#line 1259 "y.tab.c"
    break;

  case 12: /* expr: Z  */
#line 90 "prob5.y"
                         {  (yyval.qmx) = pauliZ();  }
#line 1265 "y.tab.c"
    break;

  case 13: /* expr: CNOT  */
#line 91 "prob5.y"
                         {  (yyval.qmx) = cNot();  }
#line 1271 "y.tab.c"
    break;

  case 14: /* expr: TOF  */
#line 92 "prob5.y"
                         {  (yyval.qmx) = toffoli();  }
#line 1277 "y.tab.c"
    break;

  case 15: /* expr: expr '*' expr  */
#line 93 "prob5.y"
                                                {  (yyval.qmx) = productMxMx((yyvsp[-2].qmx), (yyvsp[0].qmx));  }
#line 1283 "y.tab.c"
    break;

  case 16: /* expr: expr KRONECKERPROD expr  */
#line 94 "prob5.y"
                                                {  (yyval.qmx) = kroneckerProductMx((yyvsp[-2].qmx), (yyvsp[0].qmx));  }
#line 1289 "y.tab.c"
    break;

  case 17: /* expr_reg: KET0  */
#line 97 "prob5.y"
                         {  (yyval.qreg) = ket0();  }
#line 1295 "y.tab.c"
    break;

  case 18: /* expr_reg: KET1  */
#line 98 "prob5.y"
                         {  (yyval.qreg) = ket1();  }
#line 1301 "y.tab.c"
    break;

  case 19: /* expr_reg: expr '*' expr_reg  */
#line 99 "prob5.y"
                                                        {  (yyval.qreg) = productMxReg((yyvsp[-2].qmx), (yyvsp[0].qreg));  }
#line 1307 "y.tab.c"
    break;

  case 20: /* expr_reg: '(' expr '*' expr_reg ')'  */
#line 100 "prob5.y"
                                                        {  (yyval.qreg) = productMxReg((yyvsp[-3].qmx), (yyvsp[-1].qreg));  }
#line 1313 "y.tab.c"
    break;

  case 21: /* expr_reg: '(' expr_reg KRONECKERPROD expr_reg ')'  */
#line 101 "prob5.y"
                                                        {  (yyval.qreg) = kroneckerProductReg((yyvsp[-3].qreg), (yyvsp[-1].qreg));  }
#line 1319 "y.tab.c"
    break;

  case 22: /* expr_reg: expr_reg '*' expr_reg  */
#line 102 "prob5.y"
                                                        {  (yyval.qreg) = kroneckerProductReg((yyvsp[-2].qreg), (yyvsp[0].qreg));  }
#line 1325 "y.tab.c"
    break;

  case 23: /* expr_reg: expr_reg KRONECKERPROD expr_reg  */
#line 103 "prob5.y"
                                                        {  (yyval.qreg) = kroneckerProductReg((yyvsp[-2].qreg), (yyvsp[0].qreg));  }
#line 1331 "y.tab.c"
    break;


#line 1335 "y.tab.c"

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

#line 105 "prob5.y"
      /*   programs   */


int  printMatrix(Matrix a)
/*  print the matrix  a  */
{
  int  printfReturnValue;
  int  sumPrintfReturnValue = 0;
  int  minPrintfReturnValue = INT_MAX;
  int  n = 1<<a.dim;
  double complex  aij;
  double  aijRe;
  double  aijIm;

  if  (a.dim == -1)
  {
    return  printf("Undefined matrix product used.\n");
  }

  printfReturnValue = printf("%dx%d matrix:\n", n, n);
  sumPrintfReturnValue += printfReturnValue;
  minPrintfReturnValue = (printfReturnValue < minPrintfReturnValue ?
                          printfReturnValue : minPrintfReturnValue);
  for  (int i=0; i<n; i++)
  {
    for  (int j=0; j<n; j++)
    {
      aij = a.mx[i][j];
      aijRe = creal(aij);
      aijIm = cimag(aij);
      if  (aijRe == 0)
      {
        if  (aijIm == 0)
        {
          printfReturnValue = printf("   0.0000        ");
        }
        else if  (aijIm > 0)
        {
          printfReturnValue = printf("   0.0000+%6.4lfi", aijIm);
        }
        else   /*  aijIm < 0  */
        {
          printfReturnValue = printf("   0.0000%7.4lfi", aijIm);
        }
      }
      else   /*  aijRe != 0  */
      {
        if  (aijIm == 0)
        {
          printfReturnValue = printf("  %7.4lf        ", aijRe);
        }
        else if  (aijIm > 0)
        {
          printfReturnValue = printf("  %7.4lf+%6.4lfi", aijRe, aijIm);
        }
        else   /*  aijIm < 0  */
        {
          printfReturnValue = printf("  %7.4lf%7.4lfi", aijRe, aijIm);
        }
      }
      sumPrintfReturnValue += printfReturnValue;
      minPrintfReturnValue = (printfReturnValue < minPrintfReturnValue ?
                              printfReturnValue : minPrintfReturnValue);
    }
    printfReturnValue = printf("\n");
    sumPrintfReturnValue += printfReturnValue;
    minPrintfReturnValue = (printfReturnValue < minPrintfReturnValue ?
                            printfReturnValue : minPrintfReturnValue);
  }
  if  (minPrintfReturnValue < 0)
  {
    return  minPrintfReturnValue;
  }
  else
  {
    return  sumPrintfReturnValue;
  }
}


Matrix  identity()
/*  returns the 2x2 identity matrix ((1 0) (0 1))
*/
{
  Matrix  id;
  double complex  idmx[2][2] = {
                        { 1.0,  0.0 },
                        { 0.0,  1.0 }
                      };

  id.dim = 1;
  id.mx = malloc(2*sizeof(double complex*));
  id.mx[0] = malloc(2*sizeof(double complex));
  id.mx[1] = malloc(2*sizeof(double complex));
  id.mx[0][0] = idmx[0][0];
  id.mx[0][1] = idmx[0][1];
  id.mx[1][0] = idmx[1][0];
  id.mx[1][1] = idmx[1][1];

  return  id;
}


Matrix  had()
/*  returns the 2x2 Hadamard matrix (1/sqrt(2)) * ((1 1) (1 -1))
*/
{
  Matrix  h;
  double complex  hmx[2][2] = {
                        { 1./sqrt(2),  1./sqrt(2) },
                        { 1./sqrt(2), -1./sqrt(2) }
                      };

  h.dim = 1;
  h.mx = malloc(2*sizeof(double complex*));
  h.mx[0] = malloc(2*sizeof(double complex));
  h.mx[1] = malloc(2*sizeof(double complex));
  h.mx[0][0] = hmx[0][0];
  h.mx[0][1] = hmx[0][1];
  h.mx[1][0] = hmx[1][0];
  h.mx[1][1] = hmx[1][1];

  return  h;
}


Matrix  pauliX()
/*  returns the 2x2 Pauli X matrix ((0 1) (1 0))
*/
{
  Matrix  x;
  double complex  xmx[2][2] = {
                        { 0.0,  1.0 },
                        { 1.0,  0.0 }
                      };

  x.dim = 1;
  x.mx = malloc(2*sizeof(double complex*));
  x.mx[0] = malloc(2*sizeof(double complex));
  x.mx[1] = malloc(2*sizeof(double complex));
  x.mx[0][0] = xmx[0][0];
  x.mx[0][1] = xmx[0][1];
  x.mx[1][0] = xmx[1][0];
  x.mx[1][1] = xmx[1][1];

  return  x;
}


Matrix  pauliY()
/*  returns the 2x2 Pauli Y matrix ((0 -i) (i 0))
*/
{
  Matrix  y;
  double complex  ymx[2][2] = {
                        { 0.0,        -_Complex_I },
                        { _Complex_I,  0.0 }
                      };

  y.dim = 1;
  y.mx = malloc(2*sizeof(double complex*));
  y.mx[0] = malloc(2*sizeof(double complex));
  y.mx[1] = malloc(2*sizeof(double complex));
  y.mx[0][0] = ymx[0][0];
  y.mx[0][1] = ymx[0][1];
  y.mx[1][0] = ymx[1][0];
  y.mx[1][1] = ymx[1][1];

  return  y;
}


Matrix  pauliZ()
/*  returns the 2x2 Pauli Z matrix ((1 0) (0 -1))
*/
{
  Matrix  z;
  double complex  zmx[2][2] = {
                        { 1.0,  0.0 },
                        { 0.0, -1.0 }
                      };

  z.dim = 1;
  z.mx = malloc(2*sizeof(double complex*));
  z.mx[0] = malloc(2*sizeof(double complex));
  z.mx[1] = malloc(2*sizeof(double complex));
  z.mx[0][0] = zmx[0][0];
  z.mx[0][1] = zmx[0][1];
  z.mx[1][0] = zmx[1][0];
  z.mx[1][1] = zmx[1][1];

  return  z;
}


Matrix  cNot()
/*  returns the 4x4 matrix of the CNOT gate
*/
{
  Matrix  c;
  double complex  cmx[4][4] =
      { {1.0, 0.0, 0.0, 0.0},
        {0.0, 1.0, 0.0, 0.0},
        {0.0, 0.0, 0.0, 1.0},
        {0.0, 0.0, 1.0, 0.0},
      };

  c.dim = 2;
  c.mx = malloc(4*sizeof(double complex*));
  for  (int i=0; i<4; i++)
  {
    c.mx[i] = malloc(4*sizeof(double complex));
    for  (int j=0; j<4; j++)
    {
      c.mx[i][j] = cmx[i][j];
    }
  }

  return  c;
}



Matrix  toffoli()
/*  returns the 8x8 matrix of the Toffoli gate
*/
{
  Matrix  t;
  double complex  tmx[8][8] =
      { {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
        {0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
        {0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0},
        {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0},
        {0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0},
        {0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0},
        {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0},
        {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0}
      };

  t.dim = 3;
  t.mx = malloc(8*sizeof(double complex*));
  for  (int i=0; i<8; i++)
  {
    t.mx[i] = malloc(8*sizeof(double complex));
    for  (int j=0; j<8; j++)
    {
      t.mx[i][j] = tmx[i][j];
    }
  }

  return  t;
}


Matrix  productMxMx(Matrix a, Matrix b)
/*  multiply two square matrices representing quantum circuits  */
{
  Matrix c;
  int  n = 1<<a.dim;
  double complex  sum;

  if  (a.dim == b.dim && a.dim >= 0)
  {
    c.dim = a.dim;
    c.mx = malloc(n*sizeof(double complex*));
    for  (int i=0; i<n; i++)
    {
      c.mx[i] = malloc(n*sizeof(double complex));
      for  (int j=0; j<n; j++)
      {
        sum = 0.0;
        for  (int k=0; k<n; k++)
        {
          sum += a.mx[i][k] * b.mx[k][j];
        }
        c.mx[i][j] = sum;
      }
    }
  }
  else   /*  matrix product undefined   */
  {
    c.dim = -1;
    c.mx = malloc(sizeof(double complex*));
  }

  return  c;
}


Matrix  kroneckerProductMx(Matrix a, Matrix b)
/*  compute the Kronecker product of two square matrices representing
    quantum circuits
*/
{
  Matrix c;
  int  na;
  int  nb;
  int  n;

  if  (a.dim >= 0 && b.dim >= 0)
  {
    na = 1<<a.dim;
    nb = 1<<b.dim;
    c.dim = a.dim+b.dim;
    n = 1<<c.dim;
    c.mx = malloc(n*sizeof(double complex*));
    for  (int ia=0; ia<na; ia++)
    {
      for  (int ib=0; ib<nb; ib++)
      {
        c.mx[ia*nb+ib] = malloc(n*sizeof(double complex));
        for  (int ja=0; ja<na; ja++)
        {
          for  (int jb=0; jb<nb; jb++)
          {
            c.mx[ia*nb+ib][ja*nb+jb] = a.mx[ia][ja] * b.mx[ib][jb];
          }
        }
      }
    }
  }
  else   /*  at least one of  a, b  is undefined   */
  {
    c.dim = -1;
    c.mx = malloc(sizeof(double complex*));
  }

  return  c;
}


int  printRegister(Register v)
/*  print the register  v  */
{
  int  printfReturnValue;
  int  sumPrintfReturnValue = 0;
  int  minPrintfReturnValue = INT_MAX;
  int  n = 1<<v.dim;
  double complex  vi;
  double  viRe;
  double  viIm;

  if  (v.dim == -1)
  {
    return  printf("Undefined product used.\n");
  }

  printfReturnValue = printf("%d-qubit register, %d-element vector:\n", v.dim, n);
  sumPrintfReturnValue += printfReturnValue;
  minPrintfReturnValue = (printfReturnValue < minPrintfReturnValue ?
                          printfReturnValue : minPrintfReturnValue);
  for  (int i=0; i<n; i++)
  {
      vi = v.reg[i];
      viRe = creal(vi);
      viIm = cimag(vi);
      if  (viRe == 0)
      {
        if  (viIm == 0)
        {
          printfReturnValue = printf("   0.0000        \n");
        }
        else if  (viIm > 0)
        {
          printfReturnValue = printf("   0.0000+%6.4lfi\n", viIm);
        }
        else   /*  viIm < 0  */
        {
          printfReturnValue = printf("   0.0000%7.4lfi\n", viIm);
        }
      }
      else   /*  viRe != 0  */
      {
        if  (viIm == 0)
        {
          printfReturnValue = printf("  %7.4lf        \n", viRe);
        }
        else if  (viIm > 0)
        {
          printfReturnValue = printf("  %7.4lf+%6.4lfi\n", viRe, viIm);
        }
        else   /*  viIm < 0  */
        {
          printfReturnValue = printf("  %7.4lf%7.4lfi\n", viRe, viIm);
        }
      }
      sumPrintfReturnValue += printfReturnValue;
      minPrintfReturnValue = (printfReturnValue < minPrintfReturnValue ?
                              printfReturnValue : minPrintfReturnValue);
  }
  if  (minPrintfReturnValue < 0)
  {
    return  minPrintfReturnValue;
  }
  else
  {
    return  sumPrintfReturnValue;
  }
}


Register  ket0()
/*  returns the column vector with entries  ( 1 0 ),  representing
    the elementary register with one qubit often denoted by  |0>,
    treated as an array of two elements indexed by 0 & 1.
*/
{
  Register  v;

  v.dim = 1;
  v.reg = malloc(2*sizeof(double complex));
  v.reg[0] = 1.0;
  v.reg[1] = 0.0;

  return  v;
}


Register  ket1()
/*  returns the column vector with entries  ( 0 1 ),  representing
    the elementary register with one qubit often denoted by  |1>,
    treated as an array of two elements indexed by 0 & 1.
*/
{
  Register  v;

  v.dim = 1;
  v.reg = malloc(2*sizeof(double complex));
  v.reg[0] = 0.0;
  v.reg[1] = 1.0;

  return  v;
}


Register  productMxReg(Matrix a, Register v)
/*  multiply the matrix  a, representing a quantum circuit, by the
    vector  v, representing a quantum register.
*/
{
  Register  u;
  int  n = 1<<a.dim;
  double complex  sum;

  if  (a.dim == v.dim && a.dim >= 0)
  {
    u.dim = a.dim;
    u.reg = malloc(n*sizeof(double complex));
    for  (int i=0; i<n; i++)
    {
        sum = 0.0;
        for  (int k=0; k<n; k++)
        {
          sum += a.mx[i][k] * v.reg[k];
        }
        u.reg[i] = sum;
    }
  }
  else   /*  matrix product undefined   */
  {
    u.dim = -1;
    /*u.reg = malloc(sizeof(double complex*));*/
  }

  return  u;
}


Register  kroneckerProductReg(Register v, Register w)
/*  compute the Kronecker product of two vectors representing
    quantum registers
*/
{
  Register  u;
  int  nv;
  int  nw;
  int  n;

  if  (v.dim >= 0 && w.dim >= 0)
  {
    nv = 1<<v.dim;
    nw = 1<<w.dim;
    u.dim = v.dim+w.dim;
    n = 1<<u.dim;
    u.reg = malloc(n*sizeof(double complex));
    for  (int iv=0; iv<nv; iv++)
    {
      for  (int iw=0; iw<nw; iw++)
      {
        u.reg[iv*nw+iw] = v.reg[iv] * w.reg[iw];
      }
    }
  }
  else   /*  at least one of  v, w  is undefined   */
  {
    u.dim = -1;
/*    u.reg = malloc(sizeof(double complex));*/
  }

  return  u;
}


/*
void yyerror(char *s) {
      fprintf(stderr, "%s\n", s);
      fprintf(stderr, "line %d: %s\n", yylineno, s);
}
*/



int main(void) {
    yyparse();
    return 0;
}
