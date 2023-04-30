#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to Check if the number is positive or negative ===== \n\n";

    int num;

    //taking user input
    cout << "Enter any non-zero Number to be checked: ";
    cin >> num;

    //when the condition inside the if() is true, then it enters the code block
    if (num > 0)
    {
        cout << "\nEntered number is positive";
    }
    else //when if is not executed then it moves to the else block
    {
        cout << "\nEntered number is negative";
    }

    cout << "\n\n\n";

    return 0;
}
