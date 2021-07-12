/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int i = 1; i <= n; i++) {
            if (!(i % 3) && !(i % 5)) result.push_back("FizzBuzz");
            else if (!(i % 3)) result.push_back("Fizz");
            else if (!(i % 5)) result.push_back("Buzz");
            else result.push_back(to_string(i));
        }
        return result;
    }
};
// @lc code=end

