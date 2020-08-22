vector<int> Solution::findPerm(const string A, int B) {
    int l=1;
    vector<int> v;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='I') v.push_back(l++);
        else v.push_back(B--);
    }
    v.push_back(l);
    return v;
}

