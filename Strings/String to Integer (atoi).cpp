class Solution {
public:
    int myAtoi(string s) {
        int num = 0;
        int sign = 1;
        int i = 0;
        while (i < s.size() && s[i] == ' ')
            i++;

        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        for(; i < s.size(); i++) {
            if(isdigit(s[i])) {
                int digit = s[i] - '0';

                if(num > (INT_MAX - digit) / 10)
                    return sign == 1 ? INT_MAX : INT_MIN;
                num = num*10 + digit;
            } else break;
        } 

        return sign * num;
    }
};
