#include <iostream>
using namespace std;

int main() {
    int choice;
    float area;
    cout << "Menu:" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3clea. Area of Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice) {
        case 1: {
            float r;
            cout << "Enter radius: ";
            cin >> r;
            area = 3.14 * r * r;
            cout << "Area of circle: " << area << endl;
            break;
        }
        case 2: {
            float l, w;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> w;
            area = l * w;
            cout << "Area of rectangle: " << area << endl;
            break;
        }
        case 3: {
            float b, h;
            cout << "Enter base: ";
            cin >> b;
            cout << "Enter height: ";
            cin >> h;
            area = 0.5 * b * h;
            cout << "Area of triangle: " << area << endl;
            break;
        }
        case 4:
            cout << "Quitting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}