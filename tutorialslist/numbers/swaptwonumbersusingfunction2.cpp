#include<iostream>
using namespace std;

void swap(int *x ,int *y );
/*Swapping of Two Numbers in C++ Using Functions Call by Reference*/
int main()
{
  
    int a,b;
    cout<<"Enter Two Numbers To Swap: ";
    cin>>a>>b;
    
    swap(&a,&b);
    
    cout<<"\nAfter Swapping Two Numbers: ";
    cout<<a<<" "<<b<<" \n";
    
    return 0;
}
void swap(int *x,int *y)
{
 int z;
 z=*x;
/*Copying the first variable Address to the temporary variable*/
 *x=*y;
/*Copying the second variable Address to the first variable*/
 *y=z;
/*Copying the temporary variable Address to the second variable*/ 
}
