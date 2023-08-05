#include <iostream>
#include <math.h>

using namespace std;

//Returns true if the given number is a Palindrome number
bool isPalindrome(int n)
{
    int reverse = 0; //to store the reverse of the given number
    int remainder = 0;

    int n1 = n; //storing the original number for comparing later
    //logic to compute the reverse of a number
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    if (reverse == n1)
        return true;
    else
        return false;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to determine if the entered number is Palindrome or not ===== \n\n";

    //variable declaration
    int n;
    bool palindrome = false;

    //taking input from the command line (user)
    cout << " Enter a positive integer :  ";
    cin >> n;

    //Calling a method that returns true if the number is Palindrome
    palindrome = isPalindrome(n);

    if (palindrome)
    {
        cout << "\n\nThe entered number " << n << " is a Palindrome number.";
    }
    else
    {
        cout << "\n\nThe entered number " << n << " is not a Palindrome number.";
    }

    cout << "\n\n\n";

    return 0;
}


