#ifndef EMPLOYEE
#define EMPLOYEE

#include "MyDate.h"

class Employee
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
