class Solution {//
public:
    int t[10001];
    bool solve(vector<int>& nums, int idx, int n) {
        if(idx >= n-1)
            return true;
        
        if(t[idx] != -1)
            return t[idx];

        if(nums[idx] >= n-idx)
            return t[idx] = true;

        for(int i = 1; i<=nums[idx]; i++) {
            if(solve(nums, idx+i, n))
                return t[idx] = true;
        }
        return t[idx] = false;
        
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        memset(t,-1,sizeof(t));
        return solve(nums, 0 , n);

        
    }
};

/*
//OPTIMAL Solution (O(n))
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReachable = 0;
        int n            = nums.size();
        
        for(int i = 0; i<n; i++) {
            if(i > maxReachable) {
                return false;
            }
            maxReachable = max(maxReachable, nums[i]+i);
        }
        
        return true;
    }
}
*/
