#include <iostream>

using namespace std;

#include "Staff.h"

Staff::Staff()
{
  title = "";
}

Staff::Staff(string _name, MyDate _birthDate, string _phone, string _email, long _salary, MyDate _dateHired, string _title)
{
  name = _name;
  birthDate = _birthDate;
  phoneNumber = _phone;
  email = _email;
  salary = _salary;
  dateHired = _dateHired;
  title = _title;
}

void Staff::inputData(void)
{
  cout << "\n\nEnter staff info.";
  cout << "\n\nEnter name of staff: ";
  cin >> name;

  cout << "\n\nEnter title of staff member: ";
  cin >> title;

  MyDate date1;
  cout << "\n\nEnter staff birthdate year, month and day separated by spaces: ";
  date1.inputData();
  birthDate = date1;

  cout << "\n\nEnter phone number of staff: ";
  cin >> phoneNumber;

  cout << "\n\nEnter email of staff: ";
  cin >> email;

  cout << "\n\nEnter salary of staff: ";
  cin >> salary;

  MyDate date2;
  cout << "\n\nEnter date staff was hired year, month and day separated by spaces: ";
  date2.inputData();
  dateHired = date2;
}

void Staff::printData(void)
{
  cout << "\n\nStaff info: \n\n";
  cout << "\n\nTitle of staff member is " << title;


  cout << "\n\nStaff Name: " << name << "\n\n";
  cout << "Staff Birthdate: ";
  birthDate.printData();
  cout << "\n\n";
  cout << "Staff Phone: " << phoneNumber << "\n\n";
  cout << "Staff Email: " << email << "\n\n";

  cout << "\n\nSalary of staff is " << salary;
  cout << "\n\nStaff Date hired: ";
  dateHired.printData();
}
