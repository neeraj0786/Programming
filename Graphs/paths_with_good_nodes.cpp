void dfs(int root,vector<int> adj[],int goodnodes,vector<int> &A,int limit,int &ans)
{
    if(A[root-1]) goodnodes++;
    if(adj[root].size()==0)
    {
        if(goodnodes<=limit) ans++;
        return ;
    }
    for(auto x : adj[root])
        dfs(x,adj,goodnodes,A,limit,ans);
}
int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) {
    vector<int> adj[A.size()+1];
    for(auto x : B) 
    (x[0]<x[1])?adj[x[0]].push_back(x[1]):adj[x[1]].push_back(x[0]);
    int ans=0;
    dfs(1,adj,0,A,C,ans);
    return ans;
}

