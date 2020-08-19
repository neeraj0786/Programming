vector<int> Solution::getRow(int A) {
    vector<int> V;
    if(A==0) return {1};
    else
    {
        int n=1;
        for(int i=0;i<=A;i++)
        {
            V.push_back(n);
            n=n*(A-i)/(i+1);
        }
    }
    return V;
}

