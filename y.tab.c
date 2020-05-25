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

#line 2 "parse.y"

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
#line 14 "parse.y"
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
#define SI 262
#define ENTONCES 263
#define MIENTRAS 264
#define SINO 265
#define HACER 266
#define SEGUN 267
#define ESCRIBIR 268
#define DEVOLVER 269
#define LEER 270
#define TERMINAR 271
#define CASO 272
#define PRED 273
#define DOSP 274
#define O 275
#define Y 276
#define NO 277
#define FALSO 278
#define VERDADERO 279
#define PUNCOM 280
#define COMA 281
#define PUNTO 282
#define SIN 283
#define CORDER 284
#define CORIZQ 285
#define OPERADOR_RELACIONAL 286
#define SUM_RES 287
#define MUL_DIV_MOD 288
#define TIPO 289
#define ID 290
#define CARACTER 291
#define CADENA 292
#define NUM 293
#define ASIG 294
#define LPAR 295
#define RPAR 296
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,   42,    1,    1,    1,   43,    2,   44,    3,    4,
   45,   46,   47,    5,    5,    6,   25,   48,   49,   50,
    8,    8,    9,    9,   10,   33,   33,   11,   12,   13,
   13,   14,   32,   32,   51,   52,   15,   53,   54,   15,
   55,   56,   15,   15,   15,   15,   15,   15,   15,   15,
   34,   57,   34,   35,   35,   16,   37,   37,   17,   17,
   18,   36,   36,   36,   27,   27,   27,   27,   27,   19,
   29,   29,   20,   39,   39,   28,   40,   40,   26,   26,
   26,   26,   26,   31,   31,   21,   41,   41,   22,   22,
    7,   38,   38,   23,   23,   24,   30,   30,
};
static const YYINT yylen[] = {                            2,
    2,    0,    5,    4,    0,    0,    5,    0,    3,    1,
    0,    0,    0,    7,    0,    2,    2,    0,    0,    0,
   14,    0,    1,    1,    2,    2,    0,    2,    2,    3,
    0,    2,    2,    0,    0,    0,    7,    0,    0,    7,
    0,    0,    7,    8,    4,    3,    3,    2,    2,    3,
    1,    0,    4,    1,    2,    5,    1,    0,    3,    0,
    2,    2,    2,    1,    3,    1,    1,    1,    2,    2,
    3,    0,    2,    2,    0,    2,    2,    0,    3,    1,
    1,    1,    2,    3,    1,    2,    1,    1,    3,    0,
    4,    4,    0,    1,    0,    2,    3,    0,
};
static const YYINT yydefred[] = {                         0,
    0,   10,    0,    0,    0,    2,    8,    6,    0,    1,
    0,    0,    0,    0,    0,    0,    0,   16,    0,    0,
   11,    9,    0,    0,   17,    4,    0,    0,    7,    0,
    3,   12,   24,    0,   18,   23,    0,    0,    0,    0,
   29,    0,    0,   25,   28,   13,    0,    0,   26,    0,
   30,   19,   14,    0,    0,    0,    0,   38,   41,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   68,   67,    0,   82,   81,   80,    0,    0,   66,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   54,    0,
   48,    0,   49,    0,    0,   88,   87,   86,   20,    0,
   32,    0,   50,   69,    0,   83,   85,    0,    0,   35,
    0,   70,    0,   76,    0,    0,   64,   61,    0,   73,
    0,    0,    0,    0,   46,   55,   47,    0,    0,    0,
   33,    0,    0,    0,   94,   65,   79,    0,    0,   77,
   62,   63,   74,   39,    0,    0,   89,    0,   21,   45,
    0,   96,   84,   36,   71,    0,   42,    0,    0,   91,
    0,    0,    0,    0,    0,    0,    0,   97,   51,   52,
   37,   40,   43,    0,    0,    0,    0,    0,    0,    0,
   44,   92,    0,    0,   59,   53,   57,   56,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,    6,    7,   22,   12,   96,   10,   35,   36,
   37,   38,   41,   66,   67,  166,  176,   78,   79,   80,
   68,   97,  134,  135,   18,   81,   82,   83,  112,  152,
  106,  101,   44,  171,   91,  118,  188,  160,  120,  114,
   98,   13,   15,   14,   28,   39,   50,   42,   54,  130,
  138,  162,   84,  156,   85,  164,  178,
};
static const YYINT yysindex[] = {                      -254,
 -242,    0,    0, -233, -250,    0,    0,    0, -247,    0,
 -245, -213, -250, -239, -254, -243, -241,    0, -254, -206,
    0,    0, -204, -237,    0,    0, -254, -234,    0, -264,
    0,    0,    0, -229,    0,    0, -221, -226, -219, -211,
    0, -235, -247,    0,    0,    0, -229, -184,    0, -239,
    0,    0,    0, -254,  -13,  -13,   60,    0,    0, -215,
 -151, -223, -207, -172, -253, -164,  -13, -196, -159,   60,
    0,    0, -273,    0,    0,    0,   60, -162,    0, -187,
 -183,    9, -180,   60,  -13, -207, -151, -153,    0, -149,
    0, -148,    0, -176, -151,    0,    0,    0,    0,  -13,
    0, -151,    0,    0, -151,    0,    0, -186, -269,    0,
 -151,    0, -151,    0,   60,   60,    0,    0, -151,    0,
 -146, -142, -173, -171,    0,    0,    0, -144, -155, -233,
    0, -112, -134, -147,    0,    0,    0,  -13, -187,    0,
    0,    0,    0,    0,   60, -118,    0, -135,    0,    0,
 -151,    0,    0,    0,    0,  -13,    0, -121, -151,    0,
 -134, -222, -107, -104, -139, -113, -122,    0,    0,    0,
    0,    0,    0, -111, -109,  -90, -135,  -13,  -13,  -13,
    0,    0,  -81, -121,    0,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         3,
    0,    0,    0,  179,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -110,  -78,    0,    0,    0,    1,    0,
    0,    0,    0,    0,    0,    0,    1,    0,    0,    0,
    0,    0,    0, -108,    0,    0, -106,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -108,    0,    0, -110,
    0,    0,    0,   53,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -255,    0,  -75,    0,    0,    0,
    0,    0, -200,    0,    0,    0,    0,    0,    0,   17,
  -80,    0,  -49,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -75,
    0,    0,    0,    0, -105,    0,    0,    0,   54,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -160,    0,  179,
    0,    0, -103,    0,    0,    0,    0,    0,   17,    0,
    0,    0,    0,    0,    0,    0,    0, -120,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -103,    0,    0,    0,    0,  -74,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -120,    0,    0,    0,
    0,    0,    0, -249,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   -4,    0,  178,  -17,  138,  176,    0,   62,    0,    0,
  151,    0,  153,  146,  -67,   19,    0,  -63,    0,  -57,
  -55,   77,    0,    0,    0,    0,  127,  105,   80,   59,
    0,  121,    0,    0,    0,    0,    0,   45,    0,    0,
  150,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 355
static const YYINT yytable[] = {                        100,
    5,   90,    5,   88,   90,    1,  104,   92,   94,   58,
   23,   95,   34,  108,   26,    8,  111,  122,   33,  109,
  121,  105,   31,   58,    2,   34,  137,    9,   94,  124,
  123,   95,  100,   89,    2,   17,  169,  129,   90,   11,
   90,    2,  170,   19,  132,   21,   24,  133,   25,   55,
   27,  141,  142,  139,   29,   40,   90,   30,   32,   43,
   48,  143,   90,   45,   46,   90,   73,   74,   75,   76,
  154,   87,   47,   52,   90,   90,   90,   90,   90,   86,
   90,  157,   65,   90,   93,   90,   90,   90,  163,   90,
   90,   90,   90,  161,   99,   90,   90,  102,  111,  103,
  110,  167,   90,  125,  113,   90,  119,  126,  127,  136,
  183,  184,  185,  128,   90,   90,   90,   90,   90,  144,
   90,  145,  146,   90,  137,   90,   90,   90,  148,   90,
   90,   90,   90,   90,   90,   90,   93,   94,   73,   74,
   75,   76,   93,   87,  150,   93,  151,  158,  153,  159,
  165,  172,  173,  174,   93,   93,   93,   93,   93,  175,
   93,  177,  179,   93,  180,   93,   93,   93,  181,   93,
   93,   93,   93,   93,   93,   93,   78,  186,   22,   15,
    5,   31,   78,   34,   60,   78,   16,   53,   20,   27,
   95,  149,   98,   49,   78,   78,   78,   78,   78,   51,
   78,   69,  187,   78,  147,   78,   78,   75,  117,   78,
   78,   78,   78,   75,   78,   78,   75,  140,  155,  168,
  131,  182,  107,    0,    0,   75,   75,   75,   75,   75,
    0,   75,    0,    0,   75,    0,   75,    0,    0,    0,
   75,   75,   75,   75,   56,   75,   75,    0,   57,    0,
   58,    0,   59,   60,   61,   62,   63,   64,    5,    5,
    0,    5,    5,    5,    5,    0,    5,    5,    5,    5,
    5,    5,    0,   72,    0,    0,   65,    0,    0,   72,
    0,    0,   72,  115,  116,   70,   71,   72,    0,    0,
    5,   72,   72,   72,   72,   72,    0,    0,   73,   74,
   75,   76,    0,   77,    0,    0,   72,   72,   72,   72,
    5,   72,   72,    0,    5,    0,    5,    0,    5,    5,
    5,    5,    5,    5,    0,    0,    0,    0,   72,   72,
   72,   72,   72,    0,    0,    0,   70,   71,   72,    0,
    0,    0,    5,   72,   72,   72,   72,    0,   72,   73,
   74,   75,   76,    0,   77,
};
static const YYINT yycheck[] = {                         67,
    0,  257,    0,   61,   62,  260,   70,   63,  282,  259,
   15,  285,   30,   77,   19,  258,  286,   85,  283,   77,
   84,  295,   27,  273,  289,   43,  296,  261,  282,   87,
   86,  285,  100,  257,  289,  281,  259,   95,  294,  290,
  296,  289,  265,  257,  102,  285,  290,  105,  290,   54,
  257,  115,  116,  111,  259,  285,  257,  295,  293,  281,
  296,  119,  263,  290,  284,  266,  290,  291,  292,  293,
  138,  295,  284,  258,  275,  276,  277,  278,  279,  295,
  281,  145,  290,  284,  257,  286,  287,  288,  156,  290,
  291,  292,  293,  151,  259,  296,  257,  294,  286,  259,
  263,  159,  263,  257,  288,  266,  287,  257,  257,  296,
  178,  179,  180,  290,  275,  276,  277,  278,  279,  266,
  281,  264,  296,  284,  296,  286,  287,  288,  284,  290,
  291,  292,  293,  294,  295,  296,  257,  282,  290,  291,
  292,  293,  263,  295,  257,  266,  281,  266,  296,  285,
  272,  259,  257,  293,  275,  276,  277,  278,  279,  273,
  281,  284,  274,  284,  274,  286,  287,  288,  259,  290,
  291,  292,  293,  294,  295,  296,  257,  259,    0,  290,
  259,  290,  263,  259,  259,  266,    9,   50,   13,  296,
  296,  130,  296,   43,  275,  276,  277,  278,  279,   47,
  281,   56,  184,  284,  128,  286,  287,  257,   82,  290,
  291,  292,  293,  263,  295,  296,  266,  113,  139,  161,
  100,  177,   73,   -1,   -1,  275,  276,  277,  278,  279,
   -1,  281,   -1,   -1,  284,   -1,  286,   -1,   -1,   -1,
  290,  291,  292,  293,  258,  295,  296,   -1,  262,   -1,
  264,   -1,  266,  267,  268,  269,  270,  271,  258,  259,
   -1,  261,  262,  261,  264,   -1,  266,  267,  268,  269,
  270,  271,   -1,  257,   -1,   -1,  290,   -1,   -1,  263,
   -1,   -1,  266,  275,  276,  277,  278,  279,   -1,   -1,
  290,  275,  276,  277,  278,  279,   -1,   -1,  290,  291,
  292,  293,   -1,  295,   -1,   -1,  290,  291,  292,  293,
  258,  295,  296,   -1,  262,   -1,  264,   -1,  266,  267,
  268,  269,  270,  271,   -1,   -1,   -1,   -1,  275,  276,
  277,  278,  279,   -1,   -1,   -1,  277,  278,  279,   -1,
   -1,   -1,  290,  290,  291,  292,  293,   -1,  295,  290,
  291,  292,  293,   -1,  295,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 296
#define YYUNDFTOKEN 356
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
"DEF","SI","ENTONCES","MIENTRAS","SINO","HACER","SEGUN","ESCRIBIR","DEVOLVER",
"LEER","TERMINAR","CASO","PRED","DOSP","O","Y","NO","FALSO","VERDADERO",
"PUNCOM","COMA","PUNTO","SIN","CORDER","CORIZQ","OPERADOR_RELACIONAL","SUM_RES",
"MUL_DIV_MOD","TIPO","ID","CARACTER","CADENA","NUM","ASIG","LPAR","RPAR",0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"$$3 :",
"tipo : base $$3 tipo_arreglo",
"base : TIPO",
"$$4 :",
"$$5 :",
"$$6 :",
"tipo_arreglo : CORIZQ $$4 NUM $$5 CORDER $$6 tipo_arreglo",
"tipo_arreglo :",
"lista_var : ID L",
"L : COMA ID",
"$$7 :",
"$$8 :",
"$$9 :",
"funciones : DEF tipo ID LPAR argumentos $$7 RPAR INICIO $$8 declaraciones sentencias FIN $$9 funciones",
"funciones :",
"argumentos : lista_arg",
"argumentos : SIN",
"lista_arg : arg M",
"M : COMA arg",
"M :",
"arg : tipo_arg ID",
"tipo_arg : base param_arr",
"param_arr : CORIZQ CORDER param_arr",
"param_arr :",
"sentencias : sentencia N",
"N : sentencia N",
"N :",
"$$10 :",
"$$11 :",
"sentencia : SI e_bool ENTONCES $$10 sentencia $$11 A",
"$$12 :",
"$$13 :",
"sentencia : MIENTRAS $$12 e_bool HACER $$13 sentencia FIN",
"$$14 :",
"$$15 :",
"sentencia : HACER $$14 sentencia MIENTRAS e_bool $$15 PYC",
"sentencia : SEGUN LPAR variable RPAR HACER casos predeterminado FIN",
"sentencia : variable ASIG expresion PYC",
"sentencia : ESCRIBIR expresion PYC",
"sentencia : LEER variable PYC",
"sentencia : DEVOLVER B",
"sentencia : TERMINAR PYC",
"sentencia : INICIO sentencias FIN",
"A : FIN",
"$$16 :",
"A : SINO $$16 sentencia FIN",
"B : PYC",
"B : expresion PYC",
"casos : CASO NUM DOSP sentencia D",
"D : casos",
"D :",
"predeterminado : PRED DOSP sentencia",
"predeterminado :",
"e_bool : S C",
"C : O e_bool",
"C : Y e_bool",
"C : S",
"S : LPAR e_bool RPAR",
"S : relacional",
"S : VERDADERO",
"S : FALSO",
"S : NO e_bool",
"relacional : expresion U",
"U : OPERADOR_RELACIONAL expresion U",
"U :",
"expresion : Q E",
"E : SUM_RES expresion",
"E :",
"Q : P G",
"G : MUL_DIV_MOD Q",
"G :",
"P : LPAR expresion RPAR",
"P : NUM",
"P : CADENA",
"P : CARACTER",
"P : ID V",
"V : LPAR parametros RPAR",
"V : H",
"variable : ID H",
"H : dato_est_sim",
"H : arreglo",
"dato_est_sim : PUNTO ID dato_est_sim",
"dato_est_sim :",
"arreglo : CORIZQ expresion CORDER F",
"F : CORIZQ expresion CORDER F",
"F :",
"parametros : lista_param",
"parametros :",
"lista_param : expresion W",
"W : COMA expresion W",
"W :",

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
#line 167 "parse.y"

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
#line 495 "y.tab.c"

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
#line 62 "parse.y"
	{}
break;
case 2:
#line 64 "parse.y"
	{strcpy(tipos,yystack.l_mark[0].dir);}
break;
case 3:
#line 64 "parse.y"
	{}
break;
case 4:
#line 65 "parse.y"
	{}
break;
case 5:
#line 65 "parse.y"
	{}
break;
case 6:
#line 67 "parse.y"
	{printf("Inicio estructura\n");}
break;
case 7:
#line 67 "parse.y"
	{strcpy(tipos,"Estructura"); printf("Final estructura\n");}
break;
case 8:
#line 69 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 9:
#line 69 "parse.y"
	{strcat(yyval.dir,yystack.l_mark[-1].dir);}
break;
case 10:
#line 71 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 11:
#line 73 "parse.y"
	{strcat(yyval.dir,"[");}
break;
case 12:
#line 73 "parse.y"
	{strcat(yyval.dir,yystack.l_mark[-1].dir);}
break;
case 13:
#line 73 "parse.y"
	{strcat(yyval.dir,"]");}
break;
case 14:
#line 73 "parse.y"
	{strcat(yyval.dir,yystack.l_mark[-3].dir);}
break;
case 15:
#line 73 "parse.y"
	{}
break;
case 16:
#line 75 "parse.y"
	{printf("%s %s\n", tipos, yystack.l_mark[-1].dir);}
break;
case 17:
#line 77 "parse.y"
	{printf("%s %s\n", tipos, yystack.l_mark[0].dir);}
break;
case 18:
#line 79 "parse.y"
	{printf("arg %s\n",yystack.l_mark[0].dir);}
break;
case 19:
#line 79 "parse.y"
	{printf("Inicio de funcion (%s)\n", yystack.l_mark[-5].dir);}
break;
case 20:
#line 79 "parse.y"
	{printf("Final de funcion (%s)\n", yystack.l_mark[-9].dir);}
break;
case 21:
#line 79 "parse.y"
	{}
break;
case 22:
#line 79 "parse.y"
	{}
break;
case 23:
#line 81 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 24:
#line 81 "parse.y"
	{strcpy(yyval.dir,"Sin");}
break;
case 25:
#line 83 "parse.y"
	{strcat(yystack.l_mark[-1].dir," "); strcat(yystack.l_mark[-1].dir,yystack.l_mark[0].dir); strcpy(yyval.dir,yystack.l_mark[-1].dir);}
break;
case 26:
#line 85 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 27:
#line 85 "parse.y"
	{}
break;
case 28:
#line 87 "parse.y"
	{strcat(yystack.l_mark[-1].dir," "); strcat(yystack.l_mark[-1].dir,yystack.l_mark[0].dir); strcpy(yyval.dir,yystack.l_mark[-1].dir);}
break;
case 29:
#line 89 "parse.y"
	{strcat(yystack.l_mark[-1].dir,yystack.l_mark[0].dir); strcpy(yyval.dir,yystack.l_mark[-1].dir);}
break;
case 30:
#line 91 "parse.y"
	{strcpy(yyval.dir,"[]"); strcat(yyval.dir,yystack.l_mark[0].dir);}
break;
case 31:
#line 91 "parse.y"
	{}
break;
case 32:
#line 93 "parse.y"
	{}
break;
case 33:
#line 95 "parse.y"
	{}
break;
case 34:
#line 95 "parse.y"
	{}
break;
case 35:
#line 97 "parse.y"
	{nuevaEtiqueta(yyval.dir); strcpy(temp_E,yyval.dir); nuevaEtiqueta(yyval.dir); printf("Si %s goto %s\ngoto %s\n%s: ", yystack.l_mark[-1].dir, temp_E, yyval.dir, temp_E);}
break;
case 36:
#line 97 "parse.y"
	{printf("%s: ",yyval.dir);}
break;
case 37:
#line 97 "parse.y"
	{}
break;
case 38:
#line 98 "parse.y"
	{nuevaEtiqueta(yyval.dir); printf("%s: ", yyval.dir);}
break;
case 39:
#line 98 "parse.y"
	{nuevaEtiqueta(temp_E); printf("Si %s goto %s \n", yystack.l_mark[-2].dir, temp_E); nuevaEtiqueta(yystack.l_mark[-2].dir); printf("goto %s\n%s: ", yystack.l_mark[-2].dir, temp_E);}
break;
case 40:
#line 98 "parse.y"
	{printf("goto %s\n %s: ", yyval.dir, yystack.l_mark[-5].dir);}
break;
case 41:
#line 99 "parse.y"
	{nuevaEtiqueta(yyval.dir); printf("%s: ", yyval.dir);}
break;
case 42:
#line 99 "parse.y"
	{printf("Si %s goto %s\n", yystack.l_mark[0].dir, yyval.dir);}
break;
case 43:
#line 99 "parse.y"
	{}
break;
case 44:
#line 100 "parse.y"
	{}
break;
case 45:
#line 101 "parse.y"
	{printf("%s = %s\n", yystack.l_mark[-3].dir, yystack.l_mark[-1].dir);}
break;
case 46:
#line 102 "parse.y"
	{printf("Escribir %s\n", yystack.l_mark[-1].dir);}
break;
case 47:
#line 103 "parse.y"
	{printf("Leer %s\n", yystack.l_mark[-1].dir);}
break;
case 48:
#line 104 "parse.y"
	{printf("Delvolver %s\n", yystack.l_mark[0].dir);}
break;
case 49:
#line 105 "parse.y"
	{printf("Terminar\n");}
break;
case 50:
#line 106 "parse.y"
	{}
break;
case 51:
#line 108 "parse.y"
	{}
break;
case 52:
#line 108 "parse.y"
	{nuevaEtiqueta(yyval.dir); printf("goto %s\n", yyval.dir);}
break;
case 53:
#line 108 "parse.y"
	{printf("%s: ", yyval.dir);}
break;
case 54:
#line 110 "parse.y"
	{}
break;
case 55:
#line 110 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[-1].dir);}
break;
case 56:
#line 112 "parse.y"
	{}
break;
case 57:
#line 114 "parse.y"
	{}
break;
case 58:
#line 114 "parse.y"
	{}
break;
case 59:
#line 116 "parse.y"
	{}
break;
case 60:
#line 116 "parse.y"
	{}
break;
case 61:
#line 118 "parse.y"
	{nuevaTemp(yyval.dir); printf("%s = %s %s\n", yyval.dir, yystack.l_mark[-1].dir, yystack.l_mark[0].dir);}
break;
case 62:
#line 120 "parse.y"
	{strcat(yyval.dir,"o "); strcat(yyval.dir,yystack.l_mark[0].dir);}
break;
case 63:
#line 121 "parse.y"
	{strcat(yyval.dir,"y "); strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 64:
#line 122 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 65:
#line 124 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[-1].dir);}
break;
case 66:
#line 125 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 67:
#line 126 "parse.y"
	{strcpy(yyval.dir,"verdadero");}
break;
case 68:
#line 127 "parse.y"
	{strcpy(yyval.dir,"falso");}
break;
case 69:
#line 128 "parse.y"
	{strcat(yyval.dir,"NO "); strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 70:
#line 130 "parse.y"
	{nuevaTemp(yyval.dir); printf("%s = %s %s\n", yyval.dir, yystack.l_mark[-1].dir, yystack.l_mark[0].dir);}
break;
case 71:
#line 132 "parse.y"
	{strcat(yystack.l_mark[-2].dir," "); strcat(yystack.l_mark[-2].dir,yystack.l_mark[-1].dir); strcpy(yyval.dir,yystack.l_mark[-2].dir);}
break;
case 72:
#line 132 "parse.y"
	{}
break;
case 73:
#line 134 "parse.y"
	{}
break;
case 74:
#line 136 "parse.y"
	{}
break;
case 75:
#line 136 "parse.y"
	{}
break;
case 76:
#line 138 "parse.y"
	{}
break;
case 77:
#line 140 "parse.y"
	{}
break;
case 78:
#line 140 "parse.y"
	{}
break;
case 79:
#line 142 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[-1].dir);}
break;
case 80:
#line 143 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 81:
#line 144 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 82:
#line 145 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 84:
#line 148 "parse.y"
	{}
break;
case 85:
#line 148 "parse.y"
	{}
break;
case 86:
#line 150 "parse.y"
	{}
break;
case 87:
#line 152 "parse.y"
	{}
break;
case 88:
#line 153 "parse.y"
	{}
break;
case 89:
#line 155 "parse.y"
	{}
break;
case 90:
#line 155 "parse.y"
	{}
break;
case 91:
#line 157 "parse.y"
	{}
break;
case 92:
#line 159 "parse.y"
	{strcat(yyval.dir,"["); strcat(yyval.dir,yystack.l_mark[-2].dir); strcat(yyval.dir,"]"); strcat(yyval.dir,yystack.l_mark[0].dir);}
break;
case 93:
#line 159 "parse.y"
	{}
break;
case 94:
#line 161 "parse.y"
	{strcpy(yyval.dir,yystack.l_mark[0].dir);}
break;
case 95:
#line 161 "parse.y"
	{}
break;
case 96:
#line 163 "parse.y"
	{strcat(yystack.l_mark[-1].dir,yystack.l_mark[0].dir); strcpy(yyval.dir,yystack.l_mark[-1].dir);}
break;
case 97:
#line 165 "parse.y"
	{strcat(yyval.dir,", "); strcat(yyval.dir,yystack.l_mark[-1].dir); strcat(yyval.dir,yystack.l_mark[0].dir);}
break;
case 98:
#line 165 "parse.y"
	{}
break;
#line 1082 "y.tab.c"
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
