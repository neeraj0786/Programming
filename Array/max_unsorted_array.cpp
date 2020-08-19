vector<int> Solution::subUnsort(vector<int> &A) {
    
    int s=0,e=0,maxe=INT_MIN,mine=INT_MAX,i;
    vector<int> c;
    
    for( i=0;i<A.size()-1;i++)
    {
        if(A[i]>A[i+1])
        {
            s=i;
            break;
        }
    }
    if(i==A.size()-1)
    {
        c.push_back(-1);
        return c;
    }
    for( i=A.size()-1;i>0;i--)
    {
        if(A[i]<A[i-1])
        {
            e=i;
            break;
        }
    }
    maxe = *max_element(A.begin()+s,A.begin()+e+1);
    mine = *min_element(A.begin()+s,A.begin()+e+1);
    
    for(i=0;i<s;i++)
    {
        if(A[i]>mine)
        {
            s=i;
            break;
        }
    }
    for( i=A.size()-1;i>e;i--)
    {
        if(A[i]<maxe)
        {
            e=i;
            break;
        }
    }
    c.push_back(s);
    c.push_back(e);
    return c;
}

