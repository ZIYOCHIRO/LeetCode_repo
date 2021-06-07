
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
    bool isPalindrome(string s) {
        string pStr;
        for (char c:s) {
            if (isalnum(c)) {
                pStr += tolower(c);
            }
        }
        string pStr_rev(pStr.rbegin(), pStr.rend());
        return pStr == pStr_rev;
    }
    
};

// @lc code=end


int main() {
    Solution solution;
    
    return 0;
}
