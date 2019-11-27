#include <iostream>

using namespace std;

#include "MyDate.h"

MyDate::MyDate()
{
  year = 0;
  month = 0;
  day = 0;
}

MyDate::MyDate(int _year, int _month, int _day)
{
  year = _year;
  month = _month;
  day = _day;
}

void MyDate::inputData(void)
{
  cin >> year;
  cin >> month;
  cin >> day;
}

void MyDate::printData(void)
{
  cout << year << "/" << month << "/" << day << "\n\n";
}
