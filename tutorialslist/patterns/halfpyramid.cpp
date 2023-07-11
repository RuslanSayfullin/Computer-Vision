#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to print a Half Pyramid using * ===== \n\n";

    //i to iterate the outer loop and j for the inner loop
    int i, j, rows;

    cout << "Enter the number of rows in the pyramid: ";
    cin >> rows;
    cout << "\n\nThe required pyramid pattern containing " << rows << " rows is:\n\n";

    //outer loop is used to move to a particular row
    for (i = 1; i <= rows; i++)
    {
        //inner loop is used to decide the number of * in a particular row
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n\n";
    return 0;
}
