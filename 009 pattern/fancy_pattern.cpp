#include <iostream>

using namespace std;


void fancyPattern (int n) {

    int num = 9;
    

    for (int row = 1; row <= n; row++) {
        int k = 1;

        for (int col = 1; col <= 17; col++){

            if(col > 9 - row && col <= num) {
                if(k % 2 == 1)
                    cout << row;
                else
                    cout << "*";
                k++;
            }
                
            else
                cout << "*";
        }
        num ++;
        cout << endl;
    }
}


int main () {
    int n;
    cin >> n;
    fancyPattern(n);
    return 0;
}