#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to find the Sum and Average of the Array elements ===== \n\n";

    //i to iterate the outer loop and j for the inner loop
    int i, n;

    //declaring sum and average as double because average can be a fractional value
    double sum=0, average=0;

    cout << "\n\nEnter the number integers you want in an array: ";
    cin >> n;

    //Declaring an array containing 'n' integers
    int arr[n];

    cout << "\n\n Enter " << n << " integers into an array :\n\n";

    for (i = 0; i < n; i++)
    {
        cout << " Enter arr [ " << i << " ] : ";
        cin >> arr[i];
    }

    cout << "\n\n The Elements of the Array are: \n\n";

    for (i = 0; i < n; i++)
    {
        cout << " arr [ " << i << " ] = " << arr[i] << endl;
        sum += arr[i];
    }

    average = sum/n;

    cout << "\n\n The Sum of the Elements of the Array is : " << sum << "\n\n";

    cout << "\n\n The Average of the Elements of the Array is : " << average << "\n\n";

    cout << "\n\n";

    return 0;
}
