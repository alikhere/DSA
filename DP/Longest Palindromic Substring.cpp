class Solution {
public:
    bool Check(string &str, int i, int j) {
        while(i < j) {
            if(str[i] != str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int max = 0;
        int start = 0;
        int n = s.length();
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(Check(s, i, j)) {
                    if(j - i + 1 > max) {
                        max = j - i + 1;
                        start = i;
                    }

                }
            }
        }
        return s.substr(start, max);
        
    }
};
