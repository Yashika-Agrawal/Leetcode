//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    vector<long long> previous(long long a[], int n)
    {
        vector<long long> ans;
        stack<long long>st;
        st.push(-1);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && a[st.top()]>=a[i])
            {
                st.pop();
            }
            long long ps=(st.empty())?(-1):(st.top());
            ans.push_back(ps);
            st.push(i);
        }
        return ans;
    }
    vector<long long> next(long long a[], int n)
    {
        vector<long long> ans;
        stack<long long>st;
        st.push(-1);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && a[st.top()]>=a[i])
            {
                st.pop();
            }
            long long ps=(st.empty())?(-1):(st.top());
            ans.push_back(ps);
            st.push(i);
        }
         reverse(ans.begin(),ans.end());
        return ans;
    }
    long long getMaxArea(long long a[], int n)
    {
       long long maxans=0; //initialize maxans area;
       vector<long long> ps=previous(a,n);
       vector<long long> ns=next(a,n);
       for(int i=0;i<n;i++)
       {
           if(ns[i]==-1)
           {
               ns[i]=n;
           }
           long long curr=(ns[i]-ps[i]-1)*a[i]; // width
           maxans=max(maxans,curr);
       }
       return maxans;
       
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends