int Solution::fibsum(int A) {
    vector<int> v={1,2};
    while(v.back()<=A)
    v.push_back(v[v.size()-1]+v[v.size()-2]);
    int c=0;
    while(A>0)
    {
        int index = (lower_bound(v.begin(),v.end(),A)-v.begin());
        c++;
        if(v[index]==A) A=0;
        else A-=v[index-1];
    }
    return c;
}

