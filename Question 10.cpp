#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter first integer: ";
    cin >> n1;
    cout << "Enter second integer: ";
    cin >> n2;

    int larger = (n1 > n2) ? n1 : n2;

    cout << "The larger number is: " << larger << endl;
    return 0;
}
