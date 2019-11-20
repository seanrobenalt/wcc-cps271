#include "MyDate.h"
#include "Person.h"
#include "Employee.h"
#include "Staff.h"
#include <iostream>

using namespace std;

int main(void)
{
  Person newPerson;
  newPerson.inputData();
  newPerson.printData();

  return 0;
}
