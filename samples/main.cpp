#include <iostream>
#include <string>
#include <antlr4-runtime.h>
#include "polynomLexer.h"
#include "polynomParser.h"
#include "myVisitor.h"
#include "polynomy.h"

using namespace std;

Polynom parsePolynom(const string& expr) {
    antlr4::ANTLRInputStream input(expr);
    polynomLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    polynomParser parser(&tokens);

    parser.setErrorHandler(std::make_shared<antlr4::BailErrorStrategy>());
    try {
        auto tree = parser.polynom();
        Polynom result;
        myVisitor visitor(&result);
        visitor.visit(tree);
        return result;
    }
    catch (...) {
        throw runtime_error("parse error");
    }
}
   

int main() {
    try {
        string expr1;
        cout << "enter expr1 :" << endl;
        getline(cin, expr1);
        cout << "Parsing1: " << expr1 << endl;
        Polynom p1 = parsePolynom(expr1);
        cout << "Polynom 1:     ";
        p1.print();

        string expr2;
        cout << "enter expr2 :" << endl;
        getline(cin, expr2);
        cout << "Parsing2: " << expr2 << endl;
        Polynom p2 = parsePolynom(expr2);
        cout << "Polynom 2:     ";
        p2.print();

        Polynom p3 = p1 + p2;
        cout << "Sum two polynoms:     ";
        p3.print();

        p3 = p1 - p2;
        cout << "Sub two polynoms:     ";
        p3.print();

        p3 = p1 * p2;
        cout << "Prod two polynoms:     ";
        p3.print();

        double x, y, z;

        cout << "enter x: ";
        cin >> x;

        cout << "enter y: ";
        cin >> y;

        cout << "enter z: ";
        cin >> z;

        double val = p3.result(x, y, z);

       cout << "if (x, y, z) = (" << x << ", " << y << ", " << z << ") then prod polynoms = " << val << endl;
    }
    catch (const exception& e) {
        cout << "error: " << e.what() << endl;
    }

    return 0;
}