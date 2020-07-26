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
    string a,b,c;
    a="0",b="1";
    if(n<2) ;
    for(int i=2;i<=n;i++)
    c=add(a,b),a=b,b=c;
    reverse(c.begin(),c.end());
    return c;
}
int main()
{
    int n=100;
    string s=nthfib(100);
    cout<< s.back()<<" "<<s;
}