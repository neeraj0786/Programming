/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    int l1=0,l2=0;
    struct ListNode *ptr1=A,*ptr2=NULL;
    while(ptr1)
        l1++,ptr1=ptr1->next;
    ptr1=B;
    while(ptr1)
        l2++,ptr1=ptr1->next;
    if(l1>=l2) ptr1=A,ptr2=B;
    if(l2>l1) ptr1=B,ptr2=A;
    for(int i=0;i<abs(l1-l2);i++) ptr1=ptr1->next;
    while(ptr1!=ptr2&&ptr1&&ptr2) ptr1=ptr1->next,ptr2=ptr2->next;
    return ptr1;
}

