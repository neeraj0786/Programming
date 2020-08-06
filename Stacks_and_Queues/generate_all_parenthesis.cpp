int Solution::isValid(string A) {
    stack<int> s;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='{'||A[i]=='('||A[i]=='[') s.push(A[i]);
        else if(A[i]=='}'||A[i]==')'||A[i]==']')
        {
            if(s.size()==0) return 0;
            else
            {
                char c=s.top();
                if((A[i]==')'&&c=='(')||(A[i]=='}'&&c=='{')||(A[i]==']'&&c=='[')) s.pop();
                else return 0;
            }
        }
        else return 0;
    }
    if(s.size()==0) return 1;
    else return 0;
}

