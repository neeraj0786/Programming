#include <bits/stdc++.h>
using namespace std;
void sortK(vector<int> &v, int n, int k) 
{ 
    int ind=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<=k;i++) pq.push(v[i]);
    for(int i=k+1;i<n;i++)
    {
        v[ind++]=pq.top();
        pq.pop();
        pq.push(v[i]);
    }
    while(!pq.empty()) v[ind++]=pq.top(),pq.pop();
} 
