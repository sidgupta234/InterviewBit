//https://www.interviewbit.com/problems/flatten-binary-tree-to-linked-list/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void flat (TreeNode* A){
    
    if(A==NULL )
        return ;
    
    if(A->left!=NULL && A->right==NULL){
        swap(A->left, A->right);
    }
    
    else if(A->left!=NULL && A->right != NULL){
        swap(A->left, A->right);
        TreeNode *temp = A->right;
        
        while(temp->right!=NULL){
            temp= temp->right;
        }
        temp->right = A->left;
        A->left = NULL;
    }
    
    flat(A->left);
    flat(A->right);
    
}

TreeNode* Solution::flatten(TreeNode* A) {
    flat(A);
    return A;
}
