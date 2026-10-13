#include<iostream>
using namespace std;

class Rectangle
{
    private:
    float length, breadth;
    
    public:
    // Member function defined inside the class
    void getData()
    {
        cout<<"Enter Length: ";
        cin>> length;
        cout<<"Enter breadth: ";
        cin>> breadth;
    }
    // function declaration
    float area();
    float perimeter();
    
    void display();
};
// Member functions defined outside the class
float Rectangle::area()
{
    return length * breadth;
}
float Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
void Rectangle::display()
{
    cout<<"Area = "<<area()<<endl;
    cout<<"perimeter = "<<perimeter()<<endl;
}
int main()
{
    Rectangle r;
    
    r.getData();
    r.display();
    
    return 0;
}