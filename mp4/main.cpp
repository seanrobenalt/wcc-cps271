#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"

#include <iostream>

using namespace std;

int main(void)
{

  double circ, area, vol, surf_area;

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

  cout << "\nEnter in point info: \n";
  Point point2;
  point2.SetCoordinates();
  cout << "\nYou entered: \n";
  point2.PrintCoordinates();

	return 0;
}
