int Solution::solve(vector<int> &A) {
    vector<pair<int,int>> left(A.size()),right(A.size());
    int sume=0,sumo=0,count=0;
    for(int i=0;i<A.size();i++)
    {
        if(i%2==0) sume+=A[i];
        else sumo+=A[i];
        left[i]=(make_pair(sume,sumo));
    }
    sume=0,sumo=0;
    for(int i=A.size()-1;i>=0;i--)
    {
        if(i%2==0) sume+=A[i];
        else sumo+=A[i];
        right[i]=(make_pair(sume,sumo));
    }
    for(int i=0;i<A.size();i++)
    {
        int le=left[i].first,lo=left[i].second,re=right[i].first,ro=right[i].second;
        if(i%2==0) le-=A[i],re-=A[i];
        else ro-=A[i],lo-=A[i];
        if((le+ro)==(lo+re)) count++;
    }
    return count;
}

