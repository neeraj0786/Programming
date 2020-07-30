int Solution::solve(vector<int> &A, int B, int C) {
    unordered_map<int,int> mp;
    int sum=0,ans=0;
    mp[0]=1;
    for(int i=0;i<A.size();i++)
    {
      if(A[i]==B) sum++;
      if(A[i]==C) sum--;
      if(mp[sum]) ans+=mp[sum];
      mp[sum]++;
    }
    return ans;
}

