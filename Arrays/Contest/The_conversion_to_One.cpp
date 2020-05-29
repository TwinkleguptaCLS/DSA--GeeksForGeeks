
#include<bits/stdc++.h>

using namespace std;

int CountWays(int N){
	
	if(N == 1){
		return 0;
	}
	
	else if(N%2 == 0){
		return 1 + CountWays(N/2);
	}else{
		return 1 + min(CountWays(N-1),CountWays(N+1));
	}
	
	
}

int main(){
	
	int T;
	cin>>T;
	
	while(T--){
		int N;
		cin>>N;
		cout<<CountWays(N)<<endl;
	}
}
