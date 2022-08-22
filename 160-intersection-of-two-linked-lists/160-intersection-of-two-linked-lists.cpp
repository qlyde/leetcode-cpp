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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *> v;
        for (ListNode *i = headA; i != NULL; i = i->next) v.insert(i);
        for (ListNode *i = headB; i != NULL; i = i->next) if (v.find(i) != v.end()) return i;
        return NULL;
    }
};

