#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle
{
private:

  Point center;
  double radius;

public:

  explicit Circle(Point center, double radius);

  void SetRadius(void);
  void PrintRadius(void);
  void PrintAreaAndCircumference(void);
};

#endif
