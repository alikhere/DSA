class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        int l = 0;
        int r = n1-1;
        
        while(r < n2) {
            int hash[256] = {0};
            for(auto c :  s1)
            hash[c]++;
            int i = l;
            while(i <= r) {
                if(hash[s2[i]] < 1)
                    break;
                hash[s2[i]]--;
                i++;
            }
            if(i == r+1)
            return true;
            r++;
            l++;
        }
        return false;
    }
};
