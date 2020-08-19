vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> res;
    for(int k=0;k<A[0].size();k++)
    {
        vector<int> temp;
        int i=0,j=k;
        while(i>=0&&j>=0&&i<A.size()&&j<A[0].size())temp.push_back(A[i++][j--]);
        res.push_back(temp);
    }
    for(int k=1;k<A.size();k++)
    {
        vector<int> temp;
        int i=k,j=A.size()-1;
        while(i>=0&&j>=0&&i<A.size()&&j<A[0].size())temp.push_back(A[i++][j--]);
        res.push_back(temp);
    }
    return res;
}

