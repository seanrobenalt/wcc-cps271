#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#include "Fraction.h"

int main() {
  bool run_the_program = true;

  std::cout << "Fraction Calculator is about to begin.";

  while (true) {
    string command;
    std::cout << "\n\nEnter 'q' to quit, otherwise press any key to continue: ";
    std::cin >> command;

    if (command == "q") {
      break;
    }
    else {
      Fraction empty_fraction_one = Fraction();
      Fraction empty_fraction_two = Fraction();

      empty_fraction_one.Input();
      empty_fraction_two.Input();

      int operation;
      std::cout << "\nSelect an operation by entering a number: \n";
      std::cout << "1 for add\n2 for subtract\n3 for multiply\n4 for divide\n";

      while (!(std::cin >> operation) || operation > 4 || operation < 1) {
        cout << operation;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\nPlease enter a valid number from the list: ";
      }

      switch (operation) {
        case 1: {
          Fraction added_fraction = Fraction().Add(empty_fraction_one, empty_fraction_two);
          added_fraction.Print();
        } break;
        case 2: {
          Fraction subtracted_fraction = Fraction().Subtract(empty_fraction_one, empty_fraction_two);
          subtracted_fraction.Print();
        } break;
        case 3: {
          Fraction multiplied_result = Fraction().Multiply(empty_fraction_one, empty_fraction_two);
          multiplied_result.Print();
        } break;
        case 4: {
          Fraction divided_result = Fraction().Divide(empty_fraction_one, empty_fraction_two);
          divided_result.Print();
        } break;
      }
    }
  }

  return 0;
}
