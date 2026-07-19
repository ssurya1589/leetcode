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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* temp1=head;
        int c=0;
        while (temp1!=NULL&&temp1->next!=NULL)
        {
            c++;
            temp1=temp1->next;
        }
        c++;
        if (k>c&&c!=0)
        {
            k=k%c;
        }
        for (int i=0 ;i<k;i++)
        {
            ListNode* temp=head;
            while (temp!=NULL&&temp->next!=NULL&&temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            ListNode* node=temp;
            if(temp!=nullptr&&temp->next!=nullptr)
            {
            temp->next->next=head;
            head=temp->next;
            node->next=NULL;
            }
        }
        return head;
        
    }
};