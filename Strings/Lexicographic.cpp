int fact(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}

int findRank(string S) 
{
    int n=S.length();
    
    long long rank=0;
    
    for(int i=0;i<n-1;i++)
    {
        int count=0;
        
        for(int j=i+1;j<n;j++)
        {
            if(S[j]==S[i])
                return 0;
            if(S[j]<S[i])
                count++;
        }
        
        rank+=count*fact(n-i-1);
    }
    
    return (rank+1)%1000000007;
}
