#pragma once
#include <iostream>
#include <string>
#include <cmath>


union deg {
	int degrees;
	char degree[4];
};

struct Monom {
	double coef;
	deg d;
	Monom* next;
	Monom(double _coef, deg _deg) :
		coef(_coef), d(_deg), next(nullptr) {
	}
	Monom(double _coef, deg _deg, Monom* _next) :
		coef(_coef), d(_deg), next(_next) { }
};

class Polynom {
	Monom* fp;

	deg getDeg(int x, int y, int z) {
		deg d;
		d.degree[0] = x;
		d.degree[1] = y;
		d.degree[2] = z;
		return d;
	}
public:
	Polynom(): fp(nullptr){}
	Polynom(const Polynom& copy) {
		fp = nullptr;

		if (copy.fp == nullptr) {
			return;
		}

		Monom* currCopy = copy.fp;
		Monom* prev = nullptr;

		while (currCopy != nullptr) {
			Monom* m = new Monom(currCopy->coef, currCopy->d);

			if (prev == nullptr) {
				fp = m;
			}
			else {
				prev->next = m;
			}

			prev = m;
			currCopy = currCopy->next;
		}
	}
	~Polynom() {
		clear();
	}
	void clear() {
		Monom* curr = fp;

		while (curr != nullptr) {
			Monom* next = curr->next;
			delete curr;
			curr = next;
		}

		fp = nullptr;
	}
	void addMonom(double coef, int xDeg, int yDeg, int zDeg) {
		if (coef == 0) {
			return;
		}

		deg d = getDeg(xDeg, yDeg, zDeg);
		
		int newDegrees = d.degrees;

		if (fp == nullptr) {
			fp = new Monom(coef, d);
			return;
		}

		Monom* prev = nullptr;
		Monom* curr = fp;
		
		while (curr != nullptr) {
			int currDegrees = d.degrees;

			if (newDegrees == currDegrees) {
				curr->coef += coef;

				if (curr->coef == 0) {
					if (prev == nullptr) {
						fp = curr->next;
					}
					else {
						prev->next = curr->next;
					}
					delete curr;
				}
				return;
			}
			prev = curr;
			curr = curr->next;
		}
		
		Monom* m = new Monom(coef, d);
		m->next = curr;
		
		if (prev == nullptr) {
			fp = m;
		}
		else {
			prev->next = m;
		}

	}

	void print() {
		if (fp == nullptr) {
			std::cout << "0" << std::endl;
			return;
		}
		
		bool first = true;
		Monom* curr = fp;

		while (curr != nullptr) {
			if (curr->coef > 0) {
				if (!first) {
					std::cout << " + ";
				}
			}
			else {
				std::cout << " - ";
			}

			double absCoef;
			if (curr->coef > 0) {
				absCoef = curr->coef;
			}
			else {
				absCoef = -curr->coef;
			}

			int xDeg = curr->d.degree[0];
			int yDeg = curr->d.degree[1];
			int zDeg = curr->d.degree[2];

			if (absCoef != 1 || (xDeg == 0 && yDeg == 0 && zDeg == 0)) {
				std::cout << absCoef;
			}

			if (xDeg != 0) {
				if (absCoef != 1) {
					std::cout << "*";
				}
				std::cout << "x";
				if (xDeg != 1) {
					std::cout << "^" << xDeg;
				}
			}
			if (yDeg != 0) {
				if (absCoef != 1 || xDeg != 0) {
					std::cout << "*";
				}
				std::cout << "y";
				if (yDeg != 1) {
					std::cout << "^" << yDeg;
				}
			}
			if (zDeg != 0) {
				if (absCoef != 1 || xDeg != 0 || yDeg != 0) {
					std::cout << "*";
				}
				std::cout << "z";
				if (zDeg != 1) {
					std::cout << "^" << zDeg;
				}
			}
			first = false;
			curr = curr->next;
		}
		std::cout << std::endl;
	}

	double result(int x, int y, int z) {
		double res = 0;
		Monom* curr = fp;

		while (curr != nullptr) {
			double tmp = curr->coef;

			int xDeg = curr->d.degree[0];
			int yDeg = curr->d.degree[1];
			int zDeg = curr->d.degree[2];

			tmp *= std::pow(x, xDeg);
			tmp *= std::pow(y, yDeg);
			tmp *= std::pow(z, zDeg);

			res += tmp;
			curr = curr->next;
		}

		return res;
	}

	Polynom& operator=(const Polynom& other) {
		if (this == &other) {
			return *this;
		}

		clear();

		Monom* currCopy = other.fp;
		Monom* prev = nullptr;

		while (currCopy != nullptr) {
			Monom* m = new Monom(currCopy->coef, currCopy->d);

			if (prev == nullptr) {
				fp = m;
			}
			else {
				prev->next = m;
			}

			prev = m;
			currCopy = currCopy->next;
		}

		return *this;
	}

	Polynom operator+(const Polynom& other) {
		Polynom res = *this;

		Monom* curr = other.fp;
		while (curr != nullptr) {
			res.addMonom(curr->coef, curr->d.degree[0], curr->d.degree[1], curr->d.degree[2]);
			curr = curr->next;
		}
		return res;
	}

	Polynom operator-(const Polynom& other) {
		Polynom res = *this;

		Monom* curr = other.fp;
		while (curr != nullptr) {
			res.addMonom(- curr->coef, curr->d.degree[0], curr->d.degree[1], curr->d.degree[2]);
			curr = curr->next;
		}

		return res;
	}
	Polynom operator*(const Polynom& other) {
		Polynom res;

		Monom* m1 = fp;
		while (m1 != nullptr) {
			Monom* m2 = other.fp;
			while (m2 != nullptr) {
				double newCoef = m1->coef * m2->coef;
				int newX = m1->d.degree[0] + m2->d.degree[0];
				int newY = m1->d.degree[1] + m2->d.degree[1];
				int newZ = m1->d.degree[2] + m2->d.degree[2];

				res.addMonom(newCoef, newX, newY, newZ);
				m2 = m2->next;
			}
			m1 = m1->next;
		}

		return res;
	}
};
