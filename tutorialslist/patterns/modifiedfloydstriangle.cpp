#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to print Floyd's Triangle ===== \n\n";

    //i to iterate the outer loop and j for the inner loop
    int i, j, rows;

    //to denote the range of numbers in each row
    int n=0, first,last; 

    cout << "Enter the number of rows in the pyramid: ";
    cin >> rows;

    cout << "\n\nThe required Floyd's Triangle containing " << rows << " rows is:\n\n";

    //outer loop is used to move to a particular row
    for (i = 1; i <= rows; i++)
    {

        first = i;
        last  = first + i -1;
       
        //to display that the outer loop maintains the row number
        //cout << "Row # " << i << " contains the numbers from " << first << " to " << last << " :    ";

        
        //inner loop is used to decide the number of columns in a particular row
          for (j = 1; j <= i; ++j) // remember: in such cases, ++j works same as j++ (but not always- we will cover this in upcoming posts)
            cout << n + j << " ";

        n++;
        cout << endl; //endl works same as '\n'
    }

    cout << "\n\n";

    return 0;
}

