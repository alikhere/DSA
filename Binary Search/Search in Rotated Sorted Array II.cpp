class Solution {
public:
        int check(int l, int u, vector<int>& nums, int target) {
        int m;
        while(l <= u) {
            m = (l + u)/2;
            if(nums[m] == target)
                return true;
            else {
                if(target > nums[m])
                    l = m + 1;
                else
                    u = m-1;
            }
        }
        return false;

    }
    bool search(vector<int>& nums, int target) {
        int l = 0;
        int min = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < nums[i-1]) {
                min = i;
                break;
            }
        }
        int l1 = 0, r1 = min-1, l2 = min, r2 = nums.size()-1;
        bool ans = check(l1, r1, nums, target);
        if(ans)
            return ans;
        else {
                ans = check(l2, r2, nums, target);
                return ans;
        }
    }
    
};
