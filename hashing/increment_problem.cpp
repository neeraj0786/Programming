vector<int> Solution::solve(vector<int> &A) {
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++)
    {
        if(mp.find(A[i])==mp.end()) mp[A[i]]=i;
        else 
        {
            A[mp[A[i]]]++;
            if(mp.find(A[i]+1)==mp.end()) mp[A[i]+1]=mp[A[i]];
            else mp[A[i]+1]=min(mp[A[i]+1],mp[A[i]]);
            mp[A[i]]=i;
        }
    }
    return A;
}

