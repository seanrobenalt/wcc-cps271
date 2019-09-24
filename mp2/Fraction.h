
class Fraction {
  public:
    int numerator;
    int denominator;

    Fraction() {
      numerator = 0;
      denominator = 0;
    };

    Fraction(int _numerator) {
      numerator = _numerator;
      denominator = 0;
    };

    Fraction(double number) {
      int multiplied = number*100000;
      numerator = multiplied;
      denominator = 100000;
    };

    Fraction(int _numerator, int _denominator) {
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

    void Input() {
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

    void Print() {
      std::cout << "\n" << numerator << "/" << denominator << "\n";
    };

    Fraction Add(Fraction first_fraction, Fraction second_fraction) {
      int common_denominator = first_fraction.denominator * second_fraction.denominator;

      int first_fraction_numerator = first_fraction.numerator * second_fraction.denominator;
      int second_fraction_numerator = second_fraction.numerator * first_fraction.denominator;
      int final_numerator = first_fraction_numerator + second_fraction_numerator;

      simplify(final_numerator, common_denominator);

      Fraction added_result = Fraction(final_numerator, common_denominator);

      return added_result;
    };

    Fraction Subtract(Fraction first_fraction, Fraction second_fraction) {
      int common_denominator = first_fraction.denominator * second_fraction.denominator;

      int first_fraction_numerator = first_fraction.numerator * second_fraction.denominator;
      int second_fraction_numerator = second_fraction.numerator * first_fraction.denominator;
      int final_numerator = first_fraction_numerator - second_fraction_numerator;

      simplify(final_numerator, common_denominator);

      Fraction subtracted_result = Fraction(final_numerator, common_denominator);

      return subtracted_result;
    };

    Fraction Multiply(Fraction first_fraction, Fraction second_fraction) {
      int new_numerator = first_fraction.numerator * second_fraction.numerator;
      int new_denominator = first_fraction.denominator * second_fraction.denominator;

      simplify(new_numerator, new_denominator);

      Fraction multiplied_result = Fraction(new_numerator, new_denominator);

      return multiplied_result;
    };

    Fraction Divide(Fraction first_fraction, Fraction second_fraction) {
      int common_denominator = first_fraction.denominator * second_fraction.denominator;

      int first_fraction_numerator = first_fraction.numerator * second_fraction.denominator;
      int second_fraction_numerator = second_fraction.numerator * first_fraction.denominator;

      float final_numerator_float;
      try {
        final_numerator_float = first_fraction_numerator / second_fraction_numerator;
      }
      catch (...) {
        std::cout << "\n\nSomething went wrong in the Divide function. Please try again.\n";
      }

      int final_numerator = final_numerator_float;
      simplify(final_numerator, common_denominator);

      Fraction divided_result = Fraction(final_numerator, common_denominator);

      return divided_result;
    };
};
