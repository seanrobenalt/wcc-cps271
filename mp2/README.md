### Assignment 2

Make a Fraction class with two int members (numerator and denominator). Create the following member functions:


Create an Input function to allow the user to enter the numerator and denominator. Make sure to have exception or if condition to deal with a denominator of 0 (zero).
Create a Print function which will print out the Fraction in the form numerator/denominator … i.e. 2/3


- Empty constructor which initializes the Fraction zero
- A one-parameter constructor for just a numerator (int). This would make the Fraction represent a whole number.
- A one-parameter constructor with a double. This would make a Fraction by multiplying the double by 100000, then creating a numerator and denominator as the result. For example; PI, 3.14159, would be saved in a Fraction object as 314159/100000
- A two-parameter constructor with both numerator (int) and denominator (int). This would make a Fraction with both a numerator and denominator
- Add function taking two Fractions as parameters and updating the current object
- Subtract function taking two Fractions as parameters and updating the current object
- Multiply function taking two Fractions as parameters and updating the current object
- Divide function taking two Fractions as parameters and updating the current object


Make sure to use exception handling in the event there is ever a divide by zero or any other error condition that would cause the program to terminate unexpectedly.


In the main program, create a looping menu driven interface, which allows the user to enter in two Fractions using the Input() function and a mathematical operation. After the operation, print the Fraction result using the Print() function. The loop ends when the user enters Q or q to quit for the math operation.
