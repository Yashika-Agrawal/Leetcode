class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0, high=0, n=s.size(); unordered_map<char,int>f;
        int len=0;
        int maxi=0;
        while(high<n)
        {
            f[s[high]]++;
            len=high-low+1;
            if(f.size()==len)
            {
                maxi=max(len,maxi);
            }
            if(f.size()<len)
            {
                f[s[low]]--;
                if(f[s[low]]==0)
                {
                    f.erase(s[low]);
                }
                low++;
            }
            high++;
        }
        return maxi;
    }
};