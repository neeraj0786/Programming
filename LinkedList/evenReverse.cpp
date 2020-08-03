int i=1;
ListNode *start=NULL;
void dfs(ListNode *A,int j)
{
   if(i>j||!start||!A) return;
   if(A->next) A=A->next;
   else return ;
   if(A->next) A=A->next;
   else return ;
   dfs(A,j+2);
   if(start&&i<j+2)
   {
       swap(A->val,start->val);
       i+=2;
       if(start)start=start->next;
       if(start)start=start->next;
       return ;
   }
   return ;
}
ListNode* Solution::solve(ListNode* A) {
    if(A)
    start=A->next;
    else
    return A;
    i=2;
    dfs(A->next,2);
    return A;
}
