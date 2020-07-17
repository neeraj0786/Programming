double fmedian(vector<int> a, int n, vector<int> b,int m)
{
    int mini=0,maxi=n,i,j,median;
    
    while(maxi>=mini)
    {
        i =(maxi+mini)/2;
        j = ((n+m+1)/2)-i;
        if(j<0)
        {
            maxi=i-1;
            continue;
        }
        
        if(i>0&&j<m&&b[j]<a[i-1])
        maxi=i-1;
        
        else if(j>0&&i<n&&a[i]<b[j-1])
        mini=i+1;
        
        else
        {
            if(i==0)
            median =b[j-1];
            
            else if(j==0)
            median =a[i-1];
            
            else
            median = max(a[i-1],b[j-1]);
            break;
        }
    }
    if((n+m)%2==1)
    {
        return (double)median;
    }
    if(i==n)
    return (double)((median +b[j])/2.0);
    if(j==m)
    return (double)((median +a[i])/2.0);
    else
    return (double)((median +min(b[j],a[i]))/2.0);
}
double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    
    if(A.size()<B.size())
    return fmedian(A,A.size(),B,B.size());
    
    else
    return fmedian(B,B.size(),A,A.size());

}
