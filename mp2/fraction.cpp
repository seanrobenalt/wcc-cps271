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

void Fraction::simplify (int &numerator, int &denominator) {
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

  f.numerator = (numerator * one_fraction.denominator) + (denominator * one_fraction.numerator);
  f.denominator = denominator * one_fraction.denominator;

  Fraction::simplify(f.numerator, f.denominator);

  return f;
};

Fraction Fraction::Subtract(Fraction one_fraction) {
  Fraction f;

  f.numerator = (numerator * one_fraction.denominator) - (denominator * one_fraction.numerator);
  f.denominator = denominator * one_fraction.denominator;

  Fraction::simplify(f.numerator, f.denominator);

  return f;
};

Fraction Fraction::Multiply(Fraction one_fraction) {
  Fraction f;

  f.numerator = numerator * one_fraction.numerator;
  f.denominator = denominator * one_fraction.denominator;

  Fraction::simplify(f.numerator, f.denominator);

  return f;
};

Fraction Fraction::Divide(Fraction one_fraction) {
  Fraction f;

  f.numerator  = numerator * one_fraction.denominator;
  f.denominator = denominator * one_fraction.numerator;

  Fraction::simplify(f.numerator, f.denominator);

  return f;
};

void Fraction::Add(Fraction first_fraction, Fraction second_fraction) {

  numerator = (first_fraction.numerator * second_fraction.denominator) + (second_fraction.numerator * first_fraction.denominator);
  denominator = first_fraction.denominator * second_fraction.denominator;

  Fraction::simplify(numerator, denominator);
};

void Fraction::Subtract(Fraction first_fraction, Fraction second_fraction) {

  numerator = (first_fraction.numerator * second_fraction.denominator) - (second_fraction.numerator * first_fraction.denominator);
  denominator = first_fraction.denominator * second_fraction.denominator;

  Fraction::simplify(numerator, denominator);
};

void Fraction::Multiply(Fraction first_fraction, Fraction second_fraction) {

  numerator = first_fraction.numerator * second_fraction.numerator;
  denominator = first_fraction.denominator * second_fraction.denominator;

  Fraction::simplify(numerator, denominator);
};

void Fraction::Divide(Fraction first_fraction, Fraction second_fraction) {

  numerator = first_fraction.numerator * second_fraction.denominator;
  denominator = second_fraction.numerator * first_fraction.denominator;

  Fraction::simplify(numerator, denominator);
};
