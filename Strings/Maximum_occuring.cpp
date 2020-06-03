char getMaxOccuringChar(char* str)
{
    // Your code here
    int count[256]={0};
    int i;
    int max=INT_MIN;
    int c;
    i=0;
    while(str[i]!='\0')
    {
        count[str[i]]++;
        i++;
    }
    for(int j=0;j<256;j++)
    {
        if(count[j]>max)
        {
            max=count[j];
            c=j;
        }
    }
    
    return char(c);
}
