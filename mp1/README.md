## CPS 271: Object Oriented Programming in C++

## Fall 2019



### Assignment 1

Write program with a main function that calls all the following functions defined below. In the main, allow the user to enter in the parameters needed for each function. In turn have the main receive the return value(s) from each function and print it out.

1. Raising a number n to a power p is the same as multiplying n by itself p times. Write a function called power() that takes a double value for n and an int value for p, and returns the result as a double value. Use a default argument of 2 for p, so that if this argument is omitted, the number n will be squared.

2. Write a function called hms_to_secs() that takes three int values—for hours, minutes, and seconds—as arguments, and returns the equivalent time in seconds (type long). In the main function, write logic to call this function repeatedly obtaining a time value in hours, minutes, and seconds from the user (format 12:59:59), calling the function, and displaying the value of seconds it returns. The loop ends when the user enters a negative time for hour.

3. Write a function called swap() that interchanges two int values passed to it by the calling program. (Note that this function swaps the values of the variables in the calling program, not those in the function.) You’ll need to decide how to pass the arguments.

---

Write a completely separate program that reads students’ names followed by their test scores from a data file. The program should read in the data till end of file is found (or the maximum students is reached) and then process the data as described here. The program should output each student’s name followed by the test scores and the relevant grade. It should also find and print the highest test score and the name of the students having the highest test score.


Student data should be stored in an array of structures. The structure should contain the following members; studentFName and studentLName of type string, testScore of type int, and grade of type char. Suppose that the class has 20 students. The array should be 20 elements long. Try to use exception handling in the event invalid data is found while reading the data file.

Your program must contain at least the following functions:

- A function to read the students’ data into the structure array from a data file
- A function to assign the relevant grade to each student.
- A function to find the highest test score.
- A function to print the names of the students having the highest test score.

Your program must output each student’s name in this form: last name followed by a comma, followed by a space, followed by the first name; the name must be left justified. Moreover, other than declaring the variables and opening the input and output files, the function main should only be a collection of function calls.

You create your test data text file but it should be no more than 20 rows of data which have 2 names and a test score.  It may look something like this:
```
Thomas            Baker               87

Bob                  Jones                99

Suzy                 Smith               76
```
… and so on …
