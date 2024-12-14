//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
   static long calcCount(string s, int k) {
        // Using Sliding Window Approach
        int i = 0, j = 0; // Window start and end
        int n = s.length();
        vector<int> charFreq(26, 0); // Frequency of characters
        int dist_count = 0;         // Distinct character count
        long ans = 0;               // Result
        
        while (j < n) {
            // Increment frequency of current character
            charFreq[s[j] - 'a']++;
            if (charFreq[s[j] - 'a'] == 1) { // If it's a new distinct character
                dist_count++;
            }

            // Decrease window size if distinct count exceeds k
            while (dist_count > k) {
                charFreq[s[i] - 'a']--;
                if (charFreq[s[i] - 'a'] == 0) { // If character is completely removed
                    dist_count--;
                }
                i++;
            }

            // Calculate the count of substrings in the current window
            ans += (j - i + 1);
            j++;
        }

        return ans;
    }
    
    
    int countSubstr(string& s, int k) {
        // code here.
        return calcCount(s,k) - calcCount(s,k-1) ; 
    } 
};
// concept make a fn which cal. no of substring with atmost k dist char, 
//then finout no substrng with atmost k dist char - no of substrin with  atmost k-1 dist.char which give no of substrng with exact k dist.char
// always remembe if we have n length string then the no of substring will be n*(n+1) / 2;


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.countSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
