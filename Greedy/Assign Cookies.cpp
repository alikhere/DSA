class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int count = 0;
        int ptr1 = 0; // pointer for s
        int ptr2 = 0; // pointer for g
        while(ptr1<s.size() && ptr2<g.size()){
            if(s[ptr1]>=g[ptr2]){
                count++;
                ptr1++; ptr2++;
            }
            else 
                ptr1++;

        }
        return count;
        
    }
};
