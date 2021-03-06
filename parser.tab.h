
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     RETURN = 260,
     WHILE = 261,
     INT = 262,
     VOID = 263,
     LBracket = 264,
     RBracket = 265,
     LBrace = 266,
     RBrace = 267,
     Quote = 268,
     LSB = 269,
     RSB = 270,
     COMMA = 271,
     SEMI = 272,
     NEWLINE = 273,
     ASSIGN = 274,
     BLANK = 275,
     AND = 276,
     OR = 277,
     DIV = 278,
     MULTI = 279,
     PLUS = 280,
     MINUS = 281,
     NE = 282,
     CAND = 283,
     COR = 284,
     EQ = 285,
     SE = 286,
     BE = 287,
     S = 288,
     B = 289,
     NUMBER = 290,
     ID = 291
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 34 "parser.y"

     char* name;                /* terminal token: for symbol's name */
     int value;                 /* terminal token: for number */
     struct symbol sym;         /* unterminal token: symbol */
     struct ASTNode* node;      /* unterminal token: abstract syntax tree node */
 


/* Line 1676 of yacc.c  */
#line 97 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


