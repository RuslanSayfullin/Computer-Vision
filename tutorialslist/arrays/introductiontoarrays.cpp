#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to Understand the basics of an Array  ===== \n\n";

    //i to iterate the outer loop and j for the inner loop
    int i, n;

    cout << "\n\nEnter the number integers you want in an array: ";
    cin >> n;

    //Declaring an array containing 'n' integers
    int arr[n];

    cout << "\n\n Enter " << n << " integers into an array :\n\n";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n\n The Elements of the Array are: \n\n";

    for (i = 0; i < n; i++)
    {
        cout << " arr [ " << i << " ] = " << arr[i] << endl;
    }

    cout << "\n\n";

    return 0;
}
