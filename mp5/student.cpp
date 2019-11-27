#include <iostream>

using namespace std;

#include "Student.h"

Student::Student()
{
  gradeStatus = FRESHMAN;
  gpa = 0.0;
}

Student::Student(string _name, MyDate _birthdate, string _phone, string _email, double _gpa, char _grade)
{
  name = _name;
  birthDate = _birthdate;
  phoneNumber = _phone;
  email = _email;
  gpa = _gpa;

  switch (_grade) {
    case '0': {
      gradeStatus = FRESHMAN;
    } break;
    case '1': {
      gradeStatus = SOPHOMORE;
    } break;
    case '2': {
      gradeStatus = JUNIOR;
    } break;
    case '3': {
      gradeStatus = SENIOR;
    } break;
    default: {
      gradeStatus = FRESHMAN;
    }
  }
}

string Student::GradeStatusNames[4] = { "Freshman", "Sophomore", "Junior", "Senior" };

void Student::inputData(void)
{
  cout << "\nEnter in student.\n";

  bool validGrade = false;

  while (validGrade == false) {
    char val;

    cout << "\nEnter grade status - 0 for freshman, 1 for sophomore, 2 for junior, 3 for senior: ";

    cin >> val;

    switch (val) {
      case '0': {
        gradeStatus = FRESHMAN;
        validGrade = true;
      } break;
      case '1': {
        gradeStatus = SOPHOMORE;
        validGrade = true;
      } break;
      case '2': {
        gradeStatus = JUNIOR;
        validGrade = true;
      } break;
      case '3': {
        gradeStatus = SENIOR;
        validGrade = true;
      } break;
      default: {
        validGrade = false;
      }
    }
  }

  cout << "\nEnter in gpa: ";
  cin >> gpa;
}

void Student::printData(void)
{
  cout << "\nStudent is a " << GradeStatusNames[gradeStatus] << " with a gpa of " << gpa << "\n\n";
}
