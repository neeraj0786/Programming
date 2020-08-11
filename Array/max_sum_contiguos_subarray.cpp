int Solution::maxSubArray(const vector<int> &A) {
    int max_so_far=0,max_int=0;
    if(A.size()==1)
    return A[0];
    for(int i=0;i<A.size();i++)
    {
       max_int +=A[i];
       if(max_int<0) max_int =0;
       else max_so_far=max(max_int,max_so_far);
    }
    if(max_so_far==0&&A.size()>1) return *max_element(A.begin(),A.end());
    return max_so_far;
}

