int Solution::solve(vector<vector<int> > &A) {
   for(int i=A.size()-2;i>=0;i--)
    for(int j=0;j<=i;j++)
      A[i][j]+=(max(A[i+1][j+1],A[i+1][j]));
   return A[0][0];
}

