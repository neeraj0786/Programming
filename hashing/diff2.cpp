int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map<long long int,int> v;
    for(int i=0;i<A.size();i++)
    {
        if(v.find(A[i]+B)!=v.end()||v.find(A[i]-B)!=v.end()) return 1;
        else v[A[i]]=i;
    }
    return 0;
}

