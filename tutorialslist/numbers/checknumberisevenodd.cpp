#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to find the given number is Even or Odd ===== \n\n";

    //variable declaration
    int n;

    //taking input from the command line (user)
    cout << " Enter the number that you want to check : ";
    cin >> n;

    //logic to check if the number is even or odd
    if(n % 2 == 0)
    {
        cout << "\n\nThe entered number "<< n << " is Even\n";
    }
    else
    {
        cout << "\n\nThe entered number "<< n << " is Odd\n";
    }

    cout << "\n\n\n";

    return 0;
}
