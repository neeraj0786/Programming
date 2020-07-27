vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C)
{
    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend()); 
    priority_queue<pair<int, pair<int, int>>> maxh; 
    maxh.push(make_pair(B[0] + A[0], make_pair(0, 0)));
    std::vector<int> ans;
    while(ans.size() < C)
    {
        auto it = maxh.top();
        maxh.pop();
        ans.push_back(it.first);
        int x=it.second.first,y=it.second.second;
        if(x+1<A.size()) maxh.push(make_pair(A[x+1]+B[y],make_pair(x+1,y)));
        if(y+1<A.size()&&x==0) maxh.push(make_pair(A[x]+B[y+1],make_pair(x,y+1)));
    }
    return ans;
}
