#include <iostream>

using namespace std;

#include "Student.h"

Student::Student()
{
  gradeStatus = 1;
  gpa = 0.0;
}

void Student::inputData(void)
{
  cin >> gradeStatus;
  cin >> gpa;
}

void Student::printData(void)
{
  cout << "\nStudent is a " << gradeStatus << " with a gpa of " << gpa << "\n\n";
}
