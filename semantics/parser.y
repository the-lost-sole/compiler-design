%{
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	
	void yyerror(char* s);
	int yylex();
	void ins();
	void insV();
	int flag=0;
	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
	extern int currnest;
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	void push(char *s);
	void codegen();
	void codeassign();
	char* itoa1(int num, char* str, int base);
char* itoa2(int num, char* str, int base);
	void reverse(char str[], int length); 
	void swap(char*,char*);
	void label1();
	void label2();
	void label3();
	void label4();
	void label5();
	void label6();
	void codegencon();
	void funcgen();
	void funcgenend();
	void arggen();
	void callgen();

	int params_count=0;
	int call_params_count=0;
	int top = 0,count=0,ltop=0,lno=0;
	char temp[3] = "t";
%}

%nonassoc IF
%token INT CHAR FLOAT DOUBLE RETURN MAIN VOID WHILE FOR DO BREAK identifier array_identifier func_identifier integer_constant string_constant float_constant character_constant
%nonassoc ELSE
%right assignment_operator
%left OR_operator AND_operator amp_operator equality_operator inequality_operator lessthan_assignment_operator lessthan_operator greaterthan_assignment_operator greaterthan_operator leftshift_operator rightshift_operator add_operator subtract_operator multiplication_operator division_operator modulo_operator
%right exclamation_operator
%left increment_operator decrement_operator 
%start program
%%
program : declaration_list;
declaration_list    : declaration D 
D   : declaration_list
	| ;
declaration : variable_declaration 
	| function_declaration
variable_declaration    : type_specifier variable_declaration_list ';' 
variable_declaration_list	: variable_declaration_list ',' variable_declaration_identifier | variable_declaration_identifier;
variable_declaration_identifier	: identifier {insertSTnest(curid,currnest); ins();  } vdi   
	| array_identifier {insertSTnest(curid,currnest); ins();  } vdi;		
vdi : identifier_array_type | assignment_operator simple_expression  ;
identifier_array_type	: '[' initilization_params
	| ;
initilization_params	: integer_constant ']' initilization {if($$ < 1) {printf("Wrong array size\n"); exit(0);} }
	| ']' string_initilization;
initilization	: string_initilization
	| array_initialization
	| ;
type_specifier	: INT | CHAR | FLOAT  | DOUBLE
	| VOID  ;
function_declaration	: function_declaration_type function_declaration_param_statement;
function_declaration_type	: type_specifier identifier '('  { strcpy(currfunctype, curtype); strcpy(currfunc, curid); insertSTF(curid); ins(); };
function_declaration_param_statement	: {params_count=0;}params ')' {funcgen();} statement {funcgenend();};
params	: parameters_list { insertSTparamscount(currfunc, params_count); }| { insertSTparamscount(currfunc, params_count); };
parameters_list	: type_specifier parameters_identifier_list ;
parameters_identifier_list 	: param_identifier parameters_identifier_list_breakup;
parameters_identifier_list_breakup	: ',' parameters_list 
	| ;
param_identifier	: identifier { ins();insertSTnest(curid,1); params_count++; } param_identifier_breakup;
param_identifier_breakup	: '[' ']'
	| ;
statement	: expression_statment | compound_statement 
	| conditional_statements | iterative_statements 
	| return_statement | break_statement 
	| variable_declaration;
compound_statement	: {currnest++;} '{'  statment_list  '}' ;
statment_list	: statement statment_list | ;
expression_statment	: expression ';' 	| ';' ;
conditional_statements	: IF '(' simple_expression ')' {label1();if($3!=1){printf("Condition checking is not of type int\n");exit(0);}} statement {label2();}  conditional_statements_breakup;
conditional_statements_breakup	: ELSE statement {label3();}
	| {label3();};
iterative_statements 	: WHILE '(' {label4();} simple_expression ')' {label1();if($4!=1){printf("Condition checking is not of type int\n");exit(0);}} statement {label5();} 
	| FOR '(' expression ';' {label4();} simple_expression ';' {label1();if($6!=1){printf("Condition checking is not of type int\n");exit(0);}} expression ')'statement {label5();} 
	| {label4();}DO statement WHILE '(' simple_expression ')'{label1();label5();if($6!=1){printf("Condition checking is not of type int\n");exit(0);}} ';';
return_statement 
	: RETURN ';' {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
	| RETURN expression ';' { 	if(!strcmp(currfunctype, "void")){ 
	    yyerror("Function is void");
	}
    if((currfunctype[0]=='i' || currfunctype[0]=='c') && $2!=1){
	    printf("Expression doesn't match return type of function\n"); exit(0);
	}
    };

break_statement 	: BREAK ';' ;
string_initilization	: assignment_operator string_constant {insV();} ;
array_initialization	: assignment_operator '{' array_int_declarations '}';
array_int_declarations	: integer_constant array_int_declarations_breakup;
array_int_declarations_breakup	: ',' array_int_declarations 
	| ;
expression 	: mutable assignment_operator {push("=");} expression   {   
	if($1==1 && $4==1)
	    $$=1;
	else{
        $$=-1; printf("Type mismatch\n"); exit(0);} 
		codeassign();
	}
	| simple_expression {if($1 == 1) $$=1; else $$=-1;} ;


simple_expression	: simple_expression OR_operator and_expression {push("||");} {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
	| and_expression {if($1 == 1) $$=1; else $$=-1;};

and_expression	: and_expression AND_operator {push("&&");} unary_relation_expression  {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
	|unary_relation_expression {if($1 == 1) $$=1; else $$=-1;} ;

unary_relation_expression 	: exclamation_operator {push("!");} unary_relation_expression {if($2==1) $$=1; else $$=-1; codegen();} 
	| regular_expression {if($1 == 1) $$=1; else $$=-1;} ;

regular_expression 	: regular_expression relational_operators sum_expression {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
	| sum_expression {if($1 == 1) $$=1; else $$=-1;} ;
			
relational_operators 	: greaterthan_assignment_operator {push(">=");} | lessthan_assignment_operator {push("<=");} | greaterthan_operator {push(">");}| lessthan_operator {push("<");}| equality_operator {push("==");}| inequality_operator {push("!=");} ;

sum_expression 	: sum_expression sum_operators term  {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
	| term {if($1 == 1) $$=1; else $$=-1;};

sum_operators 	: add_operator {push("+");}
	| subtract_operator {push("-");} ;

term	: term MULOP factor {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
	| factor {if($1 == 1) $$=1; else $$=-1;} ;

MULOP 	: multiplication_operator {push("*");}| division_operator {push("/");} | modulo_operator {push("%");} ;

factor 	: immutable {if($1 == 1) $$=1; else $$=-1;} 
	| mutable {if($1 == 1) $$=1; else $$=-1;} ;
mutable 	: identifier {
	push(curid);
	if(check_id_is_func(curid))
	    {printf("Function name used as Identifier\n"); exit(8);}
	if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
	    $$ = 1;
	else
	    $$ = -1;
	}
	| array_identifier '[' expression ']' 
	{if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
	    $$ = 1;
	else
	    $$ = -1;
	};

immutable 	: '(' expression ')' {if($2==1) $$=1; else $$=-1;}
	| call {if($1==-1) $$=-1; else $$=1;}
	| constant {if($1==1) $$=1; else $$=-1;};

call    : identifier '('{
    insertSTF(curid); 
	strcpy(currfunccall,curid);
	if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
	    $$ = 1;
	else
	    $$ = -1;
    call_params_count=0;
	} 
	arguments ')' 
	{ if(strcmp(currfunccall,"printf"))
	{ 
	if(getSTparamscount(currfunccall)!=call_params_count){	
	    yyerror("Number of arguments in function call doesn't match number of parameters");
	    exit(8);
	}
	}
	callgen();
	};

arguments 	: arguments_list | ;
arguments_list 	: arguments_list ',' exp { call_params_count++; }  
	| exp { call_params_count++; };

exp : identifier {arggen(1);} | integer_constant {arggen(2);} | string_constant {arggen(3);} | float_constant {arggen(4);} | character_constant {arggen(5);} ;

constant 	: integer_constant 	{  insV(); codegencon(); $$=1; } 
	| string_constant	{  insV(); codegencon();$$=-1;} 
	| float_constant	{  insV(); codegencon();} 
	| character_constant{  insV(); codegencon();$$=1; };

%%
extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

struct stack{
	char value[100];
	int labelvalue;
}s[100],label[100];

void push(char *x){
	strcpy(s[++top].value,x);
}
void swap(char *x, char *y){
	char temp = *x;
	*x = *y;
	*y = temp;
}
void reverse(char str[], int length){ 
    int start = 0; 
    int end = length -1; 
    while (start < end){ 
        swap((str+start), (str+end)); 
        start++; 
        end--; 
    } 
} 
char* itoa1(int num, char* str, int base){
int i = 0;
int isNegative = 0;
if (num == 0){
str[i++] = '0';
str[i] = '\0';
return str;
}
if (num < 0 && base == 10){
isNegative = 1;
num = -num;
}
while (num != 0){
int rem = num % base;str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
num = num/base;
}
if (isNegative)
str[i++] = '-';
str[i] = '\0';
reverse(str, i);
return str;
}

char* itoa2(int num, char* str, int base){
int i = 0;
int isNegative = 0;

if (num < 0 && base == 10){
isNegative = 1;
num = -num;
}
while (num != 0){
int rem = num % base;str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
num = num/base;
}
if (isNegative)
str[i++] = '-';
str[i] = '\0';
reverse(str, i);
return str;
}
void codegen(){
	strcpy(temp,"t");
	char buffer[100];
	itoa1(count,buffer,10);
	itoa2(count,buffer,10);
	strcat(temp,buffer);
	printf("%s = %s %s %s\n",temp,s[top-2].value,s[top-1].value,s[top].value);
	top = top - 2;
	strcpy(s[top].value,temp);
	count++; 
}
void codegencon(){
	strcpy(temp,"t");
	char buffer[100];
	itoa1(count,buffer,10);
	itoa2(count,buffer,10);
	strcat(temp,buffer);
	printf("%s = %s\n",temp,curval);
	push(temp);
	count++;
}
void codeassign(){
	printf("%s = %s\n",s[top-2].value,s[top].value);
	top = top - 2;
}
void label1(){
	strcpy(temp,"L");
	char buffer[100];
	itoa1(lno,buffer,10);
	itoa2(lno,buffer,10);
	strcat(temp,buffer);
	printf("IF not %s GoTo %s\n",s[top].value,temp);
	label[++ltop].labelvalue = lno++;
}
void label2(){
	strcpy(temp,"L");
	char buffer[100];
	itoa1(lno,buffer,10);
	itoa2(lno,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s\n",temp);
	strcpy(temp,"L");
	itoa1(label[ltop].labelvalue,buffer,10);
	itoa2(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;
	label[++ltop].labelvalue=lno++;
}

void label3(){
	strcpy(temp,"L");
	char buffer[100];
	itoa1(label[ltop].labelvalue,buffer,10);
	itoa2(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;	
}
void label4(){
	strcpy(temp,"L");
	char buffer[100];
	itoa1(lno,buffer,10);
	itoa2(lno,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	label[++ltop].labelvalue = lno++;
}
void label5(){
	strcpy(temp,"L");
	char buffer[100];
	itoa1(label[ltop-1].labelvalue,buffer,10);
	itoa2(label[ltop-1].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s:\n",temp);
	strcpy(temp,"L");
	itoa1(label[ltop].labelvalue,buffer,10);
itoa2(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop = ltop - 2;
}

void funcgen(){
	printf("func begin %s\n",currfunc);
}
void funcgenend(){
	printf("func end\n\n");
}
void arggen(int i){
    if(i==1)
	    printf("refparam %s\n", curid);
	else
	    printf("refparam %s\n", curval);
}
void callgen(){
	printf("refparam result\n");
	push("result");
	printf("call %s, %d\n",currfunccall,call_params_count);
}
int main(int argc , char **argv){
	yyin = fopen(argv[1], "r");
	yyparse();
	if(flag == 0){
		printf("\nStatus: Parsing Complete - Valid\n");
		printf("%30s SYMBOL TABLE\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s CONSTANT TABLE\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}
void yyerror(char *s){
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf("\nStatus: Parsing Failed - Invalid\n");
	exit(7);
}
void ins(){
	insertSTtype(curid,curtype);
}
void insV(){
	insertSTvalue(curid,curval);
}
int yywrap(){
	return 1;
	}