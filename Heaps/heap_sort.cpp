#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int> &v,int n,int i)
{
    int largest=i,lc=2*i+1,rc=2*i+2;
    if(lc<n&& v[largest]<v[lc]) largest=lc;
    if(rc<n&& v[largest]<v[rc]) largest=rc;
    if(largest!=i) swap(v[largest],v[i]),heapify(v,n,largest);
}
void heapsort(vector<int> &v,int n)
{
    for(int i=n/2-1;i>=0;i--) heapify(v,n,i);
    for(int i=n-1;i>=0;i--) swap(v[0],v[i]),heapify(v,i,0);
}
int main()
{
    std::vector<int> v={5,4,3,2,1} ;
    heapsort(v,v.size());
    for(auto x : v) std::cout << x << std::endl;
}
