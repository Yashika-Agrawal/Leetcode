//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{

    stack<int> s,s1;
    
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           if(s1.empty())
           {
               return -1;
           }
           return s1.top();
           
       }
       
       /*returns poped element from stack*/
       int pop() {
        if (s.empty()) {
            return -1; // or any appropriate value to indicate an empty stack
        }

        int popped = s.top();
        s.pop();

        if (popped == s1.top()) {
            s1.pop();
        }

        return popped;
    }

       /*push element x into the stack*/
       void push(int x){
           
           s.push(x);
           if(s1.empty() || x<=s1.top())
           {
               s1.push(x);
           }
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends