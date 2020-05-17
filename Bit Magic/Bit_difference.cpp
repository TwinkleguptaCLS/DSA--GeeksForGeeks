//driver code start
#include<bits/stdc++.h>
using namespace std;

//function to find bit difference
int countBitsFlip(int a,int b )
{
    int count=0;
    while(a||b)
    {
    int ls_a = a&1;
    int ls_b = b&1;
    if(ls_a!=ls_b)
        count++;
    a=a>>1;
    b=b>>1;
    }
return count;
    
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        
        cout<<countBitsFlip(a,b)<<endl;
    }
    return 0;
}
