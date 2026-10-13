#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:

    // Parameterized Constructor
    Book(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }

    // Copy Constructor
    Book(const Book &obj)
    {
        title = obj.title;
        author = obj.author;
        price = obj.price;
    }

    // Display Book Details
    void display()
    {
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : Rs. " << price << endl;
    }

    // Destructor
    ~Book()
    {
        cout << "Book object destroyed." << endl;
    }
};

int main()
{
    // Creating original object
    Book original("C++ Programming", "Bjarne Stroustrup", 599);

    cout << "Original Book:" << endl;
    original.display();

    // Creating copied object
    Book copy(original);

    cout << "\nCopied Book:" << endl;
    copy.display();

    return 0;
} #include <iostream>
using namespace std;

class Student
{
    int rollNo;
    static int count;

public:
    Student(int r)
    {
        rollNo = r;
        count++;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
    }

    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1(101);
    Student s2(102);
    Student s3(103);

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}