#include <iostream>

using namespace std;

#include "Fraction.h"

Fraction::Fraction() {
  numerator = 0;
  denominator = 1;
};

Fraction::Fraction(int _numerator) {
  numerator = _numerator;
  denominator = 1;
};

Fraction::Fraction(double number) {
  int multiplied = number*100000;
  numerator = multiplied;
  denominator = 100000;
};

Fraction::Fraction(int _numerator, int _denominator) {

  if (_denominator <= 0)
    _denominator = 1;

  numerator = _numerator;
  denominator = _denominator;
};

void simplify (int &numerator, int &denominator) {
  for (int i = denominator * numerator; i > 1; i--) {
    if ((denominator % i == 0) && (numerator % i == 0)) {
      denominator /= i;
      numerator /= i;
    }
  }
}

void Fraction::Input() {
  std::cout << "\nEnter a numerator: ";
  while (!(std::cin >> numerator)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "\n\nInvalid. Please input a number for the numerator: ";
  }

  std::cout << "\nEnter a denominator: ";
  while (!(std::cin >> denominator) || denominator == 0) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "\n\nInvalid. Please input a number (not equal to zero) for the denominator: ";
  }
};

void Fraction::Print() {
  std::cout << "\n" << numerator << "/" << denominator << "\n";
};

Fraction Fraction::Add(Fraction one_fraction) {
  Fraction f;

  int common_denominator = denominator * one_fraction.denominator;
  int first_fraction_numerator = numerator * one_fraction.denominator;
  int second_fraction_numerator = denominator * one_fraction.numerator;

  f.numerator = first_fraction_numerator + second_fraction_numerator;
  f.denominator = common_denominator;

  simplify(f.numerator, f.denominator);

  return f;
};

Fraction Fraction::Subtract(Fraction one_fraction) {
  Fraction f;

  int common_denominator = denominator * one_fraction.denominator;
  int first_fraction_numerator = numerator * one_fraction.denominator;
  int second_fraction_numerator = denominator * one_fraction.numerator;

  f.numerator = first_fraction_numerator - second_fraction_numerator;
  f.denominator = common_denominator;

  simplify(f.numerator, f.denominator);

  return f;
};

Fraction Fraction::Multiply(Fraction one_fraction) {
  Fraction f;

  int new_numerator = numerator * one_fraction.numerator;
  int new_denominator = denominator * one_fraction.denominator;

  simplify(new_numerator, new_denominator);

  f.numerator = new_numerator;
  f.denominator = new_denominator;

  return f;
};

Fraction Fraction::Divide(Fraction one_fraction) {
  Fraction f;

  int final_numerator = numerator * one_fraction.denominator;
  int final_denominator = denominator * one_fraction.numerator;

  simplify(final_numerator, final_denominator);

  f.numerator = final_numerator;
  f.denominator = final_denominator;

  return f;
};

Fraction Fraction::Add(Fraction first_fraction, Fraction second_fraction) {
  int common_denominator = first_fraction.denominator * second_fraction.denominator;

  int first_fraction_numerator = first_fraction.numerator * second_fraction.denominator;
  int second_fraction_numerator = second_fraction.numerator * first_fraction.denominator;
  int final_numerator = first_fraction_numerator + second_fraction_numerator;

  simplify(final_numerator, common_denominator);

  Fraction added_result = Fraction(final_numerator, common_denominator);

  return added_result;
};

Fraction Fraction::Subtract(Fraction first_fraction, Fraction second_fraction) {
  int common_denominator = first_fraction.denominator * second_fraction.denominator;

  int first_fraction_numerator = first_fraction.numerator * second_fraction.denominator;
  int second_fraction_numerator = second_fraction.numerator * first_fraction.denominator;
  int final_numerator = first_fraction_numerator - second_fraction_numerator;

  simplify(final_numerator, common_denominator);

  Fraction subtracted_result = Fraction(final_numerator, common_denominator);

  return subtracted_result;
};

Fraction Fraction::Multiply(Fraction first_fraction, Fraction second_fraction) {
  int new_numerator = first_fraction.numerator * second_fraction.numerator;
  int new_denominator = first_fraction.denominator * second_fraction.denominator;

  simplify(new_numerator, new_denominator);

  Fraction multiplied_result = Fraction(new_numerator, new_denominator);

  return multiplied_result;
};

Fraction Fraction::Divide(Fraction first_fraction, Fraction second_fraction) {

  int final_numerator = first_fraction.numerator * second_fraction.denominator;
  int final_denominator = second_fraction.numerator * first_fraction.denominator;

  simplify(final_numerator, final_denominator);

  Fraction divided_result = Fraction(final_numerator, final_denominator);

  return divided_result;
};
