class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int currSum = 0;
        int maxSum = nums[i];
        while( i < n) {
            if(currSum < 0)
                currSum = 0;
            currSum+=nums[i];
            maxSum = max(maxSum, currSum);
            i++;
        }
        return maxSum;
    }
};
