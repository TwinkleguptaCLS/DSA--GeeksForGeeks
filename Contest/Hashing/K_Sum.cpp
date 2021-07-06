

int main() {
	//code
	int T;
	cin>>T;
	
	while(T--){
	  
	  int N,K;
	  cin>>N>>K;
	  int arr[N];
	  
	  for(int i=0; i<N; i++){
	      cin>>arr[i];
	  }
	  
	  sort(arr,arr + N);
	  
	  long long sum = 0;
	  for(int i=0; i<K ;i++){
	      sum += arr[i];
	  }
	  
	  cout<<sum<<endl;
	}
	return 0;
}
