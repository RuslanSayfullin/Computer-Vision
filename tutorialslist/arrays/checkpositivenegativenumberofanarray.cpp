#include<iostream>
using namespace std;
int main()
{
  int a[100],i,n,zero=0,pos=0,neg=0;
  
 cout<<"Enter The Size of An Array :\n";
  cin>>n;

  cout<<"Enter The Element :\n";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }

  cout<<"Elment in Array is Given Below\n";
  for(i=0;i<n;i++)
  {
   if(a[i]>0)
   pos++;
   else if(a[i]<0)
   neg++;
   else
   zero++;
  }
  cout<<"\nPositive No. is = "<<pos;
  cout<<"\nNegative No. is = "<<neg;
  cout<<"\nTotal Zero in array is = "<<zero;
 return 0;

}

