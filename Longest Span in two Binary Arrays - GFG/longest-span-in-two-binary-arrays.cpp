//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int longestCommonSum(bool a1[], bool a2[], int n) {
        int temp[n];
           for(int i=0;i<n;i++)
           {
               temp[i]=a1[i]-a2[i];
           }
           unordered_map<int,int>m;
           int p=0,res=0;
           for(int i=0;i<n;i++)
           {
               p=p+temp[i];
               if(p==0) res=i+1;
               if(m.find(p)==m.end())
               {
                   m.insert({p,i});
               }
               if(m.find(p-0)!=m.end())
               {
                   res=max(res,i-m[p-0]);
               }
           }
           return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends