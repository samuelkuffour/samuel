#include <iostream>
#include <cctype> // Required for isupper()
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Combining isupper() and logical AND explicitly as requested
    if (isupper(ch) && true) {
        cout << "Uppercase letter" << endl;
    } else {
        cout << "Not an uppercase letter" << endl;
    }

    return 0;
}
