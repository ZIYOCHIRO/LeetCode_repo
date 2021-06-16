/*
 * @lc app=leetcode id=717 lang=cpp
 *
 * [717] 1-bit and 2-bit Characters
 */

// @lc code=start
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        /*
         如果出现一个1，那么是10或者11，序号i累加2
         如果出现一个0，序号i累加1
         那么对于倒数第二个字符，存在两种可能：

         前面正好是个1，这个时候最后一个被跳过， i=n
         前面不是1，那么最后一个正好走到，i=n-1
         */
        int n = bits.size();
        int i = 0;
        // 这里只遍历到倒数第二个
        while (i < n - 1)
        {
            i += bits[i] + 1;
        }
        
        return i == n-1;
    }
};
// @lc code=end

