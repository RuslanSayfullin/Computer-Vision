#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxSubArray(int m[], int n)
{

    int sum = 0, s = 0, i;

    for (i = 0; i < n; i++)
    {
        s += m[i];
        if (s < 0)
            s = 0;

        sum = max(s, sum);
    }

    //Sorting the array using the system defined sort() method
    sort(m, m + n);

    //if all the elements are negative then return the largest element of the array
    if (m[n - 1] < 0)
        sum = m[n - 1];

    return sum;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Most Efficient Program to find the Maximum sum of Subarray ===== \n\n";

    int i, n, sum = 0;

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    //number of elements in the array
    n = sizeof(arr) / sizeof(arr[0]);

    //Printing the elements of the array
    cout << "\n\n The " << n << " elements of the array are : ";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    //Calling a method to find the maximum sum of subarray
    sum = maxSubArray(arr, n);

    cout << "\n\n\nThe Maximum sum of the Subarrays of the given array is: " << sum;

    cout << "\n\n\n";

    return 0;
}

