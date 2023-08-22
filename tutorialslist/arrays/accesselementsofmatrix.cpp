#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate accessing the elements of a Matrix ===== \n\n";

    //loop variable r to iterate rows and c to iterate columns.
    int r, c;

    //declaring and initializing the 2D array.
    int arr[5][2] = {{0, 0},
                   {11, 22},
                   {22, 44},
                   {33, 66},
                   {44, 88}};   

    cout << " =====  Accessing the array elements in the Row Major Order ===== \n\n";    
    // outputing the value of each of the array element
    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 2; c++)
        {
            cout << "arr[" << r << "][" << c << "]: ";
            cout << arr[r][c] << endl;
        }
    }
             
    cout << "\n\n";

    cout << " =====  Accessing the array elements in the Column Major Order ===== \n\n";    
    // outputing the value of each of the array element
    for (c = 0; c < 2; c++)
    {
        for (r = 0; r < 5; r++)
        {
            cout << "arr[" << r << "][" << c << "]: ";
            cout << arr[r][c] << endl;
        }
    }
             
    cout << "\n\n";

    return 0;
}
