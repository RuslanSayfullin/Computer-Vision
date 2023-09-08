#include <iostream>

//This header file is used to make use of the strncpy() method
#include <string.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to Concatenate Two Strings in CPP  ===== \n\n";

    //Variable Declaration
    string s1, s2, s3;

    cout << "\n\nEnter the first String without any space : ";
    cin >> s1;

    cout << "\nEnter the second String without any space : ";
    cin >> s2;

    cout << "\n\nThe two individual Strings before Concatenation are :\n\n";
    cout << "String1 = " << s1 << " and its lenght is " << s1.size() << "\n";
    cout << "String2 = " << s2 << " and its lenght is " << s2.size() << "\n\n";

    //Performing Concatenation of two strings using the + operator in CPP
    s3 = s1 + s2;

    cout << "\n\nThe resulting string after the Concatenation of the two strings is :\n\n";
    cout << "String3 = String1 + String2\n";
    cout << "String3 = " << s3 << " and its lenght is " << s3.size() << "\n\n";

    cout << "\nNote: Length of String3 is sum of the individual lengths of both the strings.";

    cout << "\n\n";

    return 0;
}

