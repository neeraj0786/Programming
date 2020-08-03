ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
    if(A==NULL)return B;
    if(B==NULL)return A;
    ListNode* ans=NULL;
    if(A->val < B->val){
        ans=A;
        ans->next=mergeTwoLists(A->next,B);
    }
    else{
        ans=B;
        ans->next=mergeTwoLists(A,B->next);
    }
    return ans;
}
ListNode* Solution::sortList(ListNode* A) {
    if(A==NULL||A->next==NULL)return A;
    ListNode* slow=A;
    ListNode* temp=A;
    ListNode* fast=A;
    while(fast && fast->next){
        temp = slow;
        slow = slow->next;
        fast=fast->next->next;
    }
    
    temp->next = NULL;
    ListNode* LS = sortList(A);
    ListNode* LR = sortList(slow);

    return mergeTwoLists(LS,LR);
}

