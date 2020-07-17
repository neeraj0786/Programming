#include<bits/stdc++.h>
using namespace std;
int ar[11][11]={false};
int sum =0;
int findMoves(int i,int j,int n)
{
    
    if(n>0)
    {  
       
        int c = 0;
        ar[i][j]=true; 
         if(i>1&&j>2&&!ar[i-1][j-2])
            {   ar[i-1][j-2] = true;
                c+=1 +findMoves(i-1,j-2,n-1);
            }
        if(i>2&&j>1&&!ar[i-2][j-1])
        {   ar[i-2][j-1] = true;
            c+=1 +findMoves(i-2,j-1,n-1);
        }
        if(i>1&&j<9&&!ar[i-1][j+2])
            {   ar[i-1][j+2] = true;
                c+=1 +findMoves(i-1,j+2,n-1);
            }
        if(i>2&&j<10&&!ar[i-2][j+1])
        {   ar[i-2][j+1] = true;
            c+=1 +findMoves(i-2,j+1,n-1);
        }
        if(i<10&&j>2&&!ar[i+1][j-2])
        {   ar[i+1][j-2] =true;
            c+=1 +findMoves(i+1,j-2,n-1);
        }
        if(i<9&&j>1&&!ar[i+2][j-1])
        {ar[i+2][j-1] = true;
            c+=1 +findMoves(i+2,j-1,n-1);
        }
        if(i<9&&j<10&&!ar[i+2][j+1])
        {   ar[i+2][j+1] = true;
            c+=1 +findMoves(i+2,j+1,n-1);
        }
        if(i<10&&j<9&&!ar[i+1][j+2])
        {   ar[i+1][j+2] = true;
            c+=1 +findMoves(i+1,j+2,n-1);
        }
        return c;
    }
    else
    return 0;
}
int main()
{
   int i,j,n;
   cin>>i>>j>>n;
   cout<<findMoves(i,j,n); 
}


