/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    int len=0;
    struct ListNode *f=A,*s=A,*n;
    while(f&&f->next)
    {
        f=f->next->next;
        s=s->next;
    }
    f=NULL;
    
    while(s)
    {
        n=s->next;
        s->next=f;
        f=s;
        s=n;
    }
    s=f;
    while(s)
    {
        if(s->val!=A->val)
        return 0;
        s=s->next;
        A=A->next;
    }
    return 1;
    
}

