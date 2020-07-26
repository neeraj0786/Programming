int Solution::solve(vector<vector<int> > &A) {
   auto SZ(A);
   int ans=0;
   for(int i=1;i<A.size();i++)
   {
       for(int j=1;j<A[0].size();j++)
       {
           if(A[i][j]) SZ[i][j]=min({SZ[i-1][j-1],SZ[i-1][j],SZ[i][j-1]})+1;
           else SZ[i][j]=0;
           ans=max(ans,SZ[i][j]);
       }
   }
   return ans*ans;
}

