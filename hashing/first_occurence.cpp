int Solution::solve(vector<int> &A) {
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++)
    {
        if(mp.find(A[i])==mp.end()) mp[A[i]]=i;
        else mp[A[i]]++;
    }
    for(int i=0;i<A.size();i++)
    if(mp[A[i]]!=i) return A[i];
    return -1;
}
