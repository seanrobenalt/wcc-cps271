#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"

#include <iostream>

using namespace std;

int main(void)
{

	cout << "\n\nTesting of constant Point, Circle, Cylinder objects..." << endl;

	// create and print out a const Point object
	cout << "\nPoint info..." << endl;
	const Point center1(2, 3);
	center1.PrintCoordinates();

	// create and print out a const Circle object
	cout << "\nCircle info..." << endl;
	const Circle cir1 = Circle(center1, 5.5);
	cir1.PrintRadius();
  cir1.PrintCenter();
  cir1.PrintAreaAndCircumference();

	// create and print out a const Cylinder object
	cout << "\nCylinder info..." << endl;
	const Cylinder cyl1(cir1, 10);
	cyl1.PrintHeight();
  cyl1.PrintBase();
  cyl1.PrintVolume();
  cyl1.PrintSurfaceArea();

  cout << "\nEnter in point info (x y): \n";
  Point point2;
  point2.SetCoordinates();
  cout << "\nYou entered: \n";
  point2.PrintCoordinates();

  cout << "\nEnter in circle info\n";
  Circle cir2;
  cout << "\nSet radius: \n";
  cir2.SetRadius();
  cout << "\nSet the center w/ (x y)\n";
  cir2.SetCenter();
  cout << "\nYou entered: \n";
  cir2.PrintRadius();
  cir2.PrintCenter();
  cir2.PrintAreaAndCircumference();

	return 0;
}
