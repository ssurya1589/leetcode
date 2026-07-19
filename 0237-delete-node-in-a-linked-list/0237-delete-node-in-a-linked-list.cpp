/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        ListNode* temp1=node;
        while (temp!=nullptr&&temp->next!=nullptr)
        {
            temp->val=temp->next->val;
            temp=temp->next;
        }
        while (temp1!=nullptr&&temp1->next!=nullptr&&temp1->next->next!=nullptr)
        {
            temp1=temp1->next;
        }
        temp1->next=nullptr;
        
    }
};