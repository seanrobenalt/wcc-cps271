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
  BITWISE_INVERT,
  ITERATE_POSITIVE,
  ITERATE_NEGATIVE,
  PRINT,
  IS_LESS_THAN,
  IS_GREATER_THAN,
  IS_LESS_THAN_OR_EQUAL,
  IS_GREATER_THAN_OR_EQUAL,
  IS_EQUAL,
  IS_NOT_EQUAL,
  NEGATE,
  CAST_TO_DOUBLE,
  CAST_TO_FLOAT,
  QUIT
};

operations convert_selection_to_int (std::string const& selection) {
  if (selection == "+") {
    return ADD;
  } else if (selection == "-") {
    return SUBTRACT;
  } else if (selection == "*") {
    return MULTIPLY;
  } else if (selection == "/") {
    return DIVIDE;
  } else if (selection == "~") {
    return BITWISE_INVERT;
  } else if (selection == "++") {
    return ITERATE_POSITIVE;
  } else if (selection == "--") {
    return ITERATE_NEGATIVE;
  } else if (selection == "<<") {
    return PRINT;
  } else if (selection == "<") {
    return IS_LESS_THAN;
  } else if (selection == ">") {
    return IS_GREATER_THAN;
  } else if (selection == "<=") {
    return IS_LESS_THAN_OR_EQUAL;
  } else if (selection == ">=") {
    return IS_GREATER_THAN_OR_EQUAL;
  } else if (selection == "==") {
    return IS_EQUAL;
  } else if (selection == "!=") {
    return IS_NOT_EQUAL;
  } else if (selection == "!") {
    return NEGATE;
  } else if (selection == "(double)") {
    return CAST_TO_DOUBLE;
  } else if (selection == "(float)") {
    return CAST_TO_FLOAT;
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
    Fraction fraction_three = Fraction();

    fraction_one.Input();
    fraction_two.Input();

    string operation;
    std::cout << "\nSelect an operation by entering one of the following characters: \n";
    std::cout << "+\n-\n*\n/\n";
    std::cout << "~\n++\n--\n";
    std::cout << "<<\n";
    std::cout << "<\n>\n<=\n>=\n==\n!=\n!\n";
    std::cout << "(double)\n(float)\n";
    std::cout << "Or enter q/Q to quit\n\n";

    while (!(std::cin >> operation) || convert_selection_to_int(operation) == 0) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "\nPlease enter a valid operation from the list: ";
    }

    switch (convert_selection_to_int(operation)) {
      case ADD: {
        fraction_three = fraction_one + fraction_two;
        fraction_three.Print();
      } break;
      case SUBTRACT: {
        fraction_three = fraction_one - fraction_two;
        fraction_three.Print();
      } break;
      case MULTIPLY: {
        fraction_three = fraction_one * fraction_two;
        fraction_three.Print();
      } break;
      case DIVIDE: {
        fraction_three = fraction_one / fraction_two;
        fraction_three.Print();
      } break;
      case BITWISE_INVERT: {
        ~fraction_one;
        fraction_one.Print();
        ~fraction_two;
        fraction_two.Print();
      } break;
      case ITERATE_POSITIVE: {
        fraction_one++;
        fraction_two++;
        fraction_one.Print();
        fraction_two.Print();
      } break;
      case ITERATE_NEGATIVE: {
        fraction_one--;
        fraction_two--;
        fraction_one.Print();
        fraction_two.Print();
      } break;
      case PRINT: {
        fraction_one.Print();
        fraction_two.Print();
      } break;
      case IS_LESS_THAN: {
        bool result = fraction_one < fraction_two;
        std::cout << result << "\n";
      } break;
      case IS_GREATER_THAN: {
        bool result = fraction_one > fraction_two;
        std::cout << result << "\n";
      } break;
      case IS_LESS_THAN_OR_EQUAL: {
        bool result = fraction_one <= fraction_two;
        std::cout << result << "\n";
      } break;
      case IS_GREATER_THAN_OR_EQUAL: {
        bool result = fraction_one >= fraction_two;
        std::cout << result << "\n";
      } break;
      case IS_EQUAL: {
        bool result = fraction_one == fraction_two;
        std::cout << result << "\n";
      } break;
      case IS_NOT_EQUAL: {
        bool result = fraction_one != fraction_two;
        std::cout << result << "\n";
      } break;
      case NEGATE: {
        bool result1 = !fraction_one;
        bool result2 = !fraction_two;
        std::cout << result1 << "\n";
        std::cout << result2 << "\n";
      } break;
      case CAST_TO_DOUBLE: {
        std::cout << double(fraction_one) << "\n";
        std::cout << double(fraction_two) << "\n";
      } break;
      case CAST_TO_FLOAT: {
        std::cout << float(fraction_one) << "\n";
        std::cout << float(fraction_two) << "\n";
      } break;
      case QUIT: return 0; break;
      case INVALID: cout << "\n\nSomething went wrong. Try running the program again.\n"; break;
    }
  }
}
