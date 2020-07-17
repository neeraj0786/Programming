vector<int> parent;
vector<int> rnk;
bool cmp(vector<int> &v1,vector<int> &v2)
{
    return v1[2]<v2[2];
}
int find(int x)
{
    if(parent[x]!=x)
    return parent[x]=find(parent[x]);
    return parent[x];
}
void Union(int x1,int x2)
{
    x1=find(x1);
    x2=find(x2);
    if(rnk[x1]<rnk[x2])
    parent[x1]=x2;
    else if(rnk[x2]<rnk[x1])
    parent[x2]=x1;
    else
    parent[x1]=x2,rnk[x2]++;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    sort(B.begin(),B.end(),cmp);
    parent=vector<int>(A+1,0);
    rnk=vector<int>(A+1,0);
    for(int i=1;i<=A;i++)
    parent[i]=i;
    int count=0,ans=0;
    for(auto i:B)
    {
        int x1=find(i[0]),x2=find(i[1]);
        if(x1!=x2)
        {
            count++;
            ans+=i[2];
            Union(i[0],i[1]);
        }
        if(count==A-1) break;
    }
    return ans;
}
