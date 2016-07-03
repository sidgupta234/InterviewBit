
// https://www.interviewbit.com/problems/remove-nth-node-from-list-end/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int len = 0;
    ListNode* temp = A;
     
    while(temp){
        temp = temp->next;
        len++;
    }
        
    
    if(B>=len)
        return A->next;
    
    int toMove = len - B - 1;
    
    temp = A;
    
    while(toMove--){
        temp = temp->next;
    }
    
    temp ->next = temp->next->next;
    return A;
}
