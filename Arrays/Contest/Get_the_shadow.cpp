
#include <bits/stdc++.h>
using namespace std;

void repeated_Numbers(vector<int> A) {
    long long int act_a = 0;
    long long int act_sum_sq = 0;
    long long int exp_b;
    long long int exp_sum_sq;
    long long int i = 0;
    
    for(i = 0; i < A.size(); i++){
        act_a = act_a + (long long int)A[i];
        act_sum_sq = act_sum_sq + (long long int)A[i]*A[i];
    }
    
    exp_b = (long long int)(A.size())*(A.size()+1)/2;
    exp_sum_sq = (long long int)(A.size())*(A.size()+1)*(2*A.size()+1)/6;
    
    long long int diff_sum_sq = exp_sum_sq - act_sum_sq;
    long long int diff_a = exp_b - act_a;
    
    long long int toggle = diff_sum_sq/diff_a;
    
    long long int miss = (toggle + diff_a)/2;
    long long int repp = miss - diff_a;
    
    cout<<(int)repp<<" "<<(int)miss<<endl;

    return ;
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    vector<int> vect;
	    
	    for(int i=0; i<N; i++){
	        int temp;
	        cin>>temp;
	        vect.push_back(temp);
	    }
	    repeated_Numbers(vect);
	}
	return 0;
}
