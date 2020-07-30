int Solution::solve(vector<int> &A, int B) {
    unordered_set<int> mp;
    int n=0;
    for(int i=0;i<A.size();i++)
    {
        if(mp.find(B^A[i])!=mp.end()) n++;
        mp.insert(A[i]);
    }
    return n;
}

