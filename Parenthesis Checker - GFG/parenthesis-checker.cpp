//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool matching(char a, char b)
    {
        return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b== ']'));
    }
    bool ispar(string str)
    {
       stack <char> s;
       for( char x: str)
       {
           
           if(x=='(' || x=='{' || x=='[')
           {
               s.push(x);
           }
           
           else{
               if(s.empty())
              {
               return false;
              }
               if(matching(s.top(),x ))
               {
                   s.pop();
               }
               else{
                   return false;
               }
           }
       }
       if(s.empty())
       {
           return true;
       }
       else {return false;}
       
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends