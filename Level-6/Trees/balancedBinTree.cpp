// https://www.interviewbit.com/problems/balanced-binary-tree/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int Ht(TreeNode *A){
    if(A==NULL)
        return 0;
        
    return max(Ht(A->left), Ht(A->right)) +1;
 }
 bool HeightCheck(TreeNode *A){
    if(A==NULL)
        return true;
    
    if(abs ( Ht(A->left) - Ht(A->right) ) <=1)
        return HeightCheck(A->left) && HeightCheck(A->right);
    
    else 
        return false;
 }
 
int Solution::isBalanced(TreeNode* A) {
    return HeightCheck(A);
}
