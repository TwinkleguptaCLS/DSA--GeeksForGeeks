bool isPrime(int N)
{
    if(N<=1) return false;
    for(int i=2;i<N;i++)
        if(N%i==0)
            return false;
        return true;
}
