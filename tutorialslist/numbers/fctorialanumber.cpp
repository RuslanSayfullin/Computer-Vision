#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to find the Factorial of a given number ===== \n\n";

    //variable declaration
    int i,n;

    //as we are dealing with the product, it should be initialized with 1.
    int factorial=1;

    //taking input from the command line (user)
    cout << "Enter the number to find the factorial for: ";
    cin >> n;

    //finding the factorial by multiplying all the numbers from 1 to n
    for (i = 1; i <= n; i++)
    {
        factorial *= i; // same as factorial = factorial * i 
    }

    cout << "\n\nThe Factorial of " << n << " is: " << factorial;

    cout << "\n\n\n";

    return 0;
}
