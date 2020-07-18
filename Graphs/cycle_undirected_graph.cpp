bool dfs(int i,vector<int> adj[],vector<bool> &visited,int parent)
{
    visited[i]=true;
    for(auto x : adj[i]) 
    {
        if(x != parent  && visited[x]) 
        return true;
        if(!visited[x]&&dfs(x,adj,visited,i)) 
        return true;
    }
    return false;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> adj[A+1];
    vector<bool> visited(A+1,false);
    for(int i=0;i<B.size();i++)
        adj[B[i][0]].push_back(B[i][1]),adj[B[i][1]].push_back(B[i][0]);
    for(int i=1;i<=A;i++)
        if(!visited[i]&&dfs(i,adj,visited,-1)) return 1;
    return 0;    
}

