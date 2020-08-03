ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int len=0;
    if(B<=0)
    B=1;
    struct ListNode *p=A;;
    while(p)
    {
        p=p->next;
        len++;
    }
    if(B>=len)
    {
        A=A->next;
        return A;
    }
    else
    {
        len-=(B+1);
        p=A;
        for(int i=0;i<len;i++)
        p=p->next;
        p->next=p->next->next;
        return A;
    }
}

