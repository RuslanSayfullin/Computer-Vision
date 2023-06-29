#include<iostream>
using namespace std;

int pattern_sum(int n){
    int sum;
    sum = ( ((2 * n) – 1) * (((2 * n) – 1)+ 1) * ( ( 2 * ((2 * n) – 1) ) + 1 ) ) / 6;
    return sum;
}

int main(){
    int num;
    cout<<"Enter the number of terms you want:-";
    cin>>num;
    cout<<pattern_sum(num);
    return 0;
}
