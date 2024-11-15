class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> um;
        for(string s :strs) {
            string word = s;
            sort(word.begin(), word.end());
            um[word].push_back(s);
        }
        for(auto x : um)
            result.push_back(x.second);
        return result;
    }
};
