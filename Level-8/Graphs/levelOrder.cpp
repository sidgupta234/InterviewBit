// https://www.interviewbit.com/problems/level-order/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int> > v;
    vector<int> value;
    queue<TreeNode*> Q;
    
    if(A==NULL)
        return v;
    
    value.push_back(A->val);
    
    
    Q.push(A);
    v.push_back(value);
    
    long long int maxNode = 1;
    
    while(Q.empty()!=true){
        vector<int> temp;
        int count = Q.size();
        
        while(count){
            
            if(Q.front()->left){
                Q.push(Q.front()->left);
                temp.push_back(Q.front()->left->val);
            }
            
            
            if(Q.front()->right){
                Q.push(Q.front()->right);
                temp.push_back(Q.front()->right->val);
            }
        
            Q.pop();
            count--;
        }
        
        if(!temp.empty())
            v.push_back(temp);
        
    }
    
    return v;
}
