//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> temp;
        int j = 0;
        for(int i = 0; i<n; i++){
            if(arr[i]>=0){
                //store positive elements at the left of array
                arr[j]=arr[i];
                j++;
            }
            else{
                 //store negative elements in vector 
                temp.push_back(arr[i]);
            }
        }
        
        int last = n-1;
        //copy elements of vector to array from back
        while(!temp.empty()){
            arr[last]=temp.back();
            last--;
            temp.pop_back();
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends