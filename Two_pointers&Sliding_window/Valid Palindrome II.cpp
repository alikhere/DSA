class Solution {
public:
    bool IsPalind(const string& s1) {
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        return s1 == s2;
    }

    bool validPalindrome(string s) {
        int j = s.size() - 1;
        int i = 0;

        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                // Check by removing either the left or the right character
                // Remove s[i] or s[j] and check if the remaining string is a palindrome
                return IsPalind(s.substr(i + 1, j - i)) || IsPalind(s.substr(i, j - i));
            }
        }
        return true;  // The string is already a palindrome
    }
};
