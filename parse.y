
%{
#include <stdio.h>
#include <string.h>
void yyerror(char *s);
extern int yylex();
void nuevaTemp(char *dire);
void nuevaEtiqueta(char *dire);
int temp; //Contador temporal de temporales
char temp_E[32];
%}

%union{
  char tipo[16];
  char dir[32];
}

%token PYC
%token INICIO
%token FIN
%token ESTRUCTURA
%token DEF
%token SI
%token ENTONCES
%token MIENTRAS
%token SINO
%token HACER
%token SEGUN
%token ESCRIBIR
%token DEVOLVER
%token LEER
%token TERMINAR
%token CASO
%token PRED
%token DOSP
%token O
%token Y
%token NO
%token FALSO
%token VERDADERO
%token PUNCOM
%token CORDER
%token CORIZQ
%token COMA
%token PUNTO
%left<dir> OPERADOR_RELACIONAL
%left<dir> SUM_RES
%left<dir> MUL_DIV_MOD
%token<dir> TIPO
%token<dir> ID
%token<dir> CARACTER
%token<dir> CADENA
%token<dir> NUM
%left ASIG
%nonassoc LPAR RPAR
%type<dir> programa declaraciones tipo_registro tipo base tipo_arreglo lista_var funciones argumentos lista_arg arg tipo_arg param_arr sentencias sentencia casos predeterminado e_bool relacional oprel expresion oparit variable dato_est_sim parametros lista_param L P S Q U W V N M A B C/*No terminales*/
%start programa         /*Inicio*/

%%

programa : declaraciones funciones {};
declaraciones : tipo {tipo = $1;} lista_var PYC declaraciones {}
| tipo_registro {tipo = } lista_var PYC declaraciones {} |  ;
tipo_registro : ESTRUCTURA INICIO {printf("Inicio estructura\n");} declaraciones FIN {tipo = "Estructura"; printf("Final estructura\n");};
tipo : base { $$ = $1; } tipo_arreglo {strcpy($$,$2);};
base : TIPO {$$ = $1;}
tipo_arreglo : CORIZQ {strcpy($$,"[");} NUM {strcpy($$,$1);} CORDER {strcpy($$,"]");} tipo_arreglo {}| ;
lista_var : ID L {printf("%s %s\n", tipo, $1);};
L : COMA ID {printf("%s %s\n", tipo, $2);}
funciones : DEF tipo ID LPAR argumentos {printf("arg %s\n",$6);} RPAR INICIO {printf("Inicio de funcion (%s)\n", $3);} declaraciones sentencias FIN {printf("Final de funcion (%s)\n", $3);} funciones {}
| ;
argumentos : lista_arg {$$ = $1;} | SIN {$$ = "Sin";};
lista_arg : arg M {strcpy($1," "); strcpy($1,$2); $$ = $1;};
M : COMA arg {$$ = $2;}| ;
arg : tipo_arg ID {strcpy($1," "); strcpy($1,$2); $$ = $1;};
tipo_arg : base param_arr {strcpy($1,$2); $$ = $1;};
param_arr : CORIZQ CORDER param_arr {$$ = "[]"; strcpy($$,$2);}| ;

sentencias : sentencia N {};
N : sentencia N {}| ;
sentencia : SI e_bool ENTONCES {nuevaEtiqueta($$); nuevaEtiqueta($5); printf("Si %s goto %s\n goto %s\n %s: ", $2, $$, $5, $$);} sentencia A
| MIENTRAS {nuevaEtiqueta($1); printf("%s: ", $1);} e_bool HACER {nuevaEtiqueta($$); nuevaEtiqueta($4) printf("Si %s goto %s\n goto %s\n %s: ", $2, $$, $4, $$);} sentencia {printf("goto %s\n", $1);} FIN ;
| HACER {nuevaEtiqueta($$); printf("%s: ", $$);} sentencia MIENTRAS e_bool {nuevaEtiqueta($4); printf("Si %s\n", );} PYC ;
| SEGUN LPAR variable RPAR HACER casos predeterminado FIN
| variable ASIG expresion PYC
| ESCRIBIR expresion PYC
| LEER variable PYC
| DEVOLVER B
| TERMINAR PYC
| INICIO sentencias FIN

A : FIN {printf("%s: ", $$);}| SINO {nuevaEtiqueta($3); printf("goto %s\n%s: ", $3,$$);} sentencia FIN {{printf("%s: ", $3);}};
B : PYC | expresion PYC

casos : CASO NUM DOSP sentencia casos | CASO NUM: sentencia

predeterminado : PRED DOSP sentencia | ;

e_bool : S C ;
C : O e_bool | Y e_bool | S ;
S : LPAR e_bool RPAR
| relacional {strcpy($$,$1);}
| VERDADERO {strcpy($$,$1);}
| FALSO {strcpy($$,$1);}
| NO e_bool {strcpy($$,"NO "); $$ = $2;};

relacional : expresion U ;

oprel : OPERADOR_RELACIONAL {strcpy($$,$1);};

expresion : Q SUM_RES expresion | Q ;

Q : P MUL_DIV_MOD Q | P ;

P : LPAR expresion RPAR
| variable
| NUM
| CADENA
| CARACTER
| CADENA
| ID LPAR parametros RPAR ;

variable : dato_est_sim
| arreglo ;

dato_est_sim : ID V ;
V : PUNTO ID V | ;

arreglo : ID CORIZQ expresion CORDER
| arreglo CORIZQ expresion CORDER ;

parametros : lista_param
| ;

lista_param : expresion W ;

W : COMA expresion W
| ;

%%
/* Codigo de usuario */
/*
--Nombre Funcion:
--Descripcion:
--Autor:
--Fecha de creacion:
*/
void yyerror(char *s){
    printf("Error sintactico. %s\n",s);
}

/*
--Nombre Funcion:
--Descripcion:
--Autor:
--Fecha de creacion:
*/
void nuevaTemp(char *dire){
    char t[32];
    sprintf(t, "t%d", temp++);
    strcpy (dire,t);
}

/*
--Nombre Funcion:
--Descripcion:
--Autor:
--Fecha de creacion:
*/
void nuevaEtiqueta(char *dire){
    char t[32];
    sprintf(t, "t%d", temp++);
    strcpy (dire,t);
}
