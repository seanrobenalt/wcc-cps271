#include <iostream>

using namespace std;

#include "Point.h"
#include "Circle.h"

Circle::Circle(Point center, double radius)
{
  center = Point();
  radius = radius;
}

void Circle::SetRadius(void)
{
  cout << "Enter Radius: \n";
  cin >> radius;
}

void Circle::SetCenter(void)
{
  cout << "Set the center.\n";
  center.SetCoordinates();
}

void Circle::PrintRadius(void)
{
  cout << "Radius is " << radius << "\n";
}

void Circle::PrintCenter(void)
{
  center.PrintCoordinates();
}

void Circle::PrintAreaAndCircumference(void)
{
  cout << "Area is " << ((radius*radius)*3.14) << "\n.";
  cout << "Circumference is " << (2*3.14*radius) << "\n";
}
