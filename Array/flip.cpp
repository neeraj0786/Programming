vector<int> Solution::flip(string A) {
    int max_so_far =0 ,max_int=0 , start =0 , temp_start=0 , end =0, c=0;
    vector<int> v;
    for(int i=0;i<A.length();i++){
        if(A[i]=='0') max_int+=1;
        if(A[i]=='1') max_int-=1,c++;
        if(max_int<0){
            max_int=0;
            temp_start=i+1;
        }
        if(max_so_far<max_int){
            max_so_far=max_int;
            start=temp_start;
            end=i;
        }
    }
    if(c==A.length()) return v;
    else
    {
        v.push_back(start+1);
        v.push_back(end+1);
        return v;
    }
}

