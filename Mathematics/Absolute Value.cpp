//driver code
#include <bits/stdc++.h>
using namespace std;
int absolute(int I);
int main()
{
int T;
cin>>T;
while(T--)
{
int I;
cin>>I;
cout<<absolute(I)<<endl;
}
int absolute(int I)
{
if( I >= 0)
  return I;
else
  return -I;
}
}

