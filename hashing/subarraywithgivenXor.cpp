int Solution::solve(vector<int> &A, int B) {
    int ans=0,curr=0;
    unordered_map<int,int> mp;
    mp[0]=1;
    for(auto x: A)
    {
        curr^=x;
        if(mp[B^curr]) ans+=mp[B^curr];
        mp[curr]++;
    }
    return ans;
}

