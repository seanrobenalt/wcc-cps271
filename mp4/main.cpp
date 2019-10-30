#include "Point.h"
#include "Circle.h"

#include <iostream>

using namespace std;

int main(void)
{
  Point point = Point(0, 0);

  point.SetCoordinates();

  Circle circle = Circle(point, 0);

  circle.SetRadius();
  circle.SetCenter();
  circle.PrintRadius();
  circle.PrintCenter();
  circle.PrintAreaAndCircumference();

  return 0;
}
