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
        fraction_one.BitwiseInvert(fraction_two);
        fraction_two.Print();
      } break;
      case ITERATE_POSITIVE: {
        fraction_one.IteratePositive(fraction_two);
        fraction_two.Print();
      } break;
      case ITERATE_NEGATIVE: {
        fraction_one.IterateNegative(fraction_two);
        fraction_two.Print();
      } break;
      case PRINT: {
        fraction_one.Print();
        fraction_two.Print();
      } break;
      case IS_LESS_THAN: {
        std::cout << fraction_one.IsLessThan(fraction_two) << "\n";
      } break;
      case IS_GREATER_THAN: {
        std::cout << fraction_one.IsGreaterThan(fraction_two) << "\n";
      } break;
      case IS_LESS_THAN_OR_EQUAL: {
        std::cout << fraction_one.IsLessThanOrEqual(fraction_two) << "\n";
      } break;
      case IS_GREATER_THAN_OR_EQUAL: {
        std::cout << fraction_one.IsGreaterThanOrEqual(fraction_two) << "\n";
      } break;
      case IS_EQUAL: {
        std::cout << fraction_one.IsEqual(fraction_two) << "\n";
      } break;
      case IS_NOT_EQUAL: {
        std::cout << fraction_one.IsNotEqual(fraction_two) << "\n";
      } break;
      case NEGATE: {
        std::cout << fraction_one.Negate() << "\n";
        std::cout << fraction_two.Negate() << "\n";
      } break;
      case CAST_TO_DOUBLE: {
        std::cout << fraction_one.CastToDouble() << "\n";
        std::cout << fraction_two.CastToDouble() << "\n";
      } break;
      case CAST_TO_FLOAT: {
        std::cout << fraction_one.CastToFloat() << "\n";
        std::cout << fraction_two.CastToFloat() << "\n";
      } break;
      case QUIT: return 0; break;
      case INVALID: cout << "\n\nSomething went wrong. Try running the program again.\n"; break;
    }
  }
}
