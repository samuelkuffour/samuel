#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first integers: ";
    cin >> num1;

    cout << "Enter second integers: ";
    cin >> num2;

    cout << "Sum: " << (num1 + num2) << endl;
    cout << "Difference: " << (num1 - num2) << endl;
    cout << "Product: " << (num1 * num2) << endl;

    if (num2 != 0) {
        cout << "Quotient: " << (static_cast<double>(num1) / num2) << endl;
    } else {
        cout << "Quotient: Division by zero error!" << endl;
    }

    return 0;
}
