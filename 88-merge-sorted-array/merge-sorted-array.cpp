class Solution {
public:
    void merge(vector<int>& a, int n, vector<int>& b, int m) {
       int k=n+m-1;
       int i=n-1, j=m-1;
       while(i>=0 && j>=0)
       {
         if(a[i]>=b[j])
         {
            a[k]=a[i];
            k--; i--;
         }
         else if(a[i]<b[j])
         {
            a[k]=b[j];
            k--; j--;
         }
       }
       if(i>=0)
       {
        while(i>=0)
        {
            a[k]=a[i];
            i--; k--;
        }
       }
       if(j>=0)
       {
        while(j>=0)
        {
            a[k]=b[j];
            j--; k--;
        }
       }

    }
};