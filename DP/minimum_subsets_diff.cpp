int Solution::solve(vector<int> &A) {
    int total=0,sum=0;
    for(auto x: A) sum+=x;
    total=sum,sum/=2;
    vector<vector<bool>> dp(A.size()+1,vector<bool>(sum+1,false));
    for(int i=0;i<=A.size();i++) dp[i][0]=true;
    for(int i=1;i<=A.size();i++)
    {
        for(int j=1;j<=sum;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=A[i-1])dp[i][j]=dp[i][j]||dp[i-1][j-A[i-1]];
        }
    }
    for(int i=sum;i>=0;i--)
    if(dp[A.size()][i]) return total-2*i;
    return 0;
}

