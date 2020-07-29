

    vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
        vector<vector<int>> res;
        sort(A.begin(),A.end());
        for(int i=0;i<A.size()-2;i++)
        {
            for(int j=i+1;j<A.size()-1;j++)
            {
                long long int sum=B-(A[i]+A[j]);
                int l=j+1,r=A.size()-1;
                while(l<r)
                {
                    if((sum-(A[l]+A[r]+0LL))==0)
                    {
                        res.push_back({A[i],A[j],A[l],A[r]});
                        do{l++;}while(A[l]==A[l-1]&&l<r);
                        do{r--;}while(A[r]==A[r+1]&&l<r);
                    }
                    else if(sum<(A[l]+A[r]+0LL))
                    r--;
                    else
                    l++;
                }
            }
        }
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }


