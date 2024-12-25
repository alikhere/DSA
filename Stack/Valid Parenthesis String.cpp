class Solution {
public:
    bool checkValidString(string s) {
        stack<int> s1; //it  store inx of open (
        stack<int> s2; //it sore idx of *
        int star = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                s1.push(i);
            } else if(s[i] == ')') {
                if(!s1.empty()) {
                    s1.pop();
                } else if(s1.empty() && !s2.empty()) {
                    s2.pop();
                } else return false;

            } else s2.push(i);
        }
        while(!s1.empty()) {
            if(!s2.empty() && s2.top() > s1.top()) {
                s1.pop();
                s2.pop();
            } else return false;
        }
        return s1.empty();
        
    }
};


/* using DP and memorization

class Solution {
public:
    
    int t[101][101];
    bool solve(int idx, int open, string& s, int n) {
        if(idx == n) {
            return open == 0;
        }
        
        if(t[idx][open] != -1) {
            return t[idx][open] == 1 ? true : false;
        }
        
        bool isValid = false;
        
        if(s[idx] == '*') {
            if(open > 0)
                isValid |= solve(idx+1, open-1, s, n); //Treating * as )
            
            isValid |= solve(idx+1, open+1, s, n); //Treating * as (
            
            isValid |= solve(idx+1, open, s, n);   //Treating * as ''
        } else if(s[idx] == '(') {
            isValid |= solve(idx+1, open+1, s, n);
        } else if(open > 0) {
            isValid |= solve(idx+1, open-1, s, n);
        }
        
        return t[idx][open] = isValid;
    }
    
    bool checkValidString(string s) {
        int n = s.length();
        memset(t, -1, sizeof(t));
        return solve(0, 0, s, n);
        
    }
};
*/
