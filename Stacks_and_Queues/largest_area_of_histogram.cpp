int Solution::largestRectangleArea(vector<int> &A){
    int n=A.size();
    vector<int> left_index(n,-1);
    vector<int> right_index(n,n);
    stack<int> s;
    s.push(0);
    for(int i=1;i<n;i++)
    {
        if(A[i]>A[s.top()]) left_index[i]=s.top(),s.push(i);
        else
        {
            while(!s.empty()&&A[i]<=A[s.top()]) s.pop();
            if(s.empty()) left_index[i]=-1;
            else left_index[i]=s.top();
            s.push(i);
        }
    }
    while(!s.empty()) s.pop(); 
    s.push(n-1);
    for(int i=n-2;i>=0;i--)
    {
        if(A[i]>A[s.top()]) right_index[i]=s.top(),s.push(i);
        else
        {
            while(!s.empty()&&A[i]<=A[s.top()]) s.pop();
            if(s.empty()) right_index[i]=n;
            else right_index[i]=s.top();
            s.push(i);   
        }
    }
   int maxa=0;
    for(int i=0;i<n;i++) maxa=max(maxa,(right_index[i]-left_index[i]-1)*A[i]);
    return maxa;
}

