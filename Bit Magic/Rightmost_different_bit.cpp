int posOfRightMostDiffBit(int m, int n)
{
    
    int s =m^n;
    return ffs(s);
    
    
}
