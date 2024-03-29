//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            a[i] = 1;
        } else if (a[i] == 1) {
            a[i] = -1;
            count++;
        }
    }
    
    int curr = a[0], maxi = a[0];
    for (int i = 1; i < n; i++) {
        curr = max(a[i], curr + a[i]);
        maxi = max(maxi, curr);
    }
    
    return max(maxi,0) + count;
}
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends