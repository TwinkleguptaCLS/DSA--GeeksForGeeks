**rest of code is available in IDE**

void quadraticRoots(int a,int b, int c)
{
    float D = b*b-4*a*c;
    if(D<0)
     cout<<"Imaginary";
    else if(D==0)
    {
       float r= floor((-b + sqrt(D)) / (2.0*a));
       cout<<r<<" "<<r;
    }
    else
     {
         float r1 = floor((-b+sqrt(D))/(2.0*a));
         float r2 = floor((-b-sqrt(D))/(2.0*a));
         cout<<r1<<" "<<r2;
     }
}
