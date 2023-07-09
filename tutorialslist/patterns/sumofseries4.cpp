#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
int i,n;
float sum=0,x,a=1;

cout<<“1/2+4/5+7/8+……”;
cout<<“How many terms(ex: 1,2,3…n)?”;
cin>>n;
for(i=0;i<n;++i)
{
x=a/(a+1);
sum+=x;
a+=3;
}

cout<<“Sum=”<<sum;
}
