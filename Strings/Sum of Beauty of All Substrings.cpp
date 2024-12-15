class Solution {
public:
    int ans = 0;
    
    int beautySum(string s) {
        map<char, int> mp;
        
        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
                mp[s[j]]++;
                int max_freq = INT_MIN;
                int min_freq = INT_MAX;
                
                for (auto it : mp) {
                    min_freq = min(min_freq, it.second);
                    max_freq = max(max_freq, it.second);
                }

                ans += max_freq - min_freq;
            }
            mp.clear();
        }

        return ans;
    }
};
