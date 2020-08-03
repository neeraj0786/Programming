ListNode* Solution::detectCycle(ListNode* A) {
    struct ListNode *s=A,*f=A;
    if(s->next==s) return s;
    int fl=1;
    while((s!=f)||(fl))
    {
        if(fl==1) fl=0;
        if(s) s=s->next;
        else return NULL;
        if(f&&f->next) f=f->next->next;
        else return NULL;
    }
    if(f==A&&s==A) return A;
    s=A;
    while(f->next!=s->next)
    {
        f=f->next;
        s=s->next;
    }
    return s->next;
}
