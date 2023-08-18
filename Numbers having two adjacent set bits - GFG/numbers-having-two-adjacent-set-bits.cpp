//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string isAdjacentSetBits(long long int n) {
        string ans;
    int prev=n&1;
    while(n!=0)
    {
        n=n>>1;
        int curr=n&1;
        if(prev==1 && curr==1) return "Yes";
        prev=curr;
    }
    return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.isAdjacentSetBits(n) << endl;
    }
    return 0;
}

// } Driver Code Ends