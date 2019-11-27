#ifndef FACULTY
#define FACULTY

#include <string>
#include <vector>

#include "MyDate.h"
#include "Employee.h"

class Faculty : public Employee
{
protected:

  int officeRoomNumber;
  bool tenure;
  vector<MyDate> officeHours;

public:
  Faculty();
  Faculty(string name, MyDate birthdate, string phone, string email, long salary, MyDate dateHired, int officeRoomNumber, bool tenure, MyDate officeHours);

  void inputData(void);
  void printData(void);

};

#endif
