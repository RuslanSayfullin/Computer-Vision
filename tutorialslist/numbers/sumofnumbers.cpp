#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to find the Sum of n numbers entered by the user ===== \n\n";

    //variable declaration
    int n,i,temp;

    //As we are dealing with the sum, so initializing with 0.
    int sum = 0;

    //taking input from the command line (user)
    cout << " Enter the number of integers you want to add : ";
    cin >> n;
    cout << "\n\n";

    //taking n numbers as input from the user and adding them to find the final sum
    for(i=0;i<n;i++)
    {
        cout << "Enter number" << i+1 << " :  ";
        cin >> temp;
        //add each number to the sum of all the previous numbers to find the final sum
        sum += temp;
    }
    
    cout << "\n\nSum of the " << n << " numbers entered by the user is : "<< sum << endl;
    cout << "\n\n\n";

    return 0;
}
