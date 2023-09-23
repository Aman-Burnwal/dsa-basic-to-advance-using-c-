#include <iostream>

using namespace std;



void palidrome(int n) {

    for (int i = 0; i < n; i++) {

        // printing half number;
        int number = 1;
        for (int j = 1; j < n ; j++) {

            if(j < n - i)
                cout << " ";
            else
                cout << number++;
                
        }
        while(number > 0) {
            cout << number;
            number--;
        }
        cout << endl;
    }
}

int main()
{

    int n;

    cin >> n;
    palidrome(n);
    return 0;
}