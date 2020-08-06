int Solution::trap(const vector<int> &A) {
    int n=A.size();
    vector<int> gl(n,-1);
    vector<int> gr(n,-1);
    long long int maxe=A[0];
    for(int i=1;i<n;i++){
        if(A[i]<maxe) gl[i]=maxe;
        else maxe=A[i];
    }
    maxe=A[n-1];
    for(int i=n-2;i>=0;i--){
        if(A[i]<maxe) gr[i]=maxe;
        else maxe=A[i];
    }
    maxe=0;
    for(int i=0;i<n;i++) if(gl[i]!=-1&&gr[i]!=-1)maxe+=(min(gr[i],gl[i])-A[i]+0LL);
    return maxe;
}

