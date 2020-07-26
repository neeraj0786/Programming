

    bool is_palindrome(string& s, int left, int right) {
        while (left < right && s[left] == s[right])
            left++, right--;
        return left >= right;
    }
    int dfs(string A,int i,vector<int> &dp)
    {
        if(i==A.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int res=INT_MAX;
        for(int j=i;j<A.size();j++)
            if(is_palindrome(A,i,j)) res=min(res,1+dfs(A,j+1,dp));
        return dp[i]=res;
    }
    int Solution::minCut(string A) {
        vector<int> dp(A.size()+1,-1);
        return dfs(A,0,dp)-1;
    }


