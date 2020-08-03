/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    struct ListNode *p;
    if(A==NULL) return B;
    if(B==NULL) return A;
    
    if(A->val<B->val)
    {
        p=A;
        p->next=mergeTwoLists(A->next,B);
    }
    else
    {
        p=B;
        p->next=mergeTwoLists(A,B->next);
    }
    return p;
}

