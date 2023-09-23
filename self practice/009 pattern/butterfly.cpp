#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int k;
        for(int j = 1; j <= n; j++) {

            k = i <= n / 2 ? i : n - i + 1;

            if(k >= j || n - k < j)
                cout << "*";
            

            else
                cout << " ";
        }
        
        cout << endl;
    }
}