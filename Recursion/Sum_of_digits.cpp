#include<iostream.h>
using namespace std;

int sumOfDigits(int n)
{
 if(n<10)
    return n;
 else
    return sumOfDigits(n/10)+n%10;
}

int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
cout<<sumOfDigits(n)<<endl;
}
return 0;
}
