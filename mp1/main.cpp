#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double power(double value, int power_num=2) {
  return pow(value, power_num);
}

int main() {
  double value_to_raise;
  int power_to_raise;

  cout << "\nEnter a number to raise to a power: ";
  cin >> value_to_raise;

  cout << "\nYou entered " << value_to_raise;

  cout << "\nEnter a power to raise " << value_to_raise << " to: ";
  cin >> power_to_raise;

  double result = power(value_to_raise, power_to_raise);

  cout << "\n" << value_to_raise << " raised to the power of " << power_to_raise << " is " << result << "\n";

  

  return 0;
}
