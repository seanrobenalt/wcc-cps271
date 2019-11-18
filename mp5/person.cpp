#include <iostream>

using namespace std;

#include "Person.h"

Person::Person()
{
  name = "";
  birthDate = MyDate();
  phoneNumber = "";
  email = "";
}

void Person::inputData(void)
{
  cout << "\n\nEnter name of person: ";
  cin >> name;

  cout << "\n\nEnter person's birthdate year, month and day separated by spaces: ";
  birthDate.inputData();

  cout << "\n\nEnter person's phone and email separated by a space: ";
  cin >> phoneNumber;
  cin >> email;
}

void Person::printData(void)
{
  cout << "\n\nPerson info: \n\n";
  cout << "Name: " << name << "\n\n";
  cout << "Birthdate: ";
  birthDate.printData();
  cout << "\n\n";
  cout << "Phone: " << phoneNumber << "\n\n";
  cout << "Email: " << email << "\n\n";
}
