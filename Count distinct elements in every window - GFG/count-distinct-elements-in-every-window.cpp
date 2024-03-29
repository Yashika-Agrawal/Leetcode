//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {
        vector<int> ans;
        unordered_map<int,int>m;
        for(int i=0;i<k;i++)
        {
            m[a[i]]++;
        }
        ans.push_back(m.size());
        for(int i=k;i<n;i++)
        {
            m[a[i-k]]--;
            if(m[a[i-k]]==0)
            {
                m.erase(a[i-k]);
            }
            m[a[i]]++;
            ans.push_back(m.size());
        }
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends