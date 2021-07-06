
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n,c;
	    cin>>n>>c;
	    
	    int arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    unordered_set<int> s;
	    
	    bool flag = false;
	    
	    for(int i=0; i<n; i++){
	        
	        if(s.find(c^arr[i]) != s.end()){
	           flag = true;
	           break;
	        }
	        
	        s.insert(arr[i]);
	    }
	    
	    if(flag){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
