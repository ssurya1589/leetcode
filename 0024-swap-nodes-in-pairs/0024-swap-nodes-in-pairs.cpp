
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* left = head;
        ListNode* right = head;
        ListNode* node=NULL;
        while (left!=NULL&&left->next!=nullptr)
        {
            right=left->next;
            left->next=right->next;
            right->next = left;
            if (node==nullptr)
            {
                head=right;
            }
            else
            {
                node->next=right;
            }
            node=left;
            left=left->next;
        }
        return head;
    }
};