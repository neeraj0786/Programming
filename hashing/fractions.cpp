#define ll long long int 
string Solution::fractionToDecimal(int a,int  b) {
    ll A=a;
    ll B=b;
    string f,t;
    t="";
    if(A<0&&B>0)
    {
        A=-A;
        f.push_back('-');
    }
    if(A>0&&B<0)
    {
        B=-B;
        f.push_back('-');
    }
    f+=to_string(A/B);
    ll rem=A%B;
    if(rem==0) return f;
    else f.push_back('.');
    unordered_map<ll,ll> mp;
    while(rem!=0&&(mp.find(rem)==mp.end()))
    {
        mp[rem]=t.length();
        rem*=10;
        t+=to_string(rem/B);
        rem=rem%B;
    }
    if(rem==0) f+=t;
    else
    {
        string w="("+t.substr(mp[rem])+")";
        if(mp[rem]>0) w=t.substr(0,mp[rem])+w;
        f+=w;
    }
    return f;
}

