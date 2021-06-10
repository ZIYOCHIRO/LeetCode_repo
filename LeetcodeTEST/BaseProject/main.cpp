
#include <iostream>
#include <vector>
#include <stack>
#include <unordered_set>
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
    /* 超时了
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        set<int>s;
        for (int val:timeSeries) {
            for (int i = 1; i <= duration; i++) {
                val += 1;
                s.insert(val);
            }
        }
        return s.size();
    }
     */
    
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n == 0) return 0;
        int total = 0;
        for (int i = 0; i<n-1; i++) {
            total += min(timeSeries[i+1] - timeSeries[i-1], duration);
        }
        return total + duration;
    }
};
// @lc code=end


int main() {
    Solution solution;
    vector<int> nums = {1,2};
     int s = solution.findPoisonedDuration(nums, 2);
//    cout << s << endl;
//    printVector(nums);
    return 0;
}
