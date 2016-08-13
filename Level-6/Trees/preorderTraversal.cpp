// https://www.interviewbit.com/problems/preorder-traversal/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    // stack < pair < TreeNode*, bool > > s;     // bool isLeft.
    // vector <int> ans;
    
    // if(A==NULL)
    //     return ans;
    
    // s.push(make_pair(A, false) );
    
    // while(!s.empty()){
    //     ans.push_back(s.top().first->val);
    //     TreeNode *temp = s.top().first;
        
    //     s.top().second = false;
        
    //     while(temp->left){
    //         s.push(make_pair (temp->left, true) );
    //         temp = temp->left;
    //     }
        
    //     if(temp->right && s.top().second){
    //           s.push(make_pair (temp->right, false) );   
    //     }
        
    // }
    stack < TreeNode* > s; //bool will say if left happened or not.
    vector <int> ans;
    
    if(A==NULL)
        return ans;
    
    s.push(A);
    
    while(!s.empty()){
        ans.push_back(s.top()->val);
        TreeNode *temp = s.top();
        
        s.pop();
        
        if(temp->right)
            s.push(temp->right);
            
        if(temp->left)
            s.push(temp->left);
    }
    
    return ans;
}
