

    string Solution::simplifyPath(string A) {
        stack<string> st;
        if(A[0]!='/') A="/"+A;
        for(int i=0;i<A.size();)
        {
            string bw="";
            if(A[i]=='/')
            {
                i++;
                while(A[i]!='/'&&i<A.size()) bw.push_back(A[i]),i++;
            }
            if(bw=="..") {if(!st.empty()) st.pop();}
            else if(bw=="."||bw=="") continue;
            else st.push(bw);
        }
        if(st.empty()) return "/";
        string res="";
        while(!st.empty()) res="/"+st.top()+res,st.pop();
        return res;
    }
