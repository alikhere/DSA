class Solution {
public:
    int t[46];
  
    int solve(int n) {
        if(n <= 2)
            return n;
        
        if(t[n] != -1) //  dp memorization
            return t[n];
        
        return t[n] = solve(n-1) + solve(n-2);
    }

    int climbStairs(int n) {
        memset(t,-1,sizeof(t));
        return solve(n);
        
    }
};
