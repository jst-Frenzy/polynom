
// Generated from polynom.g4 by ANTLR 4.13.2


#include "polynomLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct PolynomLexerStaticData final {
  PolynomLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PolynomLexerStaticData(const PolynomLexerStaticData&) = delete;
  PolynomLexerStaticData(PolynomLexerStaticData&&) = delete;
  PolynomLexerStaticData& operator=(const PolynomLexerStaticData&) = delete;
  PolynomLexerStaticData& operator=(PolynomLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag polynomlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<PolynomLexerStaticData> polynomlexerLexerStaticData = nullptr;

void polynomlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (polynomlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(polynomlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PolynomLexerStaticData>(
    std::vector<std::string>{
      "INT", "FLOAT", "SEP", "WS", "MUL", "POW", "ADD", "SUB", "VAR"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "';'", "", "'*'", "'^'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "INT", "FLOAT", "SEP", "WS", "MUL", "POW", "ADD", "SUB", "VAR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,9,60,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,2,8,7,8,1,0,3,0,21,8,0,1,0,4,0,24,8,0,11,0,12,0,25,1,1,3,1,29,
  	8,1,1,1,4,1,32,8,1,11,1,12,1,33,1,1,1,1,4,1,38,8,1,11,1,12,1,39,1,2,1,
  	2,1,3,4,3,45,8,3,11,3,12,3,46,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,
  	1,8,1,8,0,0,9,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,1,0,4,2,0,43,43,
  	45,45,1,0,48,57,3,0,9,10,13,13,32,32,1,0,120,122,65,0,1,1,0,0,0,0,3,1,
  	0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,
  	15,1,0,0,0,0,17,1,0,0,0,1,20,1,0,0,0,3,28,1,0,0,0,5,41,1,0,0,0,7,44,1,
  	0,0,0,9,50,1,0,0,0,11,52,1,0,0,0,13,54,1,0,0,0,15,56,1,0,0,0,17,58,1,
  	0,0,0,19,21,7,0,0,0,20,19,1,0,0,0,20,21,1,0,0,0,21,23,1,0,0,0,22,24,7,
  	1,0,0,23,22,1,0,0,0,24,25,1,0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,2,1,
  	0,0,0,27,29,7,0,0,0,28,27,1,0,0,0,28,29,1,0,0,0,29,31,1,0,0,0,30,32,7,
  	1,0,0,31,30,1,0,0,0,32,33,1,0,0,0,33,31,1,0,0,0,33,34,1,0,0,0,34,35,1,
  	0,0,0,35,37,5,46,0,0,36,38,7,1,0,0,37,36,1,0,0,0,38,39,1,0,0,0,39,37,
  	1,0,0,0,39,40,1,0,0,0,40,4,1,0,0,0,41,42,5,59,0,0,42,6,1,0,0,0,43,45,
  	7,2,0,0,44,43,1,0,0,0,45,46,1,0,0,0,46,44,1,0,0,0,46,47,1,0,0,0,47,48,
  	1,0,0,0,48,49,6,3,0,0,49,8,1,0,0,0,50,51,5,42,0,0,51,10,1,0,0,0,52,53,
  	5,94,0,0,53,12,1,0,0,0,54,55,5,43,0,0,55,14,1,0,0,0,56,57,5,45,0,0,57,
  	16,1,0,0,0,58,59,7,3,0,0,59,18,1,0,0,0,7,0,20,25,28,33,39,46,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  polynomlexerLexerStaticData = std::move(staticData);
}

}

polynomLexer::polynomLexer(CharStream *input) : Lexer(input) {
  polynomLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *polynomlexerLexerStaticData->atn, polynomlexerLexerStaticData->decisionToDFA, polynomlexerLexerStaticData->sharedContextCache);
}

polynomLexer::~polynomLexer() {
  delete _interpreter;
}

std::string polynomLexer::getGrammarFileName() const {
  return "polynom.g4";
}

const std::vector<std::string>& polynomLexer::getRuleNames() const {
  return polynomlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& polynomLexer::getChannelNames() const {
  return polynomlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& polynomLexer::getModeNames() const {
  return polynomlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& polynomLexer::getVocabulary() const {
  return polynomlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView polynomLexer::getSerializedATN() const {
  return polynomlexerLexerStaticData->serializedATN;
}

const atn::ATN& polynomLexer::getATN() const {
  return *polynomlexerLexerStaticData->atn;
}




void polynomLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  polynomlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(polynomlexerLexerOnceFlag, polynomlexerLexerInitialize);
#endif
}
