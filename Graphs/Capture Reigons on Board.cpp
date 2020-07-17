vector<pair<int,int>> steps={make_pair(1,0),make_pair(0,-1),make_pair(-1,0),make_pair(0,1)};
bool isSafe(int i,int j,vector<vector<char> > &A)
{
    return (i>=0)&&(i<A.size())&&(j>=0)&&(j<A[0].size())&&(A[i][j]=='O');
}
void dfs(int i,int j,vector<vector<char> > &A)
{
    A[i][j]='+'; //dummy symbol
    for(int k=0;k<4;k++)
        if(isSafe(i+steps[k].first,j+steps[k].second,A))
            dfs(i+steps[k].first,j+steps[k].second,A);
}
void Solution::solve(vector<vector<char> > &A) {
    int r=A.size(),c=A[0].size();
    for(int j=0;j<c;j++){ //checking boundaries only
        if(A[0][j]=='O') dfs(0,j,A);
        if(A[r-1][j]=='O') dfs(r-1,j,A); }
        
    for(int i=0;i<r;i++){ //checking boundaries only
        if(A[i][0]=='O') dfs(i,0,A);
        if(A[i][c-1]=='O') dfs(i,c-1,A); }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(A[i][j]=='+') A[i][j]='O'; //replacing dummy symbol
            else A[i][j] = 'X';
        }
    }
}

