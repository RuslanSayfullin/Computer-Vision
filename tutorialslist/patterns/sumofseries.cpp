#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int i,n,sum=0;
cout<<“1+2+3+……+n”;
cout<<“\nEnter the value of n:”;
cin>>n;

for(i=1;i<=n;++i)
sum+=i;
cout<<“\nSum=”<<sum;
getch();
}

