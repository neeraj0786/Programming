int Solution::maxSpecialProduct(vector<int> &A) {
    long int n =A.size();
    if(n<=3) return 0;
    vector<long int> left_index(n,0);
    vector<long int> right_index(n,0);
    stack<long int> s;
    s.push(n-1+0LL);
    for(int i=n-2;i>=0;i--)
    {
        if(A[s.top()]>A[i]) right_index[i]=s.top(),s.push(i);
        else
        {
            while(!s.empty()&&(A[s.top()]<=A[i])) s.pop();
            if(s.empty()) right_index[i]=0;
            else right_index[i]=s.top();
            s.push(i);
        }
    }
    while(!s.empty()) s.pop();
    s.push(0+0LL);
    for(int i=1;i<n;i++)
    {
        if(A[s.top()]>A[i]) left_index[i]=s.top(),s.push(i);
        else
        {
            while(!s.empty()&&(A[s.top()]<=A[i])) s.pop();
            if(s.empty()) left_index[i]=0;
            else left_index[i]=s.top();
            s.push(i);
        }
    }
    long long ans=0;
    for(long int i=0;i<n;i++) ans=max(ans,((long long int)left_index[i]*1LL*(long long int)right_index[i]));
    return ans%((1000000007));
}

