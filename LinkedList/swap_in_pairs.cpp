ListNode* Solution::swapPairs(ListNode* A) {
    int e1,e2;
    struct ListNode *p1=A,*p2=p1->next;
    while(p1&&p2)
    {
        e1=p1->val;
        e2=p2->val;
        p1->val=e2;
        p2->val=e1;
        p1=p1->next->next;
        if(p1)
        p2=p1->next;
    }
    return A;
}
