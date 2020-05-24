#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern FILE *yyin;

int main(int argc, char **argv){
    FILE *f;
    if (argc<2){
        printf("Falta archivo");
        exit(-1);
    }
    f = fopen(argv[1],"r");
    if (!f){
        printf("No se pudo abrir el archivo");
        exit(-1);
    }
    yyin = f;
    yylex();
    return 0;
}
