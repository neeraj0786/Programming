bool dfs(string A,int ind,vector<int> &dp,unordered_map<string,int> &dict,int ms)
{
    if(A.size()==ind) return true;
    if(dp[ind]!=-1) return (bool)dp[ind];
    bool flag=false;
    string s="";
    for(int i=ind;i<A.size();i++){
        s+=A[i];
        if(s.size()>ms) break;
        if(dict[s]) flag|=dfs(A,i+1,dp,dict,ms);}
    return dp[ind]=flag;
}
int Solution::wordBreak(string A, vector<string> &B) {
    unordered_map<string,int> dict;
    vector<int> dp(A.size()+1,-1);
    int ms=0;
    for(auto x: B) ms=max(ms,(int)x.size()),dict[x]++;
    return (int)dfs(A,0,dp,dict,ms);
}

