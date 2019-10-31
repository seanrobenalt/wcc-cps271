#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle
{
protected:

  Point center;
  double radius;

public:
  Circle();
  Circle(const Point &p, double r);

  void SetRadius(void);
  void SetCenter(void);
  void PrintRadius(void) const;
  void PrintCenter(void) const;
  void PrintAreaAndCircumference(void) const;

  double GetArea(void) const;
  double GetRadius(void) const;
};

#endif
