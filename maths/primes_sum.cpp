vector<int> Solution::primesum(int A) {

    vector<bool> primes(A + 1, true);
    primes[0]=false;
    primes[1]=false;
    
    for(int i=2;i<=sqrt(A);i++)
    {
        if(primes[i])
        {
            for(int j=2;j*i<=A;j++)
            primes[j*i]=false;
        }
    }
    vector<int> c;
    for(int i=2;i<=A;i++)
    {
        if(primes[i]&&primes[A-i])
        {
            c.push_back(i);
            c.push_back(A-i);
            return c;
        }
    }
    return c;
}

