/* $ANTLR 2.7.2: "java_expression.g" -> "JavaExpressionParser.cc"$ */
#include "JavaExpressionParser.hpp"
#include "third_party/antlr/lib/cpp/antlr/NoViableAltException.hpp"
#include "third_party/antlr/lib/cpp/antlr/SemanticException.hpp"
#include "third_party/antlr/lib/cpp/antlr/ASTFactory.hpp"
ANTLR_BEGIN_NAMESPACE(devtools)
ANTLR_BEGIN_NAMESPACE(cdbg)
#line 1 "java_expression.g"
#line 10 "JavaExpressionParser.cc"
JavaExpressionParser::JavaExpressionParser(ANTLR_USE_NAMESPACE(antlr)TokenBuffer& tokenBuf, int k)
: ANTLR_USE_NAMESPACE(antlr)LLkParser(tokenBuf,k)
{
}

JavaExpressionParser::JavaExpressionParser(ANTLR_USE_NAMESPACE(antlr)TokenBuffer& tokenBuf)
: ANTLR_USE_NAMESPACE(antlr)LLkParser(tokenBuf,2)
{
}

JavaExpressionParser::JavaExpressionParser(ANTLR_USE_NAMESPACE(antlr)TokenStream& lexer, int k)
: ANTLR_USE_NAMESPACE(antlr)LLkParser(lexer,k)
{
}

JavaExpressionParser::JavaExpressionParser(ANTLR_USE_NAMESPACE(antlr)TokenStream& lexer)
: ANTLR_USE_NAMESPACE(antlr)LLkParser(lexer,2)
{
}

JavaExpressionParser::JavaExpressionParser(const ANTLR_USE_NAMESPACE(antlr)ParserSharedInputState& state)
: ANTLR_USE_NAMESPACE(antlr)LLkParser(state,2)
{
}

//DBG genRule(statement)
void JavaExpressionParser::statement() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST statement_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch8
	#endif
		//DBG RuleRefElement( expression)
		expression();
		if (ActiveException()) goto _catch8;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG genAction(ActionElement action
		if ( inputState->guessing==0 ) {
			statement_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 251 "java_expression.g"
			statement_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(STATEMENT,"statement"))->add(statement_AST)));
#line 58 "JavaExpressionParser.cc"
			currentAST.root = statement_AST;
			if ( statement_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
				statement_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
				  currentAST.child = statement_AST->getFirstChild();
			else
				currentAST.child = statement_AST;
			currentAST.advanceChildToEnd();
		}
		//DBG genTokenRef(TokenRefElement)
		match(ANTLR_USE_NAMESPACE(antlr)Token::EOF_TYPE);
		if (ActiveException()) goto _catch8;//gen(TokenRefElement atom)
		statement_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_0);
			} else {
				throw;
			}
		}
	#endif
	_catch8:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_0);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = statement_AST;
}

//DBG genRule(expression)
void JavaExpressionParser::expression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST expression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch9
	#endif
		//DBG RuleRefElement( conditionalExpression)
		conditionalExpression();
		if (ActiveException()) goto _catch9;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		expression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_1);
			} else {
				throw;
			}
		}
	#endif
	_catch9:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_1);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = expression_AST;
}

//DBG genRule(conditionalExpression)
void JavaExpressionParser::conditionalExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST conditionalExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch10
	#endif
		//DBG RuleRefElement( conditionalOrExpression)
		conditionalOrExpression();
		if (ActiveException()) goto _catch10;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen(AlternativeBlock blk)
		{
		//DBG genCommonBlk(
		switch ( LA(1)) {
		//DBG genCases(BitSet)
		case QUESTION:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp45_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp45_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp45_AST);
			}
			match(QUESTION);
			if (ActiveException()) goto _catch10;//gen(TokenRefElement atom)
			//DBG RuleRefElement( expression)
			expression();
			if (ActiveException()) goto _catch10;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp46_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp46_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp46_AST);
			}
			match(COLON);
			if (ActiveException()) goto _catch10;//gen(TokenRefElement atom)
			//DBG RuleRefElement( conditionalExpression)
			conditionalExpression();
			if (ActiveException()) goto _catch10;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		//DBG genCases(BitSet)
		case ANTLR_USE_NAMESPACE(antlr)Token::EOF_TYPE:
		case RPAREN:
		case RBRACK:
		case COMMA:
		case COLON:
		{
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch10;
		}
		}
		}
		conditionalExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_1);
			} else {
				throw;
			}
		}
	#endif
	_catch10:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_1);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = conditionalExpression_AST;
}

//DBG genRule(expressionList)
void JavaExpressionParser::expressionList() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST expressionList_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch11
	#endif
		//DBG RuleRefElement( expression)
		expression();
		if (ActiveException()) goto _catch11;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen(AlternativeBlock blk)
		{
		//DBG genCommonBlk(
		switch ( LA(1)) {
		//DBG genCases(BitSet)
		case COMMA:
		{
			//DBG genTokenRef(TokenRefElement)
			match(COMMA);
			if (ActiveException()) goto _catch11;//gen(TokenRefElement atom)
			//DBG RuleRefElement( expressionList)
			expressionList();
			if (ActiveException()) goto _catch11;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		//DBG genCases(BitSet)
		case RPAREN:
		{
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch11;
		}
		}
		}
		//DBG genAction(ActionElement action
		if ( inputState->guessing==0 ) {
			expressionList_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 264 "java_expression.g"
			expressionList_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(EXPRESSION_LIST,"expression_list"))->add(expressionList_AST)));
#line 303 "JavaExpressionParser.cc"
			currentAST.root = expressionList_AST;
			if ( expressionList_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
				expressionList_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
				  currentAST.child = expressionList_AST->getFirstChild();
			else
				currentAST.child = expressionList_AST;
			currentAST.advanceChildToEnd();
		}
		expressionList_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_2);
			} else {
				throw;
			}
		}
	#endif
	_catch11:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_2);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = expressionList_AST;
}

//DBG genRule(conditionalOrExpression)
void JavaExpressionParser::conditionalOrExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST conditionalOrExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch12
	#endif
		//DBG RuleRefElement( conditionalAndExpression)
		conditionalAndExpression();
		if (ActiveException()) goto _catch12;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen*(ZeroOrMoreBlock)
		{ // ( ... )*
		for (;;) {
			//DBG genCommonBlk(
			if ((LA(1) == OR)) {
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					conditionalOrExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 275 "java_expression.g"
					conditionalOrExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(BINARY_EXPRESSION,"binary_expression"))->add(conditionalOrExpression_AST)));
#line 371 "JavaExpressionParser.cc"
					currentAST.root = conditionalOrExpression_AST;
					if ( conditionalOrExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						conditionalOrExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = conditionalOrExpression_AST->getFirstChild();
					else
						currentAST.child = conditionalOrExpression_AST;
					currentAST.advanceChildToEnd();
				}
				//DBG genTokenRef(TokenRefElement)
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp48_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp48_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp48_AST);
				}
				match(OR);
				if (ActiveException()) goto _catch12;//gen(TokenRefElement atom)
				//DBG RuleRefElement( conditionalAndExpression)
				conditionalAndExpression();
				if (ActiveException()) goto _catch12;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop111;
			}
			
		}
		_loop111:;
		} // ( ... )*
		conditionalOrExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_3);
			} else {
				throw;
			}
		}
	#endif
	_catch12:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_3);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = conditionalOrExpression_AST;
}

//DBG genRule(conditionalAndExpression)
void JavaExpressionParser::conditionalAndExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST conditionalAndExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch13
	#endif
		//DBG RuleRefElement( inclusiveOrExpression)
		inclusiveOrExpression();
		if (ActiveException()) goto _catch13;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen*(ZeroOrMoreBlock)
		{ // ( ... )*
		for (;;) {
			//DBG genCommonBlk(
			if ((LA(1) == AND)) {
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					conditionalAndExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 283 "java_expression.g"
					conditionalAndExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(BINARY_EXPRESSION,"binary_expression"))->add(conditionalAndExpression_AST)));
#line 461 "JavaExpressionParser.cc"
					currentAST.root = conditionalAndExpression_AST;
					if ( conditionalAndExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						conditionalAndExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = conditionalAndExpression_AST->getFirstChild();
					else
						currentAST.child = conditionalAndExpression_AST;
					currentAST.advanceChildToEnd();
				}
				//DBG genTokenRef(TokenRefElement)
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp49_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp49_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp49_AST);
				}
				match(AND);
				if (ActiveException()) goto _catch13;//gen(TokenRefElement atom)
				//DBG RuleRefElement( inclusiveOrExpression)
				inclusiveOrExpression();
				if (ActiveException()) goto _catch13;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop114;
			}
			
		}
		_loop114:;
		} // ( ... )*
		conditionalAndExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_4);
			} else {
				throw;
			}
		}
	#endif
	_catch13:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_4);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = conditionalAndExpression_AST;
}

//DBG genRule(inclusiveOrExpression)
void JavaExpressionParser::inclusiveOrExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST inclusiveOrExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch14
	#endif
		//DBG RuleRefElement( exclusiveOrExpression)
		exclusiveOrExpression();
		if (ActiveException()) goto _catch14;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen*(ZeroOrMoreBlock)
		{ // ( ... )*
		for (;;) {
			//DBG genCommonBlk(
			if ((LA(1) == BITOR)) {
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					inclusiveOrExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 291 "java_expression.g"
					inclusiveOrExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(BINARY_EXPRESSION,"binary_expression"))->add(inclusiveOrExpression_AST)));
#line 551 "JavaExpressionParser.cc"
					currentAST.root = inclusiveOrExpression_AST;
					if ( inclusiveOrExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						inclusiveOrExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = inclusiveOrExpression_AST->getFirstChild();
					else
						currentAST.child = inclusiveOrExpression_AST;
					currentAST.advanceChildToEnd();
				}
				//DBG genTokenRef(TokenRefElement)
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp50_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp50_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp50_AST);
				}
				match(BITOR);
				if (ActiveException()) goto _catch14;//gen(TokenRefElement atom)
				//DBG RuleRefElement( exclusiveOrExpression)
				exclusiveOrExpression();
				if (ActiveException()) goto _catch14;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop117;
			}
			
		}
		_loop117:;
		} // ( ... )*
		inclusiveOrExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_5);
			} else {
				throw;
			}
		}
	#endif
	_catch14:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_5);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = inclusiveOrExpression_AST;
}

//DBG genRule(exclusiveOrExpression)
void JavaExpressionParser::exclusiveOrExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST exclusiveOrExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch15
	#endif
		//DBG RuleRefElement( andExpression)
		andExpression();
		if (ActiveException()) goto _catch15;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen*(ZeroOrMoreBlock)
		{ // ( ... )*
		for (;;) {
			//DBG genCommonBlk(
			if ((LA(1) == CARET)) {
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					exclusiveOrExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 299 "java_expression.g"
					exclusiveOrExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(BINARY_EXPRESSION,"binary_expression"))->add(exclusiveOrExpression_AST)));
#line 641 "JavaExpressionParser.cc"
					currentAST.root = exclusiveOrExpression_AST;
					if ( exclusiveOrExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						exclusiveOrExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = exclusiveOrExpression_AST->getFirstChild();
					else
						currentAST.child = exclusiveOrExpression_AST;
					currentAST.advanceChildToEnd();
				}
				//DBG genTokenRef(TokenRefElement)
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp51_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp51_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp51_AST);
				}
				match(CARET);
				if (ActiveException()) goto _catch15;//gen(TokenRefElement atom)
				//DBG RuleRefElement( andExpression)
				andExpression();
				if (ActiveException()) goto _catch15;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop120;
			}
			
		}
		_loop120:;
		} // ( ... )*
		exclusiveOrExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_6);
			} else {
				throw;
			}
		}
	#endif
	_catch15:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_6);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = exclusiveOrExpression_AST;
}

//DBG genRule(andExpression)
void JavaExpressionParser::andExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST andExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch16
	#endif
		//DBG RuleRefElement( equalityExpression)
		equalityExpression();
		if (ActiveException()) goto _catch16;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen*(ZeroOrMoreBlock)
		{ // ( ... )*
		for (;;) {
			//DBG genCommonBlk(
			if ((LA(1) == BITAND)) {
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					andExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 307 "java_expression.g"
					andExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(BINARY_EXPRESSION,"binary_expression"))->add(andExpression_AST)));
#line 731 "JavaExpressionParser.cc"
					currentAST.root = andExpression_AST;
					if ( andExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						andExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = andExpression_AST->getFirstChild();
					else
						currentAST.child = andExpression_AST;
					currentAST.advanceChildToEnd();
				}
				//DBG genTokenRef(TokenRefElement)
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp52_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp52_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp52_AST);
				}
				match(BITAND);
				if (ActiveException()) goto _catch16;//gen(TokenRefElement atom)
				//DBG RuleRefElement( equalityExpression)
				equalityExpression();
				if (ActiveException()) goto _catch16;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop123;
			}
			
		}
		_loop123:;
		} // ( ... )*
		andExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_7);
			} else {
				throw;
			}
		}
	#endif
	_catch16:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_7);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = andExpression_AST;
}

//DBG genRule(equalityExpression)
void JavaExpressionParser::equalityExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST equalityExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch17
	#endif
		//DBG RuleRefElement( instanceofExpression)
		instanceofExpression();
		if (ActiveException()) goto _catch17;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen*(ZeroOrMoreBlock)
		{ // ( ... )*
		for (;;) {
			//DBG genCommonBlk(
			if ((LA(1) == EQUAL || LA(1) == NOTEQUAL)) {
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					equalityExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 315 "java_expression.g"
					equalityExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(BINARY_EXPRESSION,"binary_expression"))->add(equalityExpression_AST)));
#line 821 "JavaExpressionParser.cc"
					currentAST.root = equalityExpression_AST;
					if ( equalityExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						equalityExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = equalityExpression_AST->getFirstChild();
					else
						currentAST.child = equalityExpression_AST;
					currentAST.advanceChildToEnd();
				}
				//DBG gen(AlternativeBlock blk)
				{
				//DBG genCommonBlk(
				switch ( LA(1)) {
				//DBG genCases(BitSet)
				case EQUAL:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp53_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp53_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp53_AST);
					}
					match(EQUAL);
					if (ActiveException()) goto _catch17;//gen(TokenRefElement atom)
					break;
				}
				//DBG genCases(BitSet)
				case NOTEQUAL:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp54_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp54_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp54_AST);
					}
					match(NOTEQUAL);
					if (ActiveException()) goto _catch17;//gen(TokenRefElement atom)
					break;
				}
				default:
				{
					SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch17;
				}
				}
				}
				//DBG RuleRefElement( instanceofExpression)
				instanceofExpression();
				if (ActiveException()) goto _catch17;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop127;
			}
			
		}
		_loop127:;
		} // ( ... )*
		equalityExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_8);
			} else {
				throw;
			}
		}
	#endif
	_catch17:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_8);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = equalityExpression_AST;
}

//DBG genRule(instanceofExpression)
void JavaExpressionParser::instanceofExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST instanceofExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch18
	#endif
		//DBG RuleRefElement( relationalExpression)
		relationalExpression();
		if (ActiveException()) goto _catch18;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen(AlternativeBlock blk)
		{
		//DBG genCommonBlk(
		switch ( LA(1)) {
		//DBG genCases(BitSet)
		case INSTANCEOF:
		{
			//DBG genAction(ActionElement action
			if ( inputState->guessing==0 ) {
				instanceofExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 323 "java_expression.g"
				instanceofExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(INSTANCEOF_BINARY_EXPRESSION,"instanceof_binary_expression"))->add(instanceofExpression_AST)));
#line 941 "JavaExpressionParser.cc"
				currentAST.root = instanceofExpression_AST;
				if ( instanceofExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
					instanceofExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
					  currentAST.child = instanceofExpression_AST->getFirstChild();
				else
					currentAST.child = instanceofExpression_AST;
				currentAST.advanceChildToEnd();
			}
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp55_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp55_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp55_AST);
			}
			match(INSTANCEOF);
			if (ActiveException()) goto _catch18;//gen(TokenRefElement atom)
			//DBG RuleRefElement( classOrInterfaceType)
			classOrInterfaceType();
			if (ActiveException()) goto _catch18;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		//DBG genCases(BitSet)
		case ANTLR_USE_NAMESPACE(antlr)Token::EOF_TYPE:
		case RPAREN:
		case RBRACK:
		case COMMA:
		case QUESTION:
		case COLON:
		case EQUAL:
		case NOTEQUAL:
		case AND:
		case OR:
		case BITAND:
		case BITOR:
		case CARET:
		{
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch18;
		}
		}
		}
		instanceofExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_9);
			} else {
				throw;
			}
		}
	#endif
	_catch18:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_9);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = instanceofExpression_AST;
}

//DBG genRule(relationalExpression)
void JavaExpressionParser::relationalExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST relationalExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch19
	#endif
		//DBG RuleRefElement( shiftExpression)
		shiftExpression();
		if (ActiveException()) goto _catch19;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen*(ZeroOrMoreBlock)
		{ // ( ... )*
		for (;;) {
			//DBG genCommonBlk(
			if ((_tokenSet_10.member(LA(1)))) {
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					relationalExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 331 "java_expression.g"
					relationalExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(BINARY_EXPRESSION,"binary_expression"))->add(relationalExpression_AST)));
#line 1048 "JavaExpressionParser.cc"
					currentAST.root = relationalExpression_AST;
					if ( relationalExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						relationalExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = relationalExpression_AST->getFirstChild();
					else
						currentAST.child = relationalExpression_AST;
					currentAST.advanceChildToEnd();
				}
				//DBG gen(AlternativeBlock blk)
				{
				//DBG genCommonBlk(
				switch ( LA(1)) {
				//DBG genCases(BitSet)
				case CMP_LE:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp56_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp56_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp56_AST);
					}
					match(CMP_LE);
					if (ActiveException()) goto _catch19;//gen(TokenRefElement atom)
					break;
				}
				//DBG genCases(BitSet)
				case CMP_GE:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp57_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp57_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp57_AST);
					}
					match(CMP_GE);
					if (ActiveException()) goto _catch19;//gen(TokenRefElement atom)
					break;
				}
				//DBG genCases(BitSet)
				case CMP_LT:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp58_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp58_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp58_AST);
					}
					match(CMP_LT);
					if (ActiveException()) goto _catch19;//gen(TokenRefElement atom)
					break;
				}
				//DBG genCases(BitSet)
				case CMP_GT:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp59_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp59_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp59_AST);
					}
					match(CMP_GT);
					if (ActiveException()) goto _catch19;//gen(TokenRefElement atom)
					break;
				}
				default:
				{
					SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch19;
				}
				}
				}
				//DBG RuleRefElement( shiftExpression)
				shiftExpression();
				if (ActiveException()) goto _catch19;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop133;
			}
			
		}
		_loop133:;
		} // ( ... )*
		relationalExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_11);
			} else {
				throw;
			}
		}
	#endif
	_catch19:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_11);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = relationalExpression_AST;
}

//DBG genRule(classOrInterfaceType)
void JavaExpressionParser::classOrInterfaceType() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST classOrInterfaceType_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch20
	#endif
		//DBG genTokenRef(TokenRefElement)
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp60_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp60_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp60_AST);
		}
		match(Identifier);
		if (ActiveException()) goto _catch20;//gen(TokenRefElement atom)
		//DBG gen(AlternativeBlock blk)
		{
		//DBG genCommonBlk(
		switch ( LA(1)) {
		//DBG genCases(BitSet)
		case DOT:
		{
			//DBG genTokenRef(TokenRefElement)
			match(DOT);
			if (ActiveException()) goto _catch20;//gen(TokenRefElement atom)
			//DBG RuleRefElement( classOrInterfaceType)
			classOrInterfaceType();
			if (ActiveException()) goto _catch20;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		//DBG genCases(BitSet)
		case ANTLR_USE_NAMESPACE(antlr)Token::EOF_TYPE:
		case RPAREN:
		case RBRACK:
		case COMMA:
		case QUESTION:
		case COLON:
		case EQUAL:
		case NOTEQUAL:
		case AND:
		case OR:
		case BITAND:
		case BITOR:
		case CARET:
		{
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch20;
		}
		}
		}
		//DBG genAction(ActionElement action
		if ( inputState->guessing==0 ) {
			classOrInterfaceType_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 427 "java_expression.g"
			classOrInterfaceType_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(TYPE_NAME,"type_name"))->add(classOrInterfaceType_AST)));
#line 1230 "JavaExpressionParser.cc"
			currentAST.root = classOrInterfaceType_AST;
			if ( classOrInterfaceType_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
				classOrInterfaceType_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
				  currentAST.child = classOrInterfaceType_AST->getFirstChild();
			else
				currentAST.child = classOrInterfaceType_AST;
			currentAST.advanceChildToEnd();
		}
		classOrInterfaceType_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_9);
			} else {
				throw;
			}
		}
	#endif
	_catch20:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_9);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = classOrInterfaceType_AST;
}

//DBG genRule(shiftExpression)
void JavaExpressionParser::shiftExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST shiftExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch21
	#endif
		//DBG RuleRefElement( additiveExpression)
		additiveExpression();
		if (ActiveException()) goto _catch21;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen*(ZeroOrMoreBlock)
		{ // ( ... )*
		for (;;) {
			//DBG genCommonBlk(
			if (((LA(1) >= SHIFT_LEFT && LA(1) <= SHIFT_RIGHT_U))) {
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					shiftExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 339 "java_expression.g"
					shiftExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(BINARY_EXPRESSION,"binary_expression"))->add(shiftExpression_AST)));
#line 1298 "JavaExpressionParser.cc"
					currentAST.root = shiftExpression_AST;
					if ( shiftExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						shiftExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = shiftExpression_AST->getFirstChild();
					else
						currentAST.child = shiftExpression_AST;
					currentAST.advanceChildToEnd();
				}
				//DBG gen(AlternativeBlock blk)
				{
				//DBG genCommonBlk(
				switch ( LA(1)) {
				//DBG genCases(BitSet)
				case SHIFT_LEFT:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp62_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp62_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp62_AST);
					}
					match(SHIFT_LEFT);
					if (ActiveException()) goto _catch21;//gen(TokenRefElement atom)
					break;
				}
				//DBG genCases(BitSet)
				case SHIFT_RIGHT_S:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp63_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp63_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp63_AST);
					}
					match(SHIFT_RIGHT_S);
					if (ActiveException()) goto _catch21;//gen(TokenRefElement atom)
					break;
				}
				//DBG genCases(BitSet)
				case SHIFT_RIGHT_U:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp64_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp64_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp64_AST);
					}
					match(SHIFT_RIGHT_U);
					if (ActiveException()) goto _catch21;//gen(TokenRefElement atom)
					break;
				}
				default:
				{
					SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch21;
				}
				}
				}
				//DBG RuleRefElement( additiveExpression)
				additiveExpression();
				if (ActiveException()) goto _catch21;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop137;
			}
			
		}
		_loop137:;
		} // ( ... )*
		shiftExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_12);
			} else {
				throw;
			}
		}
	#endif
	_catch21:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_12);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = shiftExpression_AST;
}

//DBG genRule(additiveExpression)
void JavaExpressionParser::additiveExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST additiveExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch22
	#endif
		//DBG RuleRefElement( multiplicativeExpression)
		multiplicativeExpression();
		if (ActiveException()) goto _catch22;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen*(ZeroOrMoreBlock)
		{ // ( ... )*
		for (;;) {
			//DBG genCommonBlk(
			if ((LA(1) == ADD || LA(1) == SUB)) {
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					additiveExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 347 "java_expression.g"
					additiveExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(BINARY_EXPRESSION,"binary_expression"))->add(additiveExpression_AST)));
#line 1429 "JavaExpressionParser.cc"
					currentAST.root = additiveExpression_AST;
					if ( additiveExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						additiveExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = additiveExpression_AST->getFirstChild();
					else
						currentAST.child = additiveExpression_AST;
					currentAST.advanceChildToEnd();
				}
				//DBG gen(AlternativeBlock blk)
				{
				//DBG genCommonBlk(
				switch ( LA(1)) {
				//DBG genCases(BitSet)
				case ADD:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp65_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp65_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp65_AST);
					}
					match(ADD);
					if (ActiveException()) goto _catch22;//gen(TokenRefElement atom)
					break;
				}
				//DBG genCases(BitSet)
				case SUB:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp66_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp66_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp66_AST);
					}
					match(SUB);
					if (ActiveException()) goto _catch22;//gen(TokenRefElement atom)
					break;
				}
				default:
				{
					SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch22;
				}
				}
				}
				//DBG RuleRefElement( multiplicativeExpression)
				multiplicativeExpression();
				if (ActiveException()) goto _catch22;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop141;
			}
			
		}
		_loop141:;
		} // ( ... )*
		additiveExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_13);
			} else {
				throw;
			}
		}
	#endif
	_catch22:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_13);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = additiveExpression_AST;
}

//DBG genRule(multiplicativeExpression)
void JavaExpressionParser::multiplicativeExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST multiplicativeExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch23
	#endif
		//DBG RuleRefElement( unaryExpression)
		unaryExpression();
		if (ActiveException()) goto _catch23;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG gen*(ZeroOrMoreBlock)
		{ // ( ... )*
		for (;;) {
			//DBG genCommonBlk(
			if ((LA(1) == MUL || LA(1) == DIV || LA(1) == MOD)) {
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					multiplicativeExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 355 "java_expression.g"
					multiplicativeExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(BINARY_EXPRESSION,"binary_expression"))->add(multiplicativeExpression_AST)));
#line 1547 "JavaExpressionParser.cc"
					currentAST.root = multiplicativeExpression_AST;
					if ( multiplicativeExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						multiplicativeExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = multiplicativeExpression_AST->getFirstChild();
					else
						currentAST.child = multiplicativeExpression_AST;
					currentAST.advanceChildToEnd();
				}
				//DBG gen(AlternativeBlock blk)
				{
				//DBG genCommonBlk(
				switch ( LA(1)) {
				//DBG genCases(BitSet)
				case MUL:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp67_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp67_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp67_AST);
					}
					match(MUL);
					if (ActiveException()) goto _catch23;//gen(TokenRefElement atom)
					break;
				}
				//DBG genCases(BitSet)
				case DIV:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp68_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp68_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp68_AST);
					}
					match(DIV);
					if (ActiveException()) goto _catch23;//gen(TokenRefElement atom)
					break;
				}
				//DBG genCases(BitSet)
				case MOD:
				{
					//DBG genTokenRef(TokenRefElement)
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp69_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp69_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp69_AST);
					}
					match(MOD);
					if (ActiveException()) goto _catch23;//gen(TokenRefElement atom)
					break;
				}
				default:
				{
					SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch23;
				}
				}
				}
				//DBG RuleRefElement( unaryExpression)
				unaryExpression();
				if (ActiveException()) goto _catch23;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop145;
			}
			
		}
		_loop145:;
		} // ( ... )*
		multiplicativeExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_14);
			} else {
				throw;
			}
		}
	#endif
	_catch23:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_14);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = multiplicativeExpression_AST;
}

//DBG genRule(unaryExpression)
void JavaExpressionParser::unaryExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST unaryExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch24
	#endif
		//DBG genCommonBlk(
		switch ( LA(1)) {
		//DBG genCases(BitSet)
		case ADD:
		case SUB:
		{
			//DBG gen(AlternativeBlock blk)
			{
			//DBG genCommonBlk(
			switch ( LA(1)) {
			//DBG genCases(BitSet)
			case ADD:
			{
				//DBG genTokenRef(TokenRefElement)
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp70_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp70_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp70_AST);
				}
				match(ADD);
				if (ActiveException()) goto _catch24;//gen(TokenRefElement atom)
				break;
			}
			//DBG genCases(BitSet)
			case SUB:
			{
				//DBG genTokenRef(TokenRefElement)
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp71_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp71_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp71_AST);
				}
				match(SUB);
				if (ActiveException()) goto _catch24;//gen(TokenRefElement atom)
				break;
			}
			default:
			{
				SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch24;
			}
			}
			}
			//DBG RuleRefElement( unaryExpression)
			unaryExpression();
			if (ActiveException()) goto _catch24;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			//DBG genAction(ActionElement action
			if ( inputState->guessing==0 ) {
				unaryExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 362 "java_expression.g"
				unaryExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(UNARY_EXPRESSION,"unary_expression"))->add(unaryExpression_AST)));
#line 1715 "JavaExpressionParser.cc"
				currentAST.root = unaryExpression_AST;
				if ( unaryExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
					unaryExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
					  currentAST.child = unaryExpression_AST->getFirstChild();
				else
					currentAST.child = unaryExpression_AST;
				currentAST.advanceChildToEnd();
			}
			unaryExpression_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case JNULL:
		case TRUE:
		case FALSE:
		case HEX_NUMERIC_LITERAL:
		case OCT_NUMERIC_LITERAL:
		case FP_NUMERIC_LITERAL:
		case DEC_NUMERIC_LITERAL:
		case CharacterLiteral:
		case StringLiteral:
		case Identifier:
		case LPAREN:
		case BANG:
		case TILDE:
		{
			//DBG RuleRefElement( unaryExpressionNotPlusMinus)
			unaryExpressionNotPlusMinus();
			if (ActiveException()) goto _catch24;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			unaryExpression_AST = currentAST.root;
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch24;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_15);
			} else {
				throw;
			}
		}
	#endif
	_catch24:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_15);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = unaryExpression_AST;
}

//DBG genRule(unaryExpressionNotPlusMinus)
void JavaExpressionParser::unaryExpressionNotPlusMinus() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST unaryExpressionNotPlusMinus_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch25
	#endif
		//DBG genCommonBlk(
		if ((LA(1) == BANG || LA(1) == TILDE)) {
			//DBG gen(AlternativeBlock blk)
			{
			//DBG genCommonBlk(
			switch ( LA(1)) {
			//DBG genCases(BitSet)
			case TILDE:
			{
				//DBG genTokenRef(TokenRefElement)
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp72_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp72_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp72_AST);
				}
				match(TILDE);
				if (ActiveException()) goto _catch25;//gen(TokenRefElement atom)
				break;
			}
			//DBG genCases(BitSet)
			case BANG:
			{
				//DBG genTokenRef(TokenRefElement)
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp73_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp73_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp73_AST);
				}
				match(BANG);
				if (ActiveException()) goto _catch25;//gen(TokenRefElement atom)
				break;
			}
			default:
			{
				SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch25;
			}
			}
			}
			//DBG RuleRefElement( unaryExpression)
			unaryExpression();
			if (ActiveException()) goto _catch25;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			//DBG genAction(ActionElement action
			if ( inputState->guessing==0 ) {
				unaryExpressionNotPlusMinus_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 368 "java_expression.g"
				unaryExpressionNotPlusMinus_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(UNARY_EXPRESSION,"unary_expression"))->add(unaryExpressionNotPlusMinus_AST)));
#line 1847 "JavaExpressionParser.cc"
				currentAST.root = unaryExpressionNotPlusMinus_AST;
				if ( unaryExpressionNotPlusMinus_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
					unaryExpressionNotPlusMinus_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
					  currentAST.child = unaryExpressionNotPlusMinus_AST->getFirstChild();
				else
					currentAST.child = unaryExpressionNotPlusMinus_AST;
				currentAST.advanceChildToEnd();
			}
			unaryExpressionNotPlusMinus_AST = currentAST.root;
		}
		else {
			//DBG gen=>(SynPredBlock)
			bool synPredMatched151 = false;
			if (((LA(1) == LPAREN) && (LA(2) == Identifier))) {
				int _m151 = mark();
				synPredMatched151 = true;
				inputState->guessing++;
				{ //xxx_catch26
					//DBG gen(AlternativeBlock blk)
					{
					//DBG genCommonBlk(
					//DBG RuleRefElement( castExpression)
					castExpression();
					if (ActiveException()) goto _catch26;
					}
				}
				_catch26:
				{
					if (ActiveException()) {
					synPredMatched151 = false;
					ClearException();
					}
				}
				rewind(_m151);
				inputState->guessing--;
			}
			if ( synPredMatched151 ) {
				//DBG RuleRefElement( castExpression)
				castExpression();
				if (ActiveException()) goto _catch25;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				unaryExpressionNotPlusMinus_AST = currentAST.root;
			}
			else if ((_tokenSet_16.member(LA(1))) && (_tokenSet_17.member(LA(2)))) {
				//DBG RuleRefElement( primary)
				primary();
				if (ActiveException()) goto _catch25;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				//DBG gen*(ZeroOrMoreBlock)
				{ // ( ... )*
				for (;;) {
					//DBG genCommonBlk(
					if ((LA(1) == DOT || LA(1) == LBRACK)) {
						//DBG genAction(ActionElement action
						if ( inputState->guessing==0 ) {
							unaryExpressionNotPlusMinus_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 372 "java_expression.g"
							unaryExpressionNotPlusMinus_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(PRIMARY_SELECTOR,"primary_selector"))->add(unaryExpressionNotPlusMinus_AST)));
#line 1910 "JavaExpressionParser.cc"
							currentAST.root = unaryExpressionNotPlusMinus_AST;
							if ( unaryExpressionNotPlusMinus_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
								unaryExpressionNotPlusMinus_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
								  currentAST.child = unaryExpressionNotPlusMinus_AST->getFirstChild();
							else
								currentAST.child = unaryExpressionNotPlusMinus_AST;
							currentAST.advanceChildToEnd();
						}
						//DBG RuleRefElement( selector)
						selector();
						if (ActiveException()) goto _catch25;
						if (inputState->guessing==0) {
							astFactory->addASTChild( currentAST, returnAST );
						}
					}
					else {
						goto _loop153;
					}
					
				}
				_loop153:;
				} // ( ... )*
				unaryExpressionNotPlusMinus_AST = currentAST.root;
			}
		else {
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch25;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_15);
			} else {
				throw;
			}
		}
	#endif
	_catch25:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_15);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = unaryExpressionNotPlusMinus_AST;
}

//DBG genRule(castExpression)
void JavaExpressionParser::castExpression() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST castExpression_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch27
	#endif
		//DBG genTokenRef(TokenRefElement)
		match(LPAREN);
		if (ActiveException()) goto _catch27;//gen(TokenRefElement atom)
		//DBG RuleRefElement( classOrInterfaceType)
		classOrInterfaceType();
		if (ActiveException()) goto _catch27;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG genTokenRef(TokenRefElement)
		match(RPAREN);
		if (ActiveException()) goto _catch27;//gen(TokenRefElement atom)
		//DBG RuleRefElement( unaryExpressionNotPlusMinus)
		unaryExpressionNotPlusMinus();
		if (ActiveException()) goto _catch27;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		//DBG genAction(ActionElement action
		if ( inputState->guessing==0 ) {
			castExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 379 "java_expression.g"
			castExpression_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(TYPE_CAST,"type_cast"))->add(castExpression_AST)));
#line 2004 "JavaExpressionParser.cc"
			currentAST.root = castExpression_AST;
			if ( castExpression_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
				castExpression_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
				  currentAST.child = castExpression_AST->getFirstChild();
			else
				currentAST.child = castExpression_AST;
			currentAST.advanceChildToEnd();
		}
		castExpression_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_15);
			} else {
				throw;
			}
		}
	#endif
	_catch27:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_15);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = castExpression_AST;
}

//DBG genRule(primary)
void JavaExpressionParser::primary() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST primary_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch28
	#endif
		//DBG genCommonBlk(
		switch ( LA(1)) {
		//DBG genCases(BitSet)
		case LPAREN:
		{
			//DBG genTokenRef(TokenRefElement)
			match(LPAREN);
			if (ActiveException()) goto _catch28;//gen(TokenRefElement atom)
			//DBG RuleRefElement( expression)
			expression();
			if (ActiveException()) goto _catch28;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			//DBG genTokenRef(TokenRefElement)
			match(RPAREN);
			if (ActiveException()) goto _catch28;//gen(TokenRefElement atom)
			//DBG genAction(ActionElement action
			if ( inputState->guessing==0 ) {
				primary_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 384 "java_expression.g"
				primary_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(PARENTHESES_EXPRESSION,"parentheses_expression"))->add(primary_AST)));
#line 2078 "JavaExpressionParser.cc"
				currentAST.root = primary_AST;
				if ( primary_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
					primary_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
					  currentAST.child = primary_AST->getFirstChild();
				else
					currentAST.child = primary_AST;
				currentAST.advanceChildToEnd();
			}
			primary_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case Identifier:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp78_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp78_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp78_AST);
			}
			match(Identifier);
			if (ActiveException()) goto _catch28;//gen(TokenRefElement atom)
			//DBG gen(AlternativeBlock blk)
			{
			//DBG genCommonBlk(
			switch ( LA(1)) {
			//DBG genCases(BitSet)
			case LPAREN:
			{
				//DBG RuleRefElement( arguments)
				arguments();
				if (ActiveException()) goto _catch28;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					primary_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 388 "java_expression.g"
					primary_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(METHOD_CALL,"method_call"))->add(primary_AST)));
#line 2119 "JavaExpressionParser.cc"
					currentAST.root = primary_AST;
					if ( primary_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						primary_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = primary_AST->getFirstChild();
					else
						currentAST.child = primary_AST;
					currentAST.advanceChildToEnd();
				}
				break;
			}
			//DBG genCases(BitSet)
			case ANTLR_USE_NAMESPACE(antlr)Token::EOF_TYPE:
			case INSTANCEOF:
			case DOT:
			case RPAREN:
			case LBRACK:
			case RBRACK:
			case COMMA:
			case CMP_GT:
			case CMP_LT:
			case QUESTION:
			case COLON:
			case EQUAL:
			case CMP_LE:
			case CMP_GE:
			case NOTEQUAL:
			case AND:
			case OR:
			case ADD:
			case SUB:
			case MUL:
			case DIV:
			case BITAND:
			case BITOR:
			case CARET:
			case MOD:
			case SHIFT_LEFT:
			case SHIFT_RIGHT_S:
			case SHIFT_RIGHT_U:
			{
				break;
			}
			default:
			{
				SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch28;
			}
			}
			}
			primary_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case JNULL:
		case TRUE:
		case FALSE:
		case HEX_NUMERIC_LITERAL:
		case OCT_NUMERIC_LITERAL:
		case FP_NUMERIC_LITERAL:
		case DEC_NUMERIC_LITERAL:
		case CharacterLiteral:
		case StringLiteral:
		{
			//DBG RuleRefElement( literal)
			literal();
			if (ActiveException()) goto _catch28;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			primary_AST = currentAST.root;
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch28;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_18);
			} else {
				throw;
			}
		}
	#endif
	_catch28:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = primary_AST;
}

//DBG genRule(selector)
void JavaExpressionParser::selector() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST selector_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch29
	#endif
		//DBG genCommonBlk(
		switch ( LA(1)) {
		//DBG genCases(BitSet)
		case DOT:
		{
			//DBG genTokenRef(TokenRefElement)
			match(DOT);
			if (ActiveException()) goto _catch29;//gen(TokenRefElement atom)
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp80_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp80_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp80_AST);
			}
			match(Identifier);
			if (ActiveException()) goto _catch29;//gen(TokenRefElement atom)
			//DBG gen(AlternativeBlock blk)
			{
			//DBG genCommonBlk(
			switch ( LA(1)) {
			//DBG genCases(BitSet)
			case LPAREN:
			{
				//DBG RuleRefElement( arguments)
				arguments();
				if (ActiveException()) goto _catch29;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				//DBG genAction(ActionElement action
				if ( inputState->guessing==0 ) {
					selector_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 402 "java_expression.g"
					selector_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(METHOD_CALL,"method_call"))->add(selector_AST)));
#line 2272 "JavaExpressionParser.cc"
					currentAST.root = selector_AST;
					if ( selector_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
						selector_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
						  currentAST.child = selector_AST->getFirstChild();
					else
						currentAST.child = selector_AST;
					currentAST.advanceChildToEnd();
				}
				break;
			}
			//DBG genCases(BitSet)
			case ANTLR_USE_NAMESPACE(antlr)Token::EOF_TYPE:
			case INSTANCEOF:
			case DOT:
			case RPAREN:
			case LBRACK:
			case RBRACK:
			case COMMA:
			case CMP_GT:
			case CMP_LT:
			case QUESTION:
			case COLON:
			case EQUAL:
			case CMP_LE:
			case CMP_GE:
			case NOTEQUAL:
			case AND:
			case OR:
			case ADD:
			case SUB:
			case MUL:
			case DIV:
			case BITAND:
			case BITOR:
			case CARET:
			case MOD:
			case SHIFT_LEFT:
			case SHIFT_RIGHT_S:
			case SHIFT_RIGHT_U:
			{
				break;
			}
			default:
			{
				SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch29;
			}
			}
			}
			//DBG genAction(ActionElement action
			if ( inputState->guessing==0 ) {
				selector_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
#line 404 "java_expression.g"
				selector_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(DOT_SELECTOR,"dot_selector"))->add(selector_AST)));
#line 2326 "JavaExpressionParser.cc"
				currentAST.root = selector_AST;
				if ( selector_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
					selector_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
					  currentAST.child = selector_AST->getFirstChild();
				else
					currentAST.child = selector_AST;
				currentAST.advanceChildToEnd();
			}
			selector_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case LBRACK:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp81_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp81_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp81_AST);
			}
			match(LBRACK);
			if (ActiveException()) goto _catch29;//gen(TokenRefElement atom)
			//DBG RuleRefElement( expression)
			expression();
			if (ActiveException()) goto _catch29;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp82_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp82_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp82_AST);
			}
			match(RBRACK);
			if (ActiveException()) goto _catch29;//gen(TokenRefElement atom)
			selector_AST = currentAST.root;
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch29;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_18);
			} else {
				throw;
			}
		}
	#endif
	_catch29:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = selector_AST;
}

//DBG genRule(arguments)
void JavaExpressionParser::arguments() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST arguments_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch30
	#endif
		//DBG genTokenRef(TokenRefElement)
		match(LPAREN);
		if (ActiveException()) goto _catch30;//gen(TokenRefElement atom)
		//DBG gen(AlternativeBlock blk)
		{
		//DBG genCommonBlk(
		switch ( LA(1)) {
		//DBG genCases(BitSet)
		case JNULL:
		case TRUE:
		case FALSE:
		case HEX_NUMERIC_LITERAL:
		case OCT_NUMERIC_LITERAL:
		case FP_NUMERIC_LITERAL:
		case DEC_NUMERIC_LITERAL:
		case CharacterLiteral:
		case StringLiteral:
		case Identifier:
		case LPAREN:
		case BANG:
		case TILDE:
		case ADD:
		case SUB:
		{
			//DBG RuleRefElement( expressionList)
			expressionList();
			if (ActiveException()) goto _catch30;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		//DBG genCases(BitSet)
		case RPAREN:
		{
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch30;
		}
		}
		}
		//DBG genTokenRef(TokenRefElement)
		match(RPAREN);
		if (ActiveException()) goto _catch30;//gen(TokenRefElement atom)
		arguments_AST = currentAST.root;
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_18);
			} else {
				throw;
			}
		}
	#endif
	_catch30:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = arguments_AST;
}

//DBG genRule(literal)
void JavaExpressionParser::literal() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST literal_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch31
	#endif
		//DBG genCommonBlk(
		switch ( LA(1)) {
		//DBG genCases(BitSet)
		case HEX_NUMERIC_LITERAL:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp85_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp85_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp85_AST);
			}
			match(HEX_NUMERIC_LITERAL);
			if (ActiveException()) goto _catch31;//gen(TokenRefElement atom)
			literal_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case OCT_NUMERIC_LITERAL:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp86_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp86_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp86_AST);
			}
			match(OCT_NUMERIC_LITERAL);
			if (ActiveException()) goto _catch31;//gen(TokenRefElement atom)
			literal_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case FP_NUMERIC_LITERAL:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp87_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp87_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp87_AST);
			}
			match(FP_NUMERIC_LITERAL);
			if (ActiveException()) goto _catch31;//gen(TokenRefElement atom)
			literal_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case DEC_NUMERIC_LITERAL:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp88_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp88_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp88_AST);
			}
			match(DEC_NUMERIC_LITERAL);
			if (ActiveException()) goto _catch31;//gen(TokenRefElement atom)
			literal_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case CharacterLiteral:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp89_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp89_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp89_AST);
			}
			match(CharacterLiteral);
			if (ActiveException()) goto _catch31;//gen(TokenRefElement atom)
			literal_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case StringLiteral:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp90_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp90_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp90_AST);
			}
			match(StringLiteral);
			if (ActiveException()) goto _catch31;//gen(TokenRefElement atom)
			literal_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case TRUE:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp91_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp91_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp91_AST);
			}
			match(TRUE);
			if (ActiveException()) goto _catch31;//gen(TokenRefElement atom)
			literal_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case FALSE:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp92_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp92_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp92_AST);
			}
			match(FALSE);
			if (ActiveException()) goto _catch31;//gen(TokenRefElement atom)
			literal_AST = currentAST.root;
			break;
		}
		//DBG genCases(BitSet)
		case JNULL:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp93_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp93_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp93_AST);
			}
			match(JNULL);
			if (ActiveException()) goto _catch31;//gen(TokenRefElement atom)
			literal_AST = currentAST.root;
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename())); goto _catch31;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			if( inputState->guessing == 0 ) {
				reportError(ex);
				consume();
				consumeUntil(_tokenSet_18);
			} else {
				throw;
			}
		}
	#endif
	_catch31:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		if( inputState->guessing == 0 ) {
			reportError(*pEx);
			ClearException();
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			if (ActiveException()) return ;
		}
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return ;
	}
	returnAST = literal_AST;
}

void JavaExpressionParser::initializeASTFactory( ANTLR_USE_NAMESPACE(antlr)ASTFactory& factory )
{
	factory.setMaxNodeType(72);
}
const char* JavaExpressionParser::tokenNames[] = {
	"<0>",
	"EOF",
	"<2>",
	"NULL_TREE_LOOKAHEAD",
	"STATEMENT",
	"BINARY_EXPRESSION",
	"INSTANCEOF_BINARY_EXPRESSION",
	"UNARY_EXPRESSION",
	"PARENTHESES_EXPRESSION",
	"TYPE_CAST",
	"TYPE_NAME",
	"PRIMARY_SELECTOR",
	"DOT_SELECTOR",
	"METHOD_CALL",
	"EXPRESSION_LIST",
	"\"null\"",
	"\"true\"",
	"\"false\"",
	"\"instanceof\"",
	"DOT",
	"HEX_NUMERIC_LITERAL",
	"OCT_NUMERIC_LITERAL",
	"FP_NUMERIC_LITERAL",
	"DEC_NUMERIC_LITERAL",
	"HexDigit",
	"DecDigit",
	"OctDigit",
	"NumericLiteral",
	"CharacterLiteral",
	"SingleCharacter",
	"StringLiteral",
	"StringCharacters",
	"StringCharacter",
	"EscapeSequence",
	"OctalEscape",
	"UnicodeEscape",
	"ZeroToThree",
	"Identifier",
	"LPAREN",
	"RPAREN",
	"LBRACE",
	"RBRACE",
	"LBRACK",
	"RBRACK",
	"SEMI",
	"COMMA",
	"ASSIGN",
	"CMP_GT",
	"CMP_LT",
	"BANG",
	"TILDE",
	"QUESTION",
	"COLON",
	"EQUAL",
	"CMP_LE",
	"CMP_GE",
	"NOTEQUAL",
	"AND",
	"OR",
	"ADD",
	"SUB",
	"MUL",
	"DIV",
	"BITAND",
	"BITOR",
	"CARET",
	"MOD",
	"SHIFT_LEFT",
	"SHIFT_RIGHT_S",
	"SHIFT_RIGHT_U",
	"WS",
	"COMMENT",
	"LINE_COMMENT",
	0
};

const unsigned long JavaExpressionParser::_tokenSet_0_data_[] = { 2UL, 0UL, 0UL, 0UL };
// EOF 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_0(_tokenSet_0_data_,4);
const unsigned long JavaExpressionParser::_tokenSet_1_data_[] = { 2UL, 1058944UL, 0UL, 0UL };
// EOF RPAREN RBRACK COMMA COLON 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_1(_tokenSet_1_data_,4);
const unsigned long JavaExpressionParser::_tokenSet_2_data_[] = { 0UL, 128UL, 0UL, 0UL };
// RPAREN 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_2(_tokenSet_2_data_,4);
const unsigned long JavaExpressionParser::_tokenSet_3_data_[] = { 2UL, 1583232UL, 0UL, 0UL };
// EOF RPAREN RBRACK COMMA QUESTION COLON 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_3(_tokenSet_3_data_,4);
const unsigned long JavaExpressionParser::_tokenSet_4_data_[] = { 2UL, 68692096UL, 0UL, 0UL };
// EOF RPAREN RBRACK COMMA QUESTION COLON OR 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_4(_tokenSet_4_data_,4);
const unsigned long JavaExpressionParser::_tokenSet_5_data_[] = { 2UL, 102246528UL, 0UL, 0UL };
// EOF RPAREN RBRACK COMMA QUESTION COLON AND OR 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_5(_tokenSet_5_data_,4);
const unsigned long JavaExpressionParser::_tokenSet_6_data_[] = { 2UL, 102246528UL, 1UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF RPAREN RBRACK COMMA QUESTION COLON AND OR BITOR 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_6(_tokenSet_6_data_,8);
const unsigned long JavaExpressionParser::_tokenSet_7_data_[] = { 2UL, 102246528UL, 3UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF RPAREN RBRACK COMMA QUESTION COLON AND OR BITOR CARET 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_7(_tokenSet_7_data_,8);
const unsigned long JavaExpressionParser::_tokenSet_8_data_[] = { 2UL, 2249730176UL, 3UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF RPAREN RBRACK COMMA QUESTION COLON AND OR BITAND BITOR CARET 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_8(_tokenSet_8_data_,8);
const unsigned long JavaExpressionParser::_tokenSet_9_data_[] = { 2UL, 2268604544UL, 3UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF RPAREN RBRACK COMMA QUESTION COLON EQUAL NOTEQUAL AND OR BITAND 
// BITOR CARET 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_9(_tokenSet_9_data_,8);
const unsigned long JavaExpressionParser::_tokenSet_10_data_[] = { 0UL, 12681216UL, 0UL, 0UL };
// CMP_GT CMP_LT CMP_LE CMP_GE 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_10(_tokenSet_10_data_,4);
const unsigned long JavaExpressionParser::_tokenSet_11_data_[] = { 262146UL, 2268604544UL, 3UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF "instanceof" RPAREN RBRACK COMMA QUESTION COLON EQUAL NOTEQUAL AND 
// OR BITAND BITOR CARET 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_11(_tokenSet_11_data_,8);
const unsigned long JavaExpressionParser::_tokenSet_12_data_[] = { 262146UL, 2281285760UL, 3UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF "instanceof" RPAREN RBRACK COMMA CMP_GT CMP_LT QUESTION COLON EQUAL 
// CMP_LE CMP_GE NOTEQUAL AND OR BITAND BITOR CARET 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_12(_tokenSet_12_data_,8);
const unsigned long JavaExpressionParser::_tokenSet_13_data_[] = { 262146UL, 2281285760UL, 59UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF "instanceof" RPAREN RBRACK COMMA CMP_GT CMP_LT QUESTION COLON EQUAL 
// CMP_LE CMP_GE NOTEQUAL AND OR BITAND BITOR CARET SHIFT_LEFT SHIFT_RIGHT_S 
// SHIFT_RIGHT_U 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_13(_tokenSet_13_data_,8);
const unsigned long JavaExpressionParser::_tokenSet_14_data_[] = { 262146UL, 2683938944UL, 59UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF "instanceof" RPAREN RBRACK COMMA CMP_GT CMP_LT QUESTION COLON EQUAL 
// CMP_LE CMP_GE NOTEQUAL AND OR ADD SUB BITAND BITOR CARET SHIFT_LEFT 
// SHIFT_RIGHT_S SHIFT_RIGHT_U 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_14(_tokenSet_14_data_,8);
const unsigned long JavaExpressionParser::_tokenSet_15_data_[] = { 262146UL, 4294551680UL, 63UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF "instanceof" RPAREN RBRACK COMMA CMP_GT CMP_LT QUESTION COLON EQUAL 
// CMP_LE CMP_GE NOTEQUAL AND OR ADD SUB MUL DIV BITAND BITOR CARET MOD 
// SHIFT_LEFT SHIFT_RIGHT_S SHIFT_RIGHT_U 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_15(_tokenSet_15_data_,8);
const unsigned long JavaExpressionParser::_tokenSet_16_data_[] = { 1358135296UL, 96UL, 0UL, 0UL };
// "null" "true" "false" HEX_NUMERIC_LITERAL OCT_NUMERIC_LITERAL FP_NUMERIC_LITERAL 
// DEC_NUMERIC_LITERAL CharacterLiteral StringLiteral Identifier LPAREN 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_16(_tokenSet_16_data_,4);
const unsigned long JavaExpressionParser::_tokenSet_17_data_[] = { 1358921730UL, 4294946016UL, 63UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF "null" "true" "false" "instanceof" DOT HEX_NUMERIC_LITERAL OCT_NUMERIC_LITERAL 
// FP_NUMERIC_LITERAL DEC_NUMERIC_LITERAL CharacterLiteral StringLiteral 
// Identifier LPAREN RPAREN LBRACK RBRACK COMMA CMP_GT CMP_LT BANG TILDE 
// QUESTION COLON EQUAL CMP_LE CMP_GE NOTEQUAL AND OR ADD SUB MUL DIV BITAND 
// BITOR CARET MOD SHIFT_LEFT SHIFT_RIGHT_S SHIFT_RIGHT_U 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_17(_tokenSet_17_data_,8);
const unsigned long JavaExpressionParser::_tokenSet_18_data_[] = { 786434UL, 4294552704UL, 63UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF "instanceof" DOT RPAREN LBRACK RBRACK COMMA CMP_GT CMP_LT QUESTION 
// COLON EQUAL CMP_LE CMP_GE NOTEQUAL AND OR ADD SUB MUL DIV BITAND BITOR 
// CARET MOD SHIFT_LEFT SHIFT_RIGHT_S SHIFT_RIGHT_U 
const ANTLR_USE_NAMESPACE(antlr)BitSet JavaExpressionParser::_tokenSet_18(_tokenSet_18_data_,8);


ANTLR_END_NAMESPACE
ANTLR_END_NAMESPACE