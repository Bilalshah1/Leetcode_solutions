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
    ListNode* reverseList(ListNode* head) {
        vector<int> data;
        ListNode* temp=head;
        int i=0;
        while(temp!=NULL)
        {
            data.push_back(temp->val);
            temp=temp->next;
        }
        reverse(data.begin(),data.end());
        temp=head;
        while(temp!=NULL)
        {
            temp->val=data[i];
            temp=temp->next;
            i++;
        }
        temp=head;

        return temp;
    }
};