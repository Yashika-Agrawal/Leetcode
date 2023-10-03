//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName(long long int n)
 {
    std::string result = "";
    
    while (n > 0) {
        int remainder = (n - 1) % 26;  // Calculate remainder (0 to 25)
        char character = 'A' + remainder;  // Map to character ('A' to 'Z')
        result = character + result;  // Prepend character to result
        n = (n - 1) / 26;  // Update n
    }
    
    return result;
 }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends