/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    /*
     Input: nums = [9,6,4,2,3,5,7,0,1]
     Output: 8
     */
    
    
    
    /*哈希法
     int missingNumber(vector<int>& nums) {
     int n = (int)nums.size();
     unordered_set<int>temp;
     for (int val:nums) {
     if (!temp.count(val)) {
     temp.insert(val);
     }
     }
     for (int i = 0; i < n; i++) {
     if (!temp.count(i)) {
     return i;
     }
     }
     return -1;
     
     }
     
     */
    
    /*。异或（同为0，异为1）
     0 ^ n = n
     1 ^ n = !n
     */
    
    int missingNumber(vector<int>& nums) {
        int check = 0;
        int n = (int)nums.size();
        for (int val: nums) {
            check ^= val;
        }
        
        for (int i = 0; i <= n; i++) {
            check ^= i;
        }
        return check;
    }
};
// @lc code=end

