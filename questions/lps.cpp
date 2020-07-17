#include<bits/stdc++.h>
using namespace std;
int lps(string x, int i, int j)
{
    if(i==j)
    return 1;
    else if(x[i]==x[j]&&i+1==j)
    {
         return 2;
    }
    else if(x[i]==x[j])
    return 2+ lps(x,i+1,j-1);
    else
    {
        return max(lps(x,i+1,j),lps(x,i,j-1));
    }
    
    
    

}
int lpsr(string x)
{
    int n = x.length();
    int L[n][n];
    for(int i=0;i<n;i++)
    L[i][i] = 1; // one length strings

    for(int l=2;l<=n;l++) //l is length of substrings
    {
        for(int i=0;i<n-l+1;i++)
        {
            int j= i+l-1;
            if(x[i]==x[j]&&l==2)
            L[i][j] = 2;
            else if(x[i]==x[j])
            L[i][j] = 2+ L[i+1][j-1];
            else
            {
                L[i][j] = max(L[i+1][j],L[i][j-1]);
            }
            

        }
    }
    return L[0][n-1];

}
int main()
{
    string x;
    cout<<"\n Enter the string \n";
    cin>>x;
    cout<<lpsr(x);
}