#ifndef EMPLOYEE
#define EMPLOYEE

#include "MyDate.h"
#include "Person.h"

class Employee : public Person
{
protected:
  long salary;
  MyDate dateHired;

public:
  Employee();

  virtual void inputData(void);
  virtual void printData(void);
};

#endif
