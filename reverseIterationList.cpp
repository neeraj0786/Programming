/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    struct ListNode *pre=NULL, *curr=A, *nex;
    while(curr)
    {
        nex=curr->next;
        curr->next=pre;
        pre=curr;
        curr=nex;
    }
    return pre;
}
