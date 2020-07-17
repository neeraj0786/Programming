#include<bits/stdc++.h>
using namespace std;
int lcsr(string x, string y, int m,int n)
{
    if(m==0||n==0)
    return 0;
    else if(x[m-1]==y[n-1])
    return lcsr(x,y,m-1,n-1);
    else
    {
        return max(lcsr(x,y,m-1,n),lcsr(x,y,m,n-1));
    }
    
}
void lcs(string x, string y, int m, int n)
{
    int L[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
            L[i][j] = 0;
            else if(x[i-1]==y[j-1])
            L[i][j] = 1+ L[i-1][j-1];
            else
            L[i][j] = max(L[i-1][j],L[i][j-1]);
            
        }
    }
    cout<<"\n LCS length \n"<<L[m][n];
    int index = L[m][n];
    int i=m,j=n;
    string lcs;
    while(i>0&&j>0)
    {
        if(x[i-1]==y[j-1])
        {
            lcs+=x[i-1];
            i--;
            j--;
            index--;
        }
        else if(L[i-1][j]>L[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
        


    }
    //reverse(lcs.begin(),lcs.end());
    cout<<"\n lcs string \n"<<lcs;
}
int main()
{
    string x,y;
    cout<<"\n Enter the strings 1 & 2 \n";
    cin>>x>>y;
    lcs(x,y,x.length(),y.length());
}