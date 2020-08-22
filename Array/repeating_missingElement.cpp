vector<int> Solution::repeatedNumber(const vector<int> &A) {
   long long int n = A.size();
   long long int s = (n)*(n+1)/2 ,sq = (n)*(n+1)*(2*n+1)/6 , r =0, m=0;
   for(int i=0;i<n;i++)
   {
       s-=(long long int)A[i];
       sq-=(long long int)A[i]*(long long int)A[i];
   }
   vector<int> c;
   c.push_back(((sq/s)-s)/2);
   c.push_back(((sq/s)+s)/2);
   return c;
}

