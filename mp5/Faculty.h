#ifndef FACULTY
#define FACULTY

#include <string>
#include <vector>

#include "MyDate.h"
#include "Employee.h"

class Faculty : Employee
{
protected:

  int officeRoomNumber;
  bool tenure;
  vector<MyDate> officeHours;

public:
  Faculty();

  void inputData(void);
  void printData(void);

};

#endif
