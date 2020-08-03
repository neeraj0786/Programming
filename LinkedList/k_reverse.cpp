/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
pair<ListNode*,ListNode*> reverse(ListNode *A)
 {
     struct ListNode *prev=NULL,*curr=A,*nex,*h=A;
     while(curr)
     {
         nex=curr->next;
         curr->next=prev;
         prev=curr;
         curr=nex;
     }
     return make_pair(prev,h);
 }
ListNode* Solution::reverseList(ListNode* A, int B) {
    struct ListNode *res=NULL,*prev=NULL,*p=A;
    if(B<=1)
    return A;
    while(p)
    {   
        struct ListNode *t=p,*f=NULL;
        for(int i=0;(i<B-1)&&p;i++) p=p->next;
        if(p->next) f=p->next;
        p->next=NULL;
        pair<ListNode*,ListNode*> x =reverse(t);
        if(!res)
        {
            res=x.first;
            prev=x.second;
            prev->next=NULL;
        }
        else
        {
            prev->next=x.first;
            prev=x.second;
            prev->next=NULL;
        }
        p=f;
    }
    return res;
}

