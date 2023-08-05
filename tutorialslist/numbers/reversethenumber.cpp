#include <iostream>
#include <math.h>

using namespace std;

//Returns the reverse of the entered number
int findReverse(int n)
{
    int reverse = 0; //to store the reverse of the given number
    int remainder = 0;

    //logic to compute the reverse of a number
    while (n != 0)
    {
        remainder = n % 10; //store the digit at the units place
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    return reverse;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " ===== Program to compute the Reverse of the entered number. ===== \n\n";

    //variable declaration
    int n;
    int reverse = 0;

    //taking input from the command line (user)
    cout << " Enter a positive integer to find the reverse of :  ";
    cin >> n;

    //Calling a method that returns the reverse of an entered number
    reverse = findReverse(n);

    cout << "\n\nThe entered number is " << n << " and it's reverse is :" << reverse;

    cout << "\n\n\n";

    return 0;
}
