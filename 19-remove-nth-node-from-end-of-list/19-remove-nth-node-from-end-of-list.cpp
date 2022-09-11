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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode();
        dummy->next = head;

        int length = 0;
        for (ListNode* n = head; n; n = n->next) ++length;

        ListNode* t = dummy;
        for (int i = 0; i < length - n; ++i) t = t->next;

        ListNode* tmp = t->next;
        t->next = t->next->next;
        delete tmp;
        return dummy->next;
    }
};