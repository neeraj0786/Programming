#include<bits/stdc++.h>
using namespace std;
int knapsack(int W,int v[],int wt[],int n)
{
    if(n==0||W==0)
        return 0;
    if(wt[n-1]>W)
        return knapsack(W,v,wt,n-1);
    else
    {
      return max(v[n-1]+knapsack(W-wt[n-1],v,wt,n-1),knapsack(W,v,wt,n-1));  
    }
    
}
int knapsackdp(int W,int v[],int wt[],int n)
{
    int K[n+1][W+1];

    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(w==0||i==0)
            K[i][w] = 0;
            else if(wt[i-1]<=w)
            K[i][w] = max(v[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]);
            else
            K[i][w] = K[i-1][w];
        }
        
    }
    return K[n][W];
}
int main()
{
    int v[]={1 , 5 , 6 , 7 ,8};
    int wt[]= {5 , 6 , 7 , 8 ,10};
    cout<<knapsackdp(13,v,wt,5);
}
