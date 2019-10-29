### Assignment 4



A point in the x-y plane is represented by its x-coordinate and y-coordinate. Design a class, pointType, that can store and process a point in the x-y plane. You should then perform operations on the point, such as setting the coordinates of the point, printing the coordinates of the point, returning the x-coordinate, and returning the y-coordinate.



Every circle has a center and a radius. Given the radius, we can determine the circle’s area and circumference. Given the center, we can determine its position in the x-y plane. The center of the circle is a point in the x-y plane. Design a class, circleType, that can store the radius and center of the circle. Because the center is a point in the x-y plane and you designed the class to capture the properties of a point, in addition to the radius member, create a member of type class pointType. You should be able to perform the usual operations on the circle, such as setting the radius, printing the radius, calculating and printing the area and circumference, and carrying out the usual operations on the center.



Every cylinder has a base and height, wherein the base is a circle. Design a class, cylinderType, that can capture the properties of a cylinder and perform the usual operations on the cylinder. Derive this class from the class circleType. Some of the operations that can be performed on a cylinder are as follows: calculate and print the volume, calculate and print the surface area, set the height, set the radius of the base, and set the center of the base.



Write a main program which demonstrates all functionality in every class. Make sure to create putData() and getData() function to the user can enter in and print out information about each object.



Also create a Class/Inheritance Diagram which shows your design. An example of how your diagram should look is seen in Chapter 13, Figure 14.



Each class should have its own source file and header file; main.cpp, pointType.cpp, pointType.h, circleType.cpp, circleType.h, etc. Build all these source files and headers in a single Visual Studio project to make an executable
