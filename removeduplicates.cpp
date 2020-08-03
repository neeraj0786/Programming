/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    struct ListNode * ptr=A,*h=A;
    while(A)
    {
        while(ptr&&(ptr->val==A->val)) ptr=ptr->next;
        A->next=ptr,A=A->next;
    }
    return h;
}

