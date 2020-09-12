vector<string> Solution::fizzBuzz(int A) {
    vector<string> c;
    for(int i=1;i<=A;i++)
    {
        if(i%3==0&&i%5==0)
        c.push_back("FizzBuzz");
        else if(i%3==0)
        c.push_back("Fizz");
        else if(i%5==0)
        c.push_back("Buzz");
        else
        {
            c.push_back(to_string(i));
        }
    }
    return c;
}

