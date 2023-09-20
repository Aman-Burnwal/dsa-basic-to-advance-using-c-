#include <iostream>
using namespace std;


void pyramid(int n) {

    for (int i = 0; i < n; i++) {

        int k = 0;

        for (int j = 0; j < (2 * n - 1); j++) {

            if(j < n - i - 1)
                std::cout << n - i - 1;
            
            else if(k++ < 2 * i + 1)
                std::cout << "*";
            else
                break;
        }
        std::cout << std::endl;
    }
}

/*
            *
           ***
          *****
         *******
        *********


            *
           * *
          *   *
         *     *
        *********



*/

void hollowPyramid(int n) {
    cout << endl;
    for (int i = 0; i < n; i++) {

        int k = 0;

        for (int j = 0; j < (n * 2 - 1); j++) {
            if(j < n - i - 1)
                std::cout << " ";
            
            else if(k++ < 2 * i + 1 )
                if(k == 1 || k == 2 * i + 1 || i == n - 1)
                    std::cout << "*";
            else std:
                cout << " ";
        }
        cout << endl;
    }
}
int main() {

    std::cout << "Enter row number" << std::endl;
    int n;
    std::cin >> n;

    pyramid(n);
    hollowPyramid(n);
}