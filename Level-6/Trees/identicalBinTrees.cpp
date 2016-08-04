// https://www.interviewbit.com/problems/identical-binary-trees/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(A==NULL && B==NULL)
        return true;
    
    if(A==NULL || B==NULL)
        return false;
        
    if(A->val == B->val)
        return isSameTree(A->left, B->left) && isSameTree(A->right, B->right);
    
    return false;
}
