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
  cout << "\n\nEnter title of staff member: ";
  cin >> title;
}

void Staff::printData(void)
{
  cout << "\n\nTitle of staff member is " << title;
}
