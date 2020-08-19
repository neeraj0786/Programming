vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> V(A);
    if(A==1)
    V[0].push_back(1);
    else if(A==2)
    {
        V[0].push_back(1);
        V[1].push_back(1);
        V[1].push_back(1);
    }
    else
    {
        V[0].push_back(1);
        V[1].push_back(1);
        V[1].push_back(1);   
        for(int i=2;i<A;i++)
        {
            V[i].push_back(1);
            for(int j=1;j<i;j++)
            {
                V[i].push_back(V[i-1][j-1]+V[i-1][j]);
            }
            V[i].push_back(1);
        }
    }
    return V;
}

