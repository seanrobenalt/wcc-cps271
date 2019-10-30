#ifndef POINT_H
#define POINT_H

class Point
{
private:

  int x;
  int y;

public:
  explicit Point();
  explicit Point(int x, int y);

  void SetCoordinates(void);
  void PrintCoordinates(void);

  int GetX(void);
  int GetY(void);
};

#endif
