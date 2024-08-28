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
    ListNode* deleteMiddle(ListNode* head) 
    {
        int l=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            l++;
        }
        temp=head;
        
        for(int i=0; i<floor(l/2.0)-1; i++)
        {
            temp=temp->next;
        }
        if(temp->next!=NULL) temp->next=temp->next->next;
        else head->next;
        return temp;
    }
};