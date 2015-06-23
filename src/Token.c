#include "Token.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

/* this function create an operator token with store the operator symbol {'+', '-', '[', ':' }, 
*														 arity {INFIX, POSTFIX, PREFIX},
*														 address of Token {[ptr]}.				 
* How to call this function:
* 	Token = createOperatorToken("*", INFIX);														
*/

// OperatorToken *createOperatorToken(char *symbol, Arity arity){
	// int fix;
	// if (arity == INFIX){
		// fix = 2;
	// }
	// else 
		// fix = 1;
											 
// OperatorToken* op = malloc(sizeof(OperatorToken *)+ sizeof(Token *) * fix);
	// op->symbol = symbol;
	// op->arity = arity;
	// op->type = TOKEN_OPERATOR_TYPE;
    
    // return op;
// }
// /*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
// /* this function create an integer token which store a value (int) 
// *												return the value (value) 
// */

// IntegerToken *createIntegerToken(int value){
	// IntegerToken* intToken = malloc(sizeof(IntegerToken *));  
    // intToken->value = value;
    // intToken->type = TOKEN_INTEGER_TYPE;
    // return intToken;  
// }