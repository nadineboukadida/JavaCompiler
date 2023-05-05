
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
     MAIN = 292,
     ADD = 293,
     SUB = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


