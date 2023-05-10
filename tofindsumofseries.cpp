#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int i,n;
 float x,sum=0;

 cout<<"\nx+x^2/2+x^3/3+…..+x^n/n\n";
 cout<<"\nEnter value of x and n :\n";
 cin>>x>>n;

 for(i=1;i<=n;++i)
 {
  sum+=pow(x,i)/i;
 }
 cout<<"\nSum is = "<<sum<<endl;
 return 0;
}
