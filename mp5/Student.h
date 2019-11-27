#ifndef STUDENT
#define STUDENT

#include <string>
#include "Person.h"

class Student : Person
{
protected:

  enum GradeStatus {
    FRESHMAN,
    SOPHOMORE,
    JUNIOR,
    SENIOR
  };

  static string GradeStatusNames[4];

  Student::GradeStatus gradeStatus;
  double gpa;

public:
  Student();

  void inputData(void);
  void printData(void);

};

#endif
