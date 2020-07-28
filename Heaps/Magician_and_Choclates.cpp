int Solution::nchoc(int A, vector<int> &B) {
    long long sum=0;
    priority_queue<double> pq;
    for(auto x: B)pq.push(x+0.0);
    while((A--)&&!pq.empty())
    {
       double s=pq.top();
       pq.pop();
       sum+=((int)s);
       s/=2.0;
       if(s>0.0) pq.push(s);
    }
    return sum%(1000000007);
}

