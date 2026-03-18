
// Generated from polynom.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  polynomParser : public antlr4::Parser {
public:
  enum {
    INT = 1, FLOAT = 2, SEP = 3, WS = 4, MUL = 5, POW = 6, ADD = 7, SUB = 8, 
    VAR = 9
  };

  enum {
    RuleProg = 0, RulePolynom = 1, RuleMonom = 2, RuleVarClose = 3
  };

  explicit polynomParser(antlr4::TokenStream *input);

  polynomParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~polynomParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class PolynomContext;
  class MonomContext;
  class VarCloseContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PolynomContext *> polynom();
    PolynomContext* polynom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEP();
    antlr4::tree::TerminalNode* SEP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  PolynomContext : public antlr4::ParserRuleContext {
  public:
    PolynomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MonomContext *> monom();
    MonomContext* monom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUB();
    antlr4::tree::TerminalNode* SUB(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PolynomContext* polynom();

  class  MonomContext : public antlr4::ParserRuleContext {
  public:
    MonomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();
    std::vector<antlr4::tree::TerminalNode *> MUL();
    antlr4::tree::TerminalNode* MUL(size_t i);
    std::vector<VarCloseContext *> varClose();
    VarCloseContext* varClose(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MonomContext* monom();

  class  VarCloseContext : public antlr4::ParserRuleContext {
  public:
    VarCloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *POW();
    antlr4::tree::TerminalNode *INT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarCloseContext* varClose();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

