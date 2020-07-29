int Solution::colorful(int A) {
    if(A<10) return 1;
    vector<int> inp;
    while(A)
    {
        inp.push_back(A%10);
        A/=10;
    }
    unordered_set<int> st;
    for(int i=0;i<inp.size();i++)
    {
        int p=inp[i];
        if(st.find(p)==st.end()) st.insert(p);
        else return 0;
        for(int j=i+1;j<inp.size();j++)
        {
            p*=inp[j];
            if(st.find(p)==st.end()) st.insert(p);
            else return 0;
        }
    }
    return 1;
}
