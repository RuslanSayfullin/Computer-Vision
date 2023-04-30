#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    int a, b;

    //variable declaration and initialization  
    int sum=0;

    //take user input
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to add 2 numbers ===== \n\n";

    cout << "Enter the first Number : ";
    cin >> a;

    cout << "\nEnter the second Number : ";
    cin >> b;

    //Adding the two numbers
    sum = a + b;

    //displaying the final output (sum)
    cout << "\nAddition of the two numbers is : " << sum;

    return 0;
}
