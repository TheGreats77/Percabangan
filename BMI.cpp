#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "=== BMI Calculator ===" << endl;
    cout << "Weight (kg): ";
    cin >> weight;
    cout << "Height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "\nResult:" << endl;
    cout << "- BMI: " << bmi << endl;

    if (bmi < 18.5)
        cout << "- You are 'Underweight'" << endl;
    else if (bmi >= 18.5 && bmi <= 22.99)
        cout << "- You are 'Normal'" << endl;
    else if (bmi >= 23 && bmi <= 24.99)
        cout << "- You are 'Overweight'" << endl;
    else
        cout << "- You are 'Obesity'" << endl;

    system("pause");
    return 0;
}
