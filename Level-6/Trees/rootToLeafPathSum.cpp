// https://www.interviewbit.com/problems/root-to-leaf-paths-with-sum/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void aPath(TreeNode* root, vector<int> temp, vector<vector <int> > &v, int sum){
    if(root==NULL){
        return ;
    }
    
    temp.push_back(root->val);
    
    if(root->left == NULL && root->right == NULL && sum==root->val){
        v.push_back(temp);
        temp.clear();
        return;
    }
    
    aPath(root->left, temp, v, sum - root->val);
    aPath(root->right, temp, v, sum - root->val);
    
}

vector<vector<int> > Solution::pathSum(TreeNode* root, int sum) {
    vector <vector<int> > v;
    vector <int> temp;
    aPath(root, temp, v, sum);
    return v;
}
