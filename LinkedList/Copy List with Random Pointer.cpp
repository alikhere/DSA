class Solution {
public:
    Node* copyRandomList(Node* headd) {
        if(headd == NULL)
            return headd;
        unordered_map <Node* , Node*> m;
        Node *t1 = headd;
        Node *head = new Node(t1->val);
        Node *temp = head;
        m[t1] = temp;

        while(t1->next != NULL) {
            temp->next = new Node(t1->next->val);
            t1 = t1->next;
            temp = temp->next;
            m[t1] = temp;
        }

        t1 = headd;
        temp = head;
        while(t1 != NULL) {
            if(t1->random == NULL)
                temp->random = NULL;
            else
                temp->random = m[t1->random];
            t1 = t1->next;
            temp = temp->next;
        }
    return head;
        
    }
};
