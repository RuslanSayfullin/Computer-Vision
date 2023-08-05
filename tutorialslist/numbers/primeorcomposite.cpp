#include <iostream>
#include <math.h>

using namespace std;

//Returns true if the given number is a Prime number
bool isPrime(int n)
{
    if (n == 1)
        return false; // as 1 is not a prime number

    for (int i = 2; i <= sqrt(n); i++) // Complexity O(SquareRoot(n))
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " ===== Most Efficient Program to determine if the entered number is Prime or not. ===== \n\n";

    cout << " ===== Note: 1 is neither Prime nor Composite. ===== \n\n";

    //variable declaration
    int n;
    bool prime = false;

    //taking input from the command line (user)
    cout << " Enter a positive integer other than 1 :  ";
    cin >> n;

    //Calling a method that returns true if the number is Prime
    prime = isPrime(n);

    if (prime)
    {
        cout << "\n\nThe entered number " << n << " is a Prime number.";
    }
    else
    {
        cout << "\n\nThe entered number " << n << " is Composite number.";
    }

    cout << "\n\n\n";

    return 0;
}

