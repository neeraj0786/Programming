int Solution::adjacent(vector<vector<int> > &A) {
    vector<int> dp(A[0].size(),0);
    dp[0]=max(A[0][0],A[1][0]);
    if(A[0].size()<2) return dp[0];
    dp[1]=max(dp[0],max(A[0][1],A[1][1]));
    for(int i=2;i<A[0].size();i++)
        dp[i]=max(dp[i-1],max(A[0][i],A[1][i])+dp[i-2]);
    return dp[A[0].size()-1];
}

