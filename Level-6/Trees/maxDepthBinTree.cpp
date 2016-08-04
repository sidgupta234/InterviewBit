// https://www.interviewbit.com/problems/max-depth-of-binary-tree/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {
    if(A==NULL)
        return 0;
    
    return 1 + max (maxDepth(A->left), maxDepth(A->right));
}
