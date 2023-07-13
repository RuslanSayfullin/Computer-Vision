#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to print a Half Pyramid using Characters ===== \n\n";

    //i to iterate the outer loop and j for the inner loop
    int i, j, rows;

    //initializing and declaring the character to start each row with
    char c = 'A';

    cout << "Enter the number of rows in the pyramid: ";
    cin >> rows;
    cout << "\n\nThe required pyramid pattern containing " << rows << " rows is:\n\n";

    //outer loop is used to move to a particular row
    for (i = 1; i <= rows; i++)
    {
        //to display that the outer loop maintains the row number
        cout << "Row # " << i << "   ";

        c = 'A'; //as need to start each row with character 'A'.

        //inner loop is used to decide the number of * in a particular row
        for (j = 1; j <= i; j++)
        {
            cout << c << " "; //printing the column number within each row

            c+=1;// incrementing the ASCII value to move to the next character
        }

        cout << endl;
    }

    cout << "\n\n";

    return 0;
}
