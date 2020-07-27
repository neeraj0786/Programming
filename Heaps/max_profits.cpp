int Solution::solve(vector<int> &A, int B) {
    priority_queue<int> pq;
    for(auto x: A) pq.push(x);
    int profit=0;
    while(B&&!pq.empty())
    {
        profit+=pq.top();
        B--;
        int v=pq.top();
        pq.pop();
        v--;
        if(v) pq.push(v);
    }
    return profit;
}

