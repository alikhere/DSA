class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        vector<int> answer(l, 0);  // Initialize the answer vector with size l and all values 1
        int count = 0;
        for(int i = 0; i < l; i++)
            if(nums[i] == 0)
                count++;
        if(count > 1) {
            return answer;
        }
        else {
            if(count > 0) {
                int prod = 1;
                for(int n : nums) {
                    if(n != 0)
                        prod*=n;
                }
                for(int i = 0; i < l; i++) {
                    if(nums[i] != 0)
                        answer[i] = 0;
                    else
                        answer[i] = prod;
                }
                return answer;

                        
            }
            else {
            int whole_prod = 1;
            for(int n : nums)
                whole_prod*=n;
            for(int i = 0; i < l; i++)
                answer[i] = whole_prod / nums[i];
            }
            return answer;
            
        }


    }
};
