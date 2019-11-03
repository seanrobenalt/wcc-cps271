#ifndef POINT_H
#define POINT_H

class Point
{
protected:

  int x;
  int y;

public:
  Point();
  Point(int a, int b);

  void SetCoordinates(void);
  void PrintCoordinates(void) const;

  int GetX(void) const;
  int GetY(void) const;
};

#endif
