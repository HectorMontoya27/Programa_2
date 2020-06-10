/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20170430

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parse2.y"

#include <stdio.h>
#include <string.h>
void yyerror(char *s);
extern int yylex();
void nuevaTemp(char *dire);
void nuevaEtiqueta(char *dire);
int temp, temp2; /*Contador temporal de temporales*/
char temp_E[32];
char tipos[32];
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 14 "parse2.y"
typedef union{
  char dir[64];
  int base;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 44 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define PYC 257
#define INICIO 258
#define FIN 259
#define ESTRUCTURA 260
#define DEF 261
#define SIN 262
#define SI 263
#define ENTONCES 264
#define MIENTRAS 265
#define HACER 266
#define SEGUN 267
#define ESCRIBIR 268
#define DEVOLVER 269
#define LEER 270
#define TERMINAR 271
#define CASO 272
#define PRED 273
#define DOSP 274
#define FALSO 275
#define VERDADERO 276
#define PUNCOM 277
#define TIPO 278
#define ID 279
#define CARACTER 280
#define CADENA 281
#define NUM 282
#define COMA 283
#define ASIG 284
#define O 285
#define Y 286
#define OPERADOR_RELACIONAL 287
#define SUM_RES 288
#define MUL_DIV_MOD 289
#define NO 290
#define PUNTO 291
#define CORDER 292
#define CORIZQ 293
#define LPAR 294
#define RPAR 295
#define SIT 296
#define SINO 297
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    2,    3,   26,    4,    4,    5,
   25,   25,    7,    7,    8,    8,    9,    9,   10,   11,
   12,   12,   13,   13,   14,   14,   14,   14,   14,   14,
   14,   14,   14,   14,   14,   14,   15,   15,   16,   16,
   17,   17,   17,   17,   17,   17,   18,   18,   19,   19,
   19,   19,   19,   19,   19,   20,   24,   24,   24,   21,
   21,    6,    6,   22,   22,   23,   23,
};
static const YYINT yylen[] = {                            2,
    2,    4,    4,    0,    4,    2,    1,    4,    0,    2,
    3,    0,   11,    0,    1,    1,    3,    1,    2,    2,
    3,    0,    2,    0,    5,    7,    5,    5,    8,    4,
    3,    3,    2,    3,    2,    3,    5,    4,    3,    0,
    3,    3,    2,    1,    1,    1,    3,    1,    3,    3,
    3,    1,    1,    1,    1,    2,    1,    1,    3,    3,
    0,    3,    4,    1,    0,    3,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    7,    0,    0,    0,    0,    0,    0,    0,    1,
    0,    0,    0,    0,    6,    0,    0,    0,   10,    0,
    0,    0,    5,    0,    0,    3,    2,    0,    0,   11,
    8,   16,    0,    0,   18,    0,    0,    0,    0,   19,
    0,   20,    0,   17,    0,   24,   21,    0,   24,    0,
    0,    0,   24,    0,    0,    0,    0,    0,    0,   23,
    0,    0,   13,   46,   45,   55,   54,   53,    0,    0,
    0,    0,    0,   52,    0,    0,    0,    0,   33,    0,
    0,   35,    0,    0,   58,    0,   56,    0,   36,   43,
    0,   24,    0,    0,    0,    0,    0,   24,    0,    0,
   31,   34,   32,    0,    0,    0,    0,    0,    0,   51,
    0,    0,   42,   47,    0,   50,    0,    0,    0,    0,
   59,    0,   60,   30,   25,   24,   27,   28,    0,   63,
    0,    0,    0,    0,   26,    0,    0,    0,    0,    0,
   29,    0,   39,   37,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,    6,   15,   12,   85,   10,   33,   34,   35,
   36,   42,   48,   60,  134,  138,   71,   72,   73,   74,
   86,  106,  107,   87,   19,    7,
};
static const YYINT yysindex[] = {                      -254,
 -243,    0,    0, -205, -261, -261, -211, -254, -216,    0,
 -219, -172, -164, -185,    0, -157, -174, -165,    0, -254,
 -254, -159,    0, -166, -219,    0,    0, -211, -191,    0,
    0,    0, -160, -146,    0, -138, -147, -114, -216,    0,
 -144,    0, -254,    0, -147,    0,    0,  -80,    0, -205,
   47,   47,    0, -134,  -33, -247, -129,  -94, -273,    0,
 -110,  -61,    0,    0,    0,    0,    0,    0,   47,  -33,
 -226,  -95, -266,    0, -218,   31, -129, -252,    0, -246,
  -64,    0,  -33,  -33,    0,  -97,    0,  -33,    0,    0,
 -189,    0,   47,   47,  -33,  -33,  -33,    0,   47, -118,
    0,    0,    0, -149, -266, -100,  -87,  -79, -231,    0,
 -193,  -85,    0,    0,  -78,    0,  -42, -105,  -54,  -74,
    0,  -33,    0,    0,    0,    0,    0,    0,  -59,    0,
 -266,  -27,  -68,  -58,    0,  -52,  -41,  -39,   46,   46,
    0,  -59,    0,    0,
};
static const YYINT yyrindex[] = {                         2,
    0,    0,    0,  230,    0,    0,  -45,  -24,    0,    0,
  -12,    0,    0,    0,    0,    0,    0,    0,    0,    1,
    1,    0,    0,    0,  -12,    0,    0,  -45,    0,    0,
    0,    0,    0,  -40,    0,    0,  -29,    0,    0,    0,
    0,    0,   16,    0,  -29,    0,    0,    0,    0,  230,
    0,    0,    0,    0,    0,    0,    0,    0, -176,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -168, -115,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -38,    0, -163,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -264,    0,  -37,    0,    0,    0,
    0,  -82,    0,    0, -119,    0,    0,    0,    0, -130,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -200,    0,    0,   -8,    0,    0,    0,    0,    0,    0,
    0, -229,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   -4,    0,  244,  226,  250,  145,  223,    0,    0,  237,
    0,  232,  -46,   -9,  136,    0,  -44,  193,  -43,  -48,
    0,    0,    0,    0,  265,   22,
};
#define YYTABLESIZE 341
static const YYINT yytable[] = {                         61,
    4,    4,   62,   16,  101,    1,   76,   75,   81,   79,
  102,   78,   80,   61,    8,   26,   27,   11,   67,   83,
   84,   96,   97,    2,   90,  124,   91,   61,  100,   38,
   67,   59,   66,   67,   68,   96,   97,   92,   46,  104,
  105,   96,   97,   38,  109,  111,   70,   98,  112,  113,
   37,  117,  115,  116,  118,    9,   96,   97,   93,   94,
   37,    2,   61,   18,   49,  125,   93,   94,   61,   51,
   32,   52,   53,   54,   55,   56,   57,   58,  131,  132,
   61,   14,   66,   61,   20,   59,    2,   61,   44,   61,
   61,   61,   21,   57,   66,   44,   22,   44,   96,   97,
   57,   23,   57,  126,   24,  110,   61,   61,   61,   61,
   61,   61,   61,   25,   61,   61,   44,   44,   61,   57,
   57,   57,   57,   57,   57,   57,   62,   29,   57,  142,
  143,   57,   28,   62,   38,   62,   39,   49,   96,   97,
   40,   48,  120,   43,   49,   41,   49,   45,   48,   59,
   48,  128,   62,   62,   62,   62,   62,   62,   62,   77,
   98,   62,   82,   49,   62,   49,   49,   49,   49,   48,
   48,   48,   49,   88,   41,   49,  119,   49,   50,   93,
   94,   41,   51,   41,   52,   53,   54,   55,   56,   57,
   58,   95,  103,  108,  121,  122,   49,   89,   59,  123,
   94,   51,   41,   52,   53,   54,   55,   56,   57,   58,
   97,  129,  133,  136,  137,   49,  127,   59,   83,  141,
   51,  139,   52,   53,   54,   55,   56,   57,   58,   14,
   49,  135,  140,    9,    4,   51,   59,   52,   53,   54,
   55,   56,   57,   58,   12,   59,   66,   67,   68,   22,
   40,   59,   17,   31,   15,   13,   65,   64,    4,    4,
   70,    4,    4,    4,  130,    4,    4,    4,    4,    4,
    4,    4,   63,    4,    4,   44,   47,  144,    4,    4,
    4,    4,    4,    4,    4,    4,    4,  114,   49,   30,
    0,    0,    0,   51,    4,   99,   53,   54,   55,   56,
   57,   58,    0,   49,    0,    0,    0,    0,   51,   59,
   52,   53,   54,   55,   56,   57,   58,    0,    0,    0,
    0,   64,   65,    0,   59,   59,   66,   67,   68,    0,
    0,    0,    0,    0,    0,    0,   69,    0,    0,    0,
   70,
};
static const YYINT yycheck[] = {                         48,
    0,    0,   49,    8,  257,  260,   53,   52,   57,  257,
  257,   55,   56,   62,  258,   20,   21,  279,  283,  293,
  294,  288,  289,  278,   69,  257,   70,   76,   77,  259,
  295,  279,  280,  281,  282,  288,  289,  264,   43,   83,
   84,  288,  289,  273,   88,   92,  294,  266,   93,   94,
   29,   98,   96,   97,   99,  261,  288,  289,  285,  286,
   39,  278,  111,  283,  258,  259,  285,  286,  117,  263,
  262,  265,  266,  267,  268,  269,  270,  271,  122,  126,
  257,  293,  283,  132,  257,  279,  278,  264,  257,  266,
  139,  140,  257,  257,  295,  264,  282,  266,  288,  289,
  264,  259,  266,  297,  279,  295,  283,  284,  285,  286,
  287,  288,  289,  279,  291,  292,  285,  286,  295,  283,
  284,  285,  286,  287,  288,  289,  257,  294,  292,  139,
  140,  295,  292,  264,  295,  266,  283,  257,  288,  289,
  279,  257,  292,  258,  264,  293,  266,  292,  264,  279,
  266,  257,  283,  284,  285,  286,  287,  288,  289,  294,
  266,  292,  257,  283,  295,  285,  286,  287,  288,  285,
  286,  287,  292,  284,  257,  295,  295,  258,  259,  285,
  286,  264,  263,  266,  265,  266,  267,  268,  269,  270,
  271,  287,  257,  291,  295,  283,  258,  259,  279,  279,
  286,  263,  285,  265,  266,  267,  268,  269,  270,  271,
  289,  266,  272,  282,  273,  258,  259,  279,  293,  259,
  263,  274,  265,  266,  267,  268,  269,  270,  271,    0,
  258,  259,  274,  279,  259,  263,  279,  265,  266,  267,
  268,  269,  270,  271,  257,  279,  280,  281,  282,  279,
  259,  279,    9,   28,  295,    6,  295,  295,  258,  259,
  294,  261,  261,  263,  120,  265,  266,  267,  268,  269,
  270,  271,   50,  258,  259,   39,   45,  142,  263,  279,
  265,  266,  267,  268,  269,  270,  271,   95,  258,   25,
   -1,   -1,   -1,  263,  279,  265,  266,  267,  268,  269,
  270,  271,   -1,  258,   -1,   -1,   -1,   -1,  263,  279,
  265,  266,  267,  268,  269,  270,  271,   -1,   -1,   -1,
   -1,  275,  276,   -1,  279,  279,  280,  281,  282,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  290,   -1,   -1,   -1,
  294,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 297
#define YYUNDFTOKEN 326
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"PYC","INICIO","FIN","ESTRUCTURA",
"DEF","SIN","SI","ENTONCES","MIENTRAS","HACER","SEGUN","ESCRIBIR","DEVOLVER",
"LEER","TERMINAR","CASO","PRED","DOSP","FALSO","VERDADERO","PUNCOM","TIPO","ID",
"CARACTER","CADENA","NUM","COMA","ASIG","O","Y","OPERADOR_RELACIONAL","SUM_RES",
"MUL_DIV_MOD","NO","PUNTO","CORDER","CORIZQ","LPAR","RPAR","SIT","SINO",0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programa",
"programa : declaraciones funciones",
"declaraciones : tipo lista_var PYC declaraciones",
"declaraciones : tipo_registro lista_var PYC declaraciones",
"declaraciones :",
"tipo_registro : ESTRUCTURA INICIO declaraciones FIN",
"tipo : base tipo_arreglo",
"base : TIPO",
"tipo_arreglo : CORIZQ NUM CORDER tipo_arreglo",
"tipo_arreglo :",
"lista_var : ID A",
"A : COMA ID A",
"A :",
"funciones : DEF tipo ID LPAR argumentos RPAR INICIO declaraciones sentencias FIN funciones",
"funciones :",
"argumentos : lista_arg",
"argumentos : SIN",
"lista_arg : lista_arg COMA arg",
"lista_arg : arg",
"arg : tipo_arg ID",
"tipo_arg : base param_arr",
"param_arr : CORIZQ CORDER param_arr",
"param_arr :",
"sentencias : sentencias sentencia",
"sentencias :",
"sentencia : SI e_bool ENTONCES sentencias FIN",
"sentencia : SI e_bool ENTONCES sentencias SINO sentencias FIN",
"sentencia : MIENTRAS e_bool HACER sentencias FIN",
"sentencia : HACER sentencias MIENTRAS e_bool PYC",
"sentencia : SEGUN LPAR variable RPAR HACER casos predeterminado FIN",
"sentencia : variable ASIG expresion PYC",
"sentencia : ESCRIBIR expresion PYC",
"sentencia : LEER variable PYC",
"sentencia : DEVOLVER PYC",
"sentencia : DEVOLVER expresion PYC",
"sentencia : TERMINAR PYC",
"sentencia : INICIO sentencias FIN",
"casos : CASO NUM DOSP sentencia casos",
"casos : CASO NUM DOSP sentencia",
"predeterminado : PRED DOSP sentencia",
"predeterminado :",
"e_bool : e_bool O e_bool",
"e_bool : e_bool Y e_bool",
"e_bool : NO e_bool",
"e_bool : relacional",
"e_bool : VERDADERO",
"e_bool : FALSO",
"relacional : relacional OPERADOR_RELACIONAL relacional",
"relacional : expresion",
"expresion : expresion SUM_RES expresion",
"expresion : expresion MUL_DIV_MOD expresion",
"expresion : LPAR expresion RPAR",
"expresion : variable",
"expresion : NUM",
"expresion : CADENA",
"expresion : CARACTER",
"variable : ID variable_comp",
"variable_comp : dato_est_sim",
"variable_comp : arreglo",
"variable_comp : LPAR parametros RPAR",
"dato_est_sim : dato_est_sim PUNTO ID",
"dato_est_sim :",
"arreglo : CORIZQ expresion CORDER",
"arreglo : CORIZQ expresion CORDER arreglo",
"parametros : lista_param",
"parametros :",
"lista_param : lista_param COMA expresion",
"lista_param : expresion",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 161 "parse2.y"

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
#line 439 "y.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
case 1:
#line 67 "parse2.y"
	{  printf("Aceptado\n"); }
break;
case 2:
#line 69 "parse2.y"
	{}
break;
case 3:
#line 70 "parse2.y"
	{}
break;
case 4:
#line 71 "parse2.y"
	{}
break;
case 5:
#line 73 "parse2.y"
	{}
break;
case 6:
#line 75 "parse2.y"
	{}
break;
case 7:
#line 77 "parse2.y"
	{}
break;
case 8:
#line 79 "parse2.y"
	{}
break;
case 9:
#line 80 "parse2.y"
	{}
break;
case 10:
#line 82 "parse2.y"
	{}
break;
case 11:
#line 84 "parse2.y"
	{}
break;
case 12:
#line 85 "parse2.y"
	{}
break;
case 13:
#line 87 "parse2.y"
	{}
break;
case 14:
#line 88 "parse2.y"
	{}
break;
case 15:
#line 90 "parse2.y"
	{}
break;
case 16:
#line 91 "parse2.y"
	{}
break;
case 17:
#line 93 "parse2.y"
	{}
break;
case 18:
#line 94 "parse2.y"
	{}
break;
case 19:
#line 96 "parse2.y"
	{}
break;
case 20:
#line 98 "parse2.y"
	{}
break;
case 21:
#line 100 "parse2.y"
	{}
break;
case 22:
#line 101 "parse2.y"
	{}
break;
case 23:
#line 103 "parse2.y"
	{}
break;
case 24:
#line 104 "parse2.y"
	{}
break;
case 25:
#line 106 "parse2.y"
	{}
break;
case 26:
#line 107 "parse2.y"
	{}
break;
case 27:
#line 108 "parse2.y"
	{}
break;
case 28:
#line 109 "parse2.y"
	{}
break;
case 29:
#line 110 "parse2.y"
	{}
break;
case 30:
#line 111 "parse2.y"
	{}
break;
case 31:
#line 112 "parse2.y"
	{}
break;
case 32:
#line 113 "parse2.y"
	{}
break;
case 33:
#line 114 "parse2.y"
	{}
break;
case 34:
#line 115 "parse2.y"
	{}
break;
case 35:
#line 116 "parse2.y"
	{}
break;
case 36:
#line 117 "parse2.y"
	{}
break;
case 37:
#line 119 "parse2.y"
	{}
break;
case 38:
#line 120 "parse2.y"
	{}
break;
case 39:
#line 122 "parse2.y"
	{}
break;
case 40:
#line 123 "parse2.y"
	{}
break;
case 41:
#line 125 "parse2.y"
	{}
break;
case 42:
#line 126 "parse2.y"
	{}
break;
case 43:
#line 127 "parse2.y"
	{}
break;
case 44:
#line 128 "parse2.y"
	{}
break;
case 45:
#line 129 "parse2.y"
	{}
break;
case 46:
#line 130 "parse2.y"
	{}
break;
case 47:
#line 132 "parse2.y"
	{}
break;
case 48:
#line 133 "parse2.y"
	{}
break;
case 49:
#line 135 "parse2.y"
	{}
break;
case 50:
#line 136 "parse2.y"
	{}
break;
case 51:
#line 137 "parse2.y"
	{}
break;
case 52:
#line 138 "parse2.y"
	{}
break;
case 53:
#line 139 "parse2.y"
	{}
break;
case 54:
#line 140 "parse2.y"
	{}
break;
case 55:
#line 141 "parse2.y"
	{}
break;
case 56:
#line 143 "parse2.y"
	{}
break;
case 57:
#line 145 "parse2.y"
	{}
break;
case 58:
#line 146 "parse2.y"
	{}
break;
case 59:
#line 147 "parse2.y"
	{}
break;
case 60:
#line 149 "parse2.y"
	{}
break;
case 61:
#line 150 "parse2.y"
	{}
break;
case 62:
#line 152 "parse2.y"
	{}
break;
case 63:
#line 153 "parse2.y"
	{}
break;
case 64:
#line 155 "parse2.y"
	{}
break;
case 65:
#line 156 "parse2.y"
	{}
break;
case 66:
#line 158 "parse2.y"
	{}
break;
case 67:
#line 159 "parse2.y"
	{}
break;
#line 906 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
