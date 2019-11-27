#ifndef STUDENT
#define STUDENT

#include <string>
#include "Person.h"

class Student : public Person
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
  Student(string name, MyDate birthdate, string phone, string email, double gpa, char grade);

  void inputData(void);
  void printData(void);

};

#endif
