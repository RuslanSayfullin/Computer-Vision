#include <iostream>
#include <cmath>
using namespace std;

float SD(float values[]) // function for calculating standadr deviation
{
    float sum = 0.0, mean, sd = 0.0;

    int i;
    for(i = 0; i < 10; ++i)
    {
        sum = sum + values[i]; // calculating sum
    }
    mean = sum/10; // finding mean.
    for(i = 0; i < 10; ++i)
        sd = sd + pow(values[i] - mean, 2); // calculating standard deviation
    return sqrt(sd / 10);
}
int main()
{
    int i;
    float arr[10];
    cout << "Enter 10 elements: ";
    for(i = 0; i < 10; ++i)
        cin >> arr[i];
    cout << endl << "Standard Deviation = " << SD(arr); // calling function
    return 0;
}
