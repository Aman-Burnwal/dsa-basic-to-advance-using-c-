#include <iostream>
using namespace std;


    int reverse(int x)
    {
        long reverse_num = 0;
        int sign = 1;

        if(x <= INT_MIN)
            return 0;

        if (x < 0)
        {
            sign = -1;
            x = -x;
        }

        while (x > 0)
        {
            if(reverse_num > INT_MAX / 10) return 0;
            int reminder = x % 10;
            reverse_num *= 10;
            reverse_num += reminder;
            x /= 10;
        }

        
        return reverse_num * sign;
    }

int main() {

    int n;
    cin >> n;
    cout << reverse(n);

    return 0;
}

