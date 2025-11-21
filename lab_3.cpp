#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string item1, item2;
    int qty1, qty2;
    double price1, price2;

    // Inputs for item 1
    cout << "Enter Item 1 Name: ";
    getline(cin, item1);
    cout << "Enter Quantity: ";
    cin >> qty1;
    cout << "Enter Price: ";
    cin >> price1;
    cin.ignore(); // clear buffer

    // Inputs for item 2
    cout << "\nEnter Item 2 Name: ";
    getline(cin, item2);
    cout << "Enter Quantity: ";
    cin >> qty2;
    cout << "Enter Price: ";
    cin >> price2;

    double total1 = qty1 * price1;
    double total2 = qty2 * price2;

    // Output table
    cout << "\n--------------------------------------------------\n";
    cout << left << setw(12) << "Item"
         << setw(10) << "Quantity"
         << setw(10) << "Price"
         << "Total" << endl;
    cout << "--------------------------------------------------\n";

    cout << left << setw(12) << item1
         << setw(10) << qty1
         << setw(10) << fixed << setprecision(2) << price1
         << fixed << setprecision(2) << total1 << endl;

    cout << left << setw(12) << item2
         << setw(10) << qty2
         << setw(10) << fixed << setprecision(2) << price2
         << fixed << setprecision(2) << total2 << endl;

    cout << "--------------------------------------------------\n";

    return 0;
}