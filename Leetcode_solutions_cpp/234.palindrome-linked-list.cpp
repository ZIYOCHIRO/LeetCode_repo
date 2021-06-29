/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    bool isPalindrome(ListNode* head) {
        //将值复制到数组中后用双指针法
        vector<int> vals;
        while (head != nullptr) {
            vals.push_back(head->val);
            head = head->next;
        }
        for (int i = 0,j = (int)vals.size() - 1; i < j; i++,j--) {
            if (vals[i] != vals[j]) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

