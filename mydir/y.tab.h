/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_MYDIR_Y_TAB_H_INCLUDED
# define YY_YY_MYDIR_Y_TAB_H_INCLUDED
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
    ABSTRACT = 258,
    STATIC = 259,
    VOID = 260,
    DIGIT = 261,
    LETTER = 262,
    WHILE = 263,
    IF = 264,
    ELSE = 265,
    ELSEIF = 266,
    RETURN = 267,
    SEMICOLON = 268,
    PLUS = 269,
    MINUS = 270,
    MUL = 271,
    DEL = 272,
    OST = 273,
    OR = 274,
    AND = 275,
    ASSIGN = 276,
    INC = 277,
    DEC = 278,
    PASSIGN = 279,
    MASSIGN = 280,
    MULASSIGN = 281,
    DASSIGN = 282,
    MORE = 283,
    LESS = 284,
    MOREA = 285,
    LESSA = 286,
    NOTASSIGN = 287,
    DOUBLEA = 288,
    LEFT = 289,
    RIGHT = 290,
    LEFTL = 291,
    RIGHTR = 292,
    LEFTS = 293,
    RIGHTS = 294,
    INT = 295,
    CHAR = 296,
    STRING = 297,
    BOOLEAN = 298,
    DOUBLE = 299,
    FLOAT = 300,
    INTMUL = 301,
    CHARMUL = 302,
    DOUBLEMUL = 303,
    FLOATMUL = 304,
    OVERRIDE = 305,
    FINAL = 306,
    CLASS = 307,
    PUBLIC = 308,
    PRIVATE = 309,
    PROTECTED = 310,
    SWITCH = 311,
    CASE = 312,
    TRY = 313,
    CATCH = 314,
    THIS = 315,
    EXTENDS = 316,
    IMPLEMENTS = 317,
    NEW = 318,
    IMPORT = 319,
    ZNAC = 320,
    POINT = 321,
    ONE = 322,
    TWO = 323,
    BYTE = 324,
    ASSERT = 325,
    BREAK = 326,
    CONTINUE = 327,
    INSTANCEOF = 328,
    INTERFACE = 329,
    THROW = 330,
    FOR = 331,
    TWOP = 332,
    DEFAULT = 333,
    SHORT = 334,
    LONG = 335,
    PACKAGE = 336,
    DOG = 337
  };
#endif
/* Tokens.  */
#define ABSTRACT 258
#define STATIC 259
#define VOID 260
#define DIGIT 261
#define LETTER 262
#define WHILE 263
#define IF 264
#define ELSE 265
#define ELSEIF 266
#define RETURN 267
#define SEMICOLON 268
#define PLUS 269
#define MINUS 270
#define MUL 271
#define DEL 272
#define OST 273
#define OR 274
#define AND 275
#define ASSIGN 276
#define INC 277
#define DEC 278
#define PASSIGN 279
#define MASSIGN 280
#define MULASSIGN 281
#define DASSIGN 282
#define MORE 283
#define LESS 284
#define MOREA 285
#define LESSA 286
#define NOTASSIGN 287
#define DOUBLEA 288
#define LEFT 289
#define RIGHT 290
#define LEFTL 291
#define RIGHTR 292
#define LEFTS 293
#define RIGHTS 294
#define INT 295
#define CHAR 296
#define STRING 297
#define BOOLEAN 298
#define DOUBLE 299
#define FLOAT 300
#define INTMUL 301
#define CHARMUL 302
#define DOUBLEMUL 303
#define FLOATMUL 304
#define OVERRIDE 305
#define FINAL 306
#define CLASS 307
#define PUBLIC 308
#define PRIVATE 309
#define PROTECTED 310
#define SWITCH 311
#define CASE 312
#define TRY 313
#define CATCH 314
#define THIS 315
#define EXTENDS 316
#define IMPLEMENTS 317
#define NEW 318
#define IMPORT 319
#define ZNAC 320
#define POINT 321
#define ONE 322
#define TWO 323
#define BYTE 324
#define ASSERT 325
#define BREAK 326
#define CONTINUE 327
#define INSTANCEOF 328
#define INTERFACE 329
#define THROW 330
#define FOR 331
#define TWOP 332
#define DEFAULT 333
#define SHORT 334
#define LONG 335
#define PACKAGE 336
#define DOG 337

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYDIR_Y_TAB_H_INCLUDED  */
