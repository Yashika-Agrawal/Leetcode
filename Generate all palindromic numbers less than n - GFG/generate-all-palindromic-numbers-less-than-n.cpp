//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    bool check ( int n)
    {
        int x=n; int rev=0;
        while(x!=0)
        {
            int dig=x%10;
            rev=rev*10+dig;
            x=x/10;
        }
        if(rev==n) return 1;
        else return 0;
    }
    int palindromicNumbers(int n)
    {
       int count=0;
       for(int i=1;i<n;i++)
       {
           if(check(i))
           {
               count++;
           }
       }
        return count;
    }
   
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
      
        Solution ob;
        int ans  = ob.palindromicNumbers(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends