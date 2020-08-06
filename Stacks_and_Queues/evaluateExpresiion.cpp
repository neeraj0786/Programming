bool isOperator(string A)
{
    if(A=="+"||A=="-"||A=="*"||A=="/") return true;
    else return false;
}
int Solution::evalRPN(vector<string> &A) {
    stack<long long > s;
    for(int i=0;i<A.size();i++)
    {
        if(isOperator(A[i]))
        {
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            if(A[i]=="+") s.push(x+y+0LL);
            else if(A[i]=="-") s.push(y-x);
            else if(A[i]=="*") s.push(y*x*1LL);
            else if(A[i]=="/") s.push(y/x);
        }
        else s.push(stoll(A[i]));
    }
    return s.top();
}

