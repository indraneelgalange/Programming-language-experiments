#include<iostream>
using namespace std;

class Employee
{
    private:
    string name;
    float salary, bonus, totalSalary;
    
    public:
    //default constructor
    Employee()
    {
        name = "Unknown: ";
        salary = 0;
        bonus = 0;
        totalSalary = 0;
    }
    // Paramaterized constructor
    Employee(string n, float s, float b)
    {
        name = n;
        salary = s;
        bonus = b;
        totalSalary = salary + bonus;
    }
    void display()
    {
        cout<< "Employee Name: "<<name<<endl;
        cout<< "Basic Salary: "<<salary<<endl;
        cout<< "Bonus: "<<bonus<<endl;
        cout<< "Total Salary: "<<totalSalary<<endl;
    }
};
int main()
{
    // using default constructor
    Employee e1;
    cout<< "Default Constructor: "<<endl;
    e1.display();
    
    cout<< endl;
    
    //using parameterized Constructor
    Employee e2("Rahul",30000, 5000);
    cout<< "Parameterized Constructor: "<<endl;
    e2.display();
    
    return 0;
}