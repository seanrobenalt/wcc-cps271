#include <iostream>

using namespace std;

#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"

Cylinder::Cylinder(const Circle &c, int h)
{
  base = c;
  height = h;
}

void Cylinder::SetHeight(void)
{
  cout << "Enter height: \n";
  cin >> height;
}

void Cylinder::SetRadiusOfBase(void)
{
  base.SetRadius();
}

void Cylinder::SetCenterOfBase(void)
{
  base.SetCenter();
}

void Cylinder::PrintHeight(void) const
{
  cout << "Height is " << height << "\n";
}

void Cylinder::PrintBase(void) const
{
  base.PrintRadius();
  base.PrintCenter();
}

void Cylinder::PrintVolume(void) const
{
  double areaOfBase = base.GetArea();
  cout << "Volume is " << (areaOfBase*height) << "\n";
}

void Cylinder::PrintSurfaceArea(void) const
{
  double radius = base.GetRadius();
  cout << "Surface area is " << ((2*3.14*(radius*radius)) + (height*2*3.14*radius)) << "\n";
}
