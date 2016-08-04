// https://www.interviewbit.com/problems/invert-the-binary-tree/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inv(TreeNode* &root){
    if(root==NULL)
        return;
    
    swap(root->left, root->right);
    
    inv(root->left);
    inv(root->right);
}

TreeNode* Solution::invertTree(TreeNode* root) {
    inv(root);
    return root;
}
