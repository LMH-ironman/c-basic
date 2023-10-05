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
    ListNode *reverseList(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        auto p = head, q = head->next;
        while (q)
        {
            auto o = q->next;
            q->next = p;
            p = q;
            q = o;
        }
        head->next = NULL;

        return p;
    }
};