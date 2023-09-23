#include <iostream>
using namespace std;

bool iseven(int n) {
    return ((n & 1) == 0);
}

int main() {
    int n;
    cin >> n;

    if(iseven(n)) {
        cout<< "even"<< endl;
    }
    else {
        cout<< "odd"<< endl;
    }

}