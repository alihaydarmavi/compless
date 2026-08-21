#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Test input char
//char input[] = "";

typedef enum {
	TOKEN_ARITH,
	TOKEN_JMP,
	TOKEN_LOOP,
	TOKEN_VAR,
	TOKEN_DEC
} TokenList;

typedef struct {
	TokenList tokenlistelement;
	char *codeelemnt;
} TokenVaribleType;

TokenList get_keyword () {
	//Keyword enum conventer
}

TokenVaribleType lexer () {
	for (int c = 0; metin[i] = '\0')
}
