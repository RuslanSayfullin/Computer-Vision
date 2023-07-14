#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to print a Reverse Half Pyramid using Numbers ===== \n\n";

    //i to iterate the outer loop and j for the inner loop
    int i, j, rows;

    //to denote the range of numbers in each row
    int last; 

    cout << "Enter the number of rows in the pyramid: ";
    cin >> rows;
    cout << "\n\nThe required Reverse Pyramid pattern containing " << rows << " rows is:\n\n";

    //outer loop is used to move to a particular row
    for (i = 1; i <= rows; i++)
    {
        //to display that the outer loop maintains the row number
        cout << "Row # " << i << " contains numbers from 1 to " << (rows - i + 1) << " :  ";

        last  = rows -i + 1;
        //inner loop is used to decide the number of * in a particular row
        for (j = 1; j<= last; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "\n\n";

    return 0;
}
