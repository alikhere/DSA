class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(), Pi = 0 , Ni = 1; // +VE and -ve index
        vector<int> ans(n);

        for(int &x : nums){
            if(x > 0){
                ans[Pi] = x;
                Pi += 2;
            }
            else{
                ans[Ni] = x;
                Ni +=2;
            }
        }

        return ans;
        
    }
};
