int Solution::solve(vector<vector<int> > &A) {
    int dp[A.size()][3]; 
    dp[0][0]=A[0][0],dp[0][1]=A[0][1],dp[0][2]=A[0][2];
    for(int i=1;i<A.size();i++){
    dp[i][0]=A[i][0]+min(dp[i-1][1],dp[i-1][2]);
    dp[i][1]=A[i][1]+min(dp[i-1][0],dp[i-1][2]);
    dp[i][2]=A[i][2]+min(dp[i-1][1],dp[i-1][0]);}
    return min({dp[A.size()-1][0],dp[A.size()-1][1],dp[A.size()-1][2]});
}

