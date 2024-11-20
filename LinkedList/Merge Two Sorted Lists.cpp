class Solution {
private:
ListNode *head;
public:
    void insert(int v) {
            ListNode *temp = new ListNode;
            temp->val = v;
            if(head == NULL) 
                head = temp;
            else {
                ListNode *t = head;
                while(t->next != NULL) {
                    t = t->next;
                }
                t->next = temp;
            }
        }
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *ans;
        if(l1 ==  NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        if(l1->val <= l2->val) {
            ans = l1;
            ans->next = mergeTwoLists(l1->next, l2);
        } else {
            ans = l2;
            ans->next = mergeTwoLists(l1, l2->next);
        }
        return ans;
	}
};	
