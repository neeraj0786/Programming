vector<int> Solution::plusOne(vector<int> &A) {
   int carry=1;
   for(int i=A.size()-1;i>=0;i--){
       A[i]+=carry;
       carry=A[i]/10;
       A[i]%=10;
       if(carry==0) break;
   }
   vector<int> B;
   if(carry!=0){
    B.push_back(carry);
   for(int i=0;i<A.size();i++) B.push_back(A[i]);}
   else
   {
      int i=0;
      for(i=0;i<A.size();){
          if(A[i]==0)i++;
          else break;
      }
      for(int j=i;j<A.size();j++) B.push_back(A[j]);
   }
   return B;
}

