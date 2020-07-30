int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> mp;
    mp[0]=1;
    int sum=0,ans=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]%2) sum++;
        if(mp[sum-B]) ans+=mp[sum-B];
        mp[sum]++;
    }
    return ans;
    
}

