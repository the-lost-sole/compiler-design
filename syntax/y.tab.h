/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
