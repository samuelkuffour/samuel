#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Function to convert binary string to decimal integer
int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') decimal += base;
        base *= 2;
    }
    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimalVal = binaryToDecimal(binary);

    // Using stream manipulators to handle hex and octal conversions seamlessly
    stringstream hexStream, octStream;
    hexStream << hex << uppercase << decimalVal;
    octStream << oct << decimalVal;

    cout << "\n--- Conversion Results ---" << endl;
    cout << "Decimal:     " << decimalVal << endl;
    cout << "Hexadecimal: " << hexStream.str() << endl;
    cout << "Octal:       " << octStream.str() << endl;

    return 0;
}
