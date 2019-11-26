#ifndef STUDENT
#define STUDENT

#include <string>

class Student
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
