#include <iostream>

using namespace std;

int main()
{
    //variable declaration - a char variable takes a single character as input
    char c;

    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to Find the ASCII value of a character ===== \n\n";

    //take user input
    cout << "Enter a character : ";
    cin >> c;

    //printing the ASCII value of the entered character
    cout << "\nThe ASCII value of the entered character is : " << (int)c << "\n\n";

    return 0;
}
