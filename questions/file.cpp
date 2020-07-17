#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > generateMatrix(int A) {

    vector<vector<int>> V(A,vector<int> (A));
    int i=0,j=0,dir=0,k=0,c=1;
    int x=A-1,y=A-1;
    while(i<=x&&j<=y)
    {
        if(dir==0)
        {
            for( k=j;k<=y;k++)
            {
                V[i][k]=c;
                c++;
            }
            i++;
        }
        else if(dir==1)
        {
            for( k=i;k<=x;k++)
            {
                V[k][y]=c;
                c++;
            }
            y--;
        }
        else if(dir==2)
        {
            for( k=y;k>=j;k--)
            {
                V[x][k]=c;
                c++;
            }
            x--;
        }
        else if(dir==3)
        {
            for( k=x;k>=i;k--)
            {
                V[k][j]=c;
                c++;
            }
            j++;
        }
       dir=(dir+1)%4; 
    }
    return V;
}
