int Solution::isPrime(int A) {
    int f=1;
    if(A==1)
    return 0;
    for(int i=2;i<=sqrt(A);i++)
    {
        if(A%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}

