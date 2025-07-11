class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int,int> map;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            map[nums[i]]++;
            if(map[nums[i]] > n/3 && find(ans.begin(), ans.end(), nums[i]) == ans.end())
                ans.push_back(nums[i]);
        }
        return ans;
        
    }
};
