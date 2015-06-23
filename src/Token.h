#ifndef Token_H
#define Token_H

typedef enum {
	TOKEN_INTEGER_TYPE,
	TOKEN_OPERATOR_TYPE,
}TokenType;

typedef enum {
	PREFIX, 	//[0]
	INFIX,  	//[1]
	POSTFIX,	//[2]
}Arity;

typedef enum {
	NONE,			//[0]
	LEFT_TO_RIGHT,	//[1]
	RIGHT_TO_LEFT,	//[2]
}Associativity;		

typedef struct {
	TokenType type;
}Token;

typedef struct{
	TokenType type;
	int value;
}IntegerToken;

typedef struct{
	TokenType type;
	char *symbol;
	Arity arity;
/*  Associativity assoc;	*/
	Token *token[0];
} OperatorToken;


/*	Symbol can be "+", "*", "[", ":"	*/
//	mocking these two function 
OperatorToken *createOperatorToken(char *symbol, Arity arity);
IntegerToken *createIntegerToken(int value);


#endif // Token_H
