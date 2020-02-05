%{
#include <stdio.h>
#include "y.tab.h"
int cout = 1;
int c;
char a;
%}
%%
"\n" {
		cout++; 
		//printf("line:%d\n", cout1);
}
"abstract" {	
	//printf("WHILE\n");
	return ABSTRACT;
}
"default:" {	
	//printf("DEFAULT\n");
	return DEFAULT;
}
"while" {	
	//printf("WHILE\n");
	return WHILE;
}
"static" {
	//printf("STATIC\n");
	return STATIC;
}
"void" {
	//printf("IF\n");
	return VOID;
}
"short" {
	//printf("IF\n");
	return SHORT;
}
"long" {
	//printf("IF\n");
	return LONG;
}
"if" {
	//printf("IF\n");
	return IF;
}
"else" {
	return ELSE;
}
"else if" {
	return ELSEIF;
}
"return" {
	return RETURN;
}
"assert" {
	return ASSERT;
}
"break" {
	return BREAK;
}
"continue" {
	return CONTINUE;
}
"int" {
	//printf("INT");
	return INT;
}
"char" {
	return CHAR;
}
"int*" {
	return INTMUL;
}
"char*" {
	return CHARMUL;
}
"byte" {
	return BYTE;
}
"implements" {
	return IMPLEMENTS;
}
"String" {
	//printf("STRING");
	return STRING;
}
"boolean" {
	return BOOLEAN;
}
"double" {
	return DOUBLE;
}
"float" {
	return FLOAT;
}
"double*" {
	return DOUBLEMUL;
}
"float*" {
	return FLOATMUL;
}


"@" {
	return DOG;
}

"final" {
	return FINAL;
}
"instanceof" {
	return INSTANCEOF;
}
"interface" {
	return INTERFACE;
}
"class" {
	return CLASS;
}
"public" {
	//printf("PUBLIC");
	return PUBLIC;
}
"private" {
	//printf("PRIVATE");
	return PRIVATE;
}
"protected" {
	return PROTECTED;
}
"try" {
	return TRY;
}
"catch" {
	return CATCH;
}
"throw" {
	return THROW;
}
"switch" {
	//printf("SWITCH");
	return SWITCH;
}
"case" {
	return CASE;
}
"this." {
	return THIS;
}
"extends" {
	return EXTENDS;
}
"new" {
	return NEW;
}
"for" {
	//printf("FOR");
	return FOR;
}
"import" {
	return IMPORT;
}
"package" {
	return PACKAGE;
}
[A-Za-z_][A-Za-z0-9_]* {
	//yylval.str = strdup(yytext);
	//printf("LETTER\n");
	return LETTER;
}

[0-9]+ {	
	//printf(" DIGIT\n ");
	//c = yytext[0];
   // yylval.a = c - '0';
	return(DIGIT);
}
"=" {
	//printf(" ASSIGN ");
	return ASSIGN;
}
"," {
	//printf(" SEMICOLON \n");
	return ZNAC;
}
"." {
	//printf(" POINT \n");
	return POINT;
}
";" {
	//printf(" SEMICOLON \n");
	return SEMICOLON;
}

"+" {
	//printf(" PLUS \n");
	return PLUS;
}
"-" {
	//printf(" MINUS ");
	return MINUS;
}
"*" {
	//printf(" MUL\n ");
	return MUL;
}
"/" {
	//printf(" DEL ");
	return DEL;
}
"%" {
	//printf(" OST ");
	return OST;
}
"||" {
	//printf(" OR ");
	return OR;
}
"&&" {
	//printf(" AND ");
	return AND;
}
">" {
	//printf(" MORE ");
	return MORE;
}
"<" {
	//printf(" LESS ");
	return LESS;
}
">=" {
	//printf(" MORE ");
	return MOREA;
}
"<=" {
	//printf(" LESS ");
	return LESSA;
}
"!=" {
	//printf(" NOTASSIGN ");
	return NOTASSIGN;
}
"==" {
	//printf(" DOUBLEA ");
	return DOUBLEA;
}
"++" {
	//printf(" INC \n");
	return INC;
}
"--" {
	//printf(" DEC ");
	return DEC;
}
"+=" {
	//printf(" PASSIGN ");
	return PASSIGN;
}
"-=" {
	//printf(" MASSIGN ");
	return MASSIGN;
}
"*=" {
	//printf(" MULASSIGN ");
	return MULASSIGN;
}
"/=" {
	//printf(" DASSIGN ");
	return DASSIGN;
}
"(" {
	//printf(" LEFT\n ");
	return LEFT;
}
")" {
	//printf(" RIGHT \n");
	return RIGHT;
}
"{" {
	//printf(" LEFTL\n ");
	return LEFTL;
}
"}" {
	//printf(" RIGHTR\n ");
	return RIGHTR;
}
"[" {
	//printf(" LEFTL\n ");
	return LEFTS;
}
"]" {
	//printf(" RIGHTR\n ");
	return RIGHTS;
}
"'" {
	//printf(" RIGHTR\n ");
	return ONE;
}
":" {
	//printf(" RIGHTR\n ");
	return TWOP;
}
"\"" {
	//printf(" TWO\n ");
	return TWO;
}
[ \t]+
%%