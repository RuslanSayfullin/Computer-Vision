#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to print a Reverse Half Pyramid using Characters ===== \n\n";

    //i to iterate the outer loop and j for the inner loop
    int i, j, rows, cols;

    //to denote the range of characters in each row
    char c, first,last; 

    cout << "Enter the number of rows in the pyramid: ";
    cin >> rows;
    cout << "\n\nThe required Reverse Pyramid pattern containing " << rows << " rows is:\n\n";

    //outer loop is used to move to a particular row
    for (i = 1; i <= rows; i++)
    {

        first = 'A';
        last  = first + rows -i ;
        c = 'A';
        cols = rows-i+1;


        //to display that the outer loop maintains the row number
        cout << "Row # " << i << " contains characters from " << first << " to " << last << " :    ";

        
        //inner loop is used to decide the number of * in a particular row
        for (j = 1; j<= cols; j++)
        {
            cout << c << " ";
            c+=1;
        }

        cout << endl;
    }

    cout << "\n\n";

    return 0;
}
