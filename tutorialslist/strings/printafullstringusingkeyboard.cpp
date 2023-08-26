#include<iostream>
#include<string.h>
using namespace std;
int main()
{   
  char a[20];
  int i,j;

  cout<<"\n\nEnter The String: ";
  fgets(a);  
  cout<<"\n\nYour Entered String is Given Below \n\n";

  for(i=0;a[i]!='\0';++i)
  {
  cout<<a[i];
 }
 return 0;
}
