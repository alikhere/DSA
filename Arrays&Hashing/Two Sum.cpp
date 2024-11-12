class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s = nums.size();
        unordered_map<int, int> um;
        for(int i = 0; i < s; i++)
        {
            int second = target - nums[i];
            if(um.find(second) == um.end())
            {
                um.insert({nums[i], i});
            }
            else
            {
                return {i, um[second]};
            }
        }
        return {};
    }    
};
