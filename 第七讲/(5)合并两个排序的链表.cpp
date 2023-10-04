/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *merge(ListNode *l1, ListNode *l2)
    {
        auto fakehead = new ListNode(-1), tail = fakehead;
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                tail = tail->next = l1;
                l1 = l1->next;
            }
            else
            {
                tail = tail->next = l2;
                l2 = l2->next;
            }
        }
        if (l1)
            tail->next = l1;
        if (l2)
            tail->next = l2;
        return fakehead->next;
    }
};