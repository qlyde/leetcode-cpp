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
    bool hasCycle(ListNode *head) {
        if (!head) return false;

        auto f = head->next, s = head;
        while (f != s) {
            if (!f || !f->next) return false; // fast complete without lapping slow
            f = f->next->next;
            s = s->next;
        }

        return true;
    }
};
