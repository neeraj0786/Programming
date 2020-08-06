vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    vector<int> ans;
    int maxe=*max_element(A.begin(),A.begin()+B);
    ans.push_back(maxe);
    for(int i=B;i<A.size();i++)
    {
        int i1=i-B;
        if(A[i1]==maxe) maxe=*max_element(A.begin()+i1+1,A.begin()+i+1);
        maxe=max(maxe,A[i]);
        ans.push_back(maxe);
    }
    return ans;
}

