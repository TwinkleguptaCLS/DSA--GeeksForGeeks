#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int c;
	int t;
	cin>>t;
	while(t--){
	    string s;
    	cin>>s;
    	for(int i=0; i<s.length(); i++){
    	    c = int(s[i]);
    	    if(c>=97 && c<=99)
        	    cout<<2;
    	    else if(c>=100 && c<=102)
    	        cout<<3;
    	    else if(c>=103 && c<=105)
    	        cout<<4;
    	    else if(c>=106 && c<=108)
    	        cout<<5;
    	    else if(c>=109 && c<=111)
    	        cout<<6;
    	    else if(c>=112 && c<=115)
    	        cout<<7;
    	    else if(c>=116 && c<=118)
    	        cout<<8;
    	    else if(c>=119 && c<=122)
    	        cout<<9;
	    }
	    cout<<endl;
	}
	
	
	return 0;
}
