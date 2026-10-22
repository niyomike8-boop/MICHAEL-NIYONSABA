# Chained (Multilevel) Inheritance in C++

## 1. Project Description

This project demonstrates **chained inheritance (multilevel inheritance)** in C++ using a real-world example involving a person, a student, and an engineering student.

Multilevel inheritance occurs when a class inherits from another derived class, creating a chain of inheritance.

In this project, three classes are arranged in the following inheritance hierarchy:

```text
Person
   |
   v
Student
   |
   v
EngineeringStudent
```

The `Student` class inherits from `Person`, while the `EngineeringStudent` class inherits from `Student`.

Consequently, `EngineeringStudent` can access its own members and accessible inherited members from both `Student` and `Person`.

## 2. Objectives

The objectives of this project are to:

* Demonstrate multilevel inheritance in C++.
* Define at least three classes arranged in an inheritance chain.
* Implement appropriate data members and member functions in each class.
* Demonstrate how a derived class inherits members from its parent class.
* Create objects and access inherited members.
* Demonstrate the use of locally defined members.
* Explain inheritance using a class hierarchy illustration.

## 3. Technologies Used

* **Programming Language:** C++
* **Compiler:** GCC/G++
* **Code Editor:** Visual Studio Code
* **Version Control:** Git and GitHub (optional)

## 4. Class Structure

### A. Person Class

The `Person` class is the base class.

**Data members:**

* `name` — stores the person's name.
* `age` — stores the person's age.

**Member functions:**

* `setPersonDetails()` — assigns personal information.
* `displayPersonDetails()` — displays personal information.
* `introduce()` — displays a general introduction.

### B. Student Class

The `Student` class publicly inherits from `Person`.

**Data members:**

* `studentID` — stores the student's identification number.
* `course` — stores the student's course.

**Member functions:**

* `setStudentDetails()` — assigns student information.
* `displayStudentDetails()` — displays student information.
* `study()` — displays a message about studying.

### C. EngineeringStudent Class

The `EngineeringStudent` class publicly inherits from `Student`.

**Data members:**

* `specialization` — stores the engineering specialization.
* `yearOfStudy` — stores the current year of study.

**Member functions:**

* `setEngineeringDetails()` — assigns engineering-specific information.
* `displayEngineeringDetails()` — displays engineering information.
* `buildProject()` — displays a message about an engineering project.

## 5. Inheritance Hierarchy

```text
        +----------------------+
        |        Person        |
        +----------------------+
        | name                 |
        | age                  |
        +----------------------+
        | introduce()          |
        | displayPersonDetails()|
        +----------------------+
                   |
                   | public inheritance
                   v
        +----------------------+
        |       Student        |
        +----------------------+
        | studentID            |
        | course               |
        +----------------------+
        | study()              |
        | displayStudentDetails()|
        +----------------------+
                   |
                   | public inheritance
                   v
        +----------------------+
        | EngineeringStudent   |
        +----------------------+
        | specialization       |
        | yearOfStudy          |
        +----------------------+
        | buildProject()       |
        | displayEngineeringDetails()|
        +----------------------+
```

**Note:** The diagram shows the main members of each class. The complete program also includes functions for assigning data to each class's members.

## 6. How the Program Works

1. The program defines the `Person` base class.
2. The `Student` class inherits accessible members from `Person`.
3. The `EngineeringStudent` class inherits accessible members from `Student` and indirectly from `Person`.
4. An object named `student1` is created from `EngineeringStudent`.
5. The program assigns personal, student, and engineering information to the object.
6. The object calls inherited functions from `Person` and `Student`.
7. The object calls locally defined functions from `EngineeringStudent`.
8. The program displays the information on the terminal.

This demonstrates how a single object of the final derived class can use members from multiple levels of an inheritance hierarchy.

## 7. Sample Output

```text
===== ENGINEERING STUDENT DETAILS =====

--- Personal Information ---
Name: Michael
Age: 22
I am a person.

--- Student Information ---
Student ID: EE2026/001
Course: Electrical Engineering
The student is studying.

--- Engineering Information ---
Specialization: Electronics
Year of Study: 2
The engineering student is working on an electrical engineering project.
```

The displayed information is based on the sample values supplied in the program.

## 8. Requirements

To compile and run this project, you need:

* A computer with Windows, Linux, or macOS.
* A C++ compiler such as GCC/G++.
* A text editor or IDE, such as Visual Studio Code.

## 9. Compilation and Execution

### Step 1: Open the project folder

Open the folder containing `chained_inheritance.cpp` in Visual Studio Code.

### Step 2: Open the terminal

Select **Terminal → New Terminal**.

### Step 3: Compile the program

Run the following command:

```bash
g++ chained_inheritance.cpp -o chained_inheritance
```

### Step 4: Execute the program

**Windows PowerShell:**

```powershell
.\chained_inheritance.exe
```

**Linux or macOS:**

```bash
./chained_inheritance
```

If compilation succeeds, the program will display the engineering student's details.

## 10. Key Concepts Demonstrated

| Concept                | Description                                                                                     |
| ---------------------- | ----------------------------------------------------------------------------------------------- |
| Class                  | A blueprint for creating objects.                                                               |
| Object                 | An instance of a class.                                                                         |
| Inheritance            | A mechanism through which a class acquires accessible members from another class.               |
| Base class             | A class whose members are inherited by another class.                                           |
| Derived class          | A class that inherits from another class.                                                       |
| Multilevel inheritance | An inheritance structure involving multiple levels of classes.                                  |
| Data members           | Variables declared inside a class.                                                              |
| Member functions       | Functions declared inside a class.                                                              |
| Public inheritance     | An inheritance mode that preserves public accessibility of inherited public members.            |
| Protected members      | Members accessible within their class and derived classes, subject to inheritance access rules. |

## 11. Advantages of Multilevel Inheritance

* **Code reusability:** Common functionality can be defined in a base class and reused by derived classes.
* **Reduced duplication:** Shared data and functions do not need to be reimplemented in every class.
* **Logical organisation:** Related classes can be arranged in a meaningful hierarchy.
* **Extensibility:** Additional derived classes can introduce specialised functionality.

## 12. Conclusion

This project demonstrates chained inheritance in C++ using the relationship between `Person`, `Student`, and `EngineeringStudent`.

The implementation shows how inheritance creates a hierarchy in which a derived class can use accessible members from its parent classes while introducing its own data members and member functions.

The program satisfies the main requirements of the assignment by defining three related classes, creating an object, demonstrating inherited and locally defined members, and illustrating the inheritance hierarchy.

---

**Project:** Chained (Multilevel) Inheritance in C++
**Source File:** `chained_inheritance.cpp`
**Documentation:** `README.md`
