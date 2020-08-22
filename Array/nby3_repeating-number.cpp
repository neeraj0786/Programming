int Solution::repeatedNumber(const vector<int> &A) {
    int first =INT_MAX , second =INT_MAX;
    int count1=0 ,count2=0;
    
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==first)
        count1++;
        else if(A[i]==second)
        count2++;
        else if(count1==0)
        {
            first =A[i];
            count1++;
        }
        else if(count2==0)
        {
             second =A[i];
            count2++;
        }
        else
        {
            count1--;
            count2--;
            
        }
    }
    count1=0;
    count2=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==first)
        count1++;
        if(A[i]==second)
        count2++;
        
    }
    
    if(count1>A.size()/3)
    return first;
    if(count2>A.size()/3)
    return second;
    
    return -1;
}

