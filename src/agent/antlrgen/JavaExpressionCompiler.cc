/* $ANTLR 2.7.2: "java_expression.g" -> "JavaExpressionCompiler.cc"$ */
#include "JavaExpressionCompiler.hpp"
#include "third_party/antlr/lib/cpp/antlr/Token.hpp"
#include "third_party/antlr/lib/cpp/antlr/AST.hpp"
#include "third_party/antlr/lib/cpp/antlr/NoViableAltException.hpp"
#include "third_party/antlr/lib/cpp/antlr/MismatchedTokenException.hpp"
#include "third_party/antlr/lib/cpp/antlr/SemanticException.hpp"
#include "third_party/antlr/lib/cpp/antlr/BitSet.hpp"
ANTLR_BEGIN_NAMESPACE(devtools)
ANTLR_BEGIN_NAMESPACE(cdbg)
#line 1 "java_expression.g"
#line 13 "JavaExpressionCompiler.cc"
JavaExpressionCompiler::JavaExpressionCompiler()
	: ANTLR_USE_NAMESPACE(antlr)TreeParser() {
}

//DBG genRule(statement)
JavaExpression*  JavaExpressionCompiler::statement(ANTLR_USE_NAMESPACE(antlr)RefAST _t) {
#line 523 "java_expression.g"
	JavaExpression* root;
#line 22 "JavaExpressionCompiler.cc"
	ANTLR_USE_NAMESPACE(antlr)RefAST statement_AST_in = _t;
#line 523 "java_expression.g"
	
	root = nullptr;
	
#line 28 "JavaExpressionCompiler.cc"
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch0
	#endif
		ANTLR_USE_NAMESPACE(antlr)RefAST __t165 = _t;
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp1_AST_in = _t;
		match(_t,STATEMENT);
		if (ActiveException()) goto _catch0;
		_t = _t->getFirstChild();
		//DBG RuleRefElement( expression)
		root=expression(_t);
		if (ActiveException()) goto _catch0;
		_t = _retTree;
		_t = __t165;
		_t = _t->getNextSibling();
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			reportError(ex);
			if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
				_t = _t->getNextSibling();
		}
	#endif
	_catch0:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		reportError(*pEx);
		ClearException();
		if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = _t->getNextSibling();
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return root;
	}
	_retTree = _t;
	return root;
}

//DBG genRule(expression)
JavaExpression*  JavaExpressionCompiler::expression(ANTLR_USE_NAMESPACE(antlr)RefAST _t) {
#line 529 "java_expression.g"
	JavaExpression* je;
#line 74 "JavaExpressionCompiler.cc"
	ANTLR_USE_NAMESPACE(antlr)RefAST expression_AST_in = _t;
	ANTLR_USE_NAMESPACE(antlr)RefAST identifier_node = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST hex_numeric_literal_node = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST oct_numeric_literal_node = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST fp_numeric_literal_node = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST dec_numeric_literal_node = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST character_literal_node = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST string_literal_node = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST method_node = ANTLR_USE_NAMESPACE(antlr)nullAST;
#line 529 "java_expression.g"
	
	JavaExpression* a = nullptr;
	JavaExpression* b = nullptr;
	JavaExpression* c = nullptr;
	JavaExpressionSelector* s = nullptr;
	MethodArguments* r = nullptr;
	BinaryJavaExpression::Type binary_expression_type;
	UnaryJavaExpression::Type unary_expression_type;
	std::list<std::vector<jchar>> string_sequence;
	std::string type;
	
	je = nullptr;
	
#line 98 "JavaExpressionCompiler.cc"
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch1
	#endif
		//DBG genCommonBlk(
		if (_t == ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		//DBG genCases(BitSet)
		case QUESTION:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t167 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp2_AST_in = _t;
			match(_t,QUESTION);
			if (ActiveException()) goto _catch1;
			_t = _t->getFirstChild();
			//DBG RuleRefElement( expression)
			a=expression(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			//DBG RuleRefElement( expression)
			b=expression(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp3_AST_in = _t;
			match(_t,COLON);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG RuleRefElement( expression)
			c=expression(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			_t = __t167;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 542 "java_expression.g"
			
			if ((a == nullptr) || (b == nullptr) || (c == nullptr)) {
			reportError("NULL argument in conditional expression");
			delete a;
			delete b;
			delete c;
			je = nullptr;
			} else {
			je = new ConditionalJavaExpression(a, b, c);
			}
			
#line 149 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case PARENTHESES_EXPRESSION:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t168 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp4_AST_in = _t;
			match(_t,PARENTHESES_EXPRESSION);
			if (ActiveException()) goto _catch1;
			_t = _t->getFirstChild();
			//DBG RuleRefElement( expression)
			je=expression(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			_t = __t168;
			_t = _t->getNextSibling();
			break;
		}
		//DBG genCases(BitSet)
		case BINARY_EXPRESSION:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t169 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp5_AST_in = _t;
			match(_t,BINARY_EXPRESSION);
			if (ActiveException()) goto _catch1;
			_t = _t->getFirstChild();
			//DBG RuleRefElement( expression)
			a=expression(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			//DBG RuleRefElement( binary_expression_token)
			binary_expression_type=binary_expression_token(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			//DBG RuleRefElement( expression)
			b=expression(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			_t = __t169;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 554 "java_expression.g"
			
			if ((a == nullptr) || (b == nullptr)) {
			reportError("NULL argument in binary expression");
			delete a;
			delete b;
			je = nullptr;
			} else {
			je = new BinaryJavaExpression(binary_expression_type, a, b);
			}
			
#line 202 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case INSTANCEOF_BINARY_EXPRESSION:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t170 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp6_AST_in = _t;
			match(_t,INSTANCEOF_BINARY_EXPRESSION);
			if (ActiveException()) goto _catch1;
			_t = _t->getFirstChild();
			//DBG RuleRefElement( expression)
			a=expression(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp7_AST_in = _t;
			match(_t,INSTANCEOF);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG RuleRefElement( type_name)
			type=type_name(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			_t = __t170;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 564 "java_expression.g"
			
			if (a == nullptr)  {
			reportError("NULL argument in instanceof binary expression");
			delete a;
			je = nullptr;
			} else {
			je = new InstanceofBinaryJavaExpression(a, type);
			}
			
#line 239 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case UNARY_EXPRESSION:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t171 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp8_AST_in = _t;
			match(_t,UNARY_EXPRESSION);
			if (ActiveException()) goto _catch1;
			_t = _t->getFirstChild();
			//DBG RuleRefElement( unary_expression_token)
			unary_expression_type=unary_expression_token(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			//DBG RuleRefElement( expression)
			a=expression(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			_t = __t171;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 573 "java_expression.g"
			
			if (a == nullptr) {
			reportError("NULL argument in unary expression");
			je = nullptr;
			} else {
			je = new UnaryJavaExpression(unary_expression_type, a);
			}
			
#line 270 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case Identifier:
		{
			//DBG genTokenRef(TokenRefElement)
			identifier_node = _t;
			match(_t,Identifier);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 581 "java_expression.g"
			
			je = new JavaIdentifier(identifier_node->getText());
			
#line 286 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case HEX_NUMERIC_LITERAL:
		{
			//DBG genTokenRef(TokenRefElement)
			hex_numeric_literal_node = _t;
			match(_t,HEX_NUMERIC_LITERAL);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 584 "java_expression.g"
			
			JavaIntLiteral* nl = new JavaIntLiteral;
			if (!nl->ParseString(hex_numeric_literal_node->getText(), 16)) {
			reportError("Hex integer literal could not be parsed");
			SetErrorMessage({ 
			BadNumericLiteral,
			{ hex_numeric_literal_node->getText() }
			});
			
			delete nl;
			je = nullptr;
			} else {
			je = nl;
			}
			
#line 314 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case OCT_NUMERIC_LITERAL:
		{
			//DBG genTokenRef(TokenRefElement)
			oct_numeric_literal_node = _t;
			match(_t,OCT_NUMERIC_LITERAL);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 599 "java_expression.g"
			
			JavaIntLiteral* nl = new JavaIntLiteral;
			if (!nl->ParseString(oct_numeric_literal_node->getText(), 8)) {
			reportError("Octal integer literal could not be parsed");
			SetErrorMessage({ 
			BadNumericLiteral,
			{ oct_numeric_literal_node->getText() }
			});
			
			delete nl;
			je = nullptr;
			} else {
			je = nl;
			}
			
#line 342 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case FP_NUMERIC_LITERAL:
		{
			//DBG genTokenRef(TokenRefElement)
			fp_numeric_literal_node = _t;
			match(_t,FP_NUMERIC_LITERAL);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 614 "java_expression.g"
			
			JavaFloatLiteral* nl = new JavaFloatLiteral;
			if (!nl->ParseString(fp_numeric_literal_node->getText())) {
			reportError("Floating point literal could not be parsed");
			SetErrorMessage({ 
			BadNumericLiteral,
			{ fp_numeric_literal_node->getText() }
			});
			
			delete nl;
			je = nullptr;
			} else {
			je = nl;
			}
			
#line 370 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case DEC_NUMERIC_LITERAL:
		{
			//DBG genTokenRef(TokenRefElement)
			dec_numeric_literal_node = _t;
			match(_t,DEC_NUMERIC_LITERAL);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 629 "java_expression.g"
			
			JavaIntLiteral* nl = new JavaIntLiteral;
			if (!nl->ParseString(dec_numeric_literal_node->getText(), 10)) {
			reportError("Decimal integer literal could not be parsed");
			SetErrorMessage({ 
			BadNumericLiteral,
			{ dec_numeric_literal_node->getText() }
			});
			
			delete nl;
			je = nullptr;
			} else {
			je = nl;
			}
			
#line 398 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case CharacterLiteral:
		{
			//DBG genTokenRef(TokenRefElement)
			character_literal_node = _t;
			match(_t,CharacterLiteral);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 644 "java_expression.g"
			
			JavaCharLiteral* cl = new JavaCharLiteral;
			if (!cl->ParseString(character_literal_node->getText())) {
			reportError("Invalid character");
			delete cl;
			je = nullptr;
			} else {
			je = cl;
			}
			
#line 421 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case StringLiteral:
		{
			//DBG genTokenRef(TokenRefElement)
			string_literal_node = _t;
			match(_t,StringLiteral);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 654 "java_expression.g"
			
			JavaStringLiteral* sl = new JavaStringLiteral;
			if (!sl->ParseString(string_literal_node->getText())) {
			reportError("Invalid string");
			delete sl;
			je = nullptr;
			} else {
			je = sl;
			}
			
#line 444 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case TRUE:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp9_AST_in = _t;
			match(_t,TRUE);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 664 "java_expression.g"
			
			je = new JavaBooleanLiteral(JNI_TRUE);
			
#line 460 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case FALSE:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp10_AST_in = _t;
			match(_t,FALSE);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 667 "java_expression.g"
			
			je = new JavaBooleanLiteral(JNI_FALSE);
			
#line 476 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case JNULL:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp11_AST_in = _t;
			match(_t,JNULL);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 670 "java_expression.g"
			
			je = new JavaNullLiteral;
			
#line 492 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case PRIMARY_SELECTOR:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t172 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp12_AST_in = _t;
			match(_t,PRIMARY_SELECTOR);
			if (ActiveException()) goto _catch1;
			_t = _t->getFirstChild();
			//DBG RuleRefElement( expression)
			a=expression(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			//DBG RuleRefElement( selector)
			s=selector(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			_t = __t172;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 673 "java_expression.g"
			
			if ((a == nullptr) || (s == nullptr)) {
			reportError("PRIMARY_SELECTED inner expressions failed to compile");
			delete a;
			delete s;
			je = nullptr;
			} else {
			s->set_source(a);
			je = s;
			}
			
#line 526 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case TYPE_CAST:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t173 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp13_AST_in = _t;
			match(_t,TYPE_CAST);
			if (ActiveException()) goto _catch1;
			_t = _t->getFirstChild();
			//DBG RuleRefElement( type_name)
			type=type_name(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			//DBG RuleRefElement( expression)
			a=expression(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			_t = __t173;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 684 "java_expression.g"
			
			if (a == nullptr) {
			reportError("NULL source in type cast expression");
			je = nullptr;
			} else {
			je = new TypeCastJavaExpression(type, a);
			}
			
#line 557 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case METHOD_CALL:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t174 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp14_AST_in = _t;
			match(_t,METHOD_CALL);
			if (ActiveException()) goto _catch1;
			_t = _t->getFirstChild();
			//DBG genTokenRef(TokenRefElement)
			method_node = _t;
			match(_t,Identifier);
			if (ActiveException()) goto _catch1;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG RuleRefElement( arguments)
			r=arguments(_t);
			if (ActiveException()) goto _catch1;
			_t = _retTree;
			_t = __t174;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 692 "java_expression.g"
			
			if (r == nullptr) {
			reportError("NULL method arguments in expression METHOD_CALL");
			je = nullptr;
			} else {
			je = new MethodCallExpression(method_node->getText(), r);
			}
			
#line 589 "JavaExpressionCompiler.cc"
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(_t)); goto _catch1;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			reportError(ex);
			if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
				_t = _t->getNextSibling();
		}
	#endif
	_catch1:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		reportError(*pEx);
		ClearException();
		if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = _t->getNextSibling();
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return je;
	}
	_retTree = _t;
	return je;
}

//DBG genRule(binary_expression_token)
BinaryJavaExpression::Type  JavaExpressionCompiler::binary_expression_token(ANTLR_USE_NAMESPACE(antlr)RefAST _t) {
#line 702 "java_expression.g"
	BinaryJavaExpression::Type type;
#line 625 "JavaExpressionCompiler.cc"
	ANTLR_USE_NAMESPACE(antlr)RefAST binary_expression_token_AST_in = _t;
#line 702 "java_expression.g"
	
	type = static_cast<BinaryJavaExpression::Type>(-1);
	
#line 631 "JavaExpressionCompiler.cc"
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch2
	#endif
		//DBG genCommonBlk(
		if (_t == ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		//DBG genCases(BitSet)
		case ADD:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp15_AST_in = _t;
			match(_t,ADD);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 705 "java_expression.g"
			type = BinaryJavaExpression::Type::add;
#line 653 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case SUB:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp16_AST_in = _t;
			match(_t,SUB);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 706 "java_expression.g"
			type = BinaryJavaExpression::Type::sub;
#line 667 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case MUL:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp17_AST_in = _t;
			match(_t,MUL);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 707 "java_expression.g"
			type = BinaryJavaExpression::Type::mul;
#line 681 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case DIV:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp18_AST_in = _t;
			match(_t,DIV);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 708 "java_expression.g"
			type = BinaryJavaExpression::Type::div;
#line 695 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case MOD:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp19_AST_in = _t;
			match(_t,MOD);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 709 "java_expression.g"
			type = BinaryJavaExpression::Type::mod;
#line 709 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case AND:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp20_AST_in = _t;
			match(_t,AND);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 710 "java_expression.g"
			type = BinaryJavaExpression::Type::conditional_and;
#line 723 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case OR:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp21_AST_in = _t;
			match(_t,OR);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 711 "java_expression.g"
			type = BinaryJavaExpression::Type::conditional_or;
#line 737 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case EQUAL:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp22_AST_in = _t;
			match(_t,EQUAL);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 712 "java_expression.g"
			type = BinaryJavaExpression::Type::eq;
#line 751 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case NOTEQUAL:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp23_AST_in = _t;
			match(_t,NOTEQUAL);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 713 "java_expression.g"
			type = BinaryJavaExpression::Type::ne;
#line 765 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case CMP_LE:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp24_AST_in = _t;
			match(_t,CMP_LE);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 714 "java_expression.g"
			type = BinaryJavaExpression::Type::le;
#line 779 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case CMP_GE:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp25_AST_in = _t;
			match(_t,CMP_GE);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 715 "java_expression.g"
			type = BinaryJavaExpression::Type::ge;
#line 793 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case CMP_LT:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp26_AST_in = _t;
			match(_t,CMP_LT);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 716 "java_expression.g"
			type = BinaryJavaExpression::Type::lt;
#line 807 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case CMP_GT:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp27_AST_in = _t;
			match(_t,CMP_GT);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 717 "java_expression.g"
			type = BinaryJavaExpression::Type::gt;
#line 821 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case BITAND:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp28_AST_in = _t;
			match(_t,BITAND);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 718 "java_expression.g"
			type = BinaryJavaExpression::Type::bitwise_and;
#line 835 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case BITOR:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp29_AST_in = _t;
			match(_t,BITOR);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 719 "java_expression.g"
			type = BinaryJavaExpression::Type::bitwise_or;
#line 849 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case CARET:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp30_AST_in = _t;
			match(_t,CARET);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 720 "java_expression.g"
			type = BinaryJavaExpression::Type::bitwise_xor;
#line 863 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case SHIFT_LEFT:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp31_AST_in = _t;
			match(_t,SHIFT_LEFT);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 721 "java_expression.g"
			type = BinaryJavaExpression::Type::shl;
#line 877 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case SHIFT_RIGHT_S:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp32_AST_in = _t;
			match(_t,SHIFT_RIGHT_S);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 722 "java_expression.g"
			type = BinaryJavaExpression::Type::shr_s;
#line 891 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case SHIFT_RIGHT_U:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp33_AST_in = _t;
			match(_t,SHIFT_RIGHT_U);
			if (ActiveException()) goto _catch2;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 723 "java_expression.g"
			type = BinaryJavaExpression::Type::shr_u;
#line 905 "JavaExpressionCompiler.cc"
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(_t)); goto _catch2;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			reportError(ex);
			if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
				_t = _t->getNextSibling();
		}
	#endif
	_catch2:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		reportError(*pEx);
		ClearException();
		if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = _t->getNextSibling();
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return type;
	}
	_retTree = _t;
	return type;
}

//DBG genRule(type_name)
std::string  JavaExpressionCompiler::type_name(ANTLR_USE_NAMESPACE(antlr)RefAST _t) {
#line 799 "java_expression.g"
	std::string t;
#line 941 "JavaExpressionCompiler.cc"
	ANTLR_USE_NAMESPACE(antlr)RefAST type_name_AST_in = _t;
	ANTLR_USE_NAMESPACE(antlr)RefAST n1 = ANTLR_USE_NAMESPACE(antlr)nullAST;
#line 799 "java_expression.g"
	
	std::string tail;
	
#line 948 "JavaExpressionCompiler.cc"
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch3
	#endif
		//DBG genCommonBlk(
		if (_t == ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		//DBG genCases(BitSet)
		case TYPE_NAME:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t185 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp34_AST_in = _t;
			match(_t,TYPE_NAME);
			if (ActiveException()) goto _catch3;
			_t = _t->getFirstChild();
			//DBG genTokenRef(TokenRefElement)
			n1 = _t;
			match(_t,Identifier);
			if (ActiveException()) goto _catch3;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG RuleRefElement( type_name)
			tail=type_name(_t);
			if (ActiveException()) goto _catch3;
			_t = _retTree;
			_t = __t185;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 802 "java_expression.g"
			
			t = n1->getText();
			if (!tail.empty()) {
			t += '.';
			t += tail;
			}
			
#line 987 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case 3:
		case BINARY_EXPRESSION:
		case INSTANCEOF_BINARY_EXPRESSION:
		case UNARY_EXPRESSION:
		case PARENTHESES_EXPRESSION:
		case TYPE_CAST:
		case PRIMARY_SELECTOR:
		case METHOD_CALL:
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
		case QUESTION:
		{
			//DBG genAction(ActionElement action
#line 809 "java_expression.g"
			
#line 1014 "JavaExpressionCompiler.cc"
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(_t)); goto _catch3;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			reportError(ex);
			if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
				_t = _t->getNextSibling();
		}
	#endif
	_catch3:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		reportError(*pEx);
		ClearException();
		if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = _t->getNextSibling();
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return t;
	}
	_retTree = _t;
	return t;
}

//DBG genRule(unary_expression_token)
UnaryJavaExpression::Type  JavaExpressionCompiler::unary_expression_token(ANTLR_USE_NAMESPACE(antlr)RefAST _t) {
#line 726 "java_expression.g"
	UnaryJavaExpression::Type type;
#line 1050 "JavaExpressionCompiler.cc"
	ANTLR_USE_NAMESPACE(antlr)RefAST unary_expression_token_AST_in = _t;
#line 726 "java_expression.g"
	
	type = static_cast<UnaryJavaExpression::Type>(-1);
	
#line 1056 "JavaExpressionCompiler.cc"
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch4
	#endif
		//DBG genCommonBlk(
		if (_t == ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		//DBG genCases(BitSet)
		case ADD:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp35_AST_in = _t;
			match(_t,ADD);
			if (ActiveException()) goto _catch4;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 729 "java_expression.g"
			type = UnaryJavaExpression::Type::plus;
#line 1078 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case SUB:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp36_AST_in = _t;
			match(_t,SUB);
			if (ActiveException()) goto _catch4;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 730 "java_expression.g"
			type = UnaryJavaExpression::Type::minus;
#line 1092 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case TILDE:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp37_AST_in = _t;
			match(_t,TILDE);
			if (ActiveException()) goto _catch4;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 731 "java_expression.g"
			type = UnaryJavaExpression::Type::bitwise_complement;
#line 1106 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case BANG:
		{
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp38_AST_in = _t;
			match(_t,BANG);
			if (ActiveException()) goto _catch4;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 732 "java_expression.g"
			type = UnaryJavaExpression::Type::logical_complement;
#line 1120 "JavaExpressionCompiler.cc"
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(_t)); goto _catch4;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			reportError(ex);
			if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
				_t = _t->getNextSibling();
		}
	#endif
	_catch4:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		reportError(*pEx);
		ClearException();
		if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = _t->getNextSibling();
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return type;
	}
	_retTree = _t;
	return type;
}

//DBG genRule(selector)
JavaExpressionSelector*  JavaExpressionCompiler::selector(ANTLR_USE_NAMESPACE(antlr)RefAST _t) {
#line 735 "java_expression.g"
	JavaExpressionSelector* js;
#line 1156 "JavaExpressionCompiler.cc"
	ANTLR_USE_NAMESPACE(antlr)RefAST selector_AST_in = _t;
#line 735 "java_expression.g"
	
	JavaExpression* a = nullptr;
	JavaExpressionSelector* ds = nullptr;
	
	js = nullptr;
	
#line 1165 "JavaExpressionCompiler.cc"
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch5
	#endif
		//DBG genCommonBlk(
		if (_t == ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		//DBG genCases(BitSet)
		case DOT_SELECTOR:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t178 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp39_AST_in = _t;
			match(_t,DOT_SELECTOR);
			if (ActiveException()) goto _catch5;
			_t = _t->getFirstChild();
			//DBG RuleRefElement( dotSelector)
			ds=dotSelector(_t);
			if (ActiveException()) goto _catch5;
			_t = _retTree;
			_t = __t178;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 741 "java_expression.g"
			
			if (ds == nullptr) {
			reportError("Failed to parse dot expression");
			js = nullptr;
			} else {
			js = ds;
			}
			
#line 1200 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case LBRACK:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t179 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp40_AST_in = _t;
			match(_t,LBRACK);
			if (ActiveException()) goto _catch5;
			_t = _t->getFirstChild();
			//DBG RuleRefElement( expression)
			a=expression(_t);
			if (ActiveException()) goto _catch5;
			_t = _retTree;
			//DBG genTokenRef(TokenRefElement)
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp41_AST_in = _t;
			match(_t,RBRACK);
			if (ActiveException()) goto _catch5;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			_t = __t179;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 749 "java_expression.g"
			
			if (a == nullptr) {
			reportError("Failed to parse index expression");
			js = nullptr;
			} else {
			js = new JavaExpressionIndexSelector(a);
			}
			
#line 1232 "JavaExpressionCompiler.cc"
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(_t)); goto _catch5;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			reportError(ex);
			if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
				_t = _t->getNextSibling();
		}
	#endif
	_catch5:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		reportError(*pEx);
		ClearException();
		if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = _t->getNextSibling();
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return js;
	}
	_retTree = _t;
	return js;
}

//DBG genRule(arguments)
MethodArguments*  JavaExpressionCompiler::arguments(ANTLR_USE_NAMESPACE(antlr)RefAST _t) {
#line 778 "java_expression.g"
	MethodArguments* args;
#line 1268 "JavaExpressionCompiler.cc"
	ANTLR_USE_NAMESPACE(antlr)RefAST arguments_AST_in = _t;
#line 778 "java_expression.g"
	
	MethodArguments* tail = nullptr;
	JavaExpression* arg = nullptr;
	
	args = nullptr;
	
#line 1277 "JavaExpressionCompiler.cc"
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch6
	#endif
		//DBG genCommonBlk(
		if (_t == ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		//DBG genCases(BitSet)
		case EXPRESSION_LIST:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t183 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp42_AST_in = _t;
			match(_t,EXPRESSION_LIST);
			if (ActiveException()) goto _catch6;
			_t = _t->getFirstChild();
			//DBG RuleRefElement( expression)
			arg=expression(_t);
			if (ActiveException()) goto _catch6;
			_t = _retTree;
			//DBG RuleRefElement( arguments)
			tail=arguments(_t);
			if (ActiveException()) goto _catch6;
			_t = _retTree;
			_t = __t183;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 784 "java_expression.g"
			
			if ((arg == nullptr) || (tail == nullptr)) {
			reportError("NULL method argument");
			delete arg;
			delete tail;
			args = nullptr;
			} else {
			args = new MethodArguments(arg, tail);
			}
			
#line 1318 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case 3:
		{
			//DBG genAction(ActionElement action
#line 794 "java_expression.g"
			
			args = new MethodArguments();
			
#line 1329 "JavaExpressionCompiler.cc"
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(_t)); goto _catch6;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			reportError(ex);
			if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
				_t = _t->getNextSibling();
		}
	#endif
	_catch6:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		reportError(*pEx);
		ClearException();
		if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = _t->getNextSibling();
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return args;
	}
	_retTree = _t;
	return args;
}

//DBG genRule(dotSelector)
JavaExpressionSelector*  JavaExpressionCompiler::dotSelector(ANTLR_USE_NAMESPACE(antlr)RefAST _t) {
#line 759 "java_expression.g"
	JavaExpressionSelector* js;
#line 1365 "JavaExpressionCompiler.cc"
	ANTLR_USE_NAMESPACE(antlr)RefAST dotSelector_AST_in = _t;
	ANTLR_USE_NAMESPACE(antlr)RefAST identifier_node = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST method_node = ANTLR_USE_NAMESPACE(antlr)nullAST;
#line 759 "java_expression.g"
	
	MethodArguments* r = nullptr;
	
	js = nullptr;
	
#line 1375 "JavaExpressionCompiler.cc"
	
	#ifdef ANTLR_EXCEPTIONS
	try {      // for error handling
	#else
	{ //_catch7
	#endif
		//DBG genCommonBlk(
		if (_t == ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		//DBG genCases(BitSet)
		case Identifier:
		{
			//DBG genTokenRef(TokenRefElement)
			identifier_node = _t;
			match(_t,Identifier);
			if (ActiveException()) goto _catch7;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 764 "java_expression.g"
			
			js = new JavaExpressionMemberSelector(identifier_node->getText());
			
#line 1399 "JavaExpressionCompiler.cc"
			break;
		}
		//DBG genCases(BitSet)
		case METHOD_CALL:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST __t181 = _t;
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp43_AST_in = _t;
			match(_t,METHOD_CALL);
			if (ActiveException()) goto _catch7;
			_t = _t->getFirstChild();
			//DBG genTokenRef(TokenRefElement)
			method_node = _t;
			match(_t,Identifier);
			if (ActiveException()) goto _catch7;//gen(TokenRefElement atom)
			_t = _t->getNextSibling();
			//DBG RuleRefElement( arguments)
			r=arguments(_t);
			if (ActiveException()) goto _catch7;
			_t = _retTree;
			_t = __t181;
			_t = _t->getNextSibling();
			//DBG genAction(ActionElement action
#line 767 "java_expression.g"
			
			if (r == nullptr) {
			reportError("NULL method arguments in dotSelector METHOD_CALL");
			js = nullptr;
			} else {
			js = new MethodCallExpression(method_node->getText(), r);
			}
			
#line 1431 "JavaExpressionCompiler.cc"
			break;
		}
		default:
		{
			SetException(new ANTLR_USE_NAMESPACE(antlr)NoViableAltException(_t)); goto _catch7;
		}
		}
	}
	#ifdef ANTLR_EXCEPTIONS
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
			reportError(ex);
			if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
				_t = _t->getNextSibling();
		}
	#endif
	_catch7:
	if(0){}
	else if ( ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException()) ){
		ANTLR_USE_NAMESPACE(antlr)RecognitionException* pEx = ANTLR_USE_NAMESPACE(antlr)RecognitionException::DynamicCast(ActiveException());
		reportError(*pEx);
		ClearException();
		if ( _t != ANTLR_USE_NAMESPACE(antlr)nullAST )
			_t = _t->getNextSibling();
	}
	else if ( ActiveException() ){ // uncaught exception handling
		return js;
	}
	_retTree = _t;
	return js;
}

void JavaExpressionCompiler::initializeASTFactory( ANTLR_USE_NAMESPACE(antlr)ASTFactory& factory )
{
}
const char* JavaExpressionCompiler::tokenNames[] = {
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



ANTLR_END_NAMESPACE
ANTLR_END_NAMESPACE
