// https://www.interviewbit.com/problems/list-cycle/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    
    if(A==NULL || A->next==NULL ){
        return A;
    }
    
    ListNode *slow =A, *fast=A, *temp=A;

    while(slow && fast){
        slow=slow->next;
        
        if(fast && fast->next){
            fast = fast->next->next;
        }
        
        else
            return NULL;
        
        if(slow==fast){
            break;
        }
    }
    
    while(slow && temp!=slow){
        temp=temp->next;
        slow=slow->next;
    }
        
    return slow;
}
