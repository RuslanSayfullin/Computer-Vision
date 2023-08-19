#include<iostream>
using namespace std;

int main()
{
                                           
 float cube(float);  //Function Type is float
 float num,cu;
 
 cout<<"Enter Any Number To Find Cube :\t";
 cin>>num;
 
 cu=cube(num);                                    
 cout<<"Cube Of "<<num<<" is = "<<cu<<endl<<endl;
 return 0;
}

float cube(float a)
{
 float cu;
 cu=a*a*a;
 return(cu);
}
