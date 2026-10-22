#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Member function to set personal information
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    // Member function to display personal information
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Locally defined member function
    void introduce() {
        cout << "I am a person." << endl;
    }
};

// Derived class inheriting from Person
class Student : public Person {
protected:
    string studentID;
    string course;

public:
    // Member function to set student information
    void setStudentDetails(string id, string c) {
        studentID = id;
        course = c;
    }

    // Member function to display student information
    void displayStudentDetails() {
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }

    // Locally defined member function
    void study() {
        cout << "The student is studying." << endl;
    }
};

// Derived class inheriting from Student
class EngineeringStudent : public Student {
private:
    string specialization;
    int yearOfStudy;

public:
    // Member function to set engineering information
    void setEngineeringDetails(string s, int y) {
        specialization = s;
        yearOfStudy = y;
    }

    // Member function to display engineering information
    void displayEngineeringDetails() {
        cout << "Specialization: " << specialization << endl;
        cout << "Year of Study: " << yearOfStudy << endl;
    }

    // Locally defined member function
    void buildProject() {
        cout << "The engineering student is working "
             << "on an electrical engineering project." << endl;
    }
};

int main() {
    // Create an object of EngineeringStudent
    EngineeringStudent student1;

    // Set inherited Person information
    student1.setPersonDetails("Michael", 22);

    // Set Student information
    student1.setStudentDetails("EE2026/001", "Electrical Engineering");

    // Set EngineeringStudent information
    student1.setEngineeringDetails("Electronics", 2);

    cout << "===== ENGINEERING STUDENT DETAILS =====" << endl;

    // Use inherited members from Person
    cout << "\n--- Personal Information ---" << endl;
    student1.displayPersonDetails();
    student1.introduce();

    // Use inherited members from Student
    cout << "\n--- Student Information ---" << endl;
    student1.displayStudentDetails();
    student1.study();

    // Use locally defined members from EngineeringStudent
    cout << "\n--- Engineering Information ---" << endl;
    student1.displayEngineeringDetails();
    student1.buildProject();

    return 0;
}