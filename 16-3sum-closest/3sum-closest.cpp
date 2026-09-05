class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
        int sum=0;
        int n=a.size();
        int mini=INT_MAX;
        int sub=0, ans=0;
        sort(a.begin(), a.end());
        for(int i=0;i<n-2;i++)
        {
            int j=i+1, k=n-1;
            sum=a[i]+a[j]+a[k];
            while(j<k)
            {
                sum=a[i]+a[j]+a[k];
                sub=abs(target-sum);
                if(mini>sub)
                {
                    mini=sub;
                    ans=sum;
                }
                if(sum==target)
                {
                    return sum;
                }
                else if(sum<target)
                { 
                    j++;
                }
                else{
                     k--;
                }
            }
        }
        return ans;
    }
};