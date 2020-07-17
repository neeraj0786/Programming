#include<bits/stdc++.h>
using namespace std;
int bc(int n,int k)
{
    if(k==0||k==n)
    return 1;
    else
    {
        return bc(n-1,k-1) +bc(n-1,k);
    }
    
}
int bc1(int n, int k)
{
    int C[n+1][k+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,k);j++)
        {
            if(j==0||j==i)
            C[i][j] = 1;

            else
            {
                C[i][j] = C[i-1][j-1]+C[i-1][j];
            }
            
        }

    }
    return C[n][k];
}
int bc2(int n,int k)
{
    int C[k+1];
    memset(C,0,sizeof(C));
    C[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=min(i,k);j>0;j--)
        {
            C[j] = C[j]+C[j-1];
        }
    }
    return C[k];
}

int main()
{
    cout<<bc(5,2);
    cout<<bc1(5,2);
    cout<<bc2(5,2);
}