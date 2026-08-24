/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    int df(TreeNode* root) {
        if (root == NULL)
            return INT_MIN;
    int lm = df(root->left);
    int rm = df(root->right);
    int mx = max(root->val, max(lm, rm));
    if (root->val == mx)
        ans++;
    return mx;
    }
 int countDominantNodes(TreeNode* root) {
    ans = 0;
    df(root);
    return ans;
}
}
;