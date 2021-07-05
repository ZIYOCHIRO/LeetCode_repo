/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode *cur = head;
        while (cur != nullptr) {
            n++;
            cur = cur->next;
        }
        int k = 0;
        cur = head;
        while (k < n/2) {
            k++;
            cur = cur->next;
        }
        return cur;
    }
};
// @lc code=end

