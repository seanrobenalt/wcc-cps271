#include <iostream>

using namespace std;

#include "Point.h"

Point::Point()
{
  x = 0;
  y = 0;
}

Point::Point(int x, int y)
{
  x = x;
  y = y;
}

void Point::SetCoordinates(void)
{
  cout << "Enter X: \n";
  cin >> x;

  cout << "Enter Y: \n";
  cin >> y;
}

void Point::PrintCoordinates(void)
{
  cout << "X is " << x << "\n";
  cout << "Y is " << y << "\n";
}

int Point::GetX(void) {
  return x;
}

int Point::GetY(void) {
  return y;
}
