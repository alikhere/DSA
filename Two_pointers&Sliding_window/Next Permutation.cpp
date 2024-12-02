class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int target_idx = -1;
        for(int i = n-1; i > 0; i--) {
            if(nums[i] >  nums[i-1]) {
                target_idx = i-1;
                
                for(int j = n-1; i >= target_idx+1; j--) {
                    if(nums[target_idx] < nums[j]) {
                        swap(nums[target_idx], nums[j]);
                        break;
                    }
                }  
                break;    
            }

        }
        reverse(nums.begin()+target_idx+1, nums.end());
        
    }
};
