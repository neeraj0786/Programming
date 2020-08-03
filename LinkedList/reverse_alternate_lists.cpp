pair<ListNode*,ListNode*> reverse(ListNode *A)
{
    ListNode *prev=NULL,*curr=A,*nex,*h=A;
    while(curr)
    {
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return make_pair(prev,h);
}
ListNode* Solution::solve(ListNode* A, int B) {
    if(B<=1) return A;
    ListNode *res=NULL,*prev=NULL,*p1=A;
    int i=0;
    while(p1)
    {
        ListNode *p2=p1,*p3=NULL;
        for(int i=0;(i<B-1)&&p2;i++) p2=p2->next;
        if(p2) p3=p2->next,p2->next=NULL;
        if(i%2==0){
        pair<ListNode*,ListNode*> x=reverse(p1);
        if(!res) res=x.first,prev=x.second,prev->next=NULL;
        else prev->next=x.first,prev=x.second,prev->next=NULL;}
        else
        {
            prev->next=p1;
            prev=p2;
        }
        p1=p3;
        i^=1;
    }
    return res;
}

