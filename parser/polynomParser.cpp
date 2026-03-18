
// Generated from polynom.g4 by ANTLR 4.13.2


#include "polynomVisitor.h"

#include "polynomParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct PolynomParserStaticData final {
  PolynomParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PolynomParserStaticData(const PolynomParserStaticData&) = delete;
  PolynomParserStaticData(PolynomParserStaticData&&) = delete;
  PolynomParserStaticData& operator=(const PolynomParserStaticData&) = delete;
  PolynomParserStaticData& operator=(PolynomParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag polynomParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<PolynomParserStaticData> polynomParserStaticData = nullptr;

void polynomParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (polynomParserStaticData != nullptr) {
    return;
  }
#else
  assert(polynomParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PolynomParserStaticData>(
    std::vector<std::string>{
      "prog", "polynom", "monom", "varClose"
    },
    std::vector<std::string>{
      "", "", "", "';'", "", "'*'", "'^'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "INT", "FLOAT", "SEP", "WS", "MUL", "POW", "ADD", "SUB", "VAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,9,47,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,1,0,5,0,12,8,0,10,0,
  	12,0,15,9,0,1,1,1,1,1,1,5,1,20,8,1,10,1,12,1,23,9,1,1,2,1,2,1,2,4,2,28,
  	8,2,11,2,12,2,29,1,2,1,2,1,2,5,2,35,8,2,10,2,12,2,38,9,2,1,2,3,2,41,8,
  	2,1,3,1,3,1,3,1,3,1,3,0,0,4,0,2,4,6,0,1,1,0,7,8,48,0,8,1,0,0,0,2,16,1,
  	0,0,0,4,40,1,0,0,0,6,42,1,0,0,0,8,13,3,2,1,0,9,10,5,3,0,0,10,12,3,2,1,
  	0,11,9,1,0,0,0,12,15,1,0,0,0,13,11,1,0,0,0,13,14,1,0,0,0,14,1,1,0,0,0,
  	15,13,1,0,0,0,16,21,3,4,2,0,17,18,7,0,0,0,18,20,3,4,2,0,19,17,1,0,0,0,
  	20,23,1,0,0,0,21,19,1,0,0,0,21,22,1,0,0,0,22,3,1,0,0,0,23,21,1,0,0,0,
  	24,27,5,2,0,0,25,26,5,5,0,0,26,28,3,6,3,0,27,25,1,0,0,0,28,29,1,0,0,0,
  	29,27,1,0,0,0,29,30,1,0,0,0,30,41,1,0,0,0,31,36,3,6,3,0,32,33,5,5,0,0,
  	33,35,3,6,3,0,34,32,1,0,0,0,35,38,1,0,0,0,36,34,1,0,0,0,36,37,1,0,0,0,
  	37,41,1,0,0,0,38,36,1,0,0,0,39,41,5,2,0,0,40,24,1,0,0,0,40,31,1,0,0,0,
  	40,39,1,0,0,0,41,5,1,0,0,0,42,43,5,9,0,0,43,44,5,6,0,0,44,45,5,1,0,0,
  	45,7,1,0,0,0,5,13,21,29,36,40
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  polynomParserStaticData = std::move(staticData);
}

}

polynomParser::polynomParser(TokenStream *input) : polynomParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

polynomParser::polynomParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  polynomParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *polynomParserStaticData->atn, polynomParserStaticData->decisionToDFA, polynomParserStaticData->sharedContextCache, options);
}

polynomParser::~polynomParser() {
  delete _interpreter;
}

const atn::ATN& polynomParser::getATN() const {
  return *polynomParserStaticData->atn;
}

std::string polynomParser::getGrammarFileName() const {
  return "polynom.g4";
}

const std::vector<std::string>& polynomParser::getRuleNames() const {
  return polynomParserStaticData->ruleNames;
}

const dfa::Vocabulary& polynomParser::getVocabulary() const {
  return polynomParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView polynomParser::getSerializedATN() const {
  return polynomParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

polynomParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<polynomParser::PolynomContext *> polynomParser::ProgContext::polynom() {
  return getRuleContexts<polynomParser::PolynomContext>();
}

polynomParser::PolynomContext* polynomParser::ProgContext::polynom(size_t i) {
  return getRuleContext<polynomParser::PolynomContext>(i);
}

std::vector<tree::TerminalNode *> polynomParser::ProgContext::SEP() {
  return getTokens(polynomParser::SEP);
}

tree::TerminalNode* polynomParser::ProgContext::SEP(size_t i) {
  return getToken(polynomParser::SEP, i);
}


size_t polynomParser::ProgContext::getRuleIndex() const {
  return polynomParser::RuleProg;
}


std::any polynomParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<polynomVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

polynomParser::ProgContext* polynomParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, polynomParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(8);
    polynom();
    setState(13);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == polynomParser::SEP) {
      setState(9);
      match(polynomParser::SEP);
      setState(10);
      polynom();
      setState(15);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PolynomContext ------------------------------------------------------------------

polynomParser::PolynomContext::PolynomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<polynomParser::MonomContext *> polynomParser::PolynomContext::monom() {
  return getRuleContexts<polynomParser::MonomContext>();
}

polynomParser::MonomContext* polynomParser::PolynomContext::monom(size_t i) {
  return getRuleContext<polynomParser::MonomContext>(i);
}

std::vector<tree::TerminalNode *> polynomParser::PolynomContext::ADD() {
  return getTokens(polynomParser::ADD);
}

tree::TerminalNode* polynomParser::PolynomContext::ADD(size_t i) {
  return getToken(polynomParser::ADD, i);
}

std::vector<tree::TerminalNode *> polynomParser::PolynomContext::SUB() {
  return getTokens(polynomParser::SUB);
}

tree::TerminalNode* polynomParser::PolynomContext::SUB(size_t i) {
  return getToken(polynomParser::SUB, i);
}


size_t polynomParser::PolynomContext::getRuleIndex() const {
  return polynomParser::RulePolynom;
}


std::any polynomParser::PolynomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<polynomVisitor*>(visitor))
    return parserVisitor->visitPolynom(this);
  else
    return visitor->visitChildren(this);
}

polynomParser::PolynomContext* polynomParser::polynom() {
  PolynomContext *_localctx = _tracker.createInstance<PolynomContext>(_ctx, getState());
  enterRule(_localctx, 2, polynomParser::RulePolynom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    monom();
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == polynomParser::ADD

    || _la == polynomParser::SUB) {
      setState(17);
      _la = _input->LA(1);
      if (!(_la == polynomParser::ADD

      || _la == polynomParser::SUB)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(18);
      monom();
      setState(23);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MonomContext ------------------------------------------------------------------

polynomParser::MonomContext::MonomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* polynomParser::MonomContext::FLOAT() {
  return getToken(polynomParser::FLOAT, 0);
}

std::vector<tree::TerminalNode *> polynomParser::MonomContext::MUL() {
  return getTokens(polynomParser::MUL);
}

tree::TerminalNode* polynomParser::MonomContext::MUL(size_t i) {
  return getToken(polynomParser::MUL, i);
}

std::vector<polynomParser::VarCloseContext *> polynomParser::MonomContext::varClose() {
  return getRuleContexts<polynomParser::VarCloseContext>();
}

polynomParser::VarCloseContext* polynomParser::MonomContext::varClose(size_t i) {
  return getRuleContext<polynomParser::VarCloseContext>(i);
}


size_t polynomParser::MonomContext::getRuleIndex() const {
  return polynomParser::RuleMonom;
}


std::any polynomParser::MonomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<polynomVisitor*>(visitor))
    return parserVisitor->visitMonom(this);
  else
    return visitor->visitChildren(this);
}

polynomParser::MonomContext* polynomParser::monom() {
  MonomContext *_localctx = _tracker.createInstance<MonomContext>(_ctx, getState());
  enterRule(_localctx, 4, polynomParser::RuleMonom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(40);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(24);
      match(polynomParser::FLOAT);
      setState(27); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(25);
        match(polynomParser::MUL);
        setState(26);
        varClose();
        setState(29); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == polynomParser::MUL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(31);
      varClose();
      setState(36);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == polynomParser::MUL) {
        setState(32);
        match(polynomParser::MUL);
        setState(33);
        varClose();
        setState(38);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(39);
      match(polynomParser::FLOAT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarCloseContext ------------------------------------------------------------------

polynomParser::VarCloseContext::VarCloseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* polynomParser::VarCloseContext::VAR() {
  return getToken(polynomParser::VAR, 0);
}

tree::TerminalNode* polynomParser::VarCloseContext::POW() {
  return getToken(polynomParser::POW, 0);
}

tree::TerminalNode* polynomParser::VarCloseContext::INT() {
  return getToken(polynomParser::INT, 0);
}


size_t polynomParser::VarCloseContext::getRuleIndex() const {
  return polynomParser::RuleVarClose;
}


std::any polynomParser::VarCloseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<polynomVisitor*>(visitor))
    return parserVisitor->visitVarClose(this);
  else
    return visitor->visitChildren(this);
}

polynomParser::VarCloseContext* polynomParser::varClose() {
  VarCloseContext *_localctx = _tracker.createInstance<VarCloseContext>(_ctx, getState());
  enterRule(_localctx, 6, polynomParser::RuleVarClose);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(polynomParser::VAR);
    setState(43);
    match(polynomParser::POW);
    setState(44);
    match(polynomParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void polynomParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  polynomParserInitialize();
#else
  ::antlr4::internal::call_once(polynomParserOnceFlag, polynomParserInitialize);
#endif
}
