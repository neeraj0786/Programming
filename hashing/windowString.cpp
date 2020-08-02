string Solution::minWindow(string A, string B) {
    int pat[256]={0};
    int txt[256]={0};
    int count=B.size();
    for(int i=0;i<B.size();i++)
    pat[B[i]]++;
    int start=0,l=INT_MAX,sf=0,ef=0;
    for(int i=0;i<A.size();i++)
    {
        txt[A[i]]++;
        if(pat[A[i]]>0&&pat[A[i]]>=txt[A[i]])
        {
            count--;
        }
        if(count==0)
        {
            for(int k=start;k<A.size();k++)
            {
                if(txt[A[k]]>pat[A[k]]||(pat[A[k]]==0))
                {
                    if(txt[A[k]]>pat[A[k]])
                    txt[A[k]]--;
                    start++;
                }
                else
                break;
            }
            if((i-start+1)<l)
            {
                l=i-start+1;
                sf=start;
                ef=i;
            }
            if((ef-sf+1)==B.size())
            break;
        }
    }
    if(l!=INT_MAX)
    {
        return A.substr(sf,ef+1-sf);
    }
    return "";
}

