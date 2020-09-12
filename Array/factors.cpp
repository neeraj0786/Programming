vector<int> Solution::allFactors(int A) {
    vector<int> a;
    vector<int> b;
    vector<int> c;
    
    for(int i=1;i<=sqrt(A);i++)
    {
        if(A%i==0)
        {
            a.push_back(i);
            if(i!=sqrt(A)) b.push_back(A/i);
        }
    }
    c.assign(a.begin(),a.end());
    for(int i=b.size()-1;i>=0;i--)
    {
        c.push_back(b[i]);
    }
    return c;
}

