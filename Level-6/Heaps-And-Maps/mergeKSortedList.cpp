// https://www.interviewbit.com/problems/merge-k-sorted-lists/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* merge2(ListNode* A, ListNode* B){
    if(A==NULL)
        return B;
        
    if(B==NULL)
        return A;
    
    ListNode* temp;
    
    if(A->val < B->val){
        temp = A;
        temp->next = merge2(A->next, B);
    }
    
    else{
        temp = B;
        temp->next = merge2(A, B->next);
    }
    
    return temp;
}

ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    if(A.size()==0)
        return NULL;
    
    ListNode* ans = A[0];
    
    for(int i=0; i<A.size()-1; i++){
        ans = merge2(ans, A[i+1]);
    }
    
    return ans;
}
