#ifndef EMPLOYEE
#define EMPLOYEE

#include "MyDate.h"
#include "Person.h"

class Employee : Person
{
protected:
  long salary;
  MyDate dateHired;

public:
  Employee();

  void inputData(void);
  void printData(void);
};

#endif
