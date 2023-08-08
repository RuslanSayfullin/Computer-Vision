#include<iostream>
using namespace std;
int main()
{
 int a[10][10],n,l,i,j,count=0;
 cout<<"\nEnter The Matrix Size (l*l)\n";
 cin>>l;
 cout<<"\nEnter The Row Number Of Matrix\n";
 cin>>n;
 if(n<0||n<=l)
 {
  
 }
 else
 {
  cout<<"\nRow Is Exceed The Limit Enter Value >0 And Less Than Size Of Matrix \n";
  exit(0);
 }
 cout<<"Enter The Matrix Value\n";
 
 for(i=1;i<=l;i++)
 for(j=1;j<=l;j++)
 cin>>a[i][j];
 
 cout<<"\n\nMatrix Row Is Given Below\n\n";
 for(i=1;i<=l;i++)
 {
  cout<<a[n][i]<<" ";
  if(a[n][i]%2==0)
  count++;
 }
 cout<<"\n\nNo. Of Even Number In Row IS =  "<<count;
 return 0;
}
