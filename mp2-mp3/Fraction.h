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

  Fraction operator+(const Fraction& b);
  Fraction Subtract(Fraction one_fraction);
  Fraction Multiply(Fraction one_fraction);
  Fraction Divide(Fraction one_fraction);

  void Add(Fraction first_fraction, Fraction second_fraction);
  void Subtract(Fraction first_fraction, Fraction second_fraction);
  void Multiply(Fraction first_fraction, Fraction second_fraction);
  void Divide(Fraction first_fraction, Fraction second_fraction);

  Fraction BitwiseInvert(Fraction one_fraction);
  Fraction IteratePositive(Fraction one_fraction);
  Fraction IterateNegative(Fraction one_fraction);
  bool IsLessThan(Fraction one_fraction);
  bool IsGreaterThan(Fraction one_fraction);
  bool IsLessThanOrEqual(Fraction one_fraction);
  bool IsGreaterThanOrEqual(Fraction one_fraction);
  bool IsEqual(Fraction one_fraction);
  bool IsNotEqual(Fraction one_fraction);
  int Negate();
  double CastToDouble();
  float CastToFloat();
};

#endif
