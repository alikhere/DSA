class Solution {
public:
    void sortColors(vector<int>& a) {
        int l=0,m=0,n = a.size(),h = n-1;
        while(m<=h){
        if(a[m]==0){
            swap(a[l],a[m]);
            l++;
            m++;
        }else if(a[m]==1){
            m++;
        }else{
            swap(a[m],a[h]);
            h--;
            }
        }
    }
};
