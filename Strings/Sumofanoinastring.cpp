int findSum(string str)
{
	
	// Your code here
	int sum=0;
	for(int i=0;i<str.length();i++){
	   if(isdigit(str[i]))
	   {
	    int j=i;
	    while(isdigit(str[j]))
	       j++;
	    sum+=atoi((str.substr(i,j-i+1)).c_str());
	    i=j;
	   }
	}
	return sum;     
	
}
