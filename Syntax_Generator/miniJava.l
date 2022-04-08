%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <math.h>
 #include "miniJava.tab.h"

	int i=0;

 void yyerror(char const *msg);
 void lexicerror (int type, const char *msg);
 void syntaxerror (const char *str);
%}

%option yylineno

Delimiter                       [ \t]
bl                              {Delimiter}+

Number                          [0-9]
Letter                          [a-zA-Z]
Error_character                 .

Boolean                         True|False
Integer                         {Number}+
String                          \"([^"\n]|\"\")+\"
Error_string                    \"([^"\n]|\"\")+
Identifier                      ({Letter}|"_")({Letter}|{Number}|"_")*
Error_identifier                {Number}({Letter}|{Number}|"_")*

Parenthese_open                 (\()
Parenthese_close                (\))
Bracket_open                    (\[)
Bracket_close                   (\])
Brace_open                      (\{)
Brace_close                     (\})

Comment_block                   "/*"([^*]|\*+[^*/])*\*+"/"
Comment_line                    "//".*\n
Error_comment                   \/\*([^(\*\/)]|\n)*

%%

"class"                               return KEYWORD_CLASS;
"public"                              return KEYWORD_PUBLIC;
"static void main"                    return KEYWORD_MAIN;
"extends"                             return KEYWORD_EXTENDS;
"return"                              return KEYWORD_RETURN;
"if"                                  return KEYWORD_IF;
"else"                                return KEYWORD_ELSE;
"while"                               return KEYWORD_WHILE;
"System.out.println"                  return KEYWORD_PRINT;
"length"                              return KEYWORD_LENGTH;
"this"                                return KEYWORD_THIS;
"new"                                 return KEYWORD_NEW;

"int"                                 return TYPE_INT;
"boolean"                             return TYPE_BOOLEAN;
"String"                              return TYPE_STRING;

{Boolean}							  return BOOLEAN_LITERAL;
{Integer}                             return INTEGER_LITERAL;
{String}							  return STRING_LITERAL;
{Identifier}                          return IDENTIFIER;

{Parenthese_open}                     return PARENTHESE_OPEN;
{Parenthese_close}                    return PARENTHESE_CLOSE;
{Bracket_open}                        return BRACKET_OPEN;
{Bracket_close}                       return BRACKET_CLOSE;
{Brace_open}                          return BRACE_OPEN;
{Brace_close}                         return BRACE_CLOSE;

"="	                                  return OP_AFFECT;
"&&"                                  return OP_AND;
"<"                                   return OP_LESS;
"+"                                   return OP_ADD;
"-"                                   return OP_SUBSTRACT;
"*"                                   return OP_MULTIPLY;
"!"                                   return OP_NOT;

";"                                   return SEMI_COLON;
"."                                   return DOT;
","                                   return COMMA;

{bl}                                  /* no actions */
"\n"			                      /* no actions */

{Comment_line}         				  /* no actions */
{Comment_block}         		      /* no actions */

{Error_identifier}                    {lexicerror(1,"illegal identifier");}
{Error_comment}                    	  {lexicerror(2,"unclosed comment");}
{Error_string}                    	  {lexicerror(2,"unclosed string");}
{Error_character}                     {lexicerror(1,"illegal character");}
%%

/*
int main(int argc, char *argv[])
{
     yyin = fopen(argv[1], "r");
     yylex();
     fclose(yyin);
}
*/

void yyerror(const char *str)
{
    i++;

    /*if(str[0]=='s'){
        char errstr[1000];
        char linestr[20];
        strncpy(errstr, str, 12);
        errstr[12] = '\0';
        sprintf(linestr," on line %d",yylineno);
        strcat(errstr, linestr);
        strcat(errstr, str + 12);
        errstr[0]='S';
        strcpy(str,errstr);
    }*/
    fprintf(stderr,"#  %s\n",str);
}

void lexicerror (int type, const char *msg){
    char errstr[1000];
    switch (type){
    case 1:
        sprintf(errstr,"Lexical error on line %d, %s '%s'",yylineno,msg,yytext);
        break;
    case 2:
        sprintf(errstr,"Lexical error on line %d, %s",yylineno,msg);
        break;
    }
    yyerror(errstr);
}

void syntaxerror (const char *str){
    char errstr[1000];
    sprintf(errstr,"Syntax error on line %d, %s",yylineno,str);
    yyerror(errstr);
}

int yywrap()
{

}

