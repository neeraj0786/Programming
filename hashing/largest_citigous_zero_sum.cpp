vector<int> Solution::lszero(vector<int> &A) {
   unordered_map<int,int> v;
   int maxl=0,l=-1,r=-1,sum=0;
   for(int i=0;i<A.size();i++)
   {
       sum+=A[i];
       if(v.find(sum)==v.end())
       v[sum]=i;
       else{
           if(maxl<(i-v[sum]))
           {
               l=v[sum]+1;
               r=i;
               maxl=r-l+1;
           }
       }
       if(sum==0)
       {
           if(maxl<i+1)
           {
               l=0;
               r=i;
               maxl=i+1;
           }
       }
   }
   vector<int> re;
   if(l!=-1&&r!=-1){
   for(int i=l;i<=r;i++)
   re.push_back(A[i]);
   }
   return re;
}

