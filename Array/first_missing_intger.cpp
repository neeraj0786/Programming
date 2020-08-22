int Solution::firstMissingPositive(vector<int> &A) {
    
    if(A.size()==1)
    {
        if(A[0]<=0)
        return 1;
        if(A[0]>1)
        return 1;
        else
        return 2;
        
    }
    int j=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<=0)
        {
        swap(A[i],A[j]);
        j++;
        }
    }
   int n= A.size();
   
    for(int i=j;i<n;i++)
    {
        if(abs(A[i])-1+j<n&&A[abs(A[i])-1+j]>0)
        A[abs(A[i])-1+j]=-A[abs(A[i])-1+j];
    }
    
    for(int i=j;i<n;i++)
    {
        if(A[i]>0)
        return i-j+1;
    }
    return n-j+1;
}

