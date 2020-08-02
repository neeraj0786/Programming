int Solution::lengthOfLongestSubstring(string A) {
    unordered_map<int,int> v;
    int maxl=0;
    int i=-1,j=0;
    while(j<A.size())
    {
        
        if(v.find(A[j])==v.end())
        {
            v[A[j]]=j;
            maxl=max(maxl,j-i);
            j++;
        }
        else
        {
            i=max(i,v[A[j]]);
            maxl=max(maxl,j-i);
            v[A[j]]=j;
            j++;
        }
    }
    
    return maxl;
}
