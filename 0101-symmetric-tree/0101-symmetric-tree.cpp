/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
bool Solve(TreeNode *leftTree , TreeNode *rightTree){
    if(!leftTree && !rightTree) return true;
    if(!leftTree || !rightTree) return false;

    return (leftTree->val == rightTree->val) && Solve(leftTree->left ,rightTree->right) && Solve(leftTree->right , rightTree->left);
}
public:
    bool isSymmetric(TreeNode* root) {
       if(!root) return true;
       return Solve(root->left , root->right); 
    }
};