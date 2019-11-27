#include "MyDate.h"
#include "Person.h"
#include "Employee.h"
#include "Staff.h"
#include "Student.h"
#include "Faculty.h"
#include <iostream>

using namespace std;

int main(void)
{
  vector<Person *> myList;

  bool continueLoop = true;

  while(continueLoop) {
    cout << "\n\nYou will now enter a student, faculty and staff.";

    Student *ps;
    Faculty *pf;
    Staff *pa;

  	ps = new Student();
  	ps->inputData();
  	myList.push_back(ps);

  	pf = new Faculty();
  	pf->inputData();
  	myList.push_back(pf);

  	pa = new Staff();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
  	pa->inputData();
  	myList.push_back(pa);

    char val;
    cout << "\n\nEnter 'a' to add another set of sudent, faculty and staff. Enter 's' to view the people you've entered so far.";
    cin >> val;

    switch (val) {
      case 'a': break;
      case 's': {
        continueLoop = false;
      } break;
      default: {
        cout << "\n\nInvalid entry. Terminating program.";
        return 0;
      } break;
    }
  }

	for (std::vector<Person *>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		Person *tp = *it;
		tp->printData();
	}

	for (std::vector<Person *>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		Person *tp = *it;
		delete tp;
	}

  return 0;
}
