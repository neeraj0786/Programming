int Solution::solve(int A, vector<int> &B) {
    if(A<3) return 0;
    long long tsum=0,reqs=0;
    vector<long long > prefix(A,0);
    for(int i=0;i<A;i++) tsum+=B[i],prefix[i]=tsum;
    if(tsum%3!=0) return 0;
    reqs=tsum/3;
    vector<long> count(A,0);
    long long sum=0;
    sum+=B[A-1];
    if(sum==reqs) count[A-1]=1;
    for(int i=A-2;i>=0;i--)
    {
        sum+=B[i];
        if(sum==reqs) count[i]=count[i+1]+1;
        else count[i]=count[i+1];
    }
    int ways=0;
    for(int i=0;i<A-2;i++) if(prefix[i]==reqs) ways+=count[i+2];
    return ways;
}

