#include <iostream>

using namespace std;

#include "Faculty.h"

Faculty::Faculty()
{
  officeRoomNumber = 0;
  tenure = false;
  officeHours;
}

void Faculty::inputData(void)
{
  MyDate day;
  day.inputData();
  officeHours.push_back(day);

  cin >> officeRoomNumber;
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
