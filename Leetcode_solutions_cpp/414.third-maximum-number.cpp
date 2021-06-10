/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //使用set容器，set能够存储键值相等的键值对，只需要值就能存储，且相同的值只能存一个。
        set<int> s(nums.begin(), nums.end());//将数组num中的所有元素作为集合b的初始值
        int n = (int)s.size();
        //若元素少于三个，则用反向迭代器输出最后一个元素
        if (n < 3) return *(s.rbegin());
        //若元素大于等于三个，也是用反向迭代器打印第三大的元素
        set<int>::reverse_iterator iter = s.rbegin();
        iter++;
        iter++;
        return *iter;
    }
};
// @lc code=end

