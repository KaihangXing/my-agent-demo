#ifndef INC_JavaExpressionCompiler_hpp_
#define INC_JavaExpressionCompiler_hpp_

#include "third_party/antlr/lib/cpp/antlr/config.hpp"
#include "JavaExpressionCompilerTokenTypes.hpp"
/* $ANTLR 2.7.2: "java_expression.g" -> "JavaExpressionCompiler.hpp"$ */
#include "third_party/antlr/lib/cpp/antlr/TreeParser.hpp"

#line 21 "java_expression.g"

  #include "common.h"
  #include "java_expression.h"
  #include "messages.h"
  #include "model.h"

#line 17 "JavaExpressionCompiler.hpp"
ANTLR_BEGIN_NAMESPACE(devtools)
ANTLR_BEGIN_NAMESPACE(cdbg)
class JavaExpressionCompiler : public ANTLR_USE_NAMESPACE(antlr)TreeParser, public JavaExpressionCompilerTokenTypes
{
#line 441 "java_expression.g"

 public:
  // Since the process of compilation and evaluation is recursive and uses OS
  // stack, very deep expression trees can cause stack overflow. "MaxTreeDepth"
  // limits the maximum recursion depth to a safe threshold.
  static constexpr int kMaxTreeDepth = 25;

  void Init() {
  }

  std::unique_ptr<JavaExpression> Walk(antlr::RefAST ast) {
    ResetErrorMessage();

    if (!VerifyMaxDepth(ast, kMaxTreeDepth)) {
      LOG(WARNING) << "The parsed expression tree is too deep";
      SetErrorMessage({ ExpressionTreeTooDeep });
      return nullptr;
    }

    std::unique_ptr<JavaExpression> expression(statement(ast));
    if (expression == nullptr) {
      // Set generic error message if specific error wasn't set.
      SetErrorMessage({ ExpressionParserError });
    }

    return expression;
  }

  // Getter for the formatted error message. The error message will only be
  // set when "Walk" fails.
  const FormatMessageModel& error_message() const { return error_message_; }

 private:
  void ResetErrorMessage() {
    error_message_ = FormatMessageModel();
  }

  void SetErrorMessage(FormatMessageModel new_error_message) {
    if (error_message_.format.empty()) {
      error_message_ = std::move(new_error_message);
    }
  }

  void reportError(const antlr::RecognitionException& ex) {
    reportError(ex.getMessage());
  }

  void reportError(const std::string& msg) {
    LOG(ERROR) << "Internal parser error: " << msg;
  }

  // Verifies that the maximum depth of the subtree "node" does
  // not exceed "max_depth".
  static bool VerifyMaxDepth(antlr::RefAST node, int max_depth) {
    if (max_depth == 0) {
      return false;
    }

    DCHECK(node != nullptr);

    antlr::RefAST child_node = node->getFirstChild();
    while (child_node != nullptr) {
      if (!VerifyMaxDepth(child_node, max_depth - 1)) {
        return false;
      }

      child_node = child_node->getNextSibling();
    }

    return true;
  }

 private:
  // Formatted localizable error message reported back to the user. The
  // message template are defined in "messages.h" file. Empty
  // "error_message_.format" indicates that the error message is not available.
  // Only first error message encountered is captured. Subsequent error 
  // messages are ignored.
  FormatMessageModel error_message_;
#line 23 "JavaExpressionCompiler.hpp"
public:
	JavaExpressionCompiler();
	void initializeASTFactory( ANTLR_USE_NAMESPACE(antlr)ASTFactory& factory );
	int getNumTokens() const
	{
		return JavaExpressionCompiler::NUM_TOKENS;
	}
	const char* getTokenName( int type ) const
	{
		if( type > getNumTokens() ) return 0;
		return JavaExpressionCompiler::tokenNames[type];
	}
	//DBG genRuleHeader(statement)
	public: JavaExpression*  statement(ANTLR_USE_NAMESPACE(antlr)RefAST _t);
	//DBG genRuleHeader(expression)
	public: JavaExpression*  expression(ANTLR_USE_NAMESPACE(antlr)RefAST _t);
	//DBG genRuleHeader(binary_expression_token)
	public: BinaryJavaExpression::Type  binary_expression_token(ANTLR_USE_NAMESPACE(antlr)RefAST _t);
	//DBG genRuleHeader(type_name)
	public: std::string  type_name(ANTLR_USE_NAMESPACE(antlr)RefAST _t);
	//DBG genRuleHeader(unary_expression_token)
	public: UnaryJavaExpression::Type  unary_expression_token(ANTLR_USE_NAMESPACE(antlr)RefAST _t);
	//DBG genRuleHeader(selector)
	public: JavaExpressionSelector*  selector(ANTLR_USE_NAMESPACE(antlr)RefAST _t);
	//DBG genRuleHeader(arguments)
	public: MethodArguments*  arguments(ANTLR_USE_NAMESPACE(antlr)RefAST _t);
	//DBG genRuleHeader(dotSelector)
	public: JavaExpressionSelector*  dotSelector(ANTLR_USE_NAMESPACE(antlr)RefAST _t);
private:
	static const char* tokenNames[];
#ifndef NO_STATIC_CONSTS
	static const int NUM_TOKENS = 73;
#else
	enum {
		NUM_TOKENS = 73
	};
#endif
	
};

ANTLR_END_NAMESPACE
ANTLR_END_NAMESPACE
#endif /*INC_JavaExpressionCompiler_hpp_*/