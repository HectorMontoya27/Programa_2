%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
void error(char *s);

%}

%option yylineno
%option noyywrap

/* PALABRAS RESERVADAS */
estructura [eE][sS][tT][rR][uU][cC][tT][uU][rR][aA]
inicio [iI][nN][iI][cC][iI][oO]
fin [Ff][Ii][Nn]
ent [Ee][Nn][Tt]
real [Rr][Ee][Aa][Ll]
dreal [Dd][Rr][Ee][Aa][Ll]
car [Cc][Aa][Rr]
sin [Ss][In][Nn]
def [Dd][Ee][Ff]
si [Ss][Ii]
entonces [Ee][Nn][Tt][Oo][Nn][Cc][Ee][Ss]
mientras [Mm][Ii][Ee][Nn][Tt][Rr][Aa][Ss]
sino [sS][iI][nN][oO]
hacer [hH][aA][cC][eE][rR]
segun [sS][eE][gG][uU][nN]
escribir [eE][sS][cC][rR][iI][bB][iI][rR]
devolver [dD][eE][vV][oO][lL][vV][eE][rR]
leer [lL][eE][eE][rR]
terminar [Tt][Ee][Rr][Mm][Nn][Aa][Ll]
caso [Cc][Aa][Ss][Oo]
pred [Pp][Rr][Ee][dD]
o [oO]
y [Yy]
no [Nn][Oo]
verdadero[Vv][Ee][Rr][Dd][Aa][Dd][Ee][Rr][Oo]
falso [Ff][Aa][Ll][Ss][Oo]
/* OTROS */
identificador [a-zA-Z_][a-zA-Z_0-9]*
cadena \“[a-zA-Z][a-zA-Z]+\”
asignacion ":="
num [0-9]+
caracter ‘[a-zA-Z]’
/* OPERADORES */
operador_relacional ">"|"<"|">="|"<="|"="|"<>"
operadores_aritmeticos "+"|"-"|"*"|"/"|"%"
boleano {verdadero}|{falso}
parentesis_abre "("
parentesis_cierra ")"
corchete_abre "["
corchete_cierra "]"
signo_puntiacion ";"|"."|":"|","
comentarios "/*"([^*/])*"*/"
palabras_reservadas {estructura}|{inicio}|{fin}|{ent}|{real}|{dreal}|{car}|{sin}|{def}|{si}|{entonces}|{mientras}|{sino}|{hacer}|{segun}|{escribir}|{devolver}|{leer}|{terminar}|{caso}|{pred}|{no}|{y}|{o}
espacios [ \t\n\r]+

%%

{palabras_reservadas} {printf("Encontre una palabra reservada: %s\n", yytext);}
{identificador} {printf("Encontre un identificador: %s\n", yytext);}
{cadena} {printf("Encontre una cadena: %s\n", yytext);}
{caracter} {printf("Encontre un caracter: %s\n", yytext);}
{num} {printf("Encontre un numero: %s\n", yytext);}
{asignacion} {printf("Encontre una asignacion: %s\n", yytext);}
{operador_relacional} {printf("Encontre un operador relacional: %s\n", yytext);}
{operadores_aritmeticos} {printf("Encontre un operador aritmetico: %s\n", yytext);}
{operadores_logicos} {printf("Encontre un operador logico: %s\n", yytext);}
{boleano} {printf("Encontre un boleano: %s\n", yytext);}
{parentesis_abre} {printf("Encontre un parentesis que abre: %s\n", yytext);}
{parentesis_cierra} {printf("Encontre un parentesis que cierra: %s\n", yytext);}
{corchete_abre} {printf("Encontre un corchete que abre: %s\n", yytext);}
{corchete_cierra} {printf("Encontre un corchete que cierra: %s\n", yytext);}
{signo_puntiacion} {printf("Encontre un signo de puntuacion: %s\n", yytext);}
{espacios} {/* Espacios en blanco */}
{comentarios} {/* Cometarios */}
. {error(yytext);}

%%

/*

*/
void error(char *s){
    printf("Error lexico: %s, en la linea %d\n",s,yylineno);
}
