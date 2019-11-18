Design an application that has 6 classes; MyDate, Person, Student, Employee, Faculty, Staff.

1. Person class has two derived classes named Student and Employee.
2. Faculty and Staff derived classes of Employee.
3. MyDate class contains the integer fields; year, month, and day.
4. Person has a name (string), birth date (MyDate), phone number (string), and email address (string).
5. Student has a grade status (freshman, sophomore, junior, or senior) this should be an enumerated type and a GPA (double).
6. Employee has a salary (long), and date hired (MyDate).
7. Faculty has office room # (int), tenure (bool) and office hours (unknown length list of myDate objects - dates they are available in their office).
8. Staff has a title (string).


Each of these classes should have a inputData() function to get its data from the user at the keyboard, and a printData() function to display its data.



Write a menu driven main program which allows the user to enter in information for a Student, Faculty and Staff.  Objects of type Person and Employee are not allowed therefore they must be pure virtual classes.



Finally, to demonstrate your knowledge of dynamic binding versus static binding, using either the List, Array or Vector container shown in Chapter 12, create an list/array/vector of pointers to Person which will allow you to dynamically create derived objects and store them. Once you put a handful of items in the list/array/vector, then loop thru it and print out the information for each object by using the printData function.
