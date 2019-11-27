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

  virtual void inputData(void);
  virtual void printData(void);
};

#endif
