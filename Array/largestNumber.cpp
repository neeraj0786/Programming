bool cmp(int x,int y)
{
    string c=to_string(x),d=to_string(y);
    if(stoll(c+d)>stoll(d+c)) return 1;
    else return 0;
}
string Solution::largestNumber(const vector<int> &A) {
    if(A.size()==0) return "";
    vector<int> B(A);
    sort(B.begin(),B.end(),cmp);
    string res;
    for(int i=0;i<B.size();i++) res+=to_string(B[i]);
    int i=0;
    for(i=0;i<res.size();i++) if(res[i]!='0') break;
    if(A.size()>0&&i>=A.size()) return "0";
    return res.substr(i);
}


