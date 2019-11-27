#ifndef STAFF
#define STAFF

#include <string>
#include "Employee.h"

class Staff : public Employee
{
protected:
  string title;

public:
  Staff();
  Staff(string name, MyDate birthDate, string phone, string email, long salary, MyDate dateHired, string title);

  void inputData(void);
  void printData(void);
};

#endif
