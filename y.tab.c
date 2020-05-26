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
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 43 "y.tab.c"

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
    0,   27,    1,    1,    1,   28,    2,    3,    4,    5,
    5,    6,   26,   26,   29,   30,   31,    8,    8,    9,
    9,   10,   10,   11,   12,   13,   13,   14,   14,   15,
   15,   15,   15,   15,   15,   15,   15,   15,   15,   15,
   15,   16,   16,   17,   17,   18,   18,   18,   18,   18,
   18,   19,   19,   20,   20,   20,   20,   20,   20,   20,
   21,   25,   25,   25,   22,   22,    7,    7,   23,   23,
   24,   24,
};
static const YYINT yylen[] = {                            2,
    2,    0,    5,    4,    0,    0,    5,    2,    1,    4,
    0,    2,    3,    0,    0,    0,    0,   14,    0,    1,
    1,    3,    1,    2,    2,    3,    0,    2,    0,    5,
    7,    5,    5,    8,    4,    3,    3,    2,    3,    2,
    3,    5,    4,    3,    0,    3,    3,    2,    1,    1,
    1,    3,    1,    3,    3,    3,    1,    1,    1,    1,
    2,    1,    1,    3,    3,    0,    3,    4,    1,    0,
    3,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    9,    0,    0,    0,    2,    0,    6,    0,    1,
    0,    0,    0,    0,    8,    0,    0,    0,   12,    0,
    0,    0,    0,    0,    0,    4,    0,    0,    7,    0,
   13,    3,   10,   21,    0,    0,    0,   23,    0,    0,
   25,   15,    0,   24,    0,    0,   22,   26,   16,    0,
   29,    0,   29,   17,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   28,    0,    0,    0,   51,   50,   60,
   59,   58,    0,    0,    0,    0,    0,   57,    0,    0,
    0,    0,   38,    0,    0,   40,    0,    0,    0,    0,
   61,    0,   41,   18,   48,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   36,   39,   37,    0,    0,
    0,    0,    0,    0,    0,   56,    0,    0,   47,   52,
    0,   55,    0,    0,    0,   67,   64,    0,    0,   65,
   35,   30,    0,   32,   33,    0,    0,   68,    0,    0,
    0,   31,    0,    0,    0,    0,    0,   34,    0,   44,
   42,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,    6,    7,   15,   12,   89,   10,   36,   37,
   38,   39,   41,   52,   64,  141,  145,   75,   76,   77,
   78,   90,  111,  112,   91,   19,   13,   16,   46,   50,
   67,
};
static const YYINT yysindex[] = {                      -254,
 -233,    0,    0, -215, -229,    0, -216,    0, -208,    0,
 -195, -158, -229, -159,    0, -254, -179, -171,    0, -254,
 -143, -167, -133, -166, -195,    0, -254, -216,    0, -240,
    0,    0,    0,    0, -163, -156, -151,    0, -138, -149,
    0,    0, -208,    0, -163, -113,    0,    0,    0, -254,
    0,  -89,    0,    0,  -42,  -42,  -44, -147,  -64, -247,
 -121,  -90, -203,    0, -112,  -74, -215,    0,    0,    0,
    0,    0,  -42,  -64, -212, -114, -270,    0, -130,  -82,
 -121, -230,    0, -226,  -71,    0,  -64,  -64, -118, -104,
    0,  -64,    0,    0,    0, -272,  -44,  -42,  -42,  -64,
  -64,  -64,  -44,  -42, -107,    0,    0,    0, -154, -270,
  -97,  -81,  -64,  -78, -221,    0, -255,  -83,    0,    0,
  -76,    0,  -28, -174,  -30,    0,    0,  -64,  -60,    0,
    0,    0,  -44,    0,    0,  -31, -270,    0,  -17,  -39,
  -29,    0,  -27,  -25,  -14,  -44,  -44,    0,  -31,    0,
    0,
};
static const YYINT yyrindex[] = {                         2,
    0,    0,    0,  246,    0,    0, -229,    0,    0,    0,
   -7,    0,    0,    0,    0,   -8,    0,    0,    0,    1,
    0,    0,    0,    0,   -7,    0,    1, -229,    0,    0,
    0,    0,    0,    0,  -26,    0,  -41,    0,    0,    0,
    0,    0,    0,    0,  -26,    0,    0,    0,    0,  -59,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -182,    0,    0,    0,  246,    0,    0,    0,
    0,    0,    0,    0,    0, -120, -200,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -40, -168, -135,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -275,
    0,  -38,    0,    0,    0,    0,    0, -188,    0,    0,
 -124,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -223,    0,    0,    0,
   -3,    0,    0,    0,    0,    0,    0,    0, -252,    0,
    0,
};
static const YYINT yygindex[] = {                         0,
   21,    0,  249,  -15,  233,  252,    0,  206,    0,    0,
  231,    0,  230,  223,  -54,  128,    0,  -43,  178,  -48,
  -52,    0,    0,    0,    0,  254,    0,    0,    0,    0,
    0,
};
#define YYTABLESIZE 280
static const YYINT yytable[] = {                         65,
    5,    5,   80,  132,   65,    1,   43,   72,   85,   83,
   82,   84,   79,   65,   35,  101,  102,  101,  102,   72,
   43,   34,  116,    2,    8,   96,  106,   35,  105,   95,
  107,   63,   70,   71,   72,  131,   23,    2,  109,  110,
   26,  133,  117,  115,   65,    9,   74,   32,  123,   11,
   65,   97,  121,  122,  118,  119,   53,  101,  102,   71,
  124,  101,  102,   53,  129,   53,  101,  102,   46,    2,
   51,   71,   98,   99,   66,   46,   14,   46,  139,  137,
   65,   66,  135,   66,   53,   53,   53,   18,   63,   87,
   88,  149,  150,   65,   65,   63,   46,   63,   20,   24,
   66,   66,   66,   66,   66,   66,   66,   25,   66,   66,
   98,   99,   66,   27,   63,   63,   63,   63,   63,   63,
   63,   62,   22,   63,   28,   29,   63,   30,   62,   40,
   62,   43,   54,  101,  102,  103,   49,  126,   42,   54,
   44,   54,   45,   49,   49,   49,   81,   62,   62,   62,
   62,   62,   62,   62,   98,   99,   62,   63,   54,   62,
   54,   54,   54,   54,   49,   49,   86,   54,   53,   54,
   54,   92,  100,   55,  113,   56,   57,   58,   59,   60,
   61,   62,  104,   53,   93,  108,  114,  125,   55,   63,
   56,   57,   58,   59,   60,   61,   62,  127,    5,    5,
  130,  128,   99,    5,   63,    5,    5,    5,    5,    5,
    5,    5,  102,   53,   63,   70,   71,   72,   55,    5,
   56,   57,   58,   59,   60,   61,   62,  101,  102,   74,
  134,  138,   68,   69,   63,  136,   63,   70,   71,   72,
  140,  142,  143,  144,  148,   19,  146,   73,  147,   14,
    5,   74,   27,   20,   70,   45,   69,   17,    5,    5,
   33,    5,    5,    5,   21,    5,    5,    5,    5,    5,
    5,    5,   94,   47,   48,   66,  151,  120,   31,    5,
};
static const YYINT yycheck[] = {                         52,
    0,    0,   57,  259,   57,  260,  259,  283,   61,  257,
   59,   60,   56,   66,   30,  288,  289,  288,  289,  295,
  273,  262,  295,  278,  258,   74,  257,   43,   81,   73,
  257,  279,  280,  281,  282,  257,   16,  278,   87,   88,
   20,  297,   97,   92,   97,  261,  294,   27,  103,  279,
  103,  264,  101,  102,   98,   99,  257,  288,  289,  283,
  104,  288,  289,  264,  113,  266,  288,  289,  257,  278,
   50,  295,  285,  286,  257,  264,  293,  266,  133,  128,
  133,  264,  257,  266,  285,  286,  287,  283,  257,  293,
  294,  146,  147,  146,  147,  264,  285,  266,  257,  279,
  283,  284,  285,  286,  287,  288,  289,  279,  291,  292,
  285,  286,  295,  257,  283,  284,  285,  286,  287,  288,
  289,  257,  282,  292,  292,  259,  295,  294,  264,  293,
  266,  283,  257,  288,  289,  266,  257,  292,  295,  264,
  279,  266,  292,  264,  258,  266,  294,  283,  284,  285,
  286,  287,  288,  289,  285,  286,  292,  279,  283,  295,
  285,  286,  287,  288,  285,  286,  257,  292,  258,  259,
  295,  284,  287,  263,  293,  265,  266,  267,  268,  269,
  270,  271,  265,  258,  259,  257,  291,  295,  263,  279,
  265,  266,  267,  268,  269,  270,  271,  295,  258,  259,
  279,  283,  286,  263,  279,  265,  266,  267,  268,  269,
  270,  271,  289,  258,  279,  280,  281,  282,  263,  279,
  265,  266,  267,  268,  269,  270,  271,  288,  289,  294,
  259,  292,  275,  276,  279,  266,  279,  280,  281,  282,
  272,  259,  282,  273,  259,    0,  274,  290,  274,  257,
  259,  294,  279,  295,  295,  259,  295,    9,  258,  259,
   28,  261,  261,  263,   13,  265,  266,  267,  268,  269,
  270,  271,   67,   43,   45,   53,  149,  100,   25,  279,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 297
#define YYUNDFTOKEN 331
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programa",
"programa : declaraciones funciones",
"$$1 :",
"declaraciones : tipo $$1 lista_var PYC declaraciones",
"declaraciones : tipo_registro lista_var PYC declaraciones",
"declaraciones :",
"$$2 :",
"tipo_registro : ESTRUCTURA INICIO $$2 declaraciones FIN",
"tipo : base tipo_arreglo",
"base : TIPO",
"tipo_arreglo : CORIZQ NUM CORDER tipo_arreglo",
"tipo_arreglo :",
"lista_var : ID A",
"A : COMA ID A",
"A :",
"$$3 :",
"$$4 :",
"$$5 :",
"funciones : DEF tipo ID LPAR argumentos RPAR $$3 INICIO $$4 declaraciones sentencias FIN $$5 funciones",
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
"sentencia : SI e_bool ENTONCES sentencia FIN",
"sentencia : SI e_bool ENTONCES sentencia SINO sentencia FIN",
"sentencia : MIENTRAS e_bool HACER sentencia FIN",
"sentencia : HACER sentencia MIENTRAS e_bool PYC",
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
"arreglo : arreglo CORIZQ expresion CORDER",
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
#line 159 "parse2.y"

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
#line 436 "y.tab.c"

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
#line 65 "parse2.y"
	{ printf("Aceptado\n"); }
break;
case 2:
#line 67 "parse2.y"
	{strcpy(tipos,yystack.l_mark[0].dir);}
break;
case 3:
#line 67 "parse2.y"
	{}
break;
case 4:
#line 68 "parse2.y"
	{}
break;
case 5:
#line 69 "parse2.y"
	{}
break;
case 6:
#line 71 "parse2.y"
	{printf("Inicio estructura\n");}
break;
case 7:
#line 71 "parse2.y"
	{strcpy(tipos,"Estructura"); printf("Final estructura\n");}
break;
case 8:
#line 73 "parse2.y"
	{strcat(yystack.l_mark[-1].dir,yystack.l_mark[0].dir); strcpy(yyval.dir,yystack.l_mark[-1].dir);}
break;
case 9:
#line 75 "parse2.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 10:
#line 77 "parse2.y"
	{strcpy(yyval.dir,"["); strcat(yyval.dir,yystack.l_mark[-2].dir); strcat(yyval.dir,"]"); strcat(yyval.dir,yystack.l_mark[0].dir);}
break;
case 11:
#line 78 "parse2.y"
	{}
break;
case 12:
#line 80 "parse2.y"
	{printf("%s %s\n", tipos, yystack.l_mark[-1].dir);}
break;
case 13:
#line 82 "parse2.y"
	{printf("%s %s\n", tipos, yystack.l_mark[-1].dir);}
break;
case 14:
#line 83 "parse2.y"
	{}
break;
case 15:
#line 85 "parse2.y"
	{printf("%s %s()\narg: %s\n",yystack.l_mark[-4].dir,yystack.l_mark[-3].dir,yystack.l_mark[-1].dir);}
break;
case 16:
#line 85 "parse2.y"
	{printf("Inicio de funcion (%s)\n", yystack.l_mark[-5].dir);}
break;
case 17:
#line 85 "parse2.y"
	{printf("Final de funcion (%s)\n", yystack.l_mark[-9].dir);}
break;
case 18:
#line 85 "parse2.y"
	{}
break;
case 19:
#line 86 "parse2.y"
	{}
break;
case 20:
#line 88 "parse2.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 21:
#line 89 "parse2.y"
	{strcpy(yyval.dir,"Sin");}
break;
case 22:
#line 91 "parse2.y"
	{strcpy(yyval.dir,yystack.l_mark[-2].dir); strcat(yyval.dir,", "); strcat(yyval.dir,yystack.l_mark[0].dir);}
break;
case 23:
#line 92 "parse2.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 24:
#line 94 "parse2.y"
	{strcpy(yyval.dir,yystack.l_mark[-1].dir); strcat(yyval.dir," "); strcat(yyval.dir,yystack.l_mark[0].dir);}
break;
case 25:
#line 96 "parse2.y"
	{strcpy(yyval.dir,yystack.l_mark[-1].dir); strcat(yyval.dir,yystack.l_mark[0].dir);}
break;
case 26:
#line 98 "parse2.y"
	{strcpy(yyval.dir,"[]"); strcat(yyval.dir,yystack.l_mark[0].dir);}
break;
case 27:
#line 99 "parse2.y"
	{}
break;
case 28:
#line 101 "parse2.y"
	{}
break;
case 29:
#line 102 "parse2.y"
	{}
break;
case 30:
#line 104 "parse2.y"
	{}
break;
case 31:
#line 105 "parse2.y"
	{}
break;
case 32:
#line 106 "parse2.y"
	{}
break;
case 33:
#line 107 "parse2.y"
	{}
break;
case 34:
#line 108 "parse2.y"
	{}
break;
case 35:
#line 109 "parse2.y"
	{}
break;
case 36:
#line 110 "parse2.y"
	{}
break;
case 37:
#line 111 "parse2.y"
	{}
break;
case 38:
#line 112 "parse2.y"
	{}
break;
case 39:
#line 113 "parse2.y"
	{}
break;
case 40:
#line 114 "parse2.y"
	{}
break;
case 41:
#line 115 "parse2.y"
	{}
break;
case 42:
#line 117 "parse2.y"
	{}
break;
case 43:
#line 118 "parse2.y"
	{}
break;
case 44:
#line 120 "parse2.y"
	{}
break;
case 45:
#line 121 "parse2.y"
	{}
break;
case 46:
#line 123 "parse2.y"
	{}
break;
case 47:
#line 124 "parse2.y"
	{}
break;
case 48:
#line 125 "parse2.y"
	{}
break;
case 49:
#line 126 "parse2.y"
	{}
break;
case 50:
#line 127 "parse2.y"
	{}
break;
case 51:
#line 128 "parse2.y"
	{}
break;
case 52:
#line 130 "parse2.y"
	{}
break;
case 53:
#line 131 "parse2.y"
	{}
break;
case 54:
#line 133 "parse2.y"
	{}
break;
case 55:
#line 134 "parse2.y"
	{}
break;
case 56:
#line 135 "parse2.y"
	{}
break;
case 57:
#line 136 "parse2.y"
	{}
break;
case 58:
#line 137 "parse2.y"
	{}
break;
case 59:
#line 138 "parse2.y"
	{}
break;
case 60:
#line 139 "parse2.y"
	{}
break;
case 61:
#line 141 "parse2.y"
	{}
break;
case 62:
#line 143 "parse2.y"
	{}
break;
case 63:
#line 144 "parse2.y"
	{}
break;
case 64:
#line 145 "parse2.y"
	{}
break;
case 65:
#line 147 "parse2.y"
	{}
break;
case 66:
#line 148 "parse2.y"
	{}
break;
case 67:
#line 150 "parse2.y"
	{}
break;
case 68:
#line 151 "parse2.y"
	{}
break;
case 69:
#line 153 "parse2.y"
	{}
break;
case 70:
#line 154 "parse2.y"
	{}
break;
case 71:
#line 156 "parse2.y"
	{}
break;
case 72:
#line 157 "parse2.y"
	{}
break;
#line 923 "y.tab.c"
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
