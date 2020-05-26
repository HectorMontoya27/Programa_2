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
    0,    1,    1,    1,    2,    3,    4,    5,    5,    6,
   26,   26,    8,    8,    9,    9,   10,   10,   11,   12,
   13,   13,   14,   14,   15,   15,   15,   15,   15,   15,
   15,   15,   15,   15,   15,   15,   16,   16,   17,   17,
   18,   18,   18,   18,   18,   18,   19,   19,   20,   20,
   20,   20,   20,   20,   20,   21,   25,   25,   25,   22,
   22,    7,    7,   23,   23,   24,   24,
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
    8,   16,    0,    0,    0,   18,    0,    0,   20,    0,
    0,   19,    0,    0,   17,   21,   24,    0,   24,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   23,
    0,    0,   13,   46,   45,   55,   54,   53,    0,    0,
    0,    0,    0,   52,    0,    0,    0,    0,   33,    0,
    0,   35,    0,    0,    0,    0,   56,    0,   36,   43,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   31,   34,   32,    0,    0,    0,    0,    0,    0,    0,
   51,    0,    0,   42,   47,    0,   50,    0,    0,    0,
   62,   59,    0,    0,   60,   30,   25,    0,   27,   28,
    0,    0,   63,    0,    0,    0,   26,    0,    0,    0,
    0,    0,   29,    0,   39,   37,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,    6,    7,   15,   12,   85,   10,   34,   35,
   36,   37,   39,   48,   60,  136,  140,   71,   72,   73,
   74,   86,  106,  107,   87,   19,
};
static const YYINT yysindex[] = {                      -254,
 -250,    0,    0, -240, -253, -253, -224, -254, -212,    0,
 -198, -151, -148, -169,    0, -142, -160, -157,    0, -254,
 -254, -168,    0, -167, -198,    0,    0, -224, -194,    0,
    0,    0, -165, -159, -133,    0, -153, -155,    0, -106,
 -212,    0, -165, -254,    0,    0,    0,  -73,    0, -240,
    3,    3,  -28, -139, -207, -245, -122,  -98, -262,    0,
 -116,  -58,    0,    0,    0,    0,    0,    0,    3, -207,
 -221, -126, -199,    0, -203,  -95, -122, -234,    0, -232,
  -86,    0, -207, -207, -121, -118,    0, -207,    0,    0,
 -174,  -28,    3,    3, -207, -207, -207,  -28,    3, -119,
    0,    0,    0, -125, -199, -107, -109, -207,  -90, -227,
    0, -252,  -87,    0,    0,  -85,    0,  -68, -247,  -64,
    0,    0, -207, -123,    0,    0,    0,  -28,    0,    0,
  -69, -199,    0,  -45,  -65,  -55,    0,  -42,  -40,  -30,
  -28,  -28,    0,  -69,    0,    0,
};
static const YYINT yyrindex[] = {                         2,
    0,    0,    0,  219,    0,    0,  -46,  -15,    0,    0,
  -26,    0,    0,    0,    0,    0,    0,    0,    0,    1,
    1,    0,    0,    0,  -26,    0,    0,  -46,    0,    0,
    0,    0,  -34,    0,  -49,    0,    0,    0,    0,    0,
    0,    0,  -34,  -43,    0,    0,    0,    0,    0,  219,
    0,    0,    0,    0,    0,    0,    0,    0, -187,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -146, -104,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -47, -154, -141,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -268,    0,  -39,    0,    0,    0,
    0,    0, -244,    0,    0, -108,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -188,    0,    0,    0,  -12,    0,    0,    0,    0,
    0,    0,    0, -192,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   -4,    0,  240,   47,  222,  246,    0,  203,    0,    0,
  213,    0,  212,  208,  -50,  114,    0,  -41,  166,  -37,
  -48,    0,    0,    0,    0,  248,
};
#define YYTABLESIZE 297
static const YYINT yytable[] = {                         61,
    4,    4,   76,   16,   61,    1,  127,    8,   81,  130,
   75,   79,   41,   61,   67,   26,   27,   78,   80,   41,
    9,   41,  101,    2,  102,   11,   67,   90,  100,  126,
   83,   84,   91,   59,   66,   67,   68,   93,   94,   47,
   41,  112,   92,   61,  128,  104,  105,  118,   70,   61,
  110,  113,  114,   96,   97,   96,   97,  119,  116,  117,
   96,   97,   98,   93,   94,    2,   38,   32,   14,   61,
  124,   59,   66,   67,   68,   33,   61,  134,   61,   61,
   38,   93,   94,    2,   18,  132,   70,   33,   96,   97,
  144,  145,   61,   61,   66,   61,   61,   61,   61,   61,
   61,   61,   58,   61,   61,   20,   66,   61,   21,   58,
   44,   58,   22,   96,   97,   57,   23,   44,   24,   44,
  111,   25,   57,   28,   57,   42,   29,   38,   58,   58,
   58,   58,   58,   58,   58,   40,   43,   58,   44,   44,
   58,   57,   57,   57,   57,   57,   57,   57,   49,   41,
   57,   44,   48,   57,   77,   49,   59,   49,   82,   48,
   95,   48,   96,   97,   96,   97,  121,   88,  133,   99,
  103,  108,  109,  123,   49,  120,   49,   49,   49,   49,
   48,   48,   48,   49,   49,   50,   49,  122,  125,   51,
  129,   52,   53,   54,   55,   56,   57,   58,   94,   49,
   89,  131,  135,   97,   51,   59,   52,   53,   54,   55,
   56,   57,   58,  137,    4,    4,  138,  139,   14,    4,
   59,    4,    4,    4,    4,    4,    4,    4,  143,   49,
   12,  141,    9,  142,   51,    4,   52,   53,   54,   55,
   56,   57,   58,    4,   22,   15,   40,   65,   17,   31,
   59,   13,   63,   45,   46,   64,   62,  146,    4,    4,
  115,    4,    4,    4,    0,    4,    4,    4,    4,    4,
    4,    4,   30,    0,    0,    0,    0,   64,   65,    4,
    0,   59,   66,   67,   68,    0,    0,    0,    0,    0,
    0,    0,   69,    0,    0,    0,   70,
};
static const YYINT yycheck[] = {                         48,
    0,    0,   53,    8,   53,  260,  259,  258,   57,  257,
   52,  257,  257,   62,  283,   20,   21,   55,   56,  264,
  261,  266,  257,  278,  257,  279,  295,   69,   77,  257,
  293,  294,   70,  279,  280,  281,  282,  285,  286,   44,
  285,   92,  264,   92,  297,   83,   84,   98,  294,   98,
   88,   93,   94,  288,  289,  288,  289,   99,   96,   97,
  288,  289,  266,  285,  286,  278,  259,  262,  293,  257,
  108,  279,  280,  281,  282,   29,  264,  128,  266,  128,
  273,  285,  286,  278,  283,  123,  294,   41,  288,  289,
  141,  142,  141,  142,  283,  283,  284,  285,  286,  287,
  288,  289,  257,  291,  292,  257,  295,  295,  257,  264,
  257,  266,  282,  288,  289,  257,  259,  264,  279,  266,
  295,  279,  264,  292,  266,  279,  294,  293,  283,  284,
  285,  286,  287,  288,  289,  295,  292,  292,  285,  286,
  295,  283,  284,  285,  286,  287,  288,  289,  257,  283,
  292,  258,  257,  295,  294,  264,  279,  266,  257,  264,
  287,  266,  288,  289,  288,  289,  292,  284,  292,  265,
  257,  293,  291,  283,  283,  295,  285,  286,  287,  288,
  285,  286,  287,  292,  258,  259,  295,  295,  279,  263,
  259,  265,  266,  267,  268,  269,  270,  271,  286,  258,
  259,  266,  272,  289,  263,  279,  265,  266,  267,  268,
  269,  270,  271,  259,  258,  259,  282,  273,    0,  263,
  279,  265,  266,  267,  268,  269,  270,  271,  259,  258,
  257,  274,  279,  274,  263,  279,  265,  266,  267,  268,
  269,  270,  271,  259,  279,  295,  259,  295,    9,   28,
  279,    6,   50,   41,   43,  295,   49,  144,  258,  259,
   95,  261,  261,  263,   -1,  265,  266,  267,  268,  269,
  270,  271,   25,   -1,   -1,   -1,   -1,  275,  276,  279,
   -1,  279,  280,  281,  282,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  290,   -1,   -1,   -1,  294,
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
#line 428 "y.tab.c"

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
	{}
break;
case 3:
#line 68 "parse2.y"
	{}
break;
case 4:
#line 69 "parse2.y"
	{}
break;
case 5:
#line 71 "parse2.y"
	{}
break;
case 6:
#line 73 "parse2.y"
	{}
break;
case 7:
#line 75 "parse2.y"
	{}
break;
case 8:
#line 77 "parse2.y"
	{}
break;
case 9:
#line 78 "parse2.y"
	{}
break;
case 10:
#line 80 "parse2.y"
	{}
break;
case 11:
#line 82 "parse2.y"
	{}
break;
case 12:
#line 83 "parse2.y"
	{}
break;
case 13:
#line 85 "parse2.y"
	{}
break;
case 14:
#line 86 "parse2.y"
	{}
break;
case 15:
#line 88 "parse2.y"
	{}
break;
case 16:
#line 89 "parse2.y"
	{}
break;
case 17:
#line 91 "parse2.y"
	{}
break;
case 18:
#line 92 "parse2.y"
	{}
break;
case 19:
#line 94 "parse2.y"
	{}
break;
case 20:
#line 96 "parse2.y"
	{}
break;
case 21:
#line 98 "parse2.y"
	{}
break;
case 22:
#line 99 "parse2.y"
	{}
break;
case 23:
#line 101 "parse2.y"
	{}
break;
case 24:
#line 102 "parse2.y"
	{}
break;
case 25:
#line 104 "parse2.y"
	{}
break;
case 26:
#line 105 "parse2.y"
	{}
break;
case 27:
#line 106 "parse2.y"
	{}
break;
case 28:
#line 107 "parse2.y"
	{}
break;
case 29:
#line 108 "parse2.y"
	{}
break;
case 30:
#line 109 "parse2.y"
	{}
break;
case 31:
#line 110 "parse2.y"
	{}
break;
case 32:
#line 111 "parse2.y"
	{}
break;
case 33:
#line 112 "parse2.y"
	{}
break;
case 34:
#line 113 "parse2.y"
	{}
break;
case 35:
#line 114 "parse2.y"
	{}
break;
case 36:
#line 115 "parse2.y"
	{}
break;
case 37:
#line 117 "parse2.y"
	{}
break;
case 38:
#line 118 "parse2.y"
	{}
break;
case 39:
#line 120 "parse2.y"
	{}
break;
case 40:
#line 121 "parse2.y"
	{}
break;
case 41:
#line 123 "parse2.y"
	{}
break;
case 42:
#line 124 "parse2.y"
	{}
break;
case 43:
#line 125 "parse2.y"
	{}
break;
case 44:
#line 126 "parse2.y"
	{}
break;
case 45:
#line 127 "parse2.y"
	{}
break;
case 46:
#line 128 "parse2.y"
	{}
break;
case 47:
#line 130 "parse2.y"
	{}
break;
case 48:
#line 131 "parse2.y"
	{}
break;
case 49:
#line 133 "parse2.y"
	{}
break;
case 50:
#line 134 "parse2.y"
	{}
break;
case 51:
#line 135 "parse2.y"
	{}
break;
case 52:
#line 136 "parse2.y"
	{}
break;
case 53:
#line 137 "parse2.y"
	{}
break;
case 54:
#line 138 "parse2.y"
	{}
break;
case 55:
#line 139 "parse2.y"
	{}
break;
case 56:
#line 141 "parse2.y"
	{}
break;
case 57:
#line 143 "parse2.y"
	{}
break;
case 58:
#line 144 "parse2.y"
	{}
break;
case 59:
#line 145 "parse2.y"
	{}
break;
case 60:
#line 147 "parse2.y"
	{}
break;
case 61:
#line 148 "parse2.y"
	{}
break;
case 62:
#line 150 "parse2.y"
	{}
break;
case 63:
#line 151 "parse2.y"
	{}
break;
case 64:
#line 153 "parse2.y"
	{}
break;
case 65:
#line 154 "parse2.y"
	{}
break;
case 66:
#line 156 "parse2.y"
	{}
break;
case 67:
#line 157 "parse2.y"
	{}
break;
#line 895 "y.tab.c"
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
