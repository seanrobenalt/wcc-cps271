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
  cout << "\nOffice room number is " << officeRoomNumber << " and tenure is " << tenure << "\n\n";

  cout << "\nOffice hours are: ";

  for(int i = 0; i < officeHours.size(); i++)
  {
    officeHours[i].printData();
  }
}
