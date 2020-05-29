#include<bits/stdc++.h>

using namespace std;

long long int NearestPerfectSquare(long long int N){
	
	long long int abovenumBER = ceil(sqrt(N+1)) * ceil(sqrt(N+1));
	long long int belownumBER = floor(sqrt(N-1)) * floor(sqrt(N-1));
	
	long long int difference_1 = N - abovenumBER;
	long long int difference_2 = belownumBER - N;
	
	if(difference_1 == difference_2){
		return belownumBER;
	}else if(difference_1 > difference_2){
		return abovenumBER;
	}else{
		return belownumBER;
	}
}


int main(){
	
	int T;
	cin>>T;
	while(T--){
		long long int N;
		cin>>N;
		cout<<NearestPerfectSquare(N)<<endl;
	}
	
	return 0;
}
