#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > prettyPrint(int A) {
    vector<vector<int>> v(2*A-1 , vector<int> (2*A-1,0));
    int c=0;
    int xo=0 , xn = 2*A-2 , yo=0 ,yn =2*A-2,dir=0;
    while(xo<=xn)
    {
        if(dir==0)
        {
            for(int i= yo;i<=yn;i++)
            {
                v[xo][i]=A;
                c++;
            }
            xo++;
        }
        else if(dir==1)
        {
            for(int i=xo;i<=xn;i++)
            {
                v[i][yn]=A;
                c++;
            }
            yn--;
        }
        else if(dir==2)
        {
            for(int i=yn;i>=yo;i--)
            {
                v[xn][i]=A;
                c++;
            }
            xn--;
        }
        else if(dir==3)
        {
            for(int i=xn;i>=xo;i--)
            {
                v[i][yo]=A;
                c++;
            }
            yo++;
        }
        dir=(dir+1)%4;
        if(c==8*(A-1))
        {
            A--;
            c=0;
        }
    }
    return v;
}
int main()
{
    vector<vector<int>> v = prettyPrint(1000);
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}