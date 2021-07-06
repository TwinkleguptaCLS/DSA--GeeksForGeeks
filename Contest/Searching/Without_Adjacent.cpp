

int main() {
	
	int T;
	cin>>T;
	
	while(T--){
	    
	    int N;
	    cin>>N;
	    
	    int Arr[N];
	    
	    for(int i=0; i<N; i++){
	        cin>>Arr[i];
	    }
	    
	    long long inclUDE = Arr[0];
	    long long exclUDE = 0;
	    long long new_excl;
	    
	    for(int i=1; i<N; i++){
	        
	        new_excl = (inclUDE > exclUDE) ? inclUDE : exclUDE;
	        
	        inclUDE = exclUDE  + Arr[i];
	        exclUDE =  new_excl;
	    }
	    
	    cout<<((inclUDE > exclUDE) ? inclUDE : exclUDE)<<endl;
	}
	return 0;
}
