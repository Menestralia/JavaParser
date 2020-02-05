TARGET=parse

all: 
	mkdir -p mydir
	yacc -d parse.yacc -o mydir/y.tab.c
	lex -o mydir/lex.yy.c parse.lex 
	cc parse.c mydir/y.tab.c mydir/lex.yy.c -I mydir -o TARGET
clean: 
	rm -rf mydir
	rm -f parse

rebuild: clean all

.PHONY: all clean rebuild