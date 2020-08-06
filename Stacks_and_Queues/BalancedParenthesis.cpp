int Solution::solve(string A) {
    int c=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==')'&&c==0) return 0;
        else if(A[i]==')'&&c>0) c--;
        else c++;
    }
    if(c) return 0;
    else return 1;
}

