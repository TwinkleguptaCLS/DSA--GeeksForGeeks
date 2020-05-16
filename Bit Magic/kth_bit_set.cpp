#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkKthBit(int n, int k)
{
     if(n & (1<<k))
     return true;
     else
     return false;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int k;
	    cin>>k;
	    if(checkKthbit(n,k))
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    
	}
	
	return 0;
}
