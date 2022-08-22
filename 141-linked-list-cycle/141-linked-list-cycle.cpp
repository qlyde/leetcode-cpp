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
            if (seen.find(n) != seen.end()) return true;
            seen.insert(n);
        }

        return false;
    }
};

