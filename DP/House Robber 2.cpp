class Solution {
public:
    int t[101];

    int solve(int i, vector<int>& nums, int n) {
        if(i >= n)
            return 0;
        
        if(t[i] != -1)
            return t[i];
        int take = nums[i] + solve(i+2, nums, n); //steals ith house and moves to i+2 (because we can't steal adjacent)
        int skip = solve(i+1, nums, n); //skips this house, now we can move to adjacent next house
        
        return t[i]=max(take, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        
        if(n == 2)
            return max(nums[0], nums[1]);
        memset(t,-1,sizeof(t));
        int a = solve(0,nums,n-1);

        memset(t,-1,sizeof(t));
        int b = solve(1,nums,n);
        return max(a,b)
 
    }
};


