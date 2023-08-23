#include <iostream>
using namespace std;

int findMinimum(int a[], int n)
{
    int mn = a[0]; //initializing minimum

    for (int i = 0; i < n; i++) // complexity O(n)
    {
        mn = min(mn, a[i]); //everytime storing the minimum among the current minimum and the current element
    }
    return mn;
}

int findMaximum(int a[], int n)
{
    int mx = a[0]; //initializing maximum

    for (int i = 0; i < n; i++) // complexity O(n)
    {
        mx = max(mx, a[i]); //everytime storing the maximum among the current maximum and the current element
    }
    return mx;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to find the Minimum and Maximum element in an Array ===== \n\n";

    int n;

    cout << " Enter the size of the array: ";
    cin >> n;

    int arr[n], i, pos;

    cout << "\n\n Enter the " << n << " elements of the array: \n\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //Printing the original array before deletion
    cout << "\n\n The " << n << " elements of the array are : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    //Calling a method to find the smallest element
    int mn = findMinimum(arr, n);

    //Calling a method to find the largest element
    int mx = findMaximum(arr, n);

    cout << "\n\n\nThe Smallest element in the entered array is: " << mn;

    cout << "\n\nThe Largest element in the entered array is: " << mx << "\n\n\n";

    return 0;
}

