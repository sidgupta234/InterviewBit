// https://www.interviewbit.com/problems/merge-k-sorted-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void pushNode(int val, ListNode** root){
    ListNode *node = new ListNode(val);
    node->next = NULL;
    ListNode *temp= *root;
    
    if(temp==NULL){
        *root = node;
        return;
    }
    
    while(temp->next){
        temp = temp->next;
    }
    
    temp->next = node;
}

ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    priority_queue < pair <int, ListNode*>, vector< pair <int, ListNode* > >, greater <pair<int, ListNode*> > > q;
    
    vector<ListNode*>::iterator x;
    
    for(x=A.begin(); x!=A.end(); x++){
        q.push(make_pair ( (*x)->val, *x));
    }
    
    ListNode* ans = NULL;
    
    while(q.empty()!=true){
        pushNode((q.top()).first, &ans);
        ListNode* forNext = q.top().second->next;
        q.pop();
        
        if(forNext)
            q.push(make_pair ( forNext->val, forNext));
    }
    
    return ans;
}
