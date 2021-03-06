#include "unity.h"
#include "Token.h"
#include <stdio.h>
#include <stdlib.h>

void setUp(void) {}

void tearDown(void) {}



// /**
 // *  This test file test the function createIntegerToken & createOperatorToken
 // *
 // *  Eg, given the argument, the function should create the Token accordingly
 // *  createIntegerToken(3) should return an IntegerToken pointer that point to
 // *  the integer token that stored value 3.
 // *
 // *  createOperatorToken("+",INFIX) should return an OperatorToken pointer that
 // *  point to the operator token that have symbol + and arity of INFIX
 // *
 // */

// void test_createIntegerTokens_given_value_2_and_12_return_IntegerTokens(void){
  // IntegerToken leftTk = *createIntegerToken(2);
  // IntegerToken rightTk = *createIntegerToken(12);

  // TEST_ASSERT_EQUAL(TOKEN_INTEGER_TYPE,leftTk.type);
  // TEST_ASSERT_EQUAL(TOKEN_INTEGER_TYPE,rightTk.type);
  
  // TEST_ASSERT_EQUAL(2,leftTk.value);
  // TEST_ASSERT_EQUAL(12,rightTk.value);
// }

// void test_createOperatorToken_given_symbol_ADD_and_MUL_should_return_OperatorToken(void){
  // OperatorToken* addToken = malloc(sizeof(OperatorToken));
  // addToken = createOperatorToken("+",INFIX);
  // OperatorToken mulToken = *createOperatorToken("*", INFIX);
  
  // TEST_ASSERT_EQUAL(TOKEN_OPERATOR_TYPE,addToken->type);
  // TEST_ASSERT_EQUAL("+",addToken->symbol);
  // TEST_ASSERT_EQUAL(INFIX,addToken->arity);
  
  // TEST_ASSERT_EQUAL(TOKEN_OPERATOR_TYPE,mulToken.type);
  // TEST_ASSERT_EQUAL("*",mulToken.symbol);
  // TEST_ASSERT_EQUAL(INFIX,mulToken.arity);
// }