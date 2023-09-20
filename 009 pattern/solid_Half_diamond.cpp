#include <iostream>

using namespace std;


void diamond(int n) {

    // for (int i = 1; i <= n; i++) {

    //     for (int j = 1; j <= i; j++) {

    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i < n; i++) {
    //     for (int j = 1; j <= n - i; j++) {

    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < 2 * n; i++) {
        int cond = i;

        if(i >  n) {
            cond = n -  (i % n);
        }

        for (int j = 0; j < cond; j++) {

            cout << "*";
        }
        cout << endl;
    }
}

int main() {

    int n;
    cin >> n;
    diamond(n);
    return 0;
}