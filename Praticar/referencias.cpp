#include <iostream>
#include <conio.h>


class Rational {
public:
  Rational(int num = 0, int den = 1);
  int num() const;
  int den() const;

private:
  int n, d;
  friend const Rational operator*(const Rational& lhs, const Rational& rhs);
};

Rational::Rational(int num, int den) {
  n = num;
  d = den;
}

int Rational::num() const {
  return n;
}

int Rational::den() const {
  return d;
}

inline const Rational operator*(const Rational& lhs, const Rational& rhs) {
  return Rational(lhs.n * rhs.n, lhs.d * rhs.d);
}


void linha() {
	std::cout << "----------------" << std::endl;
}

void print(const char* title, const Rational& frac) {
  std::cout << title << frac.num() << " / " << frac.den() << std::endl;
}

int main() {
	linha();

  Rational a(7, 2);
  Rational b(3, 5);
  Rational c = a * b;

  print("a: ", a);
  print("b: ", b);
  linha();
  print("c: ", c);

  linha();
  _getch();
	return 0;
}
