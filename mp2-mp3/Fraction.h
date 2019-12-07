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
  Fraction operator-(const Fraction& one_fraction);
  Fraction operator*(const Fraction& one_fraction);
  Fraction operator/(const Fraction& one_fraction);

  Fraction operator~(void);
  Fraction operator++(void);
  Fraction operator++(int);
  Fraction operator--(void);
  Fraction operator--(int);

  bool operator<(const Fraction& one_fraction);
  bool operator>(const Fraction& one_fraction);
  bool operator<=(const Fraction& one_fraction);
  bool operator>=(const Fraction& one_fraction);
  bool operator==(const Fraction& one_fraction);
  bool operator!=(const Fraction& one_fraction);
  bool operator!(void);

  operator double(void);
  operator float(void);
};

#endif
