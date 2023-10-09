//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    long long first(vector<long long>&a, long long x)
   {
       long long ans=-1;
       long long s=0, e=a.size()-1;
       while(s<=e)
       {
          long long mid=(s+e)/2;
          if(a[mid]==x)
          {
              if(mid==0 || a[mid-1]!=a[mid])
              {
                  return mid;
              }
              e=mid-1;
          }
          else if(a[mid]<x)
          {
              s=mid+1;
          }
          else{
              e=mid-1;
          }
         
       }
       return ans;
   }
   long long last(vector<long long>&a, long long x)
   {
       long long ans=-1;
       long long s=0, e=a.size()-1;
       while(s<=e)
       {
          long long mid=(s+e)/2;
          if(x==a[mid])
          {
              if(mid==a.size()-1|| a[mid+1]!=a[mid])
              {
                  return mid;
              }
              s=mid+1;
          }
          else if(a[mid]<x)
          {
              s=mid+1;
          }
          else{
              e=mid-1;
          }
         
       }
       return ans;
   }
    pair<long,long> indexes(vector<long long> a, long long x)
    {
        pair<long, long> ans;
        ans.first=first(a,x);
        ans.second=last(a,x);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends