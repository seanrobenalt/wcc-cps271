#include <iostream>

using namespace std;

#include "Employee.h"

Employee::Employee()
{
  salary = 0;
  dateHired = MyDate();
}

void Employee::inputData(void)
{
  cout << "\n\nEnter salary of employee: ";
  cin >> salary;

  cout << "\n\nEnter date hired year, month and day separated by spaces: ";
  dateHired.inputData();
}

void Employee::printData(void)
{
  cout << "\n\nSalary of employee is " << salary;
  cout << "\n\nDate hired: ";
  dateHired.printData();
}
