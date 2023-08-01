#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to count the number of digits in a given number ===== \n\n";

    //variable declaration
    int n, n1, num = 0;

    //taking input from the command line (user)
    cout << " Enter a positive integer :  ";
    cin >> n;

    n1 = n; //storing the original number

    //Logic to count the number of digits in a given number
    while (n != 0)
    {
        n /= 10; //to get the number except the last digit.
        num++; //when divided by 10, updated the count of the digits
    }

    cout << "\n\nThe number of digits in the entered number: " << n1 << " is " << num;
    cout << "\n\n\n";

    return 0;
}
