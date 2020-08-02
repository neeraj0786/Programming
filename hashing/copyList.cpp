RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    RandomListNode *head=A;
    if(!head) return NULL;
    for(auto node = head; node; )
    {
        auto newNode = new RandomListNode(node -> label);
        auto next = node -> next;
        node -> next = newNode;
        newNode -> next = next;
        node = next;
    }
    for(auto node = head; node and node -> next; node = node -> next -> next)
        if(node -> random)
            node -> next -> random = node -> random -> next;
    for(auto node = head -> next; node and node -> next; node = node -> next)
        node -> next = node -> next -> next;
    return head -> next;
}
