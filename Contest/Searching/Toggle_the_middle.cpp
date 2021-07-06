
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    
	    int N;
	    cin>>N;
	    
	    if(N == 1){
	        cout<<"0"<<endl;
	    }else if(N == 0){
	        cout<<"1"<<endl;
	    }else{
	        int NumberOfBits = floor(log(N)/log(2)) + 1;
	        
	        if(!(NumberOfBits % 2)){
	            //shift the middle and middle -1 bit
	            int Middle = NumberOfBits/2;
	            int before_Middle = Middle - 1;
	            
	            N = (N ^ (1 << (Middle)));
	            N = (N ^ (1 << (before_Middle)));
	            
	            cout<<N<<endl;
	        }else{
	            //shift the middle bit only
	            int Middle = NumberOfBits/2;
	            N = (N ^ (1 << (Middle)));
	            cout<<N<<endl;
	        }
	    }
	}
	return 0;
}
