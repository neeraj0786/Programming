vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<string,vector<int>> v;
    for(int i=0;i<A.size();i++)
    {
        string s=A[i];
        sort(s.begin(),s.end());
        v[s].push_back(i+1);
    }
    vector<vector<int>> res;
    for(auto i : v)
    res.push_back(i.second);
    return res;
}

