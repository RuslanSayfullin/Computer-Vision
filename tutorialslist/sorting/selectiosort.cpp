#include <iostream>

#include<vector>

using namespace std;

//Separate method to print the list provided by the calling method
void printElems(vector < int > list) {
    int i;
    int len = list.size();
    for (i = 0; i < len; i++)
        cout << list[i] << "  ";

}

//The Selection sort logic
void selectionSort(vector < int > & a) {
    int i, min, k, swap, location;
    int len = a.size();

    for (i = 0; i < len - 1; i++) {
        min = a[i];
        location = i;

        for (k = i + 1; k < len; k++) {
            if (min > a[k]) {
                min = a[k];
                location = k;
            }
        }

        //Putting the minimum value of each pass to its correct location
        swap = a[i];
        a[i] = a[location];
        a[location] = swap;

        cout << "\n\nThe elements of the list after Pass " << i + 1 << " are  : ";
        printElems(a);

    }

}
