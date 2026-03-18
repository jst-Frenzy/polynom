
// Generated from polynom.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "polynomVisitor.h"


/**
 * This class provides an empty implementation of polynomVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  polynomBaseVisitor : public polynomVisitor {
public:

  virtual std::any visitProg(polynomParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPolynom(polynomParser::PolynomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMonom(polynomParser::MonomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarClose(polynomParser::VarCloseContext *ctx) override {
    return visitChildren(ctx);
  }


};

