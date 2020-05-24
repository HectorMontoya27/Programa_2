
%{
#include <stdio.h>
#include <string.h>
void yyerror(char *s);
extern int yylex();
void nuevaTemp(char *dire);
void nuevaEtiqueta(char *dire);
int temp, temp2; //Contador temporal de temporales
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
%type<dir> programa declaraciones tipo_registro tipo base tipo_arreglo lista_var funciones argumentos lista_arg arg tipo_arg param_arr sentencias sentencia casos predeterminado e_bool relacional oprel expresion oparit variable dato_est_sim parametros lista_param L P S Q U W V N M A B C D F/*No terminales*/
%start programa         /*Inicio*/

%%

programa : declaraciones funciones {};

declaraciones : tipo {tipo = $1;} lista_var PYC declaraciones {}
| tipo_registro lista_var PYC declaraciones {} | {};

tipo_registro : ESTRUCTURA INICIO {printf("Inicio estructura\n");} declaraciones FIN {tipo = "Estructura"; printf("Final estructura\n");};

tipo : base {strcpy($$,$1);} tipo_arreglo {strcat($$,$2);};

base : TIPO {strcpy($$,$1);}

tipo_arreglo : CORIZQ {strcat($$,"[");} NUM {strcat($$,$2);} CORDER {strcat($$,"]");} tipo_arreglo {strcat($$,$4);}| {};

lista_var : ID L {printf("%s %s\n", tipo, $1);};

L : COMA ID {printf("%s %s\n", tipo, $2);}

funciones : DEF tipo ID LPAR argumentos {printf("arg %s\n",$5);} RPAR INICIO {printf("Inicio de funcion (%s)\n", $3);} declaraciones sentencias FIN {printf("Final de funcion (%s)\n", $3);} funciones {} | {};

argumentos : lista_arg {strcpy($$,$1);} | SIN {$$ = "Sin";};

lista_arg : arg M {strcat($1," "); strcat($1,$2); strcpy($$,$1);};

M : COMA arg {strcpy($$,$2);}| {};

arg : tipo_arg ID {strcat($1," "); strcat($1,$2); strcpy($$,$1);};

tipo_arg : base param_arr {strcat($1,$2); strcpy($$,$1);};

param_arr : CORIZQ CORDER param_arr {strcpy($$,"[]"); strcat($$,$3);}| {};

sentencias : sentencia N {};

N : sentencia N {}| {};

sentencia : SI e_bool ENTONCES {nuevaEtiqueta($$); nuevaEtiqueta($5); printf("Si %s goto %s\n goto %s\n %s: ", $2, $$, $5, $$);} sentencia A
| MIENTRAS {nuevaEtiqueta($1); printf("%s: ", $1);} e_bool HACER {nuevaEtiqueta($$); nuevaEtiqueta($4) printf("Si %s goto %s\n goto %s\n %s: ", $2, $$, $4, $$);} sentencia {printf("goto %s\n", $1);} FIN ;
| HACER {nuevaEtiqueta($$); printf("%s: ", $$);} sentencia MIENTRAS e_bool {nuevaEtiqueta($4); printf("Si %s\n", );} PYC ;
| SEGUN LPAR variable RPAR HACER casos predeterminado FIN {}
| variable ASIG expresion PYC {printf("%s = %s\n", $1, $3);}
| ESCRIBIR expresion PYC {printf("Escribir %s\n", $2);}
| LEER variable PYC {printf("Leer %s\n", $2);}
| DEVOLVER B {printf("Delvolver %s\n", $2);}
| TERMINAR PYC {printf("Terminar\n");}
| INICIO sentencias FIN {};

A : FIN {printf("%s: ", $$);}| SINO {nuevaEtiqueta($3); printf("goto %s\n%s: ", $3,$$);} sentencia FIN {{printf("%s: ", $3);}};

B : PYC | expresion PYC {strcpy($$,$1);};

casos : CASO NUM DOSP sentencia ;

D : casos | ;

predeterminado : PRED DOSP sentencia | ;

e_bool : S C {nuevaTemp($$); printf("%s = %s %s\n", $$, $1, $2);};

C : O e_bool {strcat($1,$2); strcpy($$,$1);}
| Y e_bool {strcat($1,$2); strcpy($$,$1);}
| S {strcpy($$,$1);};

S : LPAR e_bool RPAR {strcpy($$,$2);}
| relacional {strcpy($$,$1);}
| VERDADERO {strcpy($$,$1);}
| FALSO {strcpy($$,$1);}
| NO e_bool {strcat($$,"NO "); strcpy($$,$2);};

relacional : expresion U {nuevaTemp($$); printf("%s = %s %s\n", $$, $1, $2);} ;

U : oprel relacional U {strcat($1," "); strcat($1,$2); strcpy($$,$1);} | ;

oprel : OPERADOR_RELACIONAL {strcpy($$,$1);};

expresion : Q SUM_RES expresion {nuevaTemp($$); printf("%s = %s %s %s\n", $$, $1, $2, $3);}
| Q {strcpy($$,$1);};

Q : P MUL_DIV_MOD Q {nuevaTemp($$); printf("%s = %s %s %s\n", $$, $1, $2, $3);}
| P {strcpy($$,$1);};

P : LPAR expresion RPAR {strcpy($$,$2);}
| variable {strcpy($$,$1);}
| NUM {strcpy($$,$1);}
| CADENA {strcpy($$,$1);}
| CARACTER {strcpy($$,$1);}
| CADENA {strcpy($$,$1);}
| ID LPAR parametros RPAR {strcat($1,"("); strcat($1,$3); strcat($1,")"); strcpy($$,$1);};

variable : dato_est_sim {strcpy($$,$1);}
| arreglo {strcpy($$,$1);};

dato_est_sim : ID V {strcpy($1,$2); strcpy($$,$1);};

V : PUNTO ID V {strcpy($2,$3); strcpy($$,"."); strcpy($$,$2);}| ;

arreglo : ID CORIZQ expresion CORDER F {strcat($1,"["); strcat($1,$2); strcat($1,$3); strcat($1,$4); strcpy($$,$1);};

F : CORIZQ expresion CORDER F {strcat($$,"["); strcat($$,$2); strcat($$,$3); strcat($$,$4);} | ;

parametros : lista_param {strcpy($$,$1);}| ;

lista_param : expresion W {strcat($1,$2); strcpy($$,$1);};

W : COMA expresion W {strcat($$,", "); strcat($$,$2); strcat($$,$3);} | ;

%%
/*
--Nombre Funcion: yyerror()
--Descripcion: Funcion para mandar un mensaje de error sintactico
--Autor: El profesor
--Fecha de creacion: Desconocido
*/
void yyerror(char *s){
    printf("Error sintactico. %s\n",s);
}

/*
--Nombre Funcion: nuevaTemp
--Descripcion: Funcion para crear una nueva temporal
--Autor: El profesor
--Fecha de creacion: Desconocido
*/
void nuevaTemp(char *dire){
    char t[32];
    sprintf(t, "t%d", temp++);
    strcpy (dire,t);
}

/*
--Nombre Funcion: nuevaEtiqueta()
--Descripcion: Funacion para crear una nuava Etiqueta
--Autor: Héctor Montoya Pérez
--Fecha de creacion: 23 Mayo 2020
*/
void nuevaEtiqueta(char *dire){
    char t[32];
    sprintf(t, "t%d", temp2++);
    strcpy (dire,t);
}
