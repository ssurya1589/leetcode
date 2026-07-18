/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* node=head;
        while(node!=nullptr&&node->next!=nullptr)
        {
            ListNode* temp=node->next;
            if (temp->val==node->val)
            {
                temp=temp->next;
                node->next=temp;
            }
            else{
            node=temp;}
        }
        return head;
    }
};