

    vector<int> Solution::nextPermutation(vector<int> &A) {
        if(A.size()==1)
        return A;
        if(A.size()==2)
        {
            swap(A[0],A[1]);
            return A;
        }
        
        int sz = A.size()-1;
        int i = sz-1;
        int j = sz;
        
        while(i>=0&&A[i]>A[i+1])
        i--;
        
        if(i>=0)
        {
            while(j>=i&&A[j]<=A[i])
            j--;
            swap(A[i],A[j]);
        }
        reverse(begin(A)+i+1,end(A));
        return A;
    }


