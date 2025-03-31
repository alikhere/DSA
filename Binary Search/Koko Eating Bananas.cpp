class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1,min;
        int u = *max_element(piles.begin(), piles.end());
        while(l <= u) {
            int k = l + (u-l)/2;
            long sum = 0;
            for(int i = 0; i < piles.size(); i++)
                sum+= piles[i] % k == 0 ? piles[i] / k : piles[i] /k + 1;
            if(sum > h)
                l = k + 1;
            else {
                min = k;
                u = k -1;
            }    
        }
        return min;   
    }
};
