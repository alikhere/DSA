class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int l = m+n;
        int nums3[l];
        int j=0,k=0;
        double median;
        for(int i=0; i<l; i++)
        {
            if(k == n)
            {
                nums3[i] = nums1[j];
                j++;
                continue;
            }
            if(j == m)
            {
                nums3[i] = nums2[k];
                k++;
                continue;
            }
            
            if(nums1[j] < nums2[k] && j < m)
            {
                nums3[i] = nums1[j];
                j++;
            }
            else
            {
                if(k < n)
                {
                nums3[i] = nums2[k];
                k++;
                }
            }
        }
        if( l % 2)
        median = double(nums3[l/2]);
        else
        median = (double(nums3[l/2-1]+nums3[l/2]) / 2);
        return median;
        
    }
};
