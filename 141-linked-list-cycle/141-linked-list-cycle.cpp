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
        unordered_set<ListNode *> seen;
        for (auto n = head; n != NULL; n = n->next) {
            seen.insert(n);
            if (seen.find(n->next) != seen.end()) return true;
        }

        return false;
    }
};