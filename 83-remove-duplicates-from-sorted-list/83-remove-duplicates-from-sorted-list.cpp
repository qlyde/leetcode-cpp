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
    ListNode* deleteDuplicates(ListNode* head) {
        for (auto i = head; i && i->next;) {
            if (i->val == i->next->val) {
                auto const d = i->next;
                i->next = i->next->next;
                delete d;
            } else {
                i = i->next;
            }
        }

        return head;
    }
};