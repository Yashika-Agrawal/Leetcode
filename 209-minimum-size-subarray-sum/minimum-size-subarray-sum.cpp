class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int low=0, high=0, n=a.size(), len=0, sum=0, mini=INT_MAX;
        while(high<n)
        {
            sum=sum+a[high];
            while(sum>=target)
            {
                len=high-low+1;
                mini=min(len,mini);
                sum=sum-a[low];
                low++;
            }
            high++;
        }
        if(mini==INT_MAX)
        {
            return 0;
        }
        else return mini;
    }
};