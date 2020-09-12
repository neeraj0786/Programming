int Solution::titleToNumber(string A) {
    long long int ans=0;
    for(int i=A.length()-1;i>=0;i--)
    {
        int c =A[i]-64 ;
        ans+=(c)*pow(26,A.length()-1-i);
    }
    return ans;
}

