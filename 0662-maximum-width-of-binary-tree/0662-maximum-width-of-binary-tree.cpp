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
public:
    typedef unsigned long long ll;
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode* , ll>>q;
        q.push({root , 0});

        ll maxWidth =0;

        while(!q.empty()){
            ll n=q.size();
            ll left = q.front().second;
            ll right =q.back().second;
            maxWidth = max(maxWidth , right-left+1);
            
            while(n--){
                TreeNode* temp = q.front().first;
                ll index = q.front().second;
                q.pop();

                if(temp->left)
                q.push({temp->left , 2*index+1});

                if(temp->right)
                q.push({temp->right , 2*index+2});
            }
        }
        return maxWidth;
    }
};