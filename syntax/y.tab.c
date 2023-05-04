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
#line 1 "parser.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;

	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];


#line 88 "y.tab.c"

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
    IF = 258,                      /* IF  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    FLOAT = 261,                   /* FLOAT  */
    DOUBLE = 262,                  /* DOUBLE  */
    RETURN = 263,                  /* RETURN  */
    MAIN = 264,                    /* MAIN  */
    VOID = 265,                    /* VOID  */
    WHILE = 266,                   /* WHILE  */
    FOR = 267,                     /* FOR  */
    DO = 268,                      /* DO  */
    BREAK = 269,                   /* BREAK  */
    ENDIF = 270,                   /* ENDIF  */
    identifier = 271,              /* identifier  */
    integer_constant = 272,        /* integer_constant  */
    string_constant = 273,         /* string_constant  */
    float_constant = 274,          /* float_constant  */
    character_constant = 275,      /* character_constant  */
    ELSE = 276,                    /* ELSE  */
    assignment_operator = 277,     /* assignment_operator  */
    OR_operator = 278,             /* OR_operator  */
    AND_operator = 279,            /* AND_operator  */
    amp_operator = 280,            /* amp_operator  */
    equality_operator = 281,       /* equality_operator  */
    inequality_operator = 282,     /* inequality_operator  */
    lessthan_assignment_operator = 283, /* lessthan_assignment_operator  */
    lessthan_operator = 284,       /* lessthan_operator  */
    greaterthan_assignment_operator = 285, /* greaterthan_assignment_operator  */
    greaterthan_operator = 286,    /* greaterthan_operator  */
    leftshift_operator = 287,      /* leftshift_operator  */
    rightshift_operator = 288,     /* rightshift_operator  */
    add_operator = 289,            /* add_operator  */
    subtract_operator = 290,       /* subtract_operator  */
    multiplication_operator = 291, /* multiplication_operator  */
    division_operator = 292,       /* division_operator  */
    modulo_operator = 293,         /* modulo_operator  */
    exclamation_operator = 294     /* exclamation_operator  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define RETURN 263
#define MAIN 264
#define VOID 265
#define WHILE 266
#define FOR 267
#define DO 268
#define BREAK 269
#define ENDIF 270
#define identifier 271
#define integer_constant 272
#define string_constant 273
#define float_constant 274
#define character_constant 275
#define ELSE 276
#define assignment_operator 277
#define OR_operator 278
#define AND_operator 279
#define amp_operator 280
#define equality_operator 281
#define inequality_operator 282
#define lessthan_assignment_operator 283
#define lessthan_operator 284
#define greaterthan_assignment_operator 285
#define greaterthan_operator 286
#define leftshift_operator 287
#define rightshift_operator 288
#define add_operator 289
#define subtract_operator 290
#define multiplication_operator 291
#define division_operator 292
#define modulo_operator 293
#define exclamation_operator 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_MAIN = 9,                       /* MAIN  */
  YYSYMBOL_VOID = 10,                      /* VOID  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_DO = 13,                        /* DO  */
  YYSYMBOL_BREAK = 14,                     /* BREAK  */
  YYSYMBOL_ENDIF = 15,                     /* ENDIF  */
  YYSYMBOL_identifier = 16,                /* identifier  */
  YYSYMBOL_integer_constant = 17,          /* integer_constant  */
  YYSYMBOL_string_constant = 18,           /* string_constant  */
  YYSYMBOL_float_constant = 19,            /* float_constant  */
  YYSYMBOL_character_constant = 20,        /* character_constant  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_assignment_operator = 22,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 23,               /* OR_operator  */
  YYSYMBOL_AND_operator = 24,              /* AND_operator  */
  YYSYMBOL_amp_operator = 25,              /* amp_operator  */
  YYSYMBOL_equality_operator = 26,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 27,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 28, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 29,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 30, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 31,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 32,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 33,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 34,              /* add_operator  */
  YYSYMBOL_subtract_operator = 35,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 36,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 37,         /* division_operator  */
  YYSYMBOL_modulo_operator = 38,           /* modulo_operator  */
  YYSYMBOL_exclamation_operator = 39,      /* exclamation_operator  */
  YYSYMBOL_40_ = 40,                       /* ';'  */
  YYSYMBOL_41_ = 41,                       /* ','  */
  YYSYMBOL_42_ = 42,                       /* '['  */
  YYSYMBOL_43_ = 43,                       /* ']'  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* '{'  */
  YYSYMBOL_47_ = 47,                       /* '}'  */
  YYSYMBOL_48_ = 48,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_program = 50,                   /* program  */
  YYSYMBOL_declaration_list = 51,          /* declaration_list  */
  YYSYMBOL_D = 52,                         /* D  */
  YYSYMBOL_declaration = 53,               /* declaration  */
  YYSYMBOL_variable_declaration = 54,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 55, /* variable_declaration_list  */
  YYSYMBOL_V = 56,                         /* V  */
  YYSYMBOL_variable_declaration_identifier = 57, /* variable_declaration_identifier  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_vdi = 59,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 60,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 61,      /* initilization_params  */
  YYSYMBOL_initilization = 62,             /* initilization  */
  YYSYMBOL_type_specifier = 63,            /* type_specifier  */
  YYSYMBOL_function_declaration = 64,      /* function_declaration  */
  YYSYMBOL_function_declaration_type = 65, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 66, /* function_declaration_param_statement  */
  YYSYMBOL_params = 67,                    /* params  */
  YYSYMBOL_parameters_list = 68,           /* parameters_list  */
  YYSYMBOL_parameters_identifier_list = 69, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 70, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 71,          /* param_identifier  */
  YYSYMBOL_72_2 = 72,                      /* $@2  */
  YYSYMBOL_param_identifier_breakup = 73,  /* param_identifier_breakup  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_compound_statement = 75,        /* compound_statement  */
  YYSYMBOL_statment_list = 76,             /* statment_list  */
  YYSYMBOL_expression_statment = 77,       /* expression_statment  */
  YYSYMBOL_conditional_statements = 78,    /* conditional_statements  */
  YYSYMBOL_conditional_statements_breakup = 79, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 80,      /* iterative_statements  */
  YYSYMBOL_return_statement = 81,          /* return_statement  */
  YYSYMBOL_return_statement_breakup = 82,  /* return_statement_breakup  */
  YYSYMBOL_break_statement = 83,           /* break_statement  */
  YYSYMBOL_string_initilization = 84,      /* string_initilization  */
  YYSYMBOL_array_initialization = 85,      /* array_initialization  */
  YYSYMBOL_array_int_declarations = 86,    /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 87, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 88,                /* expression  */
  YYSYMBOL_expression_breakup = 89,        /* expression_breakup  */
  YYSYMBOL_simple_expression = 90,         /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 91, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 92,            /* and_expression  */
  YYSYMBOL_and_expression_breakup = 93,    /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 94, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 95,        /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 96, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 97,      /* relational_operators  */
  YYSYMBOL_sum_expression = 98,            /* sum_expression  */
  YYSYMBOL_sum_operators = 99,             /* sum_operators  */
  YYSYMBOL_term = 100,                     /* term  */
  YYSYMBOL_MULOP = 101,                    /* MULOP  */
  YYSYMBOL_factor = 102,                   /* factor  */
  YYSYMBOL_mutable = 103,                  /* mutable  */
  YYSYMBOL_mutable_breakup = 104,          /* mutable_breakup  */
  YYSYMBOL_immutable = 105,                /* immutable  */
  YYSYMBOL_call = 106,                     /* call  */
  YYSYMBOL_arguments = 107,                /* arguments  */
  YYSYMBOL_arguments_list = 108,           /* arguments_list  */
  YYSYMBOL_A = 109,                        /* A  */
  YYSYMBOL_constant = 110                  /* constant  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   163

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,     2,     2,    41,     2,    48,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    40,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    31,    33,    34,    36,    37,    39,    41,
      43,    44,    46,    46,    47,    47,    49,    50,    52,    53,
      55,    56,    57,    59,    59,    59,    59,    60,    62,    64,
      66,    68,    68,    70,    72,    74,    75,    77,    77,    79,
      80,    82,    82,    83,    83,    84,    84,    85,    87,    89,
      90,    92,    93,    95,    97,    98,   100,   101,   102,   105,
     107,   108,   110,   112,   114,   116,   118,   118,   120,   121,
     123,   125,   127,   127,   129,   131,   132,   134,   135,   137,
     139,   140,   142,   142,   142,   143,   143,   143,   145,   146,
     148,   149,   151,   152,   154,   154,   154,   156,   156,   158,
     159,   161,   162,   164,   165,   165,   167,   169,   169,   171,
     173,   174,   176,   177,   178,   179
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO",
  "BREAK", "ENDIF", "identifier", "integer_constant", "string_constant",
  "float_constant", "character_constant", "ELSE", "assignment_operator",
  "OR_operator", "AND_operator", "amp_operator", "equality_operator",
  "inequality_operator", "lessthan_assignment_operator",
  "lessthan_operator", "greaterthan_assignment_operator",
  "greaterthan_operator", "leftshift_operator", "rightshift_operator",
  "add_operator", "subtract_operator", "multiplication_operator",
  "division_operator", "modulo_operator", "exclamation_operator", "';'",
  "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "'.'", "$accept",
  "program", "declaration_list", "D", "declaration",
  "variable_declaration", "variable_declaration_list", "V",
  "variable_declaration_identifier", "$@1", "vdi", "identifier_array_type",
  "initilization_params", "initilization", "type_specifier",
  "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "params", "parameters_list",
  "parameters_identifier_list", "parameters_identifier_list_breakup",
  "param_identifier", "$@2", "param_identifier_breakup", "statement",
  "compound_statement", "statment_list", "expression_statment",
  "conditional_statements", "conditional_statements_breakup",
  "iterative_statements", "return_statement", "return_statement_breakup",
  "break_statement", "string_initilization", "array_initialization",
  "array_int_declarations", "array_int_declarations_breakup", "expression",
  "expression_breakup", "simple_expression", "simple_expression_breakup",
  "and_expression", "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "mutable_breakup", "immutable", "call",
  "arguments", "arguments_list", "A", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      87,   -83,   -83,   -83,   -83,   -83,     8,   -83,    87,   -83,
      23,   -83,    87,   -83,   -83,   -83,    -3,     2,     4,    27,
     -83,    13,   -83,   -83,    -6,   -83,    33,   -83,   -83,   -83,
      18,   101,    57,    -5,   -83,   -83,   -83,   -83,    21,    87,
     -83,    20,     7,    24,    25,   101,    30,    34,   -83,   -83,
     -83,   -83,    57,   -83,    57,   101,   -83,    33,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,    39,   -83,    42,    43,   -83,
      54,    17,   -83,    -8,   -83,   -83,   -83,   -83,    47,    73,
     -83,    55,   -83,   -83,    57,   -83,   -83,    59,    57,    57,
      89,   -83,    57,   -83,   -33,    65,   101,    69,   -83,    57,
     -83,    57,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,    12,    12,   -83,   -83,   -83,    12,    57,    57,
     106,   -83,   -83,   104,   109,   -83,   -83,    83,   -83,    84,
      90,    88,    92,    86,   -83,   -83,   -83,   -83,    42,    43,
     -14,    17,   -83,   -83,    91,   -83,   -11,   -83,   -83,   -83,
     -83,   101,   101,    57,    57,    57,   -83,   -83,   -83,   -83,
     -83,   118,   115,   -83,    97,    93,    92,   102,    99,   101,
     -83,    57,   108,   -83,   118,   -83,   -83,   -83,   105,   -83,
     -83,   -83
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    23,    24,    25,    26,    27,     0,     2,     5,     6,
       0,     7,    32,     1,     4,     3,    12,     0,    11,     0,
      28,     0,    31,    29,    17,     8,     0,     9,    37,    33,
      36,     0,     0,     0,    13,    14,    12,    10,    40,     0,
      34,     0,     0,     0,     0,     0,     0,    99,   112,   113,
     114,   115,     0,    52,     0,    50,    47,     0,    30,    42,
      41,    43,    44,    45,    46,     0,    69,    73,    76,    78,
      81,    89,    93,    98,    97,   104,   105,    15,     0,     0,
      16,     0,    38,    35,     0,    60,    59,     0,     0,     0,
       0,    62,   108,    77,    98,     0,    50,     0,    51,     0,
      71,     0,    74,    86,    87,    83,    85,    82,    84,    90,
      91,    79,     0,     0,    94,    95,    96,     0,     0,     0,
       0,    68,   100,    22,     0,    19,    39,     0,    61,     0,
       0,     0,   111,     0,   107,   103,    49,    48,    73,    76,
      80,    88,    92,    70,     0,   102,     0,    18,    20,    21,
      63,     0,     0,     0,     0,     0,   109,   106,    72,    75,
     101,     0,    55,    56,     0,     0,   111,    67,     0,     0,
      53,     0,     0,   110,     0,    65,    64,    54,     0,    58,
      66,    57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   136,   -83,   -83,    11,   123,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     5,   -83,   -83,   -83,   -83,   112,
     -83,   -83,   -83,   -83,   -83,   -27,   -83,    56,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,    31,   -83,   -21,   -83,   -32,
     -83,   -82,    19,    60,    16,   -49,   -83,   -83,   -83,    44,
     -83,    45,   -83,    46,   -51,   -83,   -83,   -83,   -83,   -83,
      -4,   -83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,    15,     8,    56,    17,    27,    18,    24,
      34,    35,    80,   147,    57,    11,    12,    20,    21,    22,
      29,    40,    30,    38,    82,    96,    59,    97,    60,    61,
     170,    62,    63,    86,    64,   125,   149,   168,   175,    65,
     121,    66,   100,    67,   102,    68,    69,   111,   112,    70,
     113,    71,   117,    72,    73,   122,    74,    75,   133,   134,
     156,    76
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      77,    94,   127,    93,    58,    10,   129,   150,    13,   119,
      87,     9,    78,    10,   118,   120,    32,    19,    90,     9,
     109,   110,    95,    47,    48,    49,    50,    51,    47,    48,
      49,    50,    51,    94,   119,   161,    33,    94,    79,    16,
     120,    23,    25,    28,    19,    26,    52,    85,    94,    36,
      94,    54,   139,   114,   115,   116,    54,   130,    31,    39,
     132,    94,    94,    81,    84,    99,    94,   101,    88,    89,
      91,   164,   165,    47,    48,    49,    50,    51,    92,    98,
     103,   104,   105,   106,   107,   108,   143,   144,   109,   110,
     123,     1,     2,     3,     4,   124,    52,     5,   126,   128,
     131,    54,    94,    94,    41,     1,     2,     3,     4,    42,
     135,     5,    43,    44,    45,    46,   137,    47,    48,    49,
      50,    51,   145,   166,   162,   163,   146,   150,   151,   152,
     153,   157,   154,   155,   160,   167,   169,   171,   172,   178,
      52,    53,   177,   174,    14,    54,   176,    55,   179,    37,
     181,    83,   136,   180,   148,   159,   140,   158,   141,   138,
       0,     0,   173,   142
};

static const yytype_int16 yycheck[] =
{
      32,    52,    84,    52,    31,     0,    88,    18,     0,    42,
      42,     0,    17,     8,    22,    48,    22,    12,    45,     8,
      34,    35,    54,    16,    17,    18,    19,    20,    16,    17,
      18,    19,    20,    84,    42,    46,    42,    88,    43,    16,
      48,    44,    40,    16,    39,    41,    39,    40,    99,    16,
     101,    44,   101,    36,    37,    38,    44,    89,    45,    41,
      92,   112,   113,    42,    44,    23,   117,    24,    44,    44,
      40,   153,   154,    16,    17,    18,    19,    20,    44,    40,
      26,    27,    28,    29,    30,    31,   118,   119,    34,    35,
      43,     4,     5,     6,     7,    22,    39,    10,    43,    40,
      11,    44,   153,   154,     3,     4,     5,     6,     7,     8,
      45,    10,    11,    12,    13,    14,    47,    16,    17,    18,
      19,    20,    16,   155,   151,   152,    22,    18,    45,    45,
      40,    45,    44,    41,    43,    17,    21,    40,    45,   171,
      39,    40,   169,    41,     8,    44,    47,    46,    40,    26,
      45,    39,    96,   174,   123,   139,   112,   138,   113,    99,
      -1,    -1,   166,   117
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     7,    10,    50,    51,    53,    54,
      63,    64,    65,     0,    51,    52,    16,    55,    57,    63,
      66,    67,    68,    44,    58,    40,    41,    56,    16,    69,
      71,    45,    22,    42,    59,    60,    16,    55,    72,    41,
      70,     3,     8,    11,    12,    13,    14,    16,    17,    18,
      19,    20,    39,    40,    44,    46,    54,    63,    74,    75,
      77,    78,    80,    81,    83,    88,    90,    92,    94,    95,
      98,   100,   102,   103,   105,   106,   110,    88,    17,    43,
      61,    42,    73,    68,    44,    40,    82,    88,    44,    44,
      74,    40,    44,    94,   103,    88,    74,    76,    40,    23,
      91,    24,    93,    26,    27,    28,    29,    30,    31,    34,
      35,    96,    97,    99,    36,    37,    38,   101,    22,    42,
      48,    89,   104,    43,    22,    84,    43,    90,    40,    90,
      88,    11,    88,   107,   108,    45,    76,    47,    92,    94,
      98,   100,   102,    88,    88,    16,    22,    62,    84,    85,
      18,    45,    45,    40,    44,    41,   109,    45,    91,    93,
      43,    46,    74,    74,    90,    90,    88,    17,    86,    21,
      79,    40,    45,   109,    41,    87,    47,    74,    88,    40,
      86,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    53,    53,    54,    55,
      56,    56,    58,    57,    59,    59,    60,    60,    61,    61,
      62,    62,    62,    63,    63,    63,    63,    63,    64,    65,
      66,    67,    67,    68,    69,    70,    70,    72,    71,    73,
      73,    74,    74,    74,    74,    74,    74,    74,    75,    76,
      76,    77,    77,    78,    79,    79,    80,    80,    80,    81,
      82,    82,    83,    84,    85,    86,    87,    87,    88,    88,
      89,    90,    91,    91,    92,    93,    93,    94,    94,    95,
      96,    96,    97,    97,    97,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   105,   106,   107,   107,   108,
     109,   109,   110,   110,   110,   110
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     2,
       2,     0,     0,     3,     1,     2,     2,     0,     3,     2,
       1,     1,     0,     1,     1,     1,     1,     1,     2,     3,
       3,     1,     0,     2,     2,     2,     0,     0,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       0,     2,     1,     6,     2,     0,     5,     8,     7,     2,
       1,     2,     2,     2,     4,     2,     2,     0,     2,     1,
       2,     2,     3,     0,     2,     3,     0,     2,     1,     2,
       2,     0,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     2,     3,     1,     1,     4,     1,     0,     2,
       3,     0,     1,     1,     1,     1
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
  case 12: /* $@1: %empty  */
#line 46 "parser.y"
                                     { ins(); }
#line 1452 "y.tab.c"
    break;

  case 29: /* function_declaration_type: type_specifier identifier '('  */
#line 64 "parser.y"
                                                         { ins();}
#line 1458 "y.tab.c"
    break;

  case 37: /* $@2: %empty  */
#line 77 "parser.y"
                                     { ins(); }
#line 1464 "y.tab.c"
    break;

  case 63: /* string_initilization: assignment_operator string_constant  */
#line 112 "parser.y"
                                                              { insV(); }
#line 1470 "y.tab.c"
    break;

  case 112: /* constant: integer_constant  */
#line 176 "parser.y"
                                                { insV(); }
#line 1476 "y.tab.c"
    break;

  case 113: /* constant: string_constant  */
#line 177 "parser.y"
                                                { insV(); }
#line 1482 "y.tab.c"
    break;

  case 114: /* constant: float_constant  */
#line 178 "parser.y"
                                                { insV(); }
#line 1488 "y.tab.c"
    break;

  case 115: /* constant: character_constant  */
#line 179 "parser.y"
                                            { insV(); }
#line 1494 "y.tab.c"
    break;


#line 1498 "y.tab.c"

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

#line 180 "parser.y"

extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv){
	yyin = fopen(argv[1], "r");
	yyparse();
	if(flag == 0){
		printf("Status: Parsing Complete - Valid\n");
		printf("%30s SYMBOL TABLE\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();
		printf("\n\n%30s CONSTANT TABLE\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}
void yyerror(char *s){
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf("Status: Parsing Failed - Invalid\n");
}
void ins(){
	insertSTtype(curid,curtype);
}
void insV(){
	insertSTvalue(curid,curval);
}
int yywrap(){
	return 1;
}
