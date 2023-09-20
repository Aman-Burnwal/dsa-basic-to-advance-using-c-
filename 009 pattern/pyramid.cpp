#include <iostream>

#define AUTHOR as "Banti kumar";


void pyramid_star(int n) {

    for (int row = 0; row < n; row++) {

        for (int col = 0; col <= row; col++)
            std::cout << "* ";
        std::cout << std::endl;
    }


}

void pyramid_asending_number(int n) {

    for (int row = 1; row <= n; row++) {

        for (int col = 1; col <= row; col++) {

            std::cout << col << " ";
        }
        std::cout << std::endl;
    }
}



int main() {

    int n;

    std::cout << "Enter the number" << std::endl;

    std::cin >> n;

    pyramid_star(n);
    pyramid_asending_number(n);

}