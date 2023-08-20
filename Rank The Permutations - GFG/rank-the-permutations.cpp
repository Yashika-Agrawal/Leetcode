//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    long long findRank(string s) {
       int n=s.size();
       int a[26]={0};
       for(int i=0;i<n;i++)
       {
           a[s[i]-'a']++;
       }
       //calculate factorial
       vector<long long> fact(n);
       fact[0]=1,fact[1]=1;
       for(int i=2;i<n;i++)
       {
           fact[i]=fact[i-1]*i;
       }
       long long res=1;
       for(int i=0;i<n;i++)
       {
           int count=0;
           for(int j=0;j<s[i]-'a';j++)
           {
               count+=a[j];
           }
           a[s[i]-'a']--;
           res=res+(count*fact[n-1-i]);
       }
       return res;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        Solution obj;
        long long ans = obj.findRank(s);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends