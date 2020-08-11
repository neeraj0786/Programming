int Solution::solve(vector<string> &A) {

    float a=stof(A[0]),b=stof(A[1]),c=stof(A[2]);
    
    
    for(int i=3;i<A.size();i++)
    {
        if(a+b+c<2&&a+b+c>1)
        return 1;
        else if(a+b+c>=2)
        {
            if(a>=b&&a>=c)
            a=stof(A[i]);
            else if(b>=a&&b>=c)
            b=stof(A[i]);
            else
            c=stof(A[i]);
        }
        else
        {
            if(a<=b&&a<=c)
            a=stof(A[i]);
            else if(b<=a&&b<=c)
            b=stof(A[i]);
            else
            c=stof(A[i]);   
        }
        
    }
    if(a+b+c<2&&a+b+c>1)
        return 1;
    else
        return 0;

}


