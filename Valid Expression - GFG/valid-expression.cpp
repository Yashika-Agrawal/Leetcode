//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends

bool matching (stack<int>& st, char c)
{
    if(st.empty())
    {
        return false;
    }
    return (
        (c==')' &&st.top()=='(')||
        (c=='}' && st.top() =='{')||
        (c==']' && st.top() == '[')
        );
}
bool valid(string s)
{
   stack<int> st;
   for(char c: s)
   {
       if(c=='(' || c=='{'|| c=='[')
       {
           st.push(c);
       }
       else{
           if (st.empty() || !matching(st, c)) 
                return false;
           st.pop();
          
       }
   }
   if(!st.empty())
   {
       return false;
   }
   return true;
}