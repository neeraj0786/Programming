/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
pair<ListNode*,ListNode*> reverse(ListNode* A)
{
    struct ListNode *pre=NULL, *curr=A, *nex,*t=A;
    while(curr)
    {
        nex=curr->next;
        curr->next=pre;
        pre=curr;
        curr=nex;
    }
    return make_pair(pre,t);
}
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    if(B==C)
    return A;
    int len=0;
    struct ListNode *xo=A,*x1=A,*yo=A,*y1=A;
    for(int i=0;i<(B-2);i++) xo=xo->next;
    if(xo!=A||B==2) x1=xo->next;            
    else x1=A,xo=NULL;
    for(int i=0;i<(C-1);i++) yo=yo->next;
    y1=yo->next;
    yo->next=NULL;
    pair<ListNode*,ListNode*> p=reverse(x1);
    if(xo) xo->next=p.first;
    else A=p.first;
    (p.second)->next=y1;
    return A;
}

