int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int p=-1;
    for(int i=0;i<A.size();i++)
    {
        if(i!=A.size()-1){
        if(A[i]==(A.size()-i-1)&&A[i]!=A[i+1])
        {
            p=1;
            //cout<<A[i]<<"  "<<A.size()-i-1;
            break;
        }
        }
        else
        {
         if(A[i]==(A.size()-i-1))
        {
            p=1;
            //cout<<A[i]<<"  "<<A.size()-i-1;
            break;
        }   
        }
        
    }
    return p;
}

