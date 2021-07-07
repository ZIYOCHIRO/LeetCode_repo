
#include <iostream>     // std::cout
#include <functional>   // std::minus
#include <numeric>      // std::accumulate
#include <vector>
#include <stack>
#include <unordered_set>
#include <unordered_map>
#include <set>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void printVector(vector<int>& v)
{
    cout << "{ ";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "} " << endl;
}

//前序遍历：按照访问根节点——左子树——右子树的方式遍历这棵树，而在访问左子树或者右子树的时候，我们按照同样的方式遍历，直到遍历完整棵树
//中序遍历：按照访问左子树——根节点——右子树的方式遍历这棵树，而在访问左子树或者右子树的时候我们按照同样的方式遍历
//后序遍历：按照访问左子树——右子树——根节点的方式遍历这棵树，而在访问左子树或者右子树的时候，我们按照同样的方式遍历，直到遍历完整棵树。
// set: 有序
// unorder_set:哈希map
// @lc code=start
class Solution {
    
public:
    /*
     将 nn 视作一个长为 3232 的二进制串，从低位往高位枚举 nn 的每一位，将其倒序添加到翻转结果 \textit{rev}rev 中。

     代码实现中，每枚举一位就将 nn 右移一位，这样当前 nn 的最低位就是我们要枚举的比特位。当 nn 为 00 时即可结束循环。

     需要注意的是，在某些语言（如 \texttt{Java}Java）中，没有无符号整数类型，因此对 nn 的右移操作应使用逻辑右移。

     */
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0;
        for (int i = 0; i < 32 && n > 0; ++i) {
            rev |= (n & 1) << (31-i);
            n >>= 1;
        }
        return rev;
    }

};
// @lc code=end


int main() {
    Solution solution;
    vector<int> nums = {1,2,2,1};
    vector<int> nums_1 = {2,2};
//    vector<int> res = solution.intersection(nums, nums_1);
//    printVector(res);
    vector<char> dd = {'h'};
    //int s = solution.intersection(, "aAAbbbb");
    //int s = solution.longestPalindrome(str);//    bool isPalindrome = solution.isPalindrome(str);
    //cout << s << endl;
    //printVector(s);
    return 0;
}

/*
 /注意：矩阵不是方阵，长宽不一定相等

 int W=M.size();
 int L=M[0].size();

 //初始化容器大小，并把每个元素初始化为-1
 vector<vector<int>> v(W,vector<int>(L,-1));

 for(int i=0; i<W*L; i++)//把所有元素从0-n依次排序
 {
     //利用排序确定每一点的横纵坐标
     int cur_h = i/L; //第几行
     int cur_l = i%L; //第几列

     //定义每一个坐标点的上下左右限的初始值，注意左右限靠列值确定，上下限靠行值确定
     int x1 =cur_l, x2= cur_l, y1 =cur_h, y2=cur_h,sum=0;

     if(cur_l-1>=0) x1=cur_l-1;//确定该点的左边界
     if(cur_l+1<L)  x2=cur_l+1; //确定该点的右边界
     if(cur_h-1>=0) y1=cur_h-1;//确定该点的上边界
     if(cur_h+1<W)  y2=cur_h+1;//确定该点的下边界
     //如果条件不满足，该边界就还是他本身

     //把所有的值相加，注意一定要小于等于边界
     //注意：int i =x1写上面是错误的，要换必须换成j=x1整体放上面
     for(int i=y1;i<=y2;i++){
         for(int j=x1; j<=x2; j++){
             sum+=M[i][j];
         }
     }
     int count = (x2-x1+1)*(y2-y1+1);
     v[cur_h][cur_l] = sum/count;
 }
     return v;
 }
 */
