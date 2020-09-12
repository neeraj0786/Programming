string Solution::convertToTitle(int A) {
    string s;
    while(A>0)
    {
        string t;
        t.push_back(((A-1)%26)+65);
        s=t+s;
        A=(A-1)/26;
    }
    return s;
}

