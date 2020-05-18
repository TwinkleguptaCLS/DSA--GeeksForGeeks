int maxConsecutiveOnes(int x)
{
 
    int count =0;
    while(x!=0)
    {
        x=x& (x<<1);
        count++;
    }
    return count;
    
}
