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
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
  char dir[64];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
