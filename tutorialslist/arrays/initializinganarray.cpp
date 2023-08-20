#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate various ways to Initialize an Array ===== \n\n";

    // No intitialization only declaration and hence, each of the array element contains a garbage value
    float arr[1000];

    //To initialize an array to all zeros, initialize only the first value to 0. All 1000 values automatically gets initialized to zero.
    float zeros[1000] = {0.0};

    //If the size is not mentioned, the compiler uses the number of values to be the size of the array
    int no_of_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Initial values of pressure(variable) undefined. Only declaration and hence all the elements store a garbage value initially.
    float pressure[10];

    // Only the initial elements contain the characters of the string. Remaining characters gets initialized to zero.
    char website_name[100] = "Studytonight";

    // Array size is 6 (last character is the String end delimeter '\0' ).
    char greeting[] = "Hello";

    return 0;
}
