class Solution {
public:
    int removeDuplicates(vector<int>& a) {
       int i=0,j=1,k=0;
       while(j<a.size())
       {
        if(a[i]==a[j])
        {
            j++;
        }
        else{
           i++;
           a[i]=a[j];
           j++;
        }
       }
       return i+1;
    }
};