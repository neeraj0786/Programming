/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int len=0;
    struct ListNode *p=A;
    while(p)
    {
        len++;
        p=p->next;
    }
    B=(B%len);
    if(B==0)
    return A;
    else
    {
        len-=(B+1);
        struct ListNode *h1=A,*h2;
        p=A;
        for(int i=0;i<len;i++)
        p=p->next;
        h2=p->next;
        p->next=NULL;
        p=h2;
        while(p->next)
        p=p->next;
        p->next=h1;
        return h2;
    }
    
}

