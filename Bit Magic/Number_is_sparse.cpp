#include<iostream.h>
using namespace std;

bool isSparse(int n){
    
    int res = n & (n>>1);
    if(res==0)
        return true;
    return false;
    
}
int main()
{
 int t,n;
 cin>>t;
 while(t--)
 {
  cin>>n;
  if(issparse(n))
    cout<<"1"<<endl;
   else
    cout<<"0"<<endl;
 }
 return 0;
 }
