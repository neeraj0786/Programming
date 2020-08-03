/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    struct ListNode * ptr=A,*h=NULL ,*pre=NULL;
    while(A)
    {
        while(ptr&&(ptr->val==A->val)) ptr=ptr->next;
        if(A->next==ptr){
            if(h==NULL) h=A,pre=h;
            else pre->next=A,pre=pre->next;
            pre->next=NULL;
        }
        A=ptr;
    }
    return h;
}

