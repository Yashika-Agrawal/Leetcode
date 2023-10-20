//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long a[], long long b[], int n, int m) 
        { 
            long long c[n+m];
            for(long long i=0;i<n+m;i++)
            {
                if(i<n)
                {
                    c[i]=a[i];
                }
                else{
                    c[i]=b[i-n];
                }
            }
            sort(c,c+n+m);
            for(long long i=0;i<n;i++)
            {
                a[i]=c[i];
            }
            for(long long i=0;i<m;i++)
            {
                b[i]=c[n+i];
            }
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends