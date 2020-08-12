bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int,int> > V;
    int t=0,max_rooms=0;
    for(int i=0;i<arrive.size();i++)
    {
        V.push_back(make_pair(arrive[i],1));
        V.push_back(make_pair(depart[i],0));
    }
    sort(V.begin(),V.end());
    for(int i=0;i<V.size();i++)
    {
        if(V[i].second) t++;
        else t--;
        max_rooms=max(t,max_rooms);
        if(max_rooms>K) return false;
    }
    return true;
}

