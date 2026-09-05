class Solution {
public:
    void sortColors(vector<int>& a) {
        //int i=0, j=i+1,k=a.size()-1;
        int zero=0, one=0, two=0; int i=0;
        while(i<a.size())
        {
            if(a[i]==0)
            {
                zero++;
                
            }
            else if(a[i]==1)
            {
                one++;
            }
            else{
                two++;
            }
            i++;
        }
        for(int i=0;i<a.size();i++)
        {
            if(i<zero)
            {
                a[i]=0;
            }
            else if(i>=zero && i<zero+one)
            {
                a[i]=1;
            }
            else if(i>=one && i<zero+one+two){
                a[i]=2;
            }
        }
    }
};