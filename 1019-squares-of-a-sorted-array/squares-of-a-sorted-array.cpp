class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        vector<int>ans;
        for(int i=0;i<a.size();i++)
        {
            ans.push_back(a[i]*a[i]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};