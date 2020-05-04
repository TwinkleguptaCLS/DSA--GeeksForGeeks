long long factorial (int N)
{
    //Your code here
    {
    if(N > 1)
        return N * factorial(N - 1);
    else
        return 1;
}    
}
