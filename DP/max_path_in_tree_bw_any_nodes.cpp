int dfs(TreeNode *A,int &ans)
{
    if(!A) return 0;
    int l=dfs(A->left,ans),r=dfs(A->right,ans);
    ans=max({ans,l+r+A->val,l+A->val,r+A->val,A->val});
    return max({l+A->val,r+A->val,A->val});
}
int Solution::maxPathSum(TreeNode* A) {
   int ans=INT_MIN;
   dfs(A,ans);
   return ans;
}

