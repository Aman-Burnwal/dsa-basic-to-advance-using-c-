#include <iostream>
using namespace std;

void fancyPattern(int n) {

    int num = 1;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {
            cout << num++;
            if(j < i)
                cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {

        int num2 = num - (n - i);

        for (int j = 0; j < n - i; j++) {
            cout << num2++;
            if(j < n - i - 1)
                cout << "*";
        }
        cout << endl;
        num = num - (n - i);
    }
}

int main() {

    int n;
    cin >> n;
    fancyPattern(n);

    return 0;
}