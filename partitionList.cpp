/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    struct ListNode *lh=NULL,*le=NULL,*eh=NULL,*ee=NULL;
    
    while(A)
    {
        if(A->val>=B)
        {
            if(eh==NULL)
            {
                eh=A;
                ee=eh;
            }
            else
            {
                ee->next=A;
                ee=ee->next;
            }
        }
        else if(A->val<B)
        {
           if(lh==NULL)
            {
                lh=A;
                le=lh;
            }
            else
            {
                le->next=A;
                le=le->next;
            } 
        }
        
       A=A->next; 
    }
    if(ee)
    ee->next=NULL;
    if(lh==NULL)
    return eh;
    if(eh==NULL)
    {
        le->next=eh;
        return lh;
    }
    le->next=eh;
    return lh;
}

