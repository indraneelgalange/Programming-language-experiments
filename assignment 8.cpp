#include <iostream>
#include <string>

using namespace std;

// Base class for Single Inheritance
class Person {
protected:
    string name;
    int age;

public:
    void getPersonDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class for Single Inheritance
class Student : public Person {
private:
    int rollNumber;
    float percentage;

public:
    void getStudentDetails() {
        getPersonDetails();
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void displayStudentDetails() {
        cout << "\n--- Student Details (Single Inheritance) ---" << endl;
        displayPersonDetails();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Base class for Multilevel Inheritance
class Vehicle {
public:
    void vehicleType() {
        cout << "This is a Vehicle." << endl;
    }
};

// Intermediate derived class for Multilevel Inheritance
class Car : public Vehicle {
public:
    void carType() {
        cout << "This vehicle is a Car." << endl;
    }
};

// Further derived class for Multilevel Inheritance
class ElectricCar : public Car {
public:
    void electricCarType() {
        cout << "This car is an Electric Car." << endl;
    }
};

int main() {
    // Demonstration of Single Inheritance (Person -> Student)[span_0](start_span)[span_0](end_span)
    cout << "=== Single Inheritance Demonstration ===" << endl;
    Student s;
    s.getStudentDetails();
    s.displayStudentDetails();

    cout << "\n=== Multilevel Inheritance Demonstration ===" << endl;
    // Demonstration of Multilevel Inheritance (Vehicle -> Car -> ElectricCar)[span_1](start_span)[span_1](end_span)
    ElectricCar myTesla;
    myTesla.vehicleType();
    myTesla.carType();
    myTesla.electricCarType();

    return 0;
}