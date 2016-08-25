// https://www.interviewbit.com/problems/populate-next-right-pointers-tree/
void Solution::connect(TreeLinkNode* A) {
    if(A==NULL)
        return;
    
    TreeLinkNode *cur =A, *leftWall =NULL, *prev =NULL;
    
    while(cur){
        
        while(cur){
            if(cur->left){
                if(prev!=NULL){
                    prev->next = cur->left;
                    
                }
                
                else{
                    leftWall = cur->left;
                }
                
                prev = cur->left;
            }
            
            if(cur->right){
                if(prev!=NULL){
                    prev->next = cur->right;
                }
                
                else{
                    leftWall = cur->right;
                }
                prev = cur->right;
                
            }
            
            cur = cur->next;
        }
        
        cur = leftWall;
        leftWall = NULL;
        prev = NULL;
    }
}
