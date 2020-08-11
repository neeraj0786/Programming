int Solution::repeatedNumber(const vector<int> &A) {
    long long sum=0;
    for(int i=0;i<A.size();i++) sum+=A[i];
    return sum-((A.size()*(A.size()-1))/2);
}

