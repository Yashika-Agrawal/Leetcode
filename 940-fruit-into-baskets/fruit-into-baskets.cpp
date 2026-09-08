class Solution {
public:
    int totalFruit(vector<int>& s) {
        int low=0, high=0, n=s.size(), len=0, maxi=INT_MIN;
        unordered_map<int,int> f;
       
        while(high<n)
        {
            f[s[high]]++;
            if(f.size()<=2)
            {
                len=high-low+1;
                maxi=max(len,maxi);
            }
            while(f.size()>2)
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