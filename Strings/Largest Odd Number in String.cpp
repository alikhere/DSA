class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int n = num.size();
        for(int i = n-1; i >= 0; i--) {
            int current = num[i] - '0';

            if(current % 2 != 0)
                return num.substr(0,i+1);
        }
        return ans;
    }
};
