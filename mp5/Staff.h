#ifndef STAFF
#define STAFF

#include <string>
#include "Employee.h"

class Staff : Employee
{
protected:
  string title;

public:
  Staff();

  void inputData(void);
  void printData(void);
};

#endif
