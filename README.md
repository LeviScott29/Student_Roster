# Class Roster Management System (C++)

A C++ application that manages a roster of students, including parsing student data, validating email addresses, calculating course completion averages, and organizing students by degree program.

This project demonstrates core **object-oriented programming principles in C++**, including:

- Classes and encapsulation
- Dynamic memory usage with pointers
- Enumerations
- Vector-based data structures
- Input parsing
- Data validation
- Basic algorithmic processing

The application was built as part of coursework for **C867 – Scripting and Programming Applications**.

---

# Features

- Add and store student records
- Parse raw student data into objects
- Print the full class roster
- Validate and report invalid email addresses
- Calculate average days in courses per student
- Filter students by degree program
- Remove students from the roster
- Demonstrates class relationships and object management

---

# Project Structure
class-final/
│
├── main.cpp # Program entry point
├── student.h # Student class declaration
├── student.cpp # Student class implementation
├── roster.h # Roster class declaration
├── roster.cpp # Roster class implementation
├── degree.h # Degree program enum definition
└── README.md # Project documentation

---

# Program Overview

## Student Class

Represents an individual student with attributes such as:

- Student ID
- First name
- Last name
- Email address
- Age
- Days to complete courses (array of 3 integers)
- Degree program

Responsibilities:

- Store student data
- Provide getter and setter functions
- Print formatted student information

---

## Roster Class

Manages a collection of `Student` objects using a `vector<Student*>`.

Responsibilities:

- Add students to the roster
- Parse student data from raw strings
- Print all students
- Remove students by ID
- Validate email addresses
- Compute average days in course
- Filter students by degree program

---

## DegreeProgram Enum

Defines possible degree types:

SECURITY
NETWORK
SOFTWARE


Used to categorize students and filter results.

---

# Program Workflow

When the program runs:

1. Displays course and author information
2. Loads predefined student data
3. Prints the full roster
4. Identifies invalid email addresses
5. Calculates average course completion time
6. Prints students in the **Software** degree program
7. Demonstrates student removal functionality

Example section from execution:
StudentID: A1, Name: John Smith, Email: john@example.com, Age: 20
Days in Course: {30, 35, 40} Degree: SECURITY


---

# Example Output

The program prints:

- Full student roster
- Invalid emails
- Average days per student
- Students filtered by degree program
- Demonstration of removing a student

---

# Concepts Demonstrated

This project demonstrates several core C++ programming concepts:

- Object-oriented design
- Dynamic memory allocation
- Pointer usage
- Vectors and arrays
- String parsing
- Enumeration types
- Basic data validation
- Class collaboration

---

# Future Improvements

Possible enhancements:

- File-based student data input
- Improved email validation
- Unit testing
- Smart pointers instead of raw pointers
- CLI interface for adding/removing students
- Persistent storage (database or file)

---

# Author

Levi Scott  
