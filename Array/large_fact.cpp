string multiply(string A,string B)
{
    int l1=A.size(),l2=B.size();
    string res(l1+l2,'0');
    for(int i=l1-1;i>=0;i--){
        for(int j=l2-1;j>=0;j--){
            int p=((A[i]-'0')*(B[j]-'0'))+(res[i+j+1]-'0');
            res[i+j+1]=p%10+'0';
            res[i+j]+=p/10;
        }
    }
    for(int i=0;i<res.size();i++) if(res[i]!='0') return res.substr(i);
    return "0";
}
string Solution::solve(int A) {
    string tmp="1";
    for(int i=2;i<=A;i++) tmp=multiply(to_string(i),tmp);
    return tmp;
}

