flex miniJava.l
bison -d miniJava.y
gcc -o miniJava.exe miniJava.tab.c lex.yy.c 