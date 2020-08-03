ListNode* Solution::solve(ListNode* A) {
    ListNode *zh=NULL,*ze=NULL,*oh=NULL,*oe=NULL;
    while(A)
    {
        if(A->val==0)
        {
            if(!zh) zh=A,ze=zh;
            else ze->next=A,ze=ze->next;
        }
        else
        {
            if(!oh) oh=A,oe=oh;
            else oe->next=A,oe=oe->next;   
        }
        A=A->next;
    }
    if(zh)ze->next=NULL;
    if(oh)oe->next=NULL;
    if(!zh&&oh) return oh;
    else if(!oh&&zh) return zh;
    else if(oh&&zh)
    {
        ze->next=oh;
        return zh;
    }
    else return NULL;
}
