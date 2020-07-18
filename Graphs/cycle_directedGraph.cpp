bool dfs(int i,vector<int> adj[],vector<bool> &visited,vector<bool> &recstack)
{
    visited[i]=true;
    recstack[i]=true;
    for(auto it=adj[i].begin();it!=adj[i].end();it++) 
    {
        if(!visited[*it]&&dfs(*it,adj,visited,recstack)) return true;
        else if(recstack[*it]) return true;
    }
    recstack[i]=false;
    return false;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> adj[A+1];
    vector<bool> visited(A+1,false);
    vector<bool> recstack(A+1,false);
    for(int i=0;i<B.size();i++)
        adj[B[i][0]].push_back(B[i][1]);
    for(int i=1;i<=A;i++)
        if(dfs(i,adj,visited,recstack)) return 1;
    return 0;    
}

