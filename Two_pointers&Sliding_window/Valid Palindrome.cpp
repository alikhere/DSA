class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char c : s) {
            if(isalnum(c)) 
                str.push_back(tolower(c));
            
        }
        int l = str.length();
        for(int i = 0; i < l/2; i++) {
            if(str[i] != str[l-i-1])
                return false;
        }
        return true;
    }
};
