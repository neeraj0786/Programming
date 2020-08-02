vector<int> Solution::equal(vector<int> &A) {
    vector<vector<int>> res;
    unordered_map<int,pair<int,int>> mp;
    for(int i=0;i<A.size()-1;i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            long long int sum=A[i]+A[j];
            pair<int,int> p={i,j};
            if(mp.find(sum)!=mp.end())
            {
                pair<int,int> x=mp[sum];
                if(x.first<p.first&&x.second!=p.first&&x.second!=p.second)
                res.push_back({x.first,x.second,p.first,p.second});
            }
            else
            mp[sum]=p;
        }
    }
    sort(res.begin(),res.end());
    return res[0];
}

