// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


ListNode* Solution::deleteDuplicates(ListNode* A) {
   ListNode* temp = A;
   
   while(temp){
       if ( temp->next && temp->val == temp->next->val ){
           temp->next = temp->next->next;
       }
       
       else{
           temp = temp->next;
       }
   }
   
   return A;
   
}
