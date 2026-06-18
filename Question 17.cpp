#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // A power of 2 minus 1 bitwise ANDed with itself equals 0 (e.g., 8 & 7 -> 1000 & 0111 = 0000)
    if (num > 0 && (num & (num - 1)) == 0) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is not a power of 2." << endl;
    }

    return 0;
}
