//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int a[], int n, int x){
    //code
     map<int,int>mp;
   for(int i=0;i<n;i++)
   {
       int y=a[i]+x;
       int z=a[i]-x;
       if(mp.find(y)!=mp.end() || mp.find(z)!=mp.end())
       {
           return true;
       }
       mp[a[i]]++;
   }
   return false;
}