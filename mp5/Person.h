#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "MyDate.h"

using namespace std;

class Person
{
protected:
  string name;
  MyDate birthDate;
  string phoneNumber;
  string email;

public:
  Person();

  void inputData(void);
  void printData(void);
};

#endif
