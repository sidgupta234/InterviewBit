// https://www.interviewbit.com/problems/least-common-ancestor/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
bool isIn(TreeNode *A, int val){
    if(A==NULL)
        return false;
        
    if(A->val == val)
        return true;
    
    return isIn(A->left, val) || isIn(A->right, val);
}

int Solution::lca(TreeNode* A, int val1, int val2) {
    if(A==NULL)
        return -1;
    
    if( (A->val == val1 && isIn(A, val2) ) || (A->val == val2 && isIn(A, val1) ) )
        return A->val;
    
    if(isIn(A->left, val1) && isIn(A->right, val2))
        return A->val;
    
    if(isIn(A->right, val1) && isIn(A->left, val2))
        return A->val;
    
    if(isIn(A->left, val1) && isIn(A->left, val2))
        return lca(A->left, val1, val2);
    
    if(isIn(A->right, val1) && isIn(A->right, val2))
        return lca(A->right, val1, val2);
        
    return -1;
    
}
