void reverseWords(char *s) {
    
    // Your code here
    int i = strlen(s)-1;


int j=i;
while(1)
{


    while(s[j] != '.' && j !=0 )
 {  
    j--;
 }
    if(j==0)
    {
      for(int k = j;k<=i;k++)
        {cout<<s[k];
        }
      break;
    }
    else{
          
        for(int k = j+1;k<=i;k++)
        {cout<<s[k];
        }
        cout<<".";
    }
    i=j-1;
    j=i;

}
}
