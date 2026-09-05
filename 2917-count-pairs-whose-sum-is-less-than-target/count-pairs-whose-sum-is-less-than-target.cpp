class Solution {
public:
    int countPairs(vector<int>& a, int target) {
        int count=0;
        int i=0, j=a.size()-1;
        sort(a.begin(), a.end());
        while(i<j)
        {
            int sum=a[i]+a[j];
            if(sum<target)
            {
                count=count+(j-i);
                i++;
            }
            else{
                j--;
            }
        }
        return count;
    }
};