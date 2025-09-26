Experiment: Classes and Objects in C++

🎯 Aim

To study and implement classes and objects in C++ for solving real-world problems such as:

Representing cars with attributes.

Calculating area of a rectangle.

Storing and displaying student details.

Calculating volume of cube and cuboid.

📜 Introduction

A class in C++ is a user-defined data type that binds data (attributes) and functions (methods) together.
Objects are instances of a class, representing real-world entities such as cars, students, or geometric shapes.

Using classes helps in organizing code, improving reusability, and applying object-oriented programming (OOP) concepts like encapsulation and abstraction.

🛠️ Programs Implemented

1️⃣ Car Class

Description:
Represents details of a car such as brand, model, type, year, and top speed.

Logic:

Define a Car class with attributes.

Create objects (c1, c2) and assign values.

Display details using cout.

Algorithm:

Define class with attributes.

Create object of Car.

Assign values.

Print details.

2️⃣ Rectangle Area Program

Description:

Takes length and width of a rectangle and calculates its area.

Logic:

Define a Rectangle class with attributes length, width.

Use method area() to compute area.

Input values from user and display result.

Algorithm:

Read length and width.

Compute area = length × width.

Display result.

3️⃣ Student Class

Description:

Stores and displays student information like name, branch, subjects, and occupations.

Logic:

Define a Student class with multiple string attributes.

Create two objects with different values.

Display stored details.

Algorithm:

Define class with string attributes.

Create objects s1, s2.

Assign values to attributes.

Display details using cout.

4️⃣ Cube Volume Program

Description:

Calculates the volume of a cube given its side length.

Logic:

Define a Cube class with private attributes.

Take side as input.

Method calculateVolume() computes side³.

Method output() displays result.

Algorithm:

Input side of cube.

Compute volume = side³.

Print volume.

5️⃣ Cuboid Volume Program

Description:

Calculates the volume of a cuboid using length, breadth, and height.

Logic:

Define a Cuboid class with attributes.

Take input values from user.

Method Volume() computes length × breadth × height.

Display result using Output().

Algorithm:

Input length, breadth, height.

Compute volume = l × b × h.

Print result.

📌 Summary

This experiment demonstrated:

How to define and use classes and objects in C++.

Use of methods inside classes for calculations.

Handling real-world examples like cars, students, and shapes.

Use of encapsulation (cube class with private data).

Application of basic OOP concepts in C++.

🖥️ Sample Output

Car Program:

Aston Martin  
DB 5  
1963-65  
British grand tourer (GT)  
233 km/h  
Ford  
Mustang  
1969  
Muscle Car  
255 km/h  


Rectangle Program:

Enter length: 56  
Enter width: 89  
Area of Rectangle: 4984  


Student Program:

ANKUSH JHA  
E&TC  
CGPA 10  
CEO of American Touristor  
Dacoit of Mumbai  
CGPA 10  
C++  
ABIR SETH  
E&TC  
CGPA 10  
CEO of Adidas  
King of Mumbai  
CGPA 10  
C++  


Cube Program:

Enter the side of Cube 5  
125  


Cuboid Program:

Enter the length : 5  
Enter the breadth : 6  
Enter the height : 7  
The volume of the given Cuboid is : 210  
