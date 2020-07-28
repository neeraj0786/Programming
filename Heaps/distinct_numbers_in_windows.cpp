vector<int> Solution::dNums(vector<int> &A, int B) {
    if(B==0) return A;
    if(B==1)
    {
        vector<int> X(A.size(),1);
        return X;
    }
    if(B>A.size())
    {
        vector<int> X;
        return X;
    }
    unordered_map<int,int> mp;
    for(int i=0;i<B;i++)
    mp[A[i]]++;
    if(B==A.size()) return {mp.size()};
    vector<int> res;
    res.push_back(mp.size());
    for(int i=B;i<A.size();i++)
    {
        if(mp[A[i-B]]<=1) mp.erase(mp.find(A[i-B]));
        else mp[A[i-B]]--;
        mp[A[i]]++;
        res.push_back(mp.size());    
    }
    return res;
}

