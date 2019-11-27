#ifndef MY_DATE_H
#define MY_DATE_H

class MyDate
{
protected:
  int year;
  int month;
  int day;

public:
  MyDate();
  MyDate(int year, int month, int day);

  void inputData(void);
  void printData(void);
};

#endif
