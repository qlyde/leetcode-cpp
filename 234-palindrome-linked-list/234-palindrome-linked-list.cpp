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
    bool isPalindrome(ListNode* head) {
        vector<int> lst;
        for (ListNode* n = head; n; n = n->next) lst.push_back(n->val);

        for (int l = 0, r = lst.size() - 1; l < r; ++l, --r) {
            if (lst[l] != lst[r]) return false;
        }

        return true;
    }
};

