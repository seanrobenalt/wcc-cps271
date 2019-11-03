#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder
{
protected:

  Circle base;
  double height;

public:
  Cylinder();
  Cylinder(const Circle &c, int h);

  void SetHeight(void);
  void SetRadiusOfBase(void);
  void SetCenterOfBase(void);

  void PrintHeight(void) const;
  void PrintBase(void) const;
  void PrintVolume(void) const;
  void PrintSurfaceArea(void) const;
};

#endif
