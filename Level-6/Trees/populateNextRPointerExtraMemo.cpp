// https://www.interviewbit.com/problems/populate-next-right-pointers-tree/
/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    deque <TreeLinkNode*> q;
        
        if(A==NULL)
            return ;
    
        q.push_back(A);
    
        while(!q.empty()){
            int count = q.size();
        
            for(int i = 0; i<count-1; i++){
                q[i]->next = q[i+1];
            }
        
            for(int i=0; i<count; i++){
                if(q.front()->left)
                    q.push_back(q.front()->left);
                
                if(q.front()->left)
                    q.push_back(q.front()->right);
                
                q.pop_front();
            }
        }
}
