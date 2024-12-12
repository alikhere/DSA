class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        stack<char> st;
        int i = 0;
        int maxi = INT_MIN;
        while(i<n){
            char c = s[i];
            if(c == '('){
                st.push(c);
            }
            int l = st.size();
            maxi = max(maxi,l);
            if(c==')'){
                st.pop();
            }
            i++;
        }
        return maxi;
    }
};
