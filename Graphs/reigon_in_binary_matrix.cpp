vector<pair<int,int>> steps = {make_pair(1,0),make_pair(-1,0),make_pair(1,1),make_pair(1,-1),make_pair(-1,1),make_pair(-1,-1),make_pair(0,1),make_pair(0,-1)};
bool isSafe(int i,int j,vector<vector<int> > &A,vector<vector<int> > &visited)
{
    return (i>=0)&&(i<A.size())&&(j>=0)&&(j<A[0].size())&&(!visited[i][j])&&A[i][j];
}
int dfs(int i,int j,vector<vector<int> > &A,vector<vector<int> > &visited)
{
    visited[i][j]=true;
    int count=1;
    for(int k=0;k<8;k++)
        if(isSafe(i+steps[k].first,j+steps[k].second,A,visited)) count+=dfs(i+steps[k].first,j+steps[k].second,A,visited);
    return count;
}
int Solution::solve(vector<vector<int> > &A) {
    vector<vector<int>> visited(A.size(),vector<int> (A[0].size(),false));
    int max_reigon=0;
    for(int i=0;i<A.size();i++)
        for(int j=0;j<A[0].size();j++)
            if(A[i][j]&&!visited[i][j]) max_reigon=max(max_reigon,dfs(i,j,A,visited));
    return max_reigon;
}

