/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    struct ListNode *h=NULL,*p=NULL;
    int carry=0;
    while(A||B||carry)
    {
        if(!h)
        {
            h=new ListNode((carry+(A?A->val:0)+(B?B->val:0))%10);
            p=h;
        }
        else
        {
            p->next=new ListNode((carry+(A?A->val:0)+(B?B->val:0))%10);
            p=p->next;
        }
        carry=(carry+(A?A->val:0)+(B?B->val:0))/10;
        if(A) A=A->next;
        if(B) B=B->next;
    }
    return h;
}

