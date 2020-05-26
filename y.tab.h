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
