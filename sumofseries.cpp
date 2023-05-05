#include<iostream>
#include<conio.h>

void main()
{
    clrscr();
    int i,n,sum=0;
    std::cout<<“1+2+3+……+n”;
    std::cout<<“\nEnter the value of n:”;
    cin>>n;

    for(i=1;i<=n;++i)
        sum+=i;
        std::cout<<“\nSum=”<<sum;
    getch();
}


