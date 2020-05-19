   #include<bits/stc++.h>
   using namespace std;
   
   int grayCOnvertor(int n)
   {
   return n ^ (n >> 1); 
   }
   
   int main()
   {
   int t,n;
   cin>>t;
   while(t--)
    cin>>n;
    cout<<grayConverter(n)<<endl;
   
   }
