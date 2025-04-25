class Solution {
public:
    int t[1001][21];
    int solve(vector<int>& nums, int target, int currSum, int idx, int n) {
        if(idx >= n) {
            if(currSum == target)
                return 1;
            else
                return 0;
        }
        int add = solve(nums, target, currSum + nums[idx], idx+1, n); //when add + sign
        int subs = solve(nums, target, currSum - nums[idx], idx+1, n); // when add - sign
        
        return add + subs;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return solve(nums, target, 0, 0, n);
        
    }
};
