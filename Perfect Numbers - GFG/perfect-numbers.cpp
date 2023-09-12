//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long n) {
        long long sum=0;
        if(n==1) return 0;
        for(long long i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                sum += i;
                sum +=n/i;
            }
        }
        if(sum-n==n) return 1;
        else return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends