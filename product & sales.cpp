#include<iostream>
#include<string>

using namespace std;

class Product {
private:
    string productName;
    double pricePerUnit;
    int monthlySales[3]; // Fixed array for 3 months of sales

public:
    // Method to accept input for the product
    void acceptDetails() {
        cout << "Enter Product Name: ";
        cin >> productName;
        cout << "Enter Price Per Unit: ";
        cin >> pricePerUnit;
        
        cout << "Enter sales for 3 months:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Month " << (i + 1) << ": ";
            cin >> monthlySales[i];
        }
    }

    // Method to calculate total quantity sold
    int getTotalQuantitySold() {
        int totalQty = 0;
        for (int i = 0; i < 3; i++) {
            totalQty += monthlySales[i];
        }
        return totalQty;
    }

    // Method to calculate total bill
    double getTotalBill() {
        return getTotalQuantitySold() * pricePerUnit;
    }

    // Method to display product details
    void displayDetails() {
        cout << "\n================ PRODUCT DETAILS ================\n";
        cout << "Product Name         : " << productName << endl;
        cout << "Price Per Unit       : Rs. " << pricePerUnit << endl;
        
        cout << "Monthly Sales        : ";
        for (int i = 0; i < 3; i++) {
            cout << monthlySales[i] << " ";
        }
        cout << endl;
        
        cout << "Total Quantity Sold  : " << getTotalQuantitySold() << endl;
        cout << "Total Bill           : Rs. " << getTotalBill() << endl;
        cout << "-------------------------------------------------\n";
    }
};

int main() {
    // Create exactly 1 product object
    Product p;

    // Call methods to accept and display data
    p.acceptDetails();
    p.displayDetails();

    return 0;
}