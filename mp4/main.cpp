#include <iostream>

using namespace std;

#include "Point.h"

int main(void)
{
  Point point = Point(0, 0);

  point.SetCoordinates();
  point.PrintCoordinates();

  int x = point.GetX();
  int y = point.GetY();

  return 0;
}
