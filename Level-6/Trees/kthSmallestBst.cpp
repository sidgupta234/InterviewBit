// https://www.interviewbit.com/problems/kth-smallest-element-in-tree/
// http://algorithmsandme.in/2013/08/find-kth-smallest-element-in-binary-search-tree/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int sizeTree(TreeNode *root){
    if(root==NULL)
        return 0;
        
    return 1 + sizeTree(root->left) + sizeTree(root->right);
}

int Solution::kthsmallest(TreeNode* root, int k) {
    
    int leftSize = sizeTree(root->left);
    
    if(leftSize == k-1)
        return root->val;
    
    if(leftSize > k-1)
        return kthsmallest(root->left, k);
    
    return kthsmallest(root->right, k - leftSize - 1);
    
}
