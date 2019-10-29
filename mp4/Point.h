#ifndef FRACTION_H
#define FRACTION_H

class Point
{
private:

  int x;
  int y;

public:

  explicit Point(int x, int y);

  void SetCoordinates(void);
  void PrintCoordinates(void);

  int GetX(void);
  int GetY(void);
};

#endif
