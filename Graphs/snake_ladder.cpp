
int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) {
    unordered_map<int,int> mp;
    for(auto x : A) mp[x[0]]=x[1];
    for(auto x : B) mp[x[0]]=x[1];
    queue<int> q;
    vector<bool> visited(101,false);
    visited[1]=true;
    q.push(1);
    int level=0;
    while(!q.empty())
    {
        int x=q.size();
        while(x--)
        {
            int node=q.front();
            q.pop();
            for(int i=1;i<=6;i++)
            {
                int pos=node+i;
                if(mp[pos]) pos=mp[pos];
                if(pos==100) return level+1;
                if(!visited[pos]) visited[pos]=true,q.push(pos);
            }
        }
        level++;
    }
    return -1;
}

