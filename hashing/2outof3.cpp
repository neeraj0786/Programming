vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    unordered_map<int,int> mp;
    vector<int> res;
    for(int i=0;i<A.size();i++) if(mp.find(A[i])==mp.end()) mp[A[i]]=1;
    for(int i=0;i<B.size();i++)
    {
        if(mp.find(B[i])==mp.end()) mp[B[i]]=2;
        else if(mp[B[i]]!=2&&mp[B[i]]!=-1) res.push_back(B[i]),mp[B[i]]=-1;
    }
    for(int i=0;i<C.size();i++)
    {
        if(mp.find(C[i])==mp.end()) mp[C[i]]=3;
        else if(mp[C[i]]!=3&&mp[C[i]]!=-1) res.push_back(C[i]),mp[C[i]]=-1;
    }
    sort(res.begin(),res.end());
    return res;
}

