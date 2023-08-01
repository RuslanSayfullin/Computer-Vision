#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to check if the number is Armstrong or not ===== \n\n";

    //variable declaration
    int n, n1, remainder, num = 0;

    //taking input from the command line (user) all at once
    cout << " Enter a positive integer :  ";
    cin >> n;

    //storing the original value before modifying it
    n1=n;
    
   //Logic to check if it is Armstrong or not for a 3 digit number
    while( n1!=0 )
    {
        remainder = n1 % 10; //storing the digits at the units place
        num += remainder*remainder*remainder;
        n1/=10; 
    }
    cout << "\n\n\n";
    
    if(num == n)
    {
        cout << n << " is an Armstrong number.";
    }
    else
    {
        cout << n << " is not an Armstrong number.";
    }   
    cout << "\n\n\n";

    return 0;
}
