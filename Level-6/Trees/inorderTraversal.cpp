// https://www.interviewbit.com/problems/inorder-traversal/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /*
 pseudo 
    func(TreeNode* A)
        if(A==NULL)
            return 
        
        func(A->left)
        data
        func(A->right)
        
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack <pair <TreeNode*, bool> > s; //bool will say if left happened or not.
    vector <int> ans;
    
    if(A==NULL)
        return ans;
    
    s.push(make_pair(A, false) );
    
    while(!s.empty()){
        
        if((s.top().first)->left!=NULL && s.top().second==false ){
            s.top().second = true;
            s.push(make_pair((s.top().first)->left, false) );
        }
        
        else{
            ans.push_back((s.top().first)->val);
            TreeNode *temp = (s.top().first);
            s.pop();
            
            if(temp->right!=NULL)
                s.push(make_pair(temp->right, false));
        }
        
    }
    
    return ans;
}
