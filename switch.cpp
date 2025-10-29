#include <iostream>
#include <cstdlib> // untuk system("cls") dan system("pause")
using namespace std;

int main() {
    cout << "=== Shape Area Calculator ===" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Circle" << endl;
    cout << "Choose a shape (1-3): ";

    int menuChoice;
    cin >> menuChoice;

    system("cls"); // membersihkan layar

    switch (menuChoice) {
        case 1: {
            double base, height;
            cout << "Base: ";
            cin >> base;
            cout << "Height: ";
            cin >> height;
            double area = 0.5 * base * height;
            cout << "Area: " << area << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Length: ";
            cin >> length;
            cout << "Width : ";
            cin >> width;
            double area = length * width;
            cout << "Area: " << area << endl;
            break;
        }
        case 3: {
            const double PI = 3.14159;
            double radius;
            cout << "Radius: ";
            cin >> radius;
            double area = PI * radius * radius;
            cout << "Area: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }

    system("pause");
    return 0;
}
