int rec(int ind,int W,vector<int> &A, vector<int> &B,vector<vector<int>> &dp)
{
    if(ind<0) return 0;
    if(dp[ind][W]!=-1) return dp[ind][W];
    if(B[ind]>W) dp[ind][W]=rec(ind-1,W,A,B,dp);
    else dp[ind][W]=max(A[ind]+rec(ind-1,W-B[ind],A,B,dp),rec(ind-1,W,A,B,dp));
    return dp[ind][W];
}
int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    vector<vector<int>> dp(A.size()+1,vector<int> (C+1,-1));
    return rec(A.size()-1,C,A,B,dp);
}

