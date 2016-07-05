// https://www.interviewbit.com/problems/partition-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* Solution::partition(ListNode* A, int B) {
    if(A==NULL || A->next==NULL)
        return A;
    
    ListNode* fakeHead = new ListNode(0), *temp=A, *last=A;
    fakeHead->next = A;
    A = fakeHead;
    int n =0;
    
    while(temp){
        temp=temp->next;
        n++;
    }
    
    while(last->next){
        last=last->next;
    }
    
    while(n--){
        
        if(fakeHead->next->val <B){
            fakeHead=fakeHead->next;
        }
        
        else{
            last->next = new ListNode(fakeHead->next->val);
            last = last->next;
            fakeHead->next = fakeHead->next->next;
        }
    }
    
    return A->next;
}
