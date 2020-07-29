vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int,int> v;
    for(int i=0;i<A.size();i++){
        if(v[B-A[i]]) return {v[B-A[i]],i+1};
        if(!v[A[i]]) v[A[i]]=i+1; }
    return {};
}

