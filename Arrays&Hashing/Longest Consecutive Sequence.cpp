class Solution {
int Maxi(int max, int count) {
    return(max > count ? max : count);
}
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> m;
        int count = 0;
        int max = 0;
        for(int x : nums)
            m[x]++;
        auto a = m.begin();
        int x = a->first;
        for(auto num : m) {
            if(num.first != x) {
                count = 0;
                x = num.first;
               
            }
            x++;
            count++;
            max = Maxi(max,count);
        }
        return max;

        
    }
};
