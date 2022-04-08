%{
    #include <stdio.h>

	//int yyerror(char const *msg);
	int yylex(void);
	extern int yylineno;
	extern int i;
%}

%token IDENTIFIER
%token TYPE_INT
%token TYPE_BOOLEAN
%token TYPE_STRING

%token BOOLEAN_LITERAL
%token INTEGER_LITERAL
%token STRING_LITERAL

%token KEYWORD_CLASS
%token KEYWORD_PUBLIC
%token KEYWORD_MAIN
%token KEYWORD_EXTENDS
%token KEYWORD_RETURN
%token KEYWORD_IF
%token KEYWORD_ELSE
%token KEYWORD_WHILE
%token KEYWORD_PRINT
%token KEYWORD_LENGTH
%token KEYWORD_THIS
%token KEYWORD_NEW

%token PARENTHESE_OPEN
%token PARENTHESE_CLOSE
%token BRACKET_OPEN
%token BRACKET_CLOSE
%token BRACE_OPEN
%token BRACE_CLOSE

%token OP_AFFECT
%token OP_AND
%token OP_LESS
%token OP_ADD
%token OP_SUBSTRACT
%token OP_MULTIPLY
%token OP_NOT

%token SEMI_COLON
%token DOT
%token COMMA

%start Program

%%

Program		           : MainClass ClassDeclarationS
                       | MainClass
                       | error ClassDeclarationS {syntaxerror ("main class missing"); }
                       | error MainClass ClassDeclarationS {syntaxerror ("code out of class"); }
                       | MainClass error ClassDeclarationS {syntaxerror ("code out of class"); }
                       | MainClass ClassDeclarationS error {syntaxerror ("code out of class"); }
                       ;
MainClass              : KEYWORD_CLASS Identifier BRACE_OPEN KEYWORD_PUBLIC KEYWORD_MAIN PARENTHESE_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE IDENTIFIER PARENTHESE_CLOSE BRACE_OPEN MethodBody BRACE_CLOSE BRACE_CLOSE
                       | KEYWORD_CLASS Identifier BRACE_OPEN error KEYWORD_PUBLIC KEYWORD_MAIN PARENTHESE_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE IDENTIFIER PARENTHESE_CLOSE BRACE_OPEN MethodBody BRACE_CLOSE BRACE_CLOSE {syntaxerror ("public keyword missing");}
                       | KEYWORD_CLASS Identifier BRACE_OPEN error KEYWORD_MAIN PARENTHESE_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE IDENTIFIER PARENTHESE_CLOSE BRACE_OPEN MethodBody BRACE_CLOSE BRACE_CLOSE {syntaxerror ("public keyword missing");}
                       | error Identifier BRACE_OPEN KEYWORD_PUBLIC KEYWORD_MAIN PARENTHESE_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE IDENTIFIER PARENTHESE_CLOSE BRACE_OPEN MethodBody BRACE_CLOSE BRACE_CLOSE {syntaxerror ("class keyword missing"); }
                       | KEYWORD_CLASS error BRACE_OPEN KEYWORD_PUBLIC KEYWORD_MAIN PARENTHESE_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE IDENTIFIER PARENTHESE_CLOSE BRACE_OPEN MethodBody BRACE_CLOSE BRACE_CLOSE {syntaxerror ("class identifier missing"); }
                       | KEYWORD_CLASS Identifier BRACE_OPEN KEYWORD_PUBLIC KEYWORD_MAIN PARENTHESE_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE IDENTIFIER PARENTHESE_CLOSE BRACE_OPEN MethodBody error BRACE_CLOSE {syntaxerror ("closing brace missing"); }
                       | KEYWORD_CLASS Identifier BRACE_OPEN KEYWORD_PUBLIC KEYWORD_MAIN PARENTHESE_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE IDENTIFIER PARENTHESE_CLOSE BRACE_OPEN MethodBody BRACE_CLOSE error {syntaxerror ("closing brace missing"); }
                       ;
ClassDeclarationS	   : ClassDeclaration ClassDeclarationS
                       | ClassDeclaration
                       |
                       | ClassDeclaration error ClassDeclarationS {syntaxerror ("code out of class"); }
                       ;
ClassDeclaration       : KEYWORD_CLASS Identifier KEYWORD_EXTENDS Identifier BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE
                       | error Identifier KEYWORD_EXTENDS Identifier BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE {syntaxerror ("class keyword missing"); }
                       | KEYWORD_CLASS Identifier KEYWORD_EXTENDS error BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE {syntaxerror ("parent class identifier missing"); }
                       | KEYWORD_CLASS Identifier KEYWORD_EXTENDS Identifier BRACE_OPEN VarDeclarationS MethodDeclarationS error {syntaxerror ("closing brace missing"); }
                       | KEYWORD_CLASS Identifier BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE
                       | error Identifier BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE {syntaxerror ("class keyword missing"); }
                       | KEYWORD_CLASS error BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE {syntaxerror ("class identifier missing"); }
                       | KEYWORD_CLASS Identifier BRACE_OPEN VarDeclarationS MethodDeclarationS error {syntaxerror ("closing brace missing"); }
                       ;
VarDeclarationS        : VarDeclaration VarDeclarationS
                       | VarDeclaration
                       |
                       ;
VarDeclaration         : Variable SEMI_COLON
                       | Variable error {syntaxerror ("semicolon missing"); }
                       ;
VariableS              : Variable COMMA VariableS
                       | Variable
                       | Variable error VariableS {syntaxerror ("comma missing"); }
                       ;
Variable               : Type Identifier
                       | error Identifier {syntaxerror ("invalid type"); }
                       | Type error {syntaxerror ("invalid identifier"); }
                       ;
MethodDeclarationS     : MethodDeclaration MethodDeclarationS
                       | MethodDeclaration
                       |
                       | MethodDeclaration error MethodDeclarationS {syntaxerror ("code out of method"); }
                       | MethodDeclaration MethodDeclarationS error {syntaxerror ("code out of method"); }
                       ;
MethodDeclaration      : KEYWORD_PUBLIC Variable PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN MethodBody KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE
                       | error KEYWORD_PUBLIC Variable PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN MethodBody KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("public keyword missing"); }
                       | error Variable PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN MethodBody KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("public keyword missing"); }
                       | KEYWORD_PUBLIC error PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN MethodBody KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("method name missing"); }
                       | KEYWORD_PUBLIC Variable PARENTHESE_OPEN VariableS error BRACE_OPEN MethodBody KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("closing parentheses missing"); }
                       | KEYWORD_PUBLIC Variable PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN MethodBody error SEMI_COLON BRACE_CLOSE {syntaxerror ("return keyword missing"); }
                       | KEYWORD_PUBLIC Variable PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN MethodBody KEYWORD_RETURN Expression error BRACE_CLOSE {syntaxerror ("semicolon missing"); }
                       | KEYWORD_PUBLIC Variable PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN MethodBody KEYWORD_RETURN Expression SEMI_COLON error {syntaxerror ("closing brace missing"); }
                       | KEYWORD_PUBLIC Variable PARENTHESE_OPEN VariableS PARENTHESE_CLOSE error MethodBody KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("open brace missing"); }
                       ;
MethodBody             : StatementS
                       | VarDeclarationS StatementS
                       | error VarDeclarationS {syntaxerror ("variable declaration not first"); }
                       ;
Type                   : TYPE_INT BRACKET_OPEN BRACKET_CLOSE
                       | TYPE_BOOLEAN
                       | TYPE_INT
                       | TYPE_STRING
                 //      | Identifier
                       | TYPE_INT BRACKET_OPEN error {syntaxerror ("closing bracket missing"); }
                       | error BRACKET_OPEN BRACKET_CLOSE {syntaxerror ("invalid array type"); }
                       | TYPE_INT error BRACKET_CLOSE {syntaxerror ("opening bracket missing"); }
                       ;
StatementS             : Statement StatementS
                       | Statement
                       |
                       ;
Statement              : BRACE_OPEN StatementS BRACE_CLOSE
                       | BRACE_OPEN StatementS error {syntaxerror ("closing brace missing"); }
                       | error StatementS BRACE_CLOSE {syntaxerror ("opening brace missing"); }
                       | KEYWORD_IF PARENTHESE_OPEN Expression PARENTHESE_CLOSE StatementS KEYWORD_ELSE StatementS
                       | KEYWORD_IF error Expression PARENTHESE_CLOSE StatementS KEYWORD_ELSE StatementS {syntaxerror ("opening parentheses missing"); }
                       | KEYWORD_IF PARENTHESE_OPEN Expression error Statement KEYWORD_ELSE StatementS {syntaxerror ("closing parentheses missing"); }
                       | KEYWORD_IF error StatementS KEYWORD_ELSE StatementS {syntaxerror ("if condition missing"); }
                       | KEYWORD_IF PARENTHESE_OPEN Expression PARENTHESE_CLOSE StatementS
                       | KEYWORD_IF PARENTHESE_OPEN Expression error StatementS {syntaxerror ("closing parentheses missing"); }
                       | KEYWORD_IF error StatementS {syntaxerror ("if condition missing"); }
                       | KEYWORD_WHILE PARENTHESE_OPEN Expression PARENTHESE_CLOSE StatementS
                       | KEYWORD_WHILE PARENTHESE_OPEN Expression error StatementS {syntaxerror ("closing parentheses missing"); }
                       | KEYWORD_WHILE error Statement {syntaxerror ("while condition missing"); }
                       | KEYWORD_PRINT PARENTHESE_OPEN Expression PARENTHESE_CLOSE SEMI_COLON
                       | KEYWORD_PRINT PARENTHESE_OPEN Expression PARENTHESE_CLOSE error {syntaxerror ("semicolon missing"); }
                       | KEYWORD_PRINT PARENTHESE_OPEN Expression error SEMI_COLON {syntaxerror ("closing parentheses missing"); }
                       | Identifier OP_AFFECT Expression SEMI_COLON
                       | Identifier OP_AFFECT Expression error {syntaxerror ("semicolon missing"); }
                       | Identifier OP_AFFECT error SEMI_COLON {syntaxerror ("second expression missing"); }
                       | Identifier error Expression SEMI_COLON{syntaxerror ("'=' expected"); }
                       | Identifier BRACKET_OPEN Expression BRACKET_CLOSE OP_AFFECT Expression SEMI_COLON
                       | Identifier error Expression BRACKET_CLOSE OP_AFFECT Expression SEMI_COLON {syntaxerror ("opening bracket missing"); }
                       | Identifier BRACKET_OPEN Expression error OP_AFFECT Expression SEMI_COLON {syntaxerror ("closing bracket missing"); }
                       | Identifier BRACKET_OPEN Expression BRACKET_CLOSE error Expression SEMI_COLON {syntaxerror ("'=' expected"); }
                       | Identifier BRACKET_OPEN Expression BRACKET_CLOSE OP_AFFECT Expression error {syntaxerror ("semicolon missing"); }
                       ;
Expression             : INTEGER_LITERAL ExpressionComp
                       | BOOLEAN_LITERAL ExpressionComp
                       | STRING_LITERAL ExpressionComp
                       | Identifier ExpressionComp
                       | KEYWORD_THIS ExpressionComp
                       | KEYWORD_NEW TYPE_INT BRACKET_OPEN Expression BRACKET_CLOSE ExpressionComp
                       | KEYWORD_NEW TYPE_INT error Expression BRACKET_CLOSE ExpressionComp {syntaxerror ("opening bracket missing"); }
                       | KEYWORD_NEW error BRACKET_OPEN Expression BRACKET_CLOSE ExpressionComp {syntaxerror ("invalid array type"); }
                       | KEYWORD_NEW TYPE_INT BRACKET_OPEN Expression error ExpressionComp {syntaxerror ("closing bracket missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN PARENTHESE_CLOSE ExpressionComp
                       | KEYWORD_NEW error PARENTHESE_OPEN PARENTHESE_CLOSE ExpressionComp {syntaxerror ("invalid identifier"); }
                       | KEYWORD_NEW Identifier error PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN ExpressionS PARENTHESE_CLOSE ExpressionComp
                       | KEYWORD_NEW error PARENTHESE_OPEN ExpressionS PARENTHESE_CLOSE ExpressionComp {syntaxerror ("invalid identifier"); }
                       | KEYWORD_NEW Identifier error ExpressionS PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN ExpressionS error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       | OP_NOT Expression ExpressionComp
                       | PARENTHESE_OPEN Expression PARENTHESE_CLOSE ExpressionComp
                       | error Expression PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | PARENTHESE_OPEN Expression error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       ;
ExpressionComp         : Operator Expression ExpressionComp
                       | BRACKET_OPEN Expression BRACKET_CLOSE ExpressionComp
                       | BRACKET_OPEN Expression error ExpressionComp  {syntaxerror ("closing bracket missing"); }
                       | DOT KEYWORD_LENGTH ExpressionComp
                       | DOT error KEYWORD_LENGTH ExpressionComp {syntaxerror ("invalid .length"); }
                       | DOT Identifier PARENTHESE_OPEN ExpressionS PARENTHESE_CLOSE ExpressionComp
                       | DOT error PARENTHESE_OPEN ExpressionS PARENTHESE_CLOSE ExpressionComp {syntaxerror("invalid identifier"); }
                       | DOT Identifier error ExpressionS PARENTHESE_CLOSE ExpressionComp {syntaxerror("opening parentheses missing"); }
                       | DOT Identifier PARENTHESE_OPEN ExpressionS error ExpressionComp {syntaxerror("closing parentheses missing"); }
                       | DOT Identifier PARENTHESE_OPEN PARENTHESE_CLOSE ExpressionComp
                       | DOT error PARENTHESE_OPEN PARENTHESE_CLOSE ExpressionComp {syntaxerror("invalid identifier"); }
                       | DOT Identifier error PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | DOT Identifier PARENTHESE_OPEN error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       |
                       ;
ExpressionS            : Expression COMMA ExpressionS
                       | Expression
                       | Expression error ExpressionS {syntaxerror ("comma missing"); }
                       | Expression COMMA error ExpressionS {syntaxerror ("no expression after comma"); }
                       ;
Operator               : OP_ADD
                       | OP_AND
                       | OP_LESS
                       | OP_MULTIPLY
                       | OP_SUBSTRACT
                       ;
Identifier             : IDENTIFIER
                       ;



%%
/*
int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
}
*/
extern FILE *yyin;

int main(int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);
    	printf("------------------------------\n");
	if(i==0)
        printf("Compilation complete with no errors\n------------------------------\n");
    else
        printf("%d errors found\n------------------------------\n",i);
	return(1);
    return 0;
}


