void computeLPSArray(string pat, int M, int* lps) 
{ 
	int len=0;
	
	lps[0]=0;
	
	int i=1;
	
	while(i<M)
	{
	    if(pat[len]==pat[i])
	    {
	        len++;
	        
	        lps[i]=len;
	        
	        i++;
	    }
	    else 
	    {
	        if(len!=0)
	        {
	            len=lps[len-1];
	        }
	        else
	        {
	            lps[i]=len;
                i++;	            
	        }
	    }
	}
} 
// Returns true if pat found in txt
bool KMPSearch(string pat, string txt) {
    
    int N=txt.length();
    int M=pat.length();
    
    int lps[M];
    
    computeLPSArray(pat,M,lps);
    
    int i=0;
    int j=0;
    
    while(i<N)
    {
        if(pat[j]==txt[i])
        {
            i++;
            j++;
            
        }
        if(j==M)
            return true;
        else if(i<N && pat[j]!=txt[i])
        {
            if(j!=0)
            {
                j=lps[j-1];
            }
            else
            {
                i++;
            }
        }
    }
    
    return false;
}
