#include "addToken.h"
#include "Token.h"
#include <stdio.h>
#include <malloc.h>

/* Add2Tokens generated a tree which connecting the operatorSymbol with the integerToken 
*				-----------
*				|operator |
*				|symbol	  |
*				|arity 	  |
*				-----------
*	  			/         \
*		|leftValue|   |rightValue|
*/

 
Token *add2Tokens(int leftValue, char *operatorSymbol, int rightValue){

	
	OperatorToken* opToken = malloc(sizeof(OperatorToken )+(sizeof(Token *)) * 2);
	IntegerToken* leftVal = malloc(sizeof(IntegerToken ));
	IntegerToken* rightVal = malloc(sizeof(IntegerToken ));
	leftVal = createIntegerToken (leftValue);
	rightVal = createIntegerToken (rightValue);
	opToken = createOperatorToken(operatorSymbol, INFIX);
	opToken -> token[0] = (Token *)leftVal;
	opToken -> token[1] = (Token *)rightVal;
	// leftValue = createIntegerToken(int1);
	// rightValue = createIntegerToken(int2);
	
	////printf("Left Value: %d\n" , leftValue );
	////printf("Right Value: %d\n" , rightValue);
 

	//Token *opToken = createOperatorToken (operatorSymbol, INFIX);
	//Token *intToken = createIntegerToken (leftValue);	
	
	return (Token *)opToken;

}