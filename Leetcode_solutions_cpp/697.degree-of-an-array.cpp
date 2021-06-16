/*
 * @lc app=leetcode id=697 lang=cpp
 *
 * [697] Degree of an Array
 */

// @lc code=start
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        // 先找到出现次数最多的元素
        unordered_map<int, vector<int>> mp; //每一个数映射到一个长度为 33 的数组，数组中的三个元素分别代表这个数出现的次数、这个数在原数组中第一次出现的位置和这个数在原数组中最后一次出现的位置
        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(nums[i])) {
                mp[nums[i]][0]++;
                mp[nums[i]][2] = i;
            } else {
                mp[nums[i]] = {1, i, i};
            }
        }
        
        // 确定最小array
        int maxNum = 0, minLen = 0;
        for (auto& [_, vec]:mp) {
            if (maxNum < vec[0]) {
                maxNum = vec[0];
                minLen = vec[2] - vec[1] + 1;
            } else if (maxNum == vec[0]){
                if (minLen > vec[2] - vec[1] + 1) {
                    minLen = minLen = vec[2] - vec[1] + 1;
                }
            }
        }
        
        // 确定最小array
        return minLen;
    }
};
// @lc code=end

