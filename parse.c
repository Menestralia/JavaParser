#include<stdio.h>
#include "y.tab.h"

int main()
{
	extern FILE *yyin;
	yyin = fopen("test.z","r");
	yyparse();
	fclose(yyin);
	return 0;
}
