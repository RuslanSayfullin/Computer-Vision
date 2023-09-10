#include<iostream>
using namespace std;

int bubble_sort(int n,int array[]){
    int temp,flag;
    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    return 0;
}

int main(){
    int arr[]={5,3,8,6,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(n,arr);
    cout<<"Elements after sorting the array are:- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
