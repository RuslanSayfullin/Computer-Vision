#include <iostream>
#include <math.h>

using namespace std;

// Returns true if the given number is a perfect square
bool isPerfectSquare(int n)
{
    // sqrt() method is defined in the math.h library 
    // to return the square root of a given number
    int sr = sqrt(n); 

    if (sr * sr == n)
        return true;
    else
        return false;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to determine if the entered number is perfect square or not ===== \n\n";

    // variable declaration
    int n;
    bool perfect = false;

    // taking input from the command line (user)
    cout << " Enter a positive integer :  ";
    cin >> n;

    // Calling a method that returns true if the 
    // number is a perfect square
    perfect = isPerfectSquare(n);

    if (perfect)
    {
        cout << "\n\nThe entered number " << n << " is a perfect square of the number " << sqrt(n);
    }
    else
    {
        cout << "\n\nThe entered number " << n << " is not a perfect square";
    }

    cout << "\n\n\n";

    return 0;
}


