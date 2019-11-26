#ifndef STUDENT
#define STUDENT

#include <string>
#include "Person.h"

class Student : Person
{
protected:

  int gradeStatus;
  double gpa;

public:
  Student();

  void inputData(void);
  void printData(void);

};

#endif
