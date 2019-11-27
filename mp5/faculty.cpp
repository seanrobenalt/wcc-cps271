#include <iostream>

using namespace std;

#include "Faculty.h"

Faculty::Faculty()
{
  officeRoomNumber = 0;
  tenure = false;
  officeHours;
}

Faculty::Faculty(string _name, MyDate _birthdate, string _phone, string _email, long _salary, MyDate _dateHired, int _officeRoomNumber, bool _tenure, MyDate _officeHours)
{
  name = _name;
  birthDate = _birthdate;
  phoneNumber = _phone;
  email = _email;
  salary = _salary;
  dateHired = _dateHired;
  officeRoomNumber = _officeRoomNumber;
  tenure = _tenure;
  officeHours;
  officeHours.push_back(_officeHours);
}

void Faculty::inputData(void)
{
  cout << "\n\nEnter name of faculty: ";
  cin >> name;

  MyDate date1;
  cout << "\n\nEnter faculty birthdate year, month and day separated by spaces: ";
  date1.inputData();
  birthDate = date1;

  cout << "\n\nEnter phone number of faculty: ";
  cin >> phoneNumber;

  cout << "\n\nEnter email of faculty: ";
  cin >> email;

  cout << "\n\nEnter salary of faculty: ";
  cin >> salary;

  MyDate date2;
  cout << "\n\nEnter date faculty was hired year, month and day separated by spaces: ";
  date2.inputData();
  dateHired = date2;

  MyDate day;
  cout << "\n\nEnter office hours year, month and day separated by spaces: ";
  day.inputData();
  officeHours.push_back(day);

  cout << "\n\nEnter office room number: ";
  cin >> officeRoomNumber;

  cout << "\n\nDoes faculty have tenure? (true/false): ";
  cin >> tenure;
}

void Faculty::printData(void)
{
  cout << "\n\nFaculty info: \n\n";
  cout << "Faculty Name: " << name << "\n\n";
  cout << "Faculty Birthdate: ";
  birthDate.printData();
  cout << "\n\n";
  cout << "Faculty Phone: " << phoneNumber << "\n\n";
  cout << "Faculty Email: " << email << "\n\n";

  cout << "\n\nSalary of faculty is " << salary;
  cout << "\n\nFaculty Date hired: ";
  dateHired.printData();

  cout << "\nOffice room number is " << officeRoomNumber << " and tenure is " << tenure << "\n\n";

  cout << "\nOffice hours are: ";

  for(int i = 0; i < officeHours.size(); i++)
  {
    officeHours[i].printData();
  }
}
