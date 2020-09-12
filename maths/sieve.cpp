vector<int> Solution::sieve(int A) {
    vector<bool> primes(A+1,true);
    primes[0]=false;
    primes[1]=false;
    
    for(int i=2;i<=sqrt(A);i++)
    {
        if(primes[i])
        {
            for(int j=2;i*j<=A;j++)
            {
                primes[i*j]=false;
            }
        }
    }
    vector<int> c;
    for(int i=0;i<=A;i++)
    {
        if(primes[i])
        c.push_back(i);
    }
    return c;
}

