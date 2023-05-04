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

	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	
	void yyerror(char* s);
	int yylex();
	void ins();
	void insV();
	int flag=0;
	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
	extern int currnest;
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	void push(char *s);
	void codegen();
	void codeassign();
	char* itoa1(int num, char* str, int base);
char* itoa2(int num, char* str, int base);
	void reverse(char str[], int length); 
	void swap(char*,char*);
	void label1();
	void label2();
	void label3();
	void label4();
	void label5();
	void label6();
	void codegencon();
	void funcgen();
	void funcgenend();
	void arggen();
	void callgen();

	int params_count=0;
	int call_params_count=0;
	int top = 0,count=0,ltop=0,lno=0;
	char temp[3] = "t";

#line 121 "y.tab.c"

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
    identifier = 270,              /* identifier  */
    array_identifier = 271,        /* array_identifier  */
    func_identifier = 272,         /* func_identifier  */
    integer_constant = 273,        /* integer_constant  */
    string_constant = 274,         /* string_constant  */
    float_constant = 275,          /* float_constant  */
    character_constant = 276,      /* character_constant  */
    ELSE = 277,                    /* ELSE  */
    assignment_operator = 278,     /* assignment_operator  */
    OR_operator = 279,             /* OR_operator  */
    AND_operator = 280,            /* AND_operator  */
    amp_operator = 281,            /* amp_operator  */
    equality_operator = 282,       /* equality_operator  */
    inequality_operator = 283,     /* inequality_operator  */
    lessthan_assignment_operator = 284, /* lessthan_assignment_operator  */
    lessthan_operator = 285,       /* lessthan_operator  */
    greaterthan_assignment_operator = 286, /* greaterthan_assignment_operator  */
    greaterthan_operator = 287,    /* greaterthan_operator  */
    leftshift_operator = 288,      /* leftshift_operator  */
    rightshift_operator = 289,     /* rightshift_operator  */
    add_operator = 290,            /* add_operator  */
    subtract_operator = 291,       /* subtract_operator  */
    multiplication_operator = 292, /* multiplication_operator  */
    division_operator = 293,       /* division_operator  */
    modulo_operator = 294,         /* modulo_operator  */
    exclamation_operator = 295,    /* exclamation_operator  */
    increment_operator = 296,      /* increment_operator  */
    decrement_operator = 297       /* decrement_operator  */
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
#define identifier 270
#define array_identifier 271
#define func_identifier 272
#define integer_constant 273
#define string_constant 274
#define float_constant 275
#define character_constant 276
#define ELSE 277
#define assignment_operator 278
#define OR_operator 279
#define AND_operator 280
#define amp_operator 281
#define equality_operator 282
#define inequality_operator 283
#define lessthan_assignment_operator 284
#define lessthan_operator 285
#define greaterthan_assignment_operator 286
#define greaterthan_operator 287
#define leftshift_operator 288
#define rightshift_operator 289
#define add_operator 290
#define subtract_operator 291
#define multiplication_operator 292
#define division_operator 293
#define modulo_operator 294
#define exclamation_operator 295
#define increment_operator 296
#define decrement_operator 297

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
  YYSYMBOL_identifier = 15,                /* identifier  */
  YYSYMBOL_array_identifier = 16,          /* array_identifier  */
  YYSYMBOL_func_identifier = 17,           /* func_identifier  */
  YYSYMBOL_integer_constant = 18,          /* integer_constant  */
  YYSYMBOL_string_constant = 19,           /* string_constant  */
  YYSYMBOL_float_constant = 20,            /* float_constant  */
  YYSYMBOL_character_constant = 21,        /* character_constant  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_assignment_operator = 23,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 24,               /* OR_operator  */
  YYSYMBOL_AND_operator = 25,              /* AND_operator  */
  YYSYMBOL_amp_operator = 26,              /* amp_operator  */
  YYSYMBOL_equality_operator = 27,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 28,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 29, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 30,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 31, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 32,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 33,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 34,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 35,              /* add_operator  */
  YYSYMBOL_subtract_operator = 36,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 37,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 38,         /* division_operator  */
  YYSYMBOL_modulo_operator = 39,           /* modulo_operator  */
  YYSYMBOL_exclamation_operator = 40,      /* exclamation_operator  */
  YYSYMBOL_increment_operator = 41,        /* increment_operator  */
  YYSYMBOL_decrement_operator = 42,        /* decrement_operator  */
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* '['  */
  YYSYMBOL_46_ = 46,                       /* ']'  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ')'  */
  YYSYMBOL_49_ = 49,                       /* '{'  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_program = 52,                   /* program  */
  YYSYMBOL_declaration_list = 53,          /* declaration_list  */
  YYSYMBOL_D = 54,                         /* D  */
  YYSYMBOL_declaration = 55,               /* declaration  */
  YYSYMBOL_variable_declaration = 56,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 57, /* variable_declaration_list  */
  YYSYMBOL_variable_declaration_identifier = 58, /* variable_declaration_identifier  */
  YYSYMBOL_59_1 = 59,                      /* $@1  */
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_vdi = 61,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 62,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 63,      /* initilization_params  */
  YYSYMBOL_initilization = 64,             /* initilization  */
  YYSYMBOL_type_specifier = 65,            /* type_specifier  */
  YYSYMBOL_function_declaration = 66,      /* function_declaration  */
  YYSYMBOL_function_declaration_type = 67, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 68, /* function_declaration_param_statement  */
  YYSYMBOL_69_3 = 69,                      /* $@3  */
  YYSYMBOL_70_4 = 70,                      /* $@4  */
  YYSYMBOL_params = 71,                    /* params  */
  YYSYMBOL_parameters_list = 72,           /* parameters_list  */
  YYSYMBOL_parameters_identifier_list = 73, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 74, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 75,          /* param_identifier  */
  YYSYMBOL_76_5 = 76,                      /* $@5  */
  YYSYMBOL_param_identifier_breakup = 77,  /* param_identifier_breakup  */
  YYSYMBOL_statement = 78,                 /* statement  */
  YYSYMBOL_compound_statement = 79,        /* compound_statement  */
  YYSYMBOL_80_6 = 80,                      /* $@6  */
  YYSYMBOL_statment_list = 81,             /* statment_list  */
  YYSYMBOL_expression_statment = 82,       /* expression_statment  */
  YYSYMBOL_conditional_statements = 83,    /* conditional_statements  */
  YYSYMBOL_84_7 = 84,                      /* $@7  */
  YYSYMBOL_85_8 = 85,                      /* $@8  */
  YYSYMBOL_conditional_statements_breakup = 86, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 87,      /* iterative_statements  */
  YYSYMBOL_88_9 = 88,                      /* $@9  */
  YYSYMBOL_89_10 = 89,                     /* $@10  */
  YYSYMBOL_90_11 = 90,                     /* $@11  */
  YYSYMBOL_91_12 = 91,                     /* $@12  */
  YYSYMBOL_92_13 = 92,                     /* $@13  */
  YYSYMBOL_93_14 = 93,                     /* $@14  */
  YYSYMBOL_return_statement = 94,          /* return_statement  */
  YYSYMBOL_break_statement = 95,           /* break_statement  */
  YYSYMBOL_string_initilization = 96,      /* string_initilization  */
  YYSYMBOL_array_initialization = 97,      /* array_initialization  */
  YYSYMBOL_array_int_declarations = 98,    /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 99, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 100,               /* expression  */
  YYSYMBOL_101_15 = 101,                   /* $@15  */
  YYSYMBOL_simple_expression = 102,        /* simple_expression  */
  YYSYMBOL_103_16 = 103,                   /* $@16  */
  YYSYMBOL_and_expression = 104,           /* and_expression  */
  YYSYMBOL_105_17 = 105,                   /* @17  */
  YYSYMBOL_unary_relation_expression = 106, /* unary_relation_expression  */
  YYSYMBOL_107_18 = 107,                   /* @18  */
  YYSYMBOL_regular_expression = 108,       /* regular_expression  */
  YYSYMBOL_relational_operators = 109,     /* relational_operators  */
  YYSYMBOL_sum_expression = 110,           /* sum_expression  */
  YYSYMBOL_sum_operators = 111,            /* sum_operators  */
  YYSYMBOL_term = 112,                     /* term  */
  YYSYMBOL_MULOP = 113,                    /* MULOP  */
  YYSYMBOL_factor = 114,                   /* factor  */
  YYSYMBOL_mutable = 115,                  /* mutable  */
  YYSYMBOL_immutable = 116,                /* immutable  */
  YYSYMBOL_call = 117,                     /* call  */
  YYSYMBOL_118_19 = 118,                   /* @19  */
  YYSYMBOL_arguments = 119,                /* arguments  */
  YYSYMBOL_arguments_list = 120,           /* arguments_list  */
  YYSYMBOL_exp = 121,                      /* exp  */
  YYSYMBOL_constant = 122                  /* constant  */
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
#define YYLAST   241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      47,    48,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    61,    62,    63,    64,    65,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    78,    78,    78,    79,    80,
      81,    82,    82,    82,    83,    83,    84,    85,    86,    87,
      88,    88,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    98,
      99,   100,   101,   101,   101,   102,   102,   102,   103,   103,
     103,   105,   106,   114,   115,   116,   117,   118,   119,   120,
     120,   127,   130,   130,   131,   133,   133,   134,   136,   136,
     137,   139,   140,   142,   142,   142,   142,   142,   142,   144,
     145,   147,   148,   150,   151,   153,   153,   153,   155,   156,
     157,   166,   173,   174,   175,   177,   177,   197,   197,   198,
     199,   201,   201,   201,   201,   201,   203,   204,   205,   206
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
  "BREAK", "identifier", "array_identifier", "func_identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "assignment_operator", "OR_operator",
  "AND_operator", "amp_operator", "equality_operator",
  "inequality_operator", "lessthan_assignment_operator",
  "lessthan_operator", "greaterthan_assignment_operator",
  "greaterthan_operator", "leftshift_operator", "rightshift_operator",
  "add_operator", "subtract_operator", "multiplication_operator",
  "division_operator", "modulo_operator", "exclamation_operator",
  "increment_operator", "decrement_operator", "';'", "','", "'['", "']'",
  "'('", "')'", "'{'", "'}'", "$accept", "program", "declaration_list",
  "D", "declaration", "variable_declaration", "variable_declaration_list",
  "variable_declaration_identifier", "$@1", "$@2", "vdi",
  "identifier_array_type", "initilization_params", "initilization",
  "type_specifier", "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "$@3", "$@4", "params",
  "parameters_list", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@5",
  "param_identifier_breakup", "statement", "compound_statement", "$@6",
  "statment_list", "expression_statment", "conditional_statements", "$@7",
  "$@8", "conditional_statements_breakup", "iterative_statements", "$@9",
  "$@10", "$@11", "$@12", "$@13", "$@14", "return_statement",
  "break_statement", "string_initilization", "array_initialization",
  "array_int_declarations", "array_int_declarations_breakup", "expression",
  "$@15", "simple_expression", "$@16", "and_expression", "@17",
  "unary_relation_expression", "@18", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "immutable", "call", "@19", "arguments",
  "arguments_list", "exp", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-65)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      65,   -65,   -65,   -65,   -65,   -65,    22,   -65,    65,   -65,
       2,   -65,   -65,   -65,   -65,   -65,   -20,   -65,     9,   -65,
     -65,    65,   -65,     0,     0,   -65,    31,    18,    13,   -65,
      10,   -11,   -65,   -65,   -65,   -65,   -65,   -65,   -65,    -2,
     -65,    19,    23,   -65,   -65,   -65,   -65,   -65,    10,    66,
      70,   -65,    53,    52,    55,   -65,   -65,   -65,   -65,   -65,
      50,    74,   -65,    57,    65,   -65,   194,   -65,    10,    10,
      56,    66,    75,    10,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,    44,   -65,   -65,    44,   -65,   -65,   -65,    44,    80,
      86,   -65,    60,   -65,   -65,    61,    -6,    62,    63,    64,
     -65,   -65,    31,   -65,   -65,    67,   -65,   -65,   -65,    99,
     -65,   -65,    71,    58,    69,   -65,   -65,   -65,    70,    10,
      52,    55,   -65,   -13,   -65,   -65,   -65,   -65,   -65,    10,
     -65,    76,   -65,    10,   -65,   146,   194,   -65,   -65,   -65,
     -65,   -65,   -65,    72,    77,   -65,   -65,    10,   -65,   -65,
      95,   -16,   -65,    10,    79,   146,    68,   115,   -65,    58,
     -65,    83,    78,   -65,    -8,   -65,   -65,   -65,    82,   -65,
      95,   -65,   -65,   194,   -65,    10,    10,   -65,   -65,   194,
      -5,    -4,   108,   -65,   -65,   -65,   194,   -65,    10,    89,
     -65,    85,   -65,   194,   -65
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    24,    25,    26,    27,    28,     0,     2,     5,     6,
       0,     7,    31,     1,     4,     3,    11,    13,     0,    10,
      29,    35,    30,    18,    18,     8,     0,     0,     0,    34,
       0,     0,    12,    15,    14,    11,     9,    40,    36,    39,
      32,   110,     0,   126,   127,   128,   129,    88,     0,    16,
      84,    87,    90,    92,   100,   104,   109,   108,   113,   114,
       0,     0,    17,    43,     0,    37,    51,   115,     0,     0,
       0,    81,   109,     0,    85,    97,    98,    94,    96,    93,
      95,     0,   101,   102,     0,   105,   106,   107,     0,    23,
       0,    20,     0,    41,    38,     0,     0,     0,     0,     0,
      56,    50,     0,    33,    45,     0,    44,    46,    47,     0,
      48,    49,     0,   118,     0,    89,   112,    79,    82,     0,
      91,    99,   103,     0,    19,    21,    22,    74,    42,     0,
      71,     0,    62,     0,    73,    51,    51,    55,   121,   122,
     123,   124,   125,     0,   117,   120,   111,     0,    83,    86,
       0,     0,    72,     0,     0,    51,     0,     0,   116,     0,
      80,    78,     0,    57,     0,    65,    53,    52,     0,   119,
       0,    76,    75,    51,    63,     0,     0,    77,    58,    51,
       0,     0,    61,    64,    66,    69,    51,    59,     0,     0,
      60,     0,    70,    51,    67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -65,   -65,   126,   -65,   -65,    48,   -65,   109,   -65,   -65,
     112,   -65,   -65,   -65,     3,   -65,   -65,   -65,   -65,   -65,
     -65,    73,   -65,   -65,   -65,   -65,   -65,   -62,   -65,   -65,
     -17,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,    51,   -65,   -31,   -65,   -47,
     -65,   -28,   -65,    90,   -65,   -64,   -65,   -65,   -65,    87,
     -65,    59,   -65,    54,   -30,   -65,   -65,   -65,   -65,   -65,
     -15,   -65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,    15,     8,   101,    18,    19,    23,    24,
      32,    33,    62,   124,   102,    11,    12,    20,    21,    66,
      28,    29,    38,    65,    39,    63,    93,   155,   104,   105,
     156,   106,   107,   173,   182,   187,   108,   153,   179,   175,
     188,   109,   189,   110,   111,    91,   126,   162,   171,   112,
     147,    71,   148,    50,   119,    51,    69,    52,    81,    53,
      84,    54,    88,    55,    72,    57,    58,   113,   143,   144,
     145,    59
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    70,    49,    10,   103,   115,   127,    60,    73,    41,
      42,    10,    43,    44,    45,    46,    73,    16,    17,    73,
      73,   114,    13,    30,    27,    41,    42,    22,    43,    44,
      45,    46,   163,    37,    47,    61,   150,   130,   184,    56,
     174,    48,    64,    56,   185,    31,    35,    17,     9,   131,
      47,    56,    25,    26,    56,   149,     9,    48,    56,    41,
      42,    40,    43,    44,    45,    46,    67,    27,    68,     1,
       2,     3,     4,   138,   157,     5,   139,   140,   141,   142,
      75,    76,    77,    78,    79,    80,   154,    82,    83,    56,
      73,    48,    85,    86,    87,    74,    89,    90,   117,    56,
     160,   151,    92,   123,   116,   127,   128,   134,   129,   132,
     133,   178,   136,   161,   137,   146,   135,   183,   167,   152,
     158,   159,   165,    56,   190,   164,   168,   170,   172,   176,
     186,   194,   192,   193,    14,    36,    34,    94,   166,   177,
     125,   191,   122,   121,   169,    56,    56,   180,   181,    95,
       1,     2,     3,     4,    96,     0,     5,    97,    98,   -68,
      99,    41,    42,   118,    43,    44,    45,    46,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,   100,
       0,     0,     0,    48,     0,     0,   -54,    95,     1,     2,
       3,     4,    96,     0,     5,    97,    98,   -68,    99,    41,
      42,     0,    43,    44,    45,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,   100,     0,     0,
       0,    48
};

static const yytype_int16 yycheck[] =
{
      30,    48,    30,     0,    66,    69,    19,    18,    24,    15,
      16,     8,    18,    19,    20,    21,    24,    15,    16,    24,
      24,    68,     0,    23,    21,    15,    16,    47,    18,    19,
      20,    21,    48,    15,    40,    46,    49,    43,    43,    69,
      48,    47,    44,    73,    48,    45,    15,    16,     0,    96,
      40,    81,    43,    44,    84,   119,     8,    47,    88,    15,
      16,    48,    18,    19,    20,    21,    47,    64,    45,     4,
       5,     6,     7,    15,   136,    10,    18,    19,    20,    21,
      27,    28,    29,    30,    31,    32,   133,    35,    36,   119,
      24,    47,    37,    38,    39,    25,    46,    23,    23,   129,
     147,   129,    45,    23,    48,    19,    46,    43,    47,    47,
      47,   173,    13,    18,    43,    46,    49,   179,    50,    43,
      48,    44,    43,   153,   186,   153,    11,    44,    50,    47,
      22,   193,    43,    48,     8,    26,    24,    64,   155,   170,
      89,   188,    88,    84,   159,   175,   176,   175,   176,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    73,    18,    19,    20,    21,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,    -1,    50,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     7,    10,    52,    53,    55,    56,
      65,    66,    67,     0,    53,    54,    15,    16,    57,    58,
      68,    69,    47,    59,    60,    43,    44,    65,    71,    72,
      23,    45,    61,    62,    61,    15,    58,    15,    73,    75,
      48,    15,    16,    18,    19,    20,    21,    40,    47,   102,
     104,   106,   108,   110,   112,   114,   115,   116,   117,   122,
      18,    46,    63,    76,    44,    74,    70,    47,    45,   107,
     100,   102,   115,    24,    25,    27,    28,    29,    30,    31,
      32,   109,    35,    36,   111,    37,    38,    39,   113,    46,
      23,    96,    45,    77,    72,     3,     8,    11,    12,    14,
      43,    56,    65,    78,    79,    80,    82,    83,    87,    92,
      94,    95,   100,   118,   100,   106,    48,    23,   104,   105,
     110,   112,   114,    23,    64,    96,    97,    19,    46,    47,
      43,   100,    47,    47,    43,    49,    13,    43,    15,    18,
      19,    20,    21,   119,   120,   121,    46,   101,   103,   106,
      49,   102,    43,    88,   100,    78,    81,    78,    48,    44,
     100,    18,    98,    48,   102,    43,    81,    50,    11,   121,
      44,    99,    50,    84,    48,    90,    47,    98,    78,    89,
     102,   102,    85,    78,    43,    48,    22,    86,    91,    93,
      78,   100,    43,    48,    78
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    54,    54,    55,    55,    56,    57,
      57,    59,    58,    60,    58,    61,    61,    62,    62,    63,
      63,    64,    64,    64,    65,    65,    65,    65,    65,    66,
      67,    69,    70,    68,    71,    71,    72,    73,    74,    74,
      76,    75,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    80,    79,    81,    81,    82,    82,    84,    85,    83,
      86,    86,    88,    89,    87,    90,    91,    87,    92,    93,
      87,    94,    94,    95,    96,    97,    98,    99,    99,   101,
     100,   100,   103,   102,   102,   105,   104,   104,   107,   106,
     106,   108,   108,   109,   109,   109,   109,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   114,   114,
     115,   115,   116,   116,   116,   118,   117,   119,   119,   120,
     120,   121,   121,   121,   121,   121,   122,   122,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     3,
       1,     0,     3,     0,     3,     1,     2,     2,     0,     3,
       2,     1,     1,     0,     1,     1,     1,     1,     1,     2,
       3,     0,     0,     5,     1,     0,     2,     2,     2,     0,
       0,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     2,     0,     2,     1,     0,     0,     8,
       2,     0,     0,     0,     7,     0,     0,    11,     0,     0,
       9,     2,     3,     2,     2,     4,     2,     2,     0,     0,
       4,     1,     0,     4,     1,     0,     4,     1,     0,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     1,     0,     5,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
  case 11: /* $@1: %empty  */
#line 68 "parser.y"
                                             {insertSTnest(curid,currnest); ins();  }
#line 1528 "y.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 69 "parser.y"
                           {insertSTnest(curid,currnest); ins();  }
#line 1534 "y.tab.c"
    break;

  case 19: /* initilization_params: integer_constant ']' initilization  */
#line 73 "parser.y"
                                                             {if(yyval < 1) {printf("Wrong array size\n"); exit(0);} }
#line 1540 "y.tab.c"
    break;

  case 30: /* function_declaration_type: type_specifier identifier '('  */
#line 81 "parser.y"
                                                                 { strcpy(currfunctype, curtype); strcpy(currfunc, curid); insertSTF(curid); ins(); }
#line 1546 "y.tab.c"
    break;

  case 31: /* $@3: %empty  */
#line 82 "parser.y"
                                          {params_count=0;}
#line 1552 "y.tab.c"
    break;

  case 32: /* $@4: %empty  */
#line 82 "parser.y"
                                                                      {funcgen();}
#line 1558 "y.tab.c"
    break;

  case 33: /* function_declaration_param_statement: $@3 params ')' $@4 statement  */
#line 82 "parser.y"
                                                                                             {funcgenend();}
#line 1564 "y.tab.c"
    break;

  case 34: /* params: parameters_list  */
#line 83 "parser.y"
                          { insertSTparamscount(currfunc, params_count); }
#line 1570 "y.tab.c"
    break;

  case 35: /* params: %empty  */
#line 83 "parser.y"
                                                                            { insertSTparamscount(currfunc, params_count); }
#line 1576 "y.tab.c"
    break;

  case 40: /* $@5: %empty  */
#line 88 "parser.y"
                                     { ins();insertSTnest(curid,1); params_count++; }
#line 1582 "y.tab.c"
    break;

  case 51: /* $@6: %empty  */
#line 95 "parser.y"
                          {currnest++;}
#line 1588 "y.tab.c"
    break;

  case 57: /* $@7: %empty  */
#line 98 "parser.y"
                                                       {label1();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1594 "y.tab.c"
    break;

  case 58: /* $@8: %empty  */
#line 98 "parser.y"
                                                                                                                                                  {label2();}
#line 1600 "y.tab.c"
    break;

  case 60: /* conditional_statements_breakup: ELSE statement  */
#line 99 "parser.y"
                                                 {label3();}
#line 1606 "y.tab.c"
    break;

  case 61: /* conditional_statements_breakup: %empty  */
#line 100 "parser.y"
          {label3();}
#line 1612 "y.tab.c"
    break;

  case 62: /* $@9: %empty  */
#line 101 "parser.y"
                                    {label4();}
#line 1618 "y.tab.c"
    break;

  case 63: /* $@10: %empty  */
#line 101 "parser.y"
                                                                      {label1();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1624 "y.tab.c"
    break;

  case 64: /* iterative_statements: WHILE '(' $@9 simple_expression ')' $@10 statement  */
#line 101 "parser.y"
                                                                                                                                                                 {label5();}
#line 1630 "y.tab.c"
    break;

  case 65: /* $@11: %empty  */
#line 102 "parser.y"
                                 {label4();}
#line 1636 "y.tab.c"
    break;

  case 66: /* $@12: %empty  */
#line 102 "parser.y"
                                                                   {label1();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1642 "y.tab.c"
    break;

  case 67: /* iterative_statements: FOR '(' expression ';' $@11 simple_expression ';' $@12 expression ')' statement  */
#line 102 "parser.y"
                                                                                                                                                                            {label5();}
#line 1648 "y.tab.c"
    break;

  case 68: /* $@13: %empty  */
#line 103 "parser.y"
          {label4();}
#line 1654 "y.tab.c"
    break;

  case 69: /* $@14: %empty  */
#line 103 "parser.y"
                                                                 {label1();label5();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1660 "y.tab.c"
    break;

  case 71: /* return_statement: RETURN ';'  */
#line 105 "parser.y"
                     {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
#line 1666 "y.tab.c"
    break;

  case 72: /* return_statement: RETURN expression ';'  */
#line 106 "parser.y"
                                { 	if(!strcmp(currfunctype, "void")){ 
	    yyerror("Function is void");
	}
    if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1){
	    printf("Expression doesn't match return type of function\n"); exit(0);
	}
    }
#line 1678 "y.tab.c"
    break;

  case 74: /* string_initilization: assignment_operator string_constant  */
#line 115 "parser.y"
                                                              {insV();}
#line 1684 "y.tab.c"
    break;

  case 79: /* $@15: %empty  */
#line 120 "parser.y"
                                              {push("=");}
#line 1690 "y.tab.c"
    break;

  case 80: /* expression: mutable assignment_operator $@15 expression  */
#line 120 "parser.y"
                                                                        {   
	if(yyvsp[-3]==1 && yyvsp[0]==1)
	    yyval=1;
	else{
        yyval=-1; printf("Type mismatch\n"); exit(0);} 
		codeassign();
	}
#line 1702 "y.tab.c"
    break;

  case 81: /* expression: simple_expression  */
#line 127 "parser.y"
                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1708 "y.tab.c"
    break;

  case 82: /* $@16: %empty  */
#line 130 "parser.y"
                                                                       {push("||");}
#line 1714 "y.tab.c"
    break;

  case 83: /* simple_expression: simple_expression OR_operator and_expression $@16  */
#line 130 "parser.y"
                                                                                     {if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 1720 "y.tab.c"
    break;

  case 84: /* simple_expression: and_expression  */
#line 131 "parser.y"
                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1726 "y.tab.c"
    break;

  case 85: /* @17: %empty  */
#line 133 "parser.y"
                                              {push("&&");}
#line 1732 "y.tab.c"
    break;

  case 86: /* and_expression: and_expression AND_operator @17 unary_relation_expression  */
#line 133 "parser.y"
                                                                                       {if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 1738 "y.tab.c"
    break;

  case 87: /* and_expression: unary_relation_expression  */
#line 134 "parser.y"
                                   {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1744 "y.tab.c"
    break;

  case 88: /* @18: %empty  */
#line 136 "parser.y"
                                                       {push("!");}
#line 1750 "y.tab.c"
    break;

  case 89: /* unary_relation_expression: exclamation_operator @18 unary_relation_expression  */
#line 136 "parser.y"
                                                                                              {if(yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 1756 "y.tab.c"
    break;

  case 90: /* unary_relation_expression: regular_expression  */
#line 137 "parser.y"
                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1762 "y.tab.c"
    break;

  case 91: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 139 "parser.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 1768 "y.tab.c"
    break;

  case 92: /* regular_expression: sum_expression  */
#line 140 "parser.y"
                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1774 "y.tab.c"
    break;

  case 93: /* relational_operators: greaterthan_assignment_operator  */
#line 142 "parser.y"
                                                          {push(">=");}
#line 1780 "y.tab.c"
    break;

  case 94: /* relational_operators: lessthan_assignment_operator  */
#line 142 "parser.y"
                                                                                                       {push("<=");}
#line 1786 "y.tab.c"
    break;

  case 95: /* relational_operators: greaterthan_operator  */
#line 142 "parser.y"
                                                                                                                                            {push(">");}
#line 1792 "y.tab.c"
    break;

  case 96: /* relational_operators: lessthan_operator  */
#line 142 "parser.y"
                                                                                                                                                                            {push("<");}
#line 1798 "y.tab.c"
    break;

  case 97: /* relational_operators: equality_operator  */
#line 142 "parser.y"
                                                                                                                                                                                                            {push("==");}
#line 1804 "y.tab.c"
    break;

  case 98: /* relational_operators: inequality_operator  */
#line 142 "parser.y"
                                                                                                                                                                                                                                               {push("!=");}
#line 1810 "y.tab.c"
    break;

  case 99: /* sum_expression: sum_expression sum_operators term  */
#line 144 "parser.y"
                                                     {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 1816 "y.tab.c"
    break;

  case 100: /* sum_expression: term  */
#line 145 "parser.y"
               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1822 "y.tab.c"
    break;

  case 101: /* sum_operators: add_operator  */
#line 147 "parser.y"
                               {push("+");}
#line 1828 "y.tab.c"
    break;

  case 102: /* sum_operators: subtract_operator  */
#line 148 "parser.y"
                            {push("-");}
#line 1834 "y.tab.c"
    break;

  case 103: /* term: term MULOP factor  */
#line 150 "parser.y"
                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 1840 "y.tab.c"
    break;

  case 104: /* term: factor  */
#line 151 "parser.y"
                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1846 "y.tab.c"
    break;

  case 105: /* MULOP: multiplication_operator  */
#line 153 "parser.y"
                                  {push("*");}
#line 1852 "y.tab.c"
    break;

  case 106: /* MULOP: division_operator  */
#line 153 "parser.y"
                                                                  {push("/");}
#line 1858 "y.tab.c"
    break;

  case 107: /* MULOP: modulo_operator  */
#line 153 "parser.y"
                                                                                                 {push("%");}
#line 1864 "y.tab.c"
    break;

  case 108: /* factor: immutable  */
#line 155 "parser.y"
                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1870 "y.tab.c"
    break;

  case 109: /* factor: mutable  */
#line 156 "parser.y"
                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1876 "y.tab.c"
    break;

  case 110: /* mutable: identifier  */
#line 157 "parser.y"
                             {
	push(curid);
	if(check_id_is_func(curid))
	    {printf("Function name used as Identifier\n"); exit(8);}
	if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
	    yyval = 1;
	else
	    yyval = -1;
	}
#line 1890 "y.tab.c"
    break;

  case 111: /* mutable: array_identifier '[' expression ']'  */
#line 167 "parser.y"
        {if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
	    yyval = 1;
	else
	    yyval = -1;
	}
#line 1900 "y.tab.c"
    break;

  case 112: /* immutable: '(' expression ')'  */
#line 173 "parser.y"
                                     {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 1906 "y.tab.c"
    break;

  case 113: /* immutable: call  */
#line 174 "parser.y"
               {if(yyvsp[0]==-1) yyval=-1; else yyval=1;}
#line 1912 "y.tab.c"
    break;

  case 114: /* immutable: constant  */
#line 175 "parser.y"
                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1918 "y.tab.c"
    break;

  case 115: /* @19: %empty  */
#line 177 "parser.y"
                        {
    insertSTF(curid); 
	strcpy(currfunccall,curid);
	if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
	    yyval = 1;
	else
	    yyval = -1;
    call_params_count=0;
	}
#line 1932 "y.tab.c"
    break;

  case 116: /* call: identifier '(' @19 arguments ')'  */
#line 187 "parser.y"
        { if(strcmp(currfunccall,"printf"))
	{ 
	if(getSTparamscount(currfunccall)!=call_params_count){	
	    yyerror("Number of arguments in function call doesn't match number of parameters");
	    exit(8);
	}
	}
	callgen();
	}
#line 1946 "y.tab.c"
    break;

  case 119: /* arguments_list: arguments_list ',' exp  */
#line 198 "parser.y"
                                         { call_params_count++; }
#line 1952 "y.tab.c"
    break;

  case 120: /* arguments_list: exp  */
#line 199 "parser.y"
              { call_params_count++; }
#line 1958 "y.tab.c"
    break;

  case 121: /* exp: identifier  */
#line 201 "parser.y"
                 {arggen(1);}
#line 1964 "y.tab.c"
    break;

  case 122: /* exp: integer_constant  */
#line 201 "parser.y"
                                                 {arggen(2);}
#line 1970 "y.tab.c"
    break;

  case 123: /* exp: string_constant  */
#line 201 "parser.y"
                                                                                {arggen(3);}
#line 1976 "y.tab.c"
    break;

  case 124: /* exp: float_constant  */
#line 201 "parser.y"
                                                                                                              {arggen(4);}
#line 1982 "y.tab.c"
    break;

  case 125: /* exp: character_constant  */
#line 201 "parser.y"
                                                                                                                                                {arggen(5);}
#line 1988 "y.tab.c"
    break;

  case 126: /* constant: integer_constant  */
#line 203 "parser.y"
                                        {  insV(); codegencon(); yyval=1; }
#line 1994 "y.tab.c"
    break;

  case 127: /* constant: string_constant  */
#line 204 "parser.y"
                                {  insV(); codegencon();yyval=-1;}
#line 2000 "y.tab.c"
    break;

  case 128: /* constant: float_constant  */
#line 205 "parser.y"
                                {  insV(); codegencon();}
#line 2006 "y.tab.c"
    break;

  case 129: /* constant: character_constant  */
#line 206 "parser.y"
                            {  insV(); codegencon();yyval=1; }
#line 2012 "y.tab.c"
    break;


#line 2016 "y.tab.c"

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

#line 208 "parser.y"

extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

struct stack{
	char value[100];
	int labelvalue;
}s[100],label[100];

void push(char *x){
	strcpy(s[++top].value,x);
}
void swap(char *x, char *y){
	char temp = *x;
	*x = *y;
	*y = temp;
}
void reverse(char str[], int length){ 
    int start = 0; 
    int end = length -1; 
    while (start < end){ 
        swap((str+start), (str+end)); 
        start++; 
        end--; 
    } 
} 
char* itoa1(int num, char* str, int base){
int i = 0;
int isNegative = 0;
if (num == 0){
str[i++] = '0';
str[i] = '\0';
return str;
}
if (num < 0 && base == 10){
isNegative = 1;
num = -num;
}
while (num != 0){
int rem = num % base;str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
num = num/base;
}
if (isNegative)
str[i++] = '-';
str[i] = '\0';
reverse(str, i);
return str;
}

char* itoa2(int num, char* str, int base){
int i = 0;
int isNegative = 0;

if (num < 0 && base == 10){
isNegative = 1;
num = -num;
}
while (num != 0){
int rem = num % base;str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
num = num/base;
}
if (isNegative)
str[i++] = '-';
str[i] = '\0';
reverse(str, i);
return str;
}
void codegen(){
	strcpy(temp,"t");
	char buffer[100];
	itoa1(count,buffer,10);
	itoa2(count,buffer,10);
	strcat(temp,buffer);
	printf("%s = %s %s %s\n",temp,s[top-2].value,s[top-1].value,s[top].value);
	top = top - 2;
	strcpy(s[top].value,temp);
	count++; 
}
void codegencon(){
	strcpy(temp,"t");
	char buffer[100];
	itoa1(count,buffer,10);
	itoa2(count,buffer,10);
	strcat(temp,buffer);
	printf("%s = %s\n",temp,curval);
	push(temp);
	count++;
}
void codeassign(){
	printf("%s = %s\n",s[top-2].value,s[top].value);
	top = top - 2;
}
void label1(){
	strcpy(temp,"L");
	char buffer[100];
	itoa1(lno,buffer,10);
	itoa2(lno,buffer,10);
	strcat(temp,buffer);
	printf("IF not %s GoTo %s\n",s[top].value,temp);
	label[++ltop].labelvalue = lno++;
}
void label2(){
	strcpy(temp,"L");
	char buffer[100];
	itoa1(lno,buffer,10);
	itoa2(lno,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s\n",temp);
	strcpy(temp,"L");
	itoa1(label[ltop].labelvalue,buffer,10);
	itoa2(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;
	label[++ltop].labelvalue=lno++;
}

void label3(){
	strcpy(temp,"L");
	char buffer[100];
	itoa1(label[ltop].labelvalue,buffer,10);
	itoa2(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;	
}
void label4(){
	strcpy(temp,"L");
	char buffer[100];
	itoa1(lno,buffer,10);
	itoa2(lno,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	label[++ltop].labelvalue = lno++;
}
void label5(){
	strcpy(temp,"L");
	char buffer[100];
	itoa1(label[ltop-1].labelvalue,buffer,10);
	itoa2(label[ltop-1].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s:\n",temp);
	strcpy(temp,"L");
	itoa1(label[ltop].labelvalue,buffer,10);
itoa2(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop = ltop - 2;
}

void funcgen(){
	printf("func begin %s\n",currfunc);
}
void funcgenend(){
	printf("func end\n\n");
}
void arggen(int i){
    if(i==1)
	    printf("refparam %s\n", curid);
	else
	    printf("refparam %s\n", curval);
}
void callgen(){
	printf("refparam result\n");
	push("result");
	printf("call %s, %d\n",currfunccall,call_params_count);
}
int main(int argc , char **argv){
	yyin = fopen(argv[1], "r");
	yyparse();
	if(flag == 0){
		printf("\nStatus: Parsing Complete - Valid\n");
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
	printf("\nStatus: Parsing Failed - Invalid\n");
	exit(7);
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
