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
	TOKEN_DEC,
	TOKEN_IDENT
} TokenList;

typedef struct {
	TokenList tokenlistelement;
	char *codeelemnt;
} TokenVaribleType;

TokenList get_keyword (char *str) {
	if (strcmp(str, "ARITH") == 0) return TOKEN_ARITH;
    if (strcmp(str, "JMP") == 0)   return TOKEN_JMP;
    if (strcmp(str, "LOOP") == 0)  return TOKEN_LOOP;
    if (strcmp(str, "VAR") == 0)   return TOKEN_VAR;
    if (strcmp(str, "DEC") == 0)   return TOKEN_DEC;
    return TOKEN_IDENT;
}

TokenVaribleType lexer () {
	int max = 2;
	int numofelements = 0;

	TokenList *tokenarray = (TokenList*) malloc(max * sizeof(TokenList));

	if (max == numofelements) {
		tokenarray = (TokenVaribleType*) realloc(tokenarray, max * sizeof(TokenVaribleType));
	}
	for (int c = 0; input[c] != '\0'; i++) {
		
	}
}
