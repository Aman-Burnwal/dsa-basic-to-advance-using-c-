
#include <cmath>
#include <iostream>

bool isbinary(int binary) {

    
}

int binaryToDecimal(int binary) {

    int decimal = 0;
    int rem = 0;
    int i = 0;

    while(binary > 0) {

        rem = binary % 10;

        decimal += rem * pow(2, i++);
        binary /= 10;
    }
    return decimal;
}

int main() {
    int binary;

    std::cout << "Enter the binary number" << std::endl;

    std::cin >> binary;

    int decimal = binaryToDecimal(binary);

    std::cout << "Number in decimal" << std::endl << decimal << std::endl;

    
}