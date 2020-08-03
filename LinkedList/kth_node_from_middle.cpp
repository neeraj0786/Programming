int Solution::solve(ListNode* A, int B) {
    if(!A&&B>0) return -1;
    int l=0;
    ListNode *p=A;
    while(p) l++,p=p->next;
    l=(l/2)+1;
    if(B>=l) return -1;
    p=A;
    B=l-B;
    while(B>1&&p) p=p->next,B--;
    return p?p->val:-1;
}
