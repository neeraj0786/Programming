void dfs(string A,string prev,vector<string> &dict,vector<string> &res)
{
    if(A.size()==0) 
    {
        res.push_back(prev);
        return ;
    }
    for(int i=0;i<A.size();i++)
    {
        string prev_sub=A.substr(0,i+1);
        if(find(dict.begin(),dict.end(),prev_sub)!=dict.end())
        {
            if(prev.size()) prev_sub=prev+" "+prev_sub;
            dfs(A.substr(i+1),prev_sub,dict,res);
        }
    }
}
vector<string> Solution::wordBreak(string A, vector<string> &B) {
    vector<string> res;
    dfs(A,"",B,res);
    return res;
}
