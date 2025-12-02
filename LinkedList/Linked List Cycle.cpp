class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> m;
        while(head != NULL) {
            m[head]++;
            if(m[head] > 1)
                return true;
            head = head->next;
        }
        return false;

        
    }
};
