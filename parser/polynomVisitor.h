
// Generated from polynom.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "polynomParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by polynomParser.
 */
class  polynomVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by polynomParser.
   */
    virtual std::any visitProg(polynomParser::ProgContext *context) = 0;

    virtual std::any visitPolynom(polynomParser::PolynomContext *context) = 0;

    virtual std::any visitMonom(polynomParser::MonomContext *context) = 0;

    virtual std::any visitVarClose(polynomParser::VarCloseContext *context) = 0;


};

