
%{
#include <stdio.h>
#include <string.h>
void yyerror(char *s);
extern int yylex();
void nuevaTemp(char *dire);
void nuevaEtiqueta(char *dire);
int temp, temp2; //Contador temporal de temporales
char temp_E[32];
char tipos[32];
%}

%union{
  char dir[64];
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
%token COMA
%token PUNTO
%token SIN
%token CORDER
%token CORIZQ
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
%type<dir> programa declaraciones tipo_registro tipo base tipo_arreglo lista_var arreglo funciones argumentos lista_arg arg tipo_arg param_arr sentencias sentencia casos predeterminado e_bool relacional expresion variable dato_est_sim parametros lista_param L P S Q U W V N M A B C D F E G H/*No terminales*/
%start programa         /*Inicio*/

%%

programa : declaraciones funciones {};

declaraciones : tipo {strcpy(tipos,$1);} lista_var PYC declaraciones {}
| tipo_registro lista_var PYC declaraciones {} | {};

tipo_registro : ESTRUCTURA INICIO {printf("Inicio estructura\n");} declaraciones FIN {strcpy(tipos,"Estructura"); printf("Final estructura\n");};

tipo : base {strcpy($$,$1);} tipo_arreglo {strcat($$,$2);};

base : TIPO {strcpy($$,$1);}

tipo_arreglo : CORIZQ {strcat($$,"[");} NUM {strcat($$,$2);} CORDER {strcat($$,"]");} tipo_arreglo {strcat($$,$4);}| {};

lista_var : ID L {printf("%s %s\n", tipos, $1);};

L : COMA ID {printf("%s %s\n", tipos, $2);}

funciones : DEF tipo ID LPAR argumentos {printf("arg %s\n",$5);} RPAR INICIO {printf("Inicio de funcion (%s)\n", $3);} declaraciones sentencias FIN {printf("Final de funcion (%s)\n", $3);} funciones {} | {};

argumentos : lista_arg {strcpy($$,$1);} | SIN {strcpy($$,"Sin");};

lista_arg : arg M {strcat($1," "); strcat($1,$2); strcpy($$,$1);};

M : COMA arg {strcpy($$,$2);}| {};

arg : tipo_arg ID {strcat($1," "); strcat($1,$2); strcpy($$,$1);};

tipo_arg : base param_arr {strcat($1,$2); strcpy($$,$1);};

param_arr : CORIZQ CORDER param_arr {strcpy($$,"[]"); strcat($$,$3);}| {};

sentencias : sentencia N {};

N : sentencia N {}| {};

sentencia : SI e_bool ENTONCES {nuevaEtiqueta($$); strcpy(temp_E,$$); nuevaEtiqueta($$); printf("Si %s goto %s\ngoto %s\n%s: ", $2, temp_E, $$, temp_E);} sentencia {printf("%s: ",$$);} A {}
| MIENTRAS {nuevaEtiqueta($$); printf("%s: ", $$);} e_bool HACER {nuevaEtiqueta(temp_E); printf("Si %s goto %s \n", $2, temp_E); nuevaEtiqueta($2); printf("goto %s\n%s: ", $2, temp_E);} sentencia FIN {printf("goto %s\n %s: ", $$, $2);};
| HACER {nuevaEtiqueta($$); printf("%s: ", $$);} sentencia MIENTRAS e_bool {printf("Si %s goto %s\n", $5, $$);} PYC {};
| SEGUN LPAR variable RPAR HACER casos predeterminado FIN {}
| variable ASIG expresion PYC {printf("%s = %s\n", $1, $3);}
| ESCRIBIR expresion PYC {printf("Escribir %s\n", $2);}
| LEER variable PYC {printf("Leer %s\n", $2);}
| DEVOLVER B {printf("Delvolver %s\n", $2);}
| TERMINAR PYC {printf("Terminar\n");}
| INICIO sentencias FIN {};

A : FIN {}| SINO {nuevaEtiqueta($$); printf("goto %s\n", $$);} sentencia FIN {printf("%s: ", $$);};

B : PYC {}| expresion PYC {strcpy($$,$1);};

casos : CASO NUM DOSP sentencia D {};

D : casos {}| {};

predeterminado : PRED DOSP sentencia {}| {};

e_bool : S C {nuevaTemp($$); printf("%s = %s %s\n", $$, $1, $2);};

C : O e_bool {strcat($$,"o "); strcat($$,$2);}
| Y e_bool {strcat($$,"y "); strcpy($$,$2);}
| S {strcpy($$,$1);};

S : LPAR e_bool RPAR {strcpy($$,$2);}
| relacional {strcpy($$,$1);}
| VERDADERO {strcpy($$,"verdadero");}
| FALSO {strcpy($$,"falso");}
| NO e_bool {strcat($$,"NO "); strcpy($$,$2);};

relacional : expresion U {nuevaTemp($$); printf("%s = %s %s\n", $$, $1, $2);} ;

U : OPERADOR_RELACIONAL expresion U {strcat($1," "); strcat($1,$2); strcpy($$,$1);} | {};

expresion : Q E {nuevaTemp($$); printf("%s = %s %s\n", $1, $2);};

E : SUM_RES expresion {strcpy($$,$1); strcat($$,$2);}| {};

Q : P G {nuevaTemp($$); printf("%s = %s %s\n", $1, $2);};

G : MUL_DIV_MOD Q {strcpy($$,$1); strcat($$,$2);} | {};

P : LPAR expresion RPAR {strcpy($$,$2);}
| NUM {strcpy($$,$1);}
| CADENA {strcpy($$,$1);}
| CARACTER {strcpy($$,$1);}
| ID V;

V : LPAR parametros RPAR {} | H {};

variable : ID H {};

H : dato_est_sim {}
| arreglo {};

dato_est_sim : PUNTO ID dato_est_sim {}| {};

arreglo : CORIZQ expresion CORDER F {};

F : CORIZQ expresion CORDER F {strcat($$,"["); strcat($$,$2); strcat($$,"]"); strcat($$,$4);} | {};

parametros : lista_param {strcpy($$,$1);}| {};

lista_param : expresion W {strcat($1,$2); strcpy($$,$1);};

W : COMA expresion W {strcat($$,", "); strcat($$,$2); strcat($$,$3);} | {};

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
--Ultima modificacion: 24 Mayo 2020
*/
void nuevaEtiqueta(char *dire){
    char L[32];
    sprintf(L, "L%d", temp2++);
    strcpy (dire,L);
}
