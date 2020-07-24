#include <bits/stdc++.h>
using namespace std;
string add(string s1,string s2)
{
    string res;
    int len=(s1.size()>s2.size()?s1.size():s2.size()),carr=0;
    for(int i=0;i<len;i++)
    {
        int t=carr;
        if(i<s1.size())t+=(s1[i]-'0');
        if(i<s2.size())t+=(s2[i]-'0');
        carr=t/10;
        res.push_back((t%10)+'0');
    }
    if(carr) res.push_back(carr+'0');
    return res;
    
}
string nthfib(int n)
{
    vector<string> v;
    v.push_back("0"),v.push_back("1");
    if(n<2) return v[n];
    for(int i=2;i<=n;i++)
    v.push_back(add(v[i-1],v[i-2]));
    reverse(v[n].begin(),v[n].end());
    return v[n];
}
int main()
{
    int n=10000;
    cout<<"\n"<<n<<"th fib number is "<<nthfib(n)<<"\n";
}