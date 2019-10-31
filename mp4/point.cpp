#include <iostream>

using namespace std;

#include "Point.h"

Point::Point()
{
  x = 0;
  y = 0;
}

Point::Point(int a, int b)
{
  x = a;
  y = b;
}

void Point::SetCoordinates(void)
{
  cout << "Enter X: \n";
  cin >> x;

  cout << "Enter Y: \n";
  cin >> y;
}

void Point::PrintCoordinates(void) const
{
  cout << "X is " << x << "\n";
  cout << "Y is " << y << "\n";
}

int Point::GetX(void) const
{
  return x;
}

int Point::GetY(void) const
{
  return y;
}
