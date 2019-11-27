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

  Student *ps;
  Faculty *pf;
  Staff *pa;

	const MyDate bd(2000, 8, 4);
	const MyDate hd(2019, 10, 21);
	const MyDate oh(2019, 9, 13);

	Student *ps1 = new Student("joe", bd, "231-6752", "joe@aol.com", 3.4, '0');
	myList.push_back(ps1);

	Faculty *pf1 = new Faculty("james", bd, "676-3434", "james@aol.com", 55000, hd, 110, true, oh);
	myList.push_back(pf1);

	Staff *pa1 = new Staff("tommy", bd, "111-3333", "tommy@aol.com", 22000, hd, "lawn care");
	myList.push_back(pa1);

	// go get a Student
	ps = new Student();
	ps->inputData();
	myList.push_back(ps);

	// go get a Faculty
	pf = new Faculty();
	pf->inputData();
	myList.push_back(pf);

	// go get a Staff
	pa = new Staff();
	pa->inputData();
	myList.push_back(pa);

	cout << "==========================================" << endl;
	// print the items out
	for (std::vector<Person *>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		Person *tp = *it;
		tp->printData();
	}

	// program ending.. now delete the items
	for (std::vector<Person *>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		Person *tp = *it;
		delete tp;
	}

  return 0;
}
