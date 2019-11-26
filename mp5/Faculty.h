#ifndef FACULTY
#define FACULTY

#include <string>
#include <vector>

#include "MyDate.h"

class Faculty
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
