 class myCompare
{
public:
bool operator()(ListNode* a, ListNode* b)
{
return a->val > b->val;
}
};
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    ListNode *res=NULL,*ptr=res;
    priority_queue<ListNode*,vector<ListNode*>,myCompare> pq;
    for(auto x: A) pq.push(x);
    while(!pq.empty())
    {
        ListNode *t1=pq.top(),*t2=t1->next;
        if(!res) res=t1,ptr=res;
        else
        {
            ptr->next=t1;
            ptr=ptr->next;
        }
        pq.pop();
        if(t2) pq.push(t2);
    }
    ptr->next=NULL;
    return res;
}
