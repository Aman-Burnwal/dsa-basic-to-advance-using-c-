#include <iostream>

#define Author "Aman";

int hollowPyramid(int n) {

    for (int row = 0; row < n; row++) {

        for (int col = 0; col < n - row; col++) {

            if(row == 0 || col == 0 || col == n - row -1)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }

    return 0;
}

int main() {

    int n;
    std::cout << "Enter pyramid size" << std::endl;
    std::cin >> n;

    // hollowPyramid(n);
}