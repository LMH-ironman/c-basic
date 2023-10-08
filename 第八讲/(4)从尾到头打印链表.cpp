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
    vector<int> printListReversingly(ListNode *head)
    {
        vector<int> res;
        for (auto p = head; p; p = p->next)
            res.push_back(p->val);
        reverse(res.begin(), res.end());
        return res;
    }
};