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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return helper(l1, l2, 0);
    }

private:
    ListNode* helper(ListNode* l1, ListNode* l2, int carry) {
        if (!l1 && !l2) {
            if (carry) return new ListNode(carry);
            return nullptr;
        }

        int colsum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        ListNode* head = new ListNode(colsum % 10);
        head->next = helper(l1 ? l1->next : nullptr, l2 ? l2->next : nullptr, colsum / 10);
        return head;
    }
};