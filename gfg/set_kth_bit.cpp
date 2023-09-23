// problem link
// ``` problem link is defined in the following
//     https: // practice.geeksforgeeks.org/problems/set-kth-bit3724/1

// ````

#include <iostream>
using namespace std;
class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        int num = 1 << K;

        return (N | num);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;

        Solution ob;
        int ans = ob.setKthBit(N, K);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends