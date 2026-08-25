class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        vector<int>ans;
        int n=a.size(); 
        int j = 0;

        while (j < n && a[j] < 0) {
            j++;
        }
        
        int i=j-1; 
        while(i>=0 && j<n)
        {
            if(abs(a[i])>=a[j])
            {
                ans.push_back(a[j]);
                j++; 

            }
            else{
                ans.push_back(a[i]);
                i--;
            }
        }
        if(i>=0)
        {
            while(i>=0)
            {
                ans.push_back(a[i]);
                i--;
            }
        }
        if(j<n)
        {
            while(j<n)
            {
                ans.push_back(a[j]);
                j++;
            }
        }
        for(int k=0;k<ans.size();k++)
        {
            ans[k]=ans[k]*ans[k];
        }
        return ans;
    }
};