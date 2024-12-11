class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp1;
        multimap<int, char, greater<int>> mp2;
        string ans = "";

        for(char c : s)
            mp1[c]++;
        
        for(auto pair : mp1) {
            mp2.insert({pair.second, pair.first});
        }
        
        for(auto pair : mp2) {
            ans+= string(pair.first, pair.second);
        }
        return ans;
        
    }
};
