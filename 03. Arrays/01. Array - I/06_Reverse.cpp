#include<iostream>
using namespace std;

void reverse(int arr[], int size){

    int start = 0;
    int end = size-1;
    int temp;

    while (end >= start)
    {
        // swap(arr[start],arr[end]);
        
        temp = start[arr];
        start[arr] = end[arr];
        end[arr] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int size=sizeof(arr)/sizeof(int);

    reverse(arr,size);



    return 0;
}