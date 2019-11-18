#include "MyDate.h"
#include <iostream>

using namespace std;

int main(void)
{
  cout << "Enter in a year, month and day separated by spaces: \n\n";
  MyDate newDate;
  newDate.inputData();
  newDate.printData();

  return 0; 
}
