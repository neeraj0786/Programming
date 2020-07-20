vector<pair<int,int>> steps={make_pair(2,1),make_pair(1,2),make_pair(2,-1),make_pair(1,-2),make_pair(-2,1),make_pair(-1,2),make_pair(-2,-1),make_pair(-1,-2)};
bool isSafe(int x ,int y,int upx,int upy)
{
    return (x>=1)&&(x<=upx)&&(y>=1)&&(y<=upy);
}
int Solution::knight(int A, int B, int C, int D, int E, int F) {
    if(!isSafe(C,D,A,B)||!isSafe(E,F,A,B)) return -1;
    if(C==E&&D==F) return 0;
    vector<vector<bool>> visited(A+1,vector<bool> (B+1,false));
    queue<pair<int,int>> q;
    q.push(make_pair(C,D));
    visited[C][D]=true;
    int count=0;
    while(!q.empty())
    {
        int x=q.size();
        while(x--)
        {
            auto node = q.front();
            q.pop();
            for(int i=0;i<8;i++)
            {
                int n_x=node.first+steps[i].first,n_y=node.second+steps[i].second;
                if(isSafe(n_x,n_y,A,B)&&!visited[n_x][n_y])
                {
                    if(n_x==E&&n_y==F) return count+1;
                    q.push(make_pair(n_x,n_y));
                    visited[n_x][n_y]=true;
                }
            }
        }
        count++;
    }
    return -1;
}

