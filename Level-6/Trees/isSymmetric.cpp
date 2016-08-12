// https://www.interviewbit.com/problems/symmetric-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 bool isMirror(TreeNode* A, TreeNode* B){
    
    if(A == NULL && B == NULL)
        return true;
        
    if(A == NULL || B == NULL)
        return false;
        
    if(A->val == B->val) {
        return isMirror(A->left, B->right) && isMirror(A->right, B->left);
    }
    
    return false;
 }
 
int Solution::isSymmetric(TreeNode* A) {
    return isMirror(A, A);
}
