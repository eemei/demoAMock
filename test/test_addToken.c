#include "unity.h"
#include "addToken.h"
#include "mock_Token.h"
#include <malloc.h>
#include <stdio.h>

void setUp(void) {}
void tearDown(void) {}



/**
*		+
*	  /	 |
*	2	 3
*
*/

void test_add2Tokens_given_2_plus_3_should_return_the_token_tree(){
	OperatorToken *root;
	/**static memory and can initialise value {} but "malloc" cannot initialise (allocate memory)
	*                    TYPE:                  , VALUE:      										*/
	IntegerToken int1 = {type:TOKEN_INTEGER_TYPE, value:2};
	IntegerToken int2 = {type:TOKEN_INTEGER_TYPE, value:3};
	
	// here use malloc becoz sizeof token *2 (ptr)
	OperatorToken *opToken = malloc(sizeof (OperatorToken) + (sizeof (Token  *) * 2));
	//printf ("size of opToken= %d\n", sizeof (OperatorToken) + (sizeof (Token  *) * 2));
	opToken->type = TOKEN_OPERATOR_TYPE;
	opToken->symbol = "+";
	opToken->arity = INFIX;
	
	// //createIntegerToken_ExpectAndReturn ((Token *) int2);
	createIntegerToken_ExpectAndReturn (2, &int1);
	createIntegerToken_ExpectAndReturn (3, &int2);
	createOperatorToken_ExpectAndReturn("+", INFIX, opToken);
	//root = (Token) *add2Tokens(2,"+",3);
	root = (OperatorToken*) add2Tokens (2,"+",3);
//                       expect  ,actual
	TEST_ASSERT_EQUAL_PTR(opToken, root);
//  check that is attract to 2
	TEST_ASSERT_EQUAL_PTR(&int1, root->token [0]);
	//  check that is attract to 3
	TEST_ASSERT_EQUAL_PTR(&int2, root->token [1]);
	TEST_ASSERT_EQUAL_PTR(opToken->arity, root->arity);
	TEST_ASSERT_EQUAL_PTR (opToken->type, root->type);
	TEST_ASSERT_EQUAL_PTR(opToken->symbol, root->symbol);
}



























// /**
 // *  With mocking method, the functions createIntegerToken & createOperatorToken
 // *  were compilable and called in this test
 // *  
 // *  add2Tokens should be able to connect two Integer Tokens to into the Token tree
 // *
 // *  Eg, Given two integer tokens with value 2 and 3 respectively should return the
 // *  following token tree
 // *
/*    +
 *   / \
 *  2   3
 *
 *
 */


// void xtest_add2Tokens_given_2_ADD_3_should_return_Tokens_Tree_with_value(void){
  // IntegerToken* leftTk = malloc(sizeof(IntegerToken*));
  // IntegerToken* rightTk = malloc(sizeof(IntegerToken*));
  // OperatorToken* addToken = malloc(sizeof(OperatorToken*)+(sizeof(Token*))*2);   
    // leftTk->type = TOKEN_INTEGER_TYPE;
    // rightTk->type = TOKEN_INTEGER_TYPE;
    // leftTk->value = 2;
    // rightTk->value = 3;
    // addToken->type = TOKEN_OPERATOR_TYPE;
    // addToken->symbol = "+";
    // addToken->arity = INFIX;
  
  // createIntegerToken_ExpectAndReturn(2,leftTk);
  // createIntegerToken_ExpectAndReturn(3,rightTk);
  // createOperatorToken_ExpectAndReturn("+", INFIX, addToken);
  
  // addToken = (OperatorToken*)add2Tokens(2,"+",3);
  
  // TEST_ASSERT_EQUAL(TOKEN_INTEGER_TYPE,addToken->token[0]->type);
  // TEST_ASSERT_EQUAL(TOKEN_INTEGER_TYPE,addToken->token[1]->type);
  // TEST_ASSERT_EQUAL(TOKEN_OPERATOR_TYPE,addToken->type);
  
  // TEST_ASSERT_EQUAL_PTR(leftTk,(IntegerToken*)addToken->token[0]);
  // TEST_ASSERT_EQUAL_PTR(rightTk,(IntegerToken*)addToken->token[1]);
  
  // TEST_ASSERT_EQUAL("+",addToken->symbol);
  // TEST_ASSERT_EQUAL(INFIX,addToken->arity);
 
  // TEST_ASSERT_EQUAL(2,((IntegerToken*)addToken->token[0])->value);
  // TEST_ASSERT_EQUAL(3,((IntegerToken*)addToken->token[1])->value);
// }

