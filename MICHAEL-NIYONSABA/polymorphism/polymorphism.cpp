#include <iostream>
using namespace std;

// Parent class
class Animal {
public:
    // Virtual member function
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }

    // Member function inherited by derived classes
    void display() {
        cout << "This is an animal." << endl;
    }

    // Virtual destructor for a polymorphic base class
    virtual ~Animal() {}
};

// First derived class
class Dog : public Animal {
public:
    // Override the virtual function
    void sound() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }

    // Function defined specifically in Dog
    void fetch() {
        cout << "The dog is fetching a ball." << endl;
    }
};

// Second derived class
class Cat : public Animal {
public:
    // Override the virtual function
    void sound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }

    // Function defined specifically in Cat
    void climb() {
        cout << "The cat is climbing a tree." << endl;
    }
};

int main() {
    // Create objects of the derived classes
    Dog dog;
    Cat cat;

    // Declare a pointer to the parent class
    Animal* ptr;

    cout << "===== RUNTIME POLYMORPHISM IN C++ =====" << endl;

    // Point to the Dog object
    cout << "\n--- Dog Object ---" << endl;
    ptr = &dog;
    ptr->sound();    // Calls Dog's overridden function
    ptr->display();  // Calls inherited Animal function
    dog.fetch();     // Calls Dog-specific function

    // Point to the Cat object
    cout << "\n--- Cat Object ---" << endl;
    ptr = &cat;
    ptr->sound();    // Calls Cat's overridden function
    ptr->display();  // Calls inherited Animal function
    cat.climb();     // Calls Cat-specific function

    // Demonstrate the base-class implementation
    cout << "\n--- Base Class Object ---" << endl;
    Animal animal;
    ptr = &animal;
    ptr->sound();

    cout << "\nPolymorphism demonstration completed." << endl;

    return 0;
}
