vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int> s;
    vector<int> left_index(A.size(),-1);
    s.push(0);
    for(int i=1;i<A.size();i++)
    {
        if(A[i]>A[s.top()]) left_index[i]=A[s.top()],s.push(i);
        else
        {
            while(!s.empty()&&A[i]<=A[s.top()]) s.pop();
            if(s.empty()) left_index[i]=-1;
            else left_index[i]=A[s.top()];
            s.push(i);
        }
    }
    return left_index;
}

