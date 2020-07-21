int Solution::solve(string A, string B, vector<string> &C) {
    unordered_set<string> dict;
    for(auto x : C) dict.insert(x);
    dict.insert(A);
    dict.insert(B);
    queue<string> q;
    q.push(A);
    int c=1;
    while(!q.empty())
    {
        int x=q.size();
        while(x--)
        {
            string node=q.front();
            q.pop();
            for(int i=0;i<node.length();i++)
            {
                for(int j=0;j<26;j++)
                {
                    string t=node;
                    t[i]='a'+j;
                    if(t==B) return c+1;
                    if(dict.find(t)!=dict.end()) q.push(t),dict.erase(dict.find(t));
                }
            }
        }
        c++;
    }
    return -1;
}

