#include <iostream>

using namespace std;

#include "Point.h"
#include "Circle.h"

Circle::Circle()
{
  center = Point();
  radius = 0;
}

Circle::Circle(const Point &p, double r)
{
  center = p;
  radius = r;
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

void Circle::PrintRadius(void) const
{
  cout << "Radius is " << radius << "\n";
}

void Circle::PrintCenter(void) const
{
  center.PrintCoordinates();
}

void Circle::PrintAreaAndCircumference(void) const
{
  cout << "Area is " << ((radius*radius)*3.14) << "\n.";
  cout << "Circumference is " << (2*3.14*radius) << "\n";
}

double Circle::GetArea(void) const
{
  double area = ((radius*radius)*3.14);
  return area;
}

double Circle::GetRadius(void) const
{
  return radius;
}
