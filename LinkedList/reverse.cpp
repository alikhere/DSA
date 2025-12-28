class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1 = 0;
        int num2 = 0;
        int carry = 0;
        int sum = 0;
        int value;
        
        ListNode *head = NULL;
        ListNode *prev = NULL;

        while(l1 != NULL || l2 != NULL || carry != 0) {
            num1 = (l1 != nullptr) ? l1->val : 0;
            num2 = (l2 != nullptr) ? l2->val : 0;

            sum = num1 + num2 + carry;
            value = sum % 10;
            carry = sum / 10;

            ListNode  *temp = new ListNode(value);
            if(head == NULL) {
                head = temp;
                prev = head;
            } else {
                prev->next = temp;
                prev = temp;
            }

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }
        return head;
    }
};
