#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to Determine the length of the String without using System defined function, in CPP  ===== \n\n";

    //Variable Declaration
    char s1[100], c = 'a';
    int n = 0, i = 0;

    cout << "\n\nEnter the String you want to find the length for : ";
    cin >> s1;

    //Computing string length without using system defined method
    while (c != '\0')
    {
        c = s1[i];
        i++;
    }

    n = i - 1;

    cout << "\n\nLength of the entered string \"" << s1 << "\" is : " << n << "\n\n\n";

    return 0;
}

