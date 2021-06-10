/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 */

// @lc code=start
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummyHead = new ListNode(0, head);
        ListNode *prevous = dummyHead;
        ListNode *current = head;
        while (current != nullptr) {
            if (current->val == val) {
                prevous->next = current->next;
            } else {
                prevous = current;
            }
            current = current->next;
        }
        return dummyHead->next;
    }
};
// @lc code=end

