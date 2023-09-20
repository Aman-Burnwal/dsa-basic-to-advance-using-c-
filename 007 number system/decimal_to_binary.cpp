#include <iostream>
#include <cmath>

int decimalToBinary(int num) {

    int i = 0;
    int rem = 0;
    int binary = 0;

    while(num > 0) {

        rem = num % 2;

        binary += rem*pow(10, i++);
        num /= 2;
        
    }
    return binary;
}

int main() {
    int number;
    int binary;
    std::cout << "Enter your decimal number here" << std::endl;
    std::cin >> number;
    binary = decimalToBinary(number);

    std::cout << binary << std:: endl;




}