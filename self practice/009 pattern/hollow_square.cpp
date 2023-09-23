#include <iostream>

// using std namespace;;
#define Author "Aman";


int hollow (int n) {

    for (int row = 0; row < n; row++) {

        for (int col = 0; col < n; col++) {

            if (row == 0 || row == n - 1 || col == 0 || col == n - 1)
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
    std::cout << "Enter square size in number " << std::endl;

    std::cin >> n;
    hollow(n);
}