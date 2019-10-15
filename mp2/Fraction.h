#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
private:

  int numerator;
  int denominator;

public:

  explicit Fraction();
  explicit Fraction(int _numerator);
  explicit Fraction(double number);
  explicit Fraction(int _numerator, int _denominator);

  void simplify (int &numerator, int &denominator);
  void Input();

  void Print();

  Fraction Add(Fraction one_fraction);
  Fraction Subtract(Fraction one_fraction);
  Fraction Multiply(Fraction one_fraction);
  Fraction Divide(Fraction one_fraction);
  void Add(Fraction first_fraction, Fraction second_fraction);
  Fraction Subtract(Fraction first_fraction, Fraction second_fraction);
  Fraction Multiply(Fraction first_fraction, Fraction second_fraction);
  Fraction Divide(Fraction first_fraction, Fraction second_fraction);
};

#endif
