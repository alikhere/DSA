class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int l = m+n;
        int j=0,k=0,m1=0,m2=0;
        double median;
        for(int i=0; i<=l/2; i++)
        {
            m2 = m1;
            if(k == n)
            {
                m1 = nums1[j++];
                continue;
            }
            if(j == m)
            {
                m1 = nums2[k++];
                continue;
            }
            
            if(nums1[j] < nums2[k])
            m1 = nums1[j++];
            else
            m1 = nums2[k++];
        }
        if( l % 2)
        median = double(m1);
        else
        median = double(m1+m2) / 2;
        return median;
        
    }
};
