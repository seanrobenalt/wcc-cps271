#include <iostream>

using namespace std;

#include "Staff.h"

Staff::Staff()
{
  title = "";
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
