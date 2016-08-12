// https://www.interviewbit.com/problems/path-sum/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int sum =0;

bool solver(TreeNode* A, int B){
   if(A==NULL)
        return false;
        
    if(A->val==B && A->left==NULL && A->right == NULL)
        return true;
    
    return solver(A->left, B - A->val) || solver(A->right, B - A->val);
}

int Solution::hasPathSum(TreeNode* A, int B) {
    return solver(A, B);
}
