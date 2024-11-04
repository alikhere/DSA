class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        int maxScore = 0;
        sort(tokens.begin(), tokens.end());
        int i = 0;
        int j = n-1;

        int score = 0;
        while(i <= j) {
            if(power >= tokens[i]) { // power gava ke score badha lo.
                power-=tokens[i];
                score++;
                i++;
                maxScore = max(maxScore,score);
            } else if(score >=1) {
                power+=tokens[j];
                score--;
                j--;
            } else {
                return maxScore;
            }
        }
        
        return maxScore;

    }
};
