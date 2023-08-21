//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& m) {
        int ans=0;
       for(int i=0;i<m.size();i++)
       {
           for(int j=0;j<m[0].size();j++)
           {
               if(m[i][j]==1)
               {
                    int count=0;
                    if (j > 0 && m[i][j - 1] == 0) count++; // left
                    if (i > 0 && j > 0 && m[i - 1][j - 1] == 0) count++; // top left diagonal
                    if (i > 0 && m[i - 1][j] == 0) count++; // up
                    if (i > 0 && j + 1 < m[0].size() && m[i - 1][j + 1] == 0) count++; // top right diagonal
                    if (j + 1 < m[0].size() && m[i][j + 1] == 0) count++; // right
                    if (j > 0 && i + 1 < m.size() && m[i + 1][j - 1] == 0) count++; // bottom left
                    if (i + 1 < m.size() && m[i + 1][j] == 0) count++; // down
                    if (i + 1 < m.size() && j + 1 < m[0].size() && m[i + 1][j + 1] == 0) count++; // bottom right
                    if(count%2==0 && count!=0)
                    {
                       ans++;
                    }
               }
               
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends