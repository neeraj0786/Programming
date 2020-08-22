void Solution::rotate(vector<vector<int> > &A) {
    int xo =0 ,x =A.size() ,yo = 0 ,y=A[0].size();
    while(xo<x&&yo<y&&A.size()>1)
    {
            vector<int> v;
            for(int i = yo;i<y;i++) v.push_back(A[xo][i]);
            for(int i = xo+1;i<x;i++) v.push_back(A[i][y-1]);
            for(int i=y-2;i>=yo;i--) v.push_back(A[x-1][i]);
            for(int i=x-2;i>xo;i--)v.push_back(A[i][yo]);               
            
            int n= v.size(),c=0;
            for(int i = xo;i<x;i++)A[i][y-1]=v[c++];               
            for(int i=y-2;i>=yo;i--)A[x-1][i]=v[c++];               
            for(int i=x-2;i>=xo;i--) A[i][yo]=v[c++];               
            for(int i =yo+1;i<y-1;i++) A[xo][i]=v[c++]; 
            xo++,x--,yo++,y--;
        }
}
    
    


