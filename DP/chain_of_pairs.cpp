int Solution::solve(vector<vector<int> > &A) {
    vector<int> lis(A.size(),1);
    for(int i=1;i<A.size();i++)
        for(int j=0;j<i;j++)
            if(A[j][1]<A[i][0]&&lis[j]+1>lis[i]) lis[i]=lis[j]+1 ;
    return *max_element(lis.begin(),lis.end());
}
