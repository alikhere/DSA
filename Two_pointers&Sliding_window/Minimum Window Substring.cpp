class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        if(t.size() > n)
            return "";
        unordered_map<char, int> m;
        for(auto c : t)
            m[c]++;
        int count = t.size();
        int minlen = INT_MAX;
        int start = 0;
        int l = 0, r = 0;
        while(r < n) {
            if(m[s[r]] > 0)
                count--;
            m[s[r]]--;

            while(count == 0) {
                if(r-l < minlen) {
                    start = l;
                    minlen =  r-l+1;
                }
                m[s[l]]++;
                if(m[s[l]] > 0)
                    count++;
                l++;
            }
            r++;
        }
        if(minlen == INT_MAX)
            return "";
        return s.substr(start,minlen);
    }
};
