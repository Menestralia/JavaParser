%{
#include<stdio.h>
#include "y.tab.h"
extern int cout;
void yyerror()
{
	printf("\nError\nnum str - %d\n",cout);
}
int yywrap()
{
  printf("OK\n");
  return(1);
}
%}

%start import

%token ABSTRACT
%token STATIC
%token VOID
%token DIGIT
%token LETTER
%token WHILE 
%token IF 
%token ELSE 
%token ELSEIF 
%token RETURN 
%token SEMICOLON
%token PLUS
%token MINUS
%token MUL
%token DEL
%token OST
%token OR
%token AND
%token ASSIGN
%token INC DEC
%token PASSIGN
%token MASSIGN
%token MULASSIGN
%token DASSIGN
%token MORE
%token LESS
%token MOREA
%token LESSA
%token NOTASSIGN
%token DOUBLEA
%token LEFT
%token RIGHT
%token LEFTL
%token RIGHTR
%token LEFTS
%token RIGHTS
%token INT
%token CHAR
%token STRING
%token BOOLEAN
%token DOUBLE
%token FLOAT
%token INTMUL
%token CHARMUL
%token DOUBLEMUL
%token FLOATMUL
%token OVERRIDE
%token FINAL
%token CLASS
%token PUBLIC
%token PRIVATE
%token PROTECTED
%token SWITCH
%token CASE
%token TRY
%token CATCH
%token THIS
%token EXTENDS
%token IMPLEMENTS
%token NEW
%token IMPORT
%token ZNAC
%token POINT
%token ONE
%token TWO
%token BYTE
%token ASSERT
%token BREAK
%token CONTINUE
%token INSTANCEOF
%token INTERFACE
%token THROW
%token FOR
%token TWOP
%token DEFAULT
%token SHORT
%token LONG
%token PACKAGE
%token DOG
%%
import:
		IMPORT LETTER plet SEMICOLON import
		|
		PACKAGE LETTER plet SEMICOLON import
		|
		list
		;
		
plet:
	POINT MUL
	|
	POINT LETTER
	|
	POINT LETTER plet
	;
		
list:       

         |
        list condition
         ;
		 
condition:
		|
		LEFTL list RIGHTR
		|
		CLASS LETTER  incond condition
		|
		threep CLASS LETTER  incond condition
		|
		CLASS LETTER EXTENDS LETTER POINT LETTER incond condition
		|
		CLASS LETTER EXTENDS LETTER incond condition
		|
		CLASS LETTER forclassinh incond condition
		|
		INTERFACE LETTER  incond condition
		|
		threep INTERFACE LETTER  incond condition
		|
		INTERFACE LETTER forclassinh incond condition
		|
		threep CLASS LETTER forclassinh incond condition
		|
		threep CLASS LETTER EXTENDS LETTER incond condition
		|
		threep CLASS LETTER EXTENDS LETTER POINT LETTER incond condition
		|
		ABSTRACT CLASS LETTER  incond condition
		|
		threep ABSTRACT CLASS LETTER  incond condition
		|
		ABSTRACT CLASS LETTER forclassinh incond condition
		|
		threep ABSTRACT CLASS LETTER forclassinh incond condition
		;
listt:       

         |
        listt incond
         ;	
incond:
		|
		LEFTL listt RIGHTR
		|
		CLASS LETTER  incond 
		|
		threep CLASS LETTER  incond 
		|
		CLASS LETTER forclassinh incond 
		|
		threep CLASS LETTER forclassinh incond
		|
		threep type LETTER SEMICOLON
		|
		threep type expr_in_cond
		|
		threep STATIC type LETTER SEMICOLON
		|
		threep STATIC type expr_in_cond
		|
		threep STATIC type type LETTER SEMICOLON
		|
		threep STATIC type type expr_in_cond
		|
		threep STATIC type LETTER LETTER SEMICOLON
		|
		threep STATIC type LETTER expr_in_cond
		|
		threep STATIC type type LETTER LETTER SEMICOLON
		|
		threep STATIC type type LETTER expr_in_cond
		|
		type LETTER SEMICOLON
		|
		FINAL type LETTER SEMICOLON
		|
		LETTER plett SEMICOLON
		|
		LETTER plett SEMICOLON
		|
		type FINAL LETTER SEMICOLON
		|
		THIS LETTER LEFT paramet RIGHT 
		|
		type THIS expr_in_cond
		|
		type expr_in_cond
		|
		type FINAL expr_in_cond
		|
		FINAL type expr_in_cond
		|
		LETTER LETTER SEMICOLON
		|
		type LEFTS  RIGHTS LETTER SEMICOLON
		|
		LETTER LEFTS  RIGHTS LETTER SEMICOLON
		|
		type LEFTS  RIGHTS expr_in_cond
		|
		LETTER expr_in_cond
		|
		LETTER LEFTS  RIGHTS expr_in_cond
		|
		LETTER LEFT paramet RIGHT SEMICOLON
		|
		DOG LETTER method incond
		|
		method incond 
		|
		THIS expr_in_cond
		|
		expr_in_cond
		|
		ASSERT expr SEMICOLON
		|
		ifelse
		|
		whilee
		|
		forr
		|
		switchcase
		|
		TRY incond catches
		|
		THROW NEW LETTER LEFT RIGHT SEMICOLON
		|
		THROW NEW LETTER LEFT paramet RIGHT SEMICOLON
		|
		THROW LETTER
		|
		RETURN SEMICOLON
		|
		RETURN diglet
		|
		RETURN expr
		|
		RETURN LETTER plett
		|
		RETURN LETTER LEFT paramet RIGHT plett
		|
		BREAK SEMICOLON
		|
		CONTINUE SEMICOLON
		|
		SEMICOLON incond
		;

catches:
	CATCH LEFT param RIGHT incond catches
	|
	CATCH LEFT param RIGHT incond
	;
paramet:
	|
	LETTER plett
	|
	LETTER LEFTS DIGIT RIGHTS
	|
	LETTER LEFTS LETTER RIGHTS
	|
	LETTER INSTANCEOF LETTER
	|
	expr
	|
	expr ZNAC paramet
	|
	LEFTL method incond RIGHTR
	|
	NEW LETTER LEFT RIGHT
	|
	NEW LETTER LEFT paramet RIGHT
	|
	NEW LETTER LEFT RIGHT ZNAC paramet
	|
	NEW LETTER LEFT paramet RIGHT ZNAC paramet
	|
	TWO symbols TWO 
	|
	TWO ciclesym TWO 
	|
	ONE symbols ONE
	|
	TWO symbols TWO ZNAC paramet
	|
	TWO ciclesym TWO ZNAC paramet
	|
	ONE symbols ONE ZNAC paramet
	|
	LETTER POINT LETTER
	|
	LETTER POINT LETTER ZNAC paramet
	|
	namepp ZNAC paramet
	|
	namepp
	;
namepp:
	|
	DIGIT
	|
	LETTER
	|
	LETTER LEFTS RIGHTS
	|
	ONE LETTER ONE
	|
	LEFT type RIGHT LETTER
	|
	LEFT type RIGHT LETTER LEFTS RIGHTS
	|
	LEFT type RIGHT ONE LETTER ONE
	;
type:
	INTMUL
	|
	LETTER
	|
	LETTER plett
	|
	CHARMUL
	|
	DOUBLEMUL
	|
	FLOATMUL
	|
	BYTE
	|
	FINAL
	|
	SHORT
	|
	LONG
	|
	INT
	|
	CHAR
	|
	STRING
	|
	BOOLEAN
	|
	DOUBLE
	|
	FLOAT
	
	;
threep:
	PRIVATE
	|
	PROTECTED
	|
	PUBLIC
	
	;
forclassinh:
	EXTENDS LETTER forclassinh
	|
	IMPLEMENTS LETTER forclassinh
	|
	IMPLEMENTS LETTER plet forclassinh
	|
	EXTENDS LETTER plet forclassinh
	|
	EXTENDS LETTER LESS types MORE
	|
	EXTENDS LETTER LESS MORE
	|
	IMPLEMENTS LETTER
	|
	IMPLEMENTS LETTER plet
	|
	EXTENDS LETTER plet LESS  MORE
	|
	EXTENDS LETTER plet LESS types MORE
	;
types:
		LETTER ZNAC types
		|
		type ZNAC types
		|
		VOID ZNAC types
		|
		LETTER
		|
		type
		|
		VOID
		;

method:
	
	|
	type name LEFT RIGHT
	|
	threep type name LEFT  RIGHT
	|
	threep name LEFT  RIGHT
	|
	type name LEFT param RIGHT
	|
	threep type name LEFT param RIGHT
	|
	threep name LEFT param RIGHT
	|
	VOID name LEFT RIGHT
	|
	threep VOID name LEFT  RIGHT
	|
	threep name LEFT  RIGHT
	|
	VOID name LEFT param RIGHT
	|
	threep VOID name LEFT param RIGHT
	|
	threep name LEFT param RIGHT
	|
	STATIC type name LEFT RIGHT
	|
	threep STATIC type name LEFT  RIGHT
	|
	threep name LEFT  RIGHT
	|
	STATIC type name LEFT param RIGHT
	|
	threep STATIC type name LEFT param RIGHT
	|
	threep name LEFT param RIGHT
	|
	STATIC VOID name LEFT RIGHT
	|
	threep STATIC VOID name LEFT  RIGHT
	|
	threep name LEFT  RIGHT
	|
	STATIC VOID name LEFT param RIGHT
	|
	threep STATIC VOID name LEFT param RIGHT
	|
	threep name LEFT param RIGHT
	;

name:
	LETTER
	|
	LETTER DIGIT
	;
param:
	|
	type LEFTS RIGHTS namep ZNAC param
	|
	type namep ZNAC param
	|
	type LEFTS RIGHTS namep
	|
	type namep
	|
	LETTER LEFTS RIGHTS namep ZNAC param
	|
	LETTER namep ZNAC param
	|
	LETTER LEFTS RIGHTS namep
	|
	LETTER namep
	;
namep:
	|
	LETTER
	|
	LETTER LEFTS RIGHTS
	;
ciclesym:
	symbols ciclesym
	|
	symbols
	;
symbols:
	TWOP
	|
	" "
	|
	DIGIT
	|
	LETTER
	|
	LETTER " "
	|
	ASSIGN
	|
	ZNAC
	|
	SEMICOLON
	|
	PLUS
	|
	MINUS
	|
	MUL
	|
	POINT
	|
	DEL
	|
	OST
	|
	OR
	|
	AND
	|
	MORE
	|
	LESS
	|
	MOREA
	|
	LESSA
	|
	NOTASSIGN
	|
	DOUBLEA
	|
	INC
	|
	DEC
	|
	PASSIGN
	|
	MASSIGN
	|
	MULASSIGN
	|
	DASSIGN
	|
	LEFT
	|
	RIGHT
	|
	LEFTL
	|
	RIGHTR
	|
	LEFTS
	|
	RIGHTS
	|
	ONE
	;
	
plett:
	|
	POINT LETTER LEFTS DIGIT RIGHTS plett
	|
	POINT LETTER LEFT paramet RIGHT plett
	|
	POINT LETTER plett
	;	
		
expr_in_cond:
		LETTER ASSIGN LETTER LEFTS DIGIT RIGHTS
		|
		LETTER ASSIGN LETTER LEFTS DIGIT RIGHTS plett
		|
		LETTER ASSIGN LETTER POINT LETTER LEFT  RIGHT plett
		|
		LETTER ASSIGN LETTER POINT LETTER LEFT paramet RIGHT plett
		|
		LETTER ASSIGN LETTER POINT LETTER 
		|
		LETTER ASSIGN TWO ciclesym TWO 
		|
		LETTER ASSIGN ONE symbols ONE 
		|
		LETTER ASSIGN NEW LETTER plett
		|
		LETTER ASSIGN NEW LETTER LEFT RIGHT plett
		|
		LETTER ASSIGN NEW LETTER LEFT paramet RIGHT plett
		|
		LETTER ASSIGN MINUS INC LETTER 
		|
		LETTER ASSIGN MINUS DEC LETTER 
		|
		LETTER ASSIGN MINUS LETTER INC 
		|
		LETTER ASSIGN MINUS LETTER DEC 
		|
		LETTER ASSIGN MINUS LETTER 
		|
		LETTER ASSIGN expr 
		|
		LETTER ASSIGN LETTER INC 
		|
		LETTER ASSIGN LETTER DEC 
		|
		LETTER ASSIGN INC LETTER 
		|
		LETTER ASSIGN DEC LETTER
		|
		LETTER INC 
		|
		LETTER DEC 
		|
		INC LETTER 
		|
		DEC LETTER 
		|
		LETTER PASSIGN incdecletexpr
		|
		LETTER MASSIGN incdecletexpr
		|
		LETTER MULASSIGN incdecletexpr
		|
		LETTER DASSIGN incdecletexpr
		;
incdecletexpr:
		diglet
		|
		expr 
		|
		INC LETTER 
		|
		DEC LETTER 
		|
		LETTER DEC 
		|
		LETTER INC 
		;
diglet:
		DIGIT 
		|
		LETTER 
		;	
		
forr:
		FOR LEFT infor RIGHT incond
	;
infor:
		first SEMICOLON second  SEMICOLON third
		
	;
first:
	|
	LETTER ASSIGN LETTER ZNAC first
	|
	LETTER ASSIGN DIGIT ZNAC first
	|
	type LETTER ASSIGN LETTER ZNAC first
	|
	type LETTER ASSIGN DIGIT ZNAC first
	|
	LETTER ASSIGN DIGIT
	|
	type LETTER ASSIGN DIGIT
	|
	LETTER ASSIGN LETTER
	|
	type LETTER ASSIGN LETTER
	;
second:
	whilee_expr
	
	;
third:
	|
	expr_in_cond ZNAC third
	|
	expr_in_cond
	;
	
switchcase:
		SWITCH LEFT LETTER RIGHT LEFTL cases defaultt RIGHTR
incase:       

        |
        incase incond
		|
		incond
         ;	
cases:
		CASE TWO symbols TWO TWOP  incase cases
		|
		CASE ONE symbols ONE TWOP incase cases
		|
		CASE LETTER TWOP  incase cases
		| 
		CASE DIGIT TWOP  incase cases
		|
		CASE  TWO symbols TWO TWOP incond
		|
		CASE ONE symbols ONE TWOP  incond
		|
		CASE LETTER TWOP incond 
		| 
		CASE DIGIT TWOP incond
		;
		

defaultt:
	 DEFAULT incond
	 ;
whilee:        WHILE LEFT whilee_expr RIGHT incond ;
whilee_expr:
					
					cy_expr
					| 
					cy_expr DOUBLEA expr 
					| 
					cy_expr NOTASSIGN expr 
					| 
					cy_expr LESSA expr 
					| 
					cy_expr MOREA expr 
					| 
					cy_expr MORE expr 
					| 
					cy_expr LESS expr 
					;
cy_expr:
			LEFT cy_expr LEFT 
			| 
			cy_expr ASSIGN cy_expr  
			| 
			cy_expr MINUS cy_expr 
			| 
			cy_expr PLUS cy_expr 
			| 
			cy_expr MUL cy_expr 
			| 
			cy_expr DEL cy_expr 
			| 
			cy_expr OST cy_expr 
			| 
			DIGIT 
			| 
			LETTER 
			;
ifelse:

		if_expr else_if_expr else_expr 
		| 
		if_expr else_if_expr
		|
		if_expr else_expr 
		| 
		if_expr	
		;

if_expr:

	     IF LEFT ifff_expr RIGHT incond
	     ;
		 
		 
else_if_expr:

	    else_if_expr else_if_expr 
	    | 
		ELSEIF LEFT ifff_expr RIGHT incond 
	    ;

else_expr:
	    ELSE incond
		;
		
ifff_expr:	
		
			|
			LETTER LEFT paramet RIGHT
			|
			expr
			| 
			expr DOUBLEA expr 
			| 
			expr NOTASSIGN expr 
			| 
			expr LESSA expr 
			|
			expr MOREA expr 
			| 
			expr MORE expr 
			| 
			expr LESS expr 
			;

expr:
		
		LEFT expr RIGHT
		|
		expr ASSIGN expr
		|
		expr PLUS expr
		|
		expr MINUS expr
		|
		expr OR expr
		|
		expr AND expr
		|
		expr MUL expr
		|
		expr DEL expr
		|
		expr OST expr
		|
		expr MORE expr
		|
		expr LESS expr
		|
		expr MOREA expr
		|
		expr LESSA expr
		|
		expr DOUBLEA expr
		|
		expr NOTASSIGN expr
		|
		LETTER LEFT paramet RIGHT
		|
		LETTER POINT LETTER LEFT paramet RIGHT
		|
		LETTER plett
		|
		TWO symbols TWO
		|
		TWO ciclesym TWO
		|
		ONE symbols ONE
		|
		LETTER
        |
		DIGIT
        ;
%%