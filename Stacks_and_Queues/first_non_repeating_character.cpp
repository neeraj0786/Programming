#include<bits/stdc++.h>
string Solution::solve(string A) {
    list<char> l;
    unordered_map<char,int> mp;
    string res="";
    for(int i=0;i<A.size();)
    {
        mp[A[i]]++;
        if(mp[A[i]]<=1)
        {
            if(l.empty()) res.push_back(A[i]);
            else res.push_back(l.front());
            l.push_back(A[i]);
            i++;
        }
        else
        {
            if(l.empty()) res.push_back('#'),i++;
            else if(mp[l.front()]<=1) res.push_back(l.front()),i++;
            else l.pop_front();
        }
    }
    return res;
}

