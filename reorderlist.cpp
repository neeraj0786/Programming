/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode *A)
{
    struct ListNode *pre=NULL, *curr=A, *nex;
    while(curr)
    {
        nex=curr->next;
        curr->next=pre;
        pre=curr;
        curr=nex;
    }
    return pre;
}
ListNode* Solution::reorderList(ListNode* A) {
    struct ListNode *s=A,*f=A,*g=A,*t=A,*p=A;
    while(f&&f->next)
    {
        t=s;
        s=s->next;
        f=f->next->next;
    }
    t->next=NULL;
    s=reverse(s);
    f=A;
    g=A->next;
    t=s->next;
    while(f&&s)
    {
        f->next=s;
        s->next=g;
        f=g;
        s=t;
        if(t) t=t->next;
        if(g) g=g->next;
    }
    while(p->next) p=p->next;
    if(f==NULL&&s!=NULL) p->next=s;
    else if(f!=NULL&&s==NULL) p->next=f;
    return A;
}

