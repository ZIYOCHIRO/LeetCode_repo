
#include <iostream>
#include <vector>
#include <stack>
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


// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret(numRows);
        for (int i = 0; i < numRows ; i++) {
            ret[i].resize(i+1);
            ret[i][0] = ret[i][i] = 1;
            for (int j = 1; j < i; j++) {
                ret[i][j] = ret[i-1][j-1] + ret[i-1][j];
            }
        }
        return ret;
    }
    
};

// @lc code=end


int main() {
    Solution solution;
    
    return 0;
}
