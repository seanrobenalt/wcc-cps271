#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#include "Fraction.h"

enum operations {
  INVALID,
  ADD,
  SUBTRACT,
  MULTIPLY,
  DIVIDE,
  QUIT
};

operations convert_selection_to_int (std::string const& selection) {
  if (selection == "A") {
    return ADD;
  } else if (selection == "B") {
    return SUBTRACT;
  } else if (selection == "C") {
    return MULTIPLY;
  } else if (selection == "D") {
    return DIVIDE;
  } else if (selection == "q" || selection == "Q") {
    return QUIT;
  } else {
    return INVALID;
  };
};

int main() {
  while (true) {
    Fraction fraction_one = Fraction();
    Fraction fraction_two = Fraction();

    fraction_one.Input();
    fraction_two.Input();

    string operation;
    std::cout << "\nSelect an operation by entering a letter: \n";
    std::cout << "A for add\nB for subtract\nC for multiply\nD for divide\nOr enter q/Q to quit\n\n";

    while (!(std::cin >> operation) || convert_selection_to_int(operation) == 0) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "\nPlease enter a valid operation from the list: ";
    }

    switch (convert_selection_to_int(operation)) {
      case ADD: {
        Fraction added_fraction = fraction_one.Add(fraction_two);
        added_fraction.Print();
      } break;
      case SUBTRACT: {
        Fraction subtracted_fraction = fraction_one.Subtract(fraction_two);
        subtracted_fraction.Print();
      } break;
      case MULTIPLY: {
        Fraction multiplied_result = fraction_one.Multiply(fraction_two);
        multiplied_result.Print();
      } break;
      case DIVIDE: {
        Fraction divided_result = fraction_one.Divide(fraction_two);
        divided_result.Print();
      } break;
      case QUIT: return 0; break;
      case INVALID: cout << "\n\nSomething went wrong. Try running the program again.\n"; break;
    }
  }
}
