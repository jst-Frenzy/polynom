#pragma once
#include "polynomBaseVisitor.h"
#include "polynomy.h"
#include <iostream>

class myVisitor : public polynomBaseVisitor {
private:
	Polynom* p;
	double currSign;
public:
	myVisitor (Polynom* _p) : p(_p), currSign(1.0) {}

	virtual antlrcpp::Any visitPolynom(polynomParser::PolynomContext* ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitMonom(polynomParser::MonomContext* ctx) override {
		double coef = 1.0;

		if (ctx->FLOAT().size() > 0) {
			coef = std::stod(ctx->FLOAT()->getText());
		}

		int  degX = 0, degY = 0, degZ = 0;

		for (auto varCtx : ctx->varClose()) {
			std::string varName = varCtx->VAR()->getText();
			int d = std::stoi(varCtx->INT()->getText());

			if (varName == "x") {
				degX += d;
			}
			else if (varName == "y") {
				degY += d;
			}
			else if (varName == "z") {
				degZ += d;
			}

			if (-5 > degX || degX > 10 || -5 > degY || degY > 10 || -5 > degZ || degZ > 10) {
				throw std::runtime_error("degree must be lower than 10 and greater than -5");
			}
		}
		
		p->addMonom(coef, degX, degY, degZ);
		currSign = 1.0;

		return nullptr;
	}

	virtual std::any visitTerminal(antlr4::tree::TerminalNode* node) override {
		std::string znak = node->getText();
		if (znak == "+") {
			currSign = 1.0;
		}
		else if (znak == "-") {
			currSign = -1.0;
		}

		return nullptr;
	}
};