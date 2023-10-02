//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    void solve( stack<int>&s, int k,int count)
    {

        if(count==k) 
        {
            s.pop();
            return;
        }
        int temp=s.top();
        s.pop();
        solve(s,k,count+1);
        s.push(temp);
    }
    
    void deleteMid(stack<int>&s, int n)
    {
        if(n==0) return;
        if(n==1) return;
        int k=(n/2)+1;
        solve(s,k,1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends