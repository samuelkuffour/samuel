#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if ((num % 2 != 0) && (num % 3 == 0)) {
        cout << "The number is both odd and divisible by 3." << endl;
    } else {
        cout << "The number does not meet both conditions." << endl;
    }

    return 0;
}
