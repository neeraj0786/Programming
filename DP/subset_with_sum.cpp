bool rec(int n,int W,vector<int> &A,vector<vector<int>> &dp)
{
    if(W==0) return true;
    if(n==0&&W!=0) return false;
    if(dp[n][W]!=-1) return (bool)dp[n][W];
    if(A[n-1]>W) dp[n][W]=(int)rec(n-1,W,A,dp);
    else dp[n][W]=(int)(rec(n-1,W,A,dp)||rec(n-1,W-A[n-1],A,dp));
    return (bool)dp[n][W];
}
int Solution::solve(vector<int> &A, int B) {
    vector<vector<int>> dp(A.size()+1,vector<int>(B+1,-1));
    return rec(A.size(),B,A,dp);
}

