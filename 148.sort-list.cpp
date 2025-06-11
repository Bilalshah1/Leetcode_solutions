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
class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *middle = findmiddle(head);
        ListNode *right = middle->next;
        middle->next = nullptr;
        ListNode *left = head;

        left = sortList(left);
        right = sortList(right);
        return mergelists(left, right);
    }
    ListNode *mergelists(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;
        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val > l2->val)
            {
                temp = l1;
                temp->next = l1;
                l1 = l1->next;
            }
            else
            {
                temp = l2;
                temp->next = l2;
                l2 = l2->next;
            }
        }
        if (l1)
            temp->next = l1;
        else
            temp->next = l2;

        return dummy;
    }
    ListNode *findmiddle(ListNode *head)
    {
        ListNode *tortoise = head;
        ListNode *hair = head;

        while (hair != nullptr && hair->next != nullptr)
        {
            tortoise = tortoise->next;
            hair = hair->next->next;
        }
        return tortoise;
    }
};