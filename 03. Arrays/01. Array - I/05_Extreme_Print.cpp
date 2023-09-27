#include<iostream>
using namespace std;

void extremePrint(int arr[], int size){

    int start = 0;
    int end = size-1;

    while (end >= start)
    {
        if (start == end)
        {
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" "<<arr[end]<<" ";
        }
        start++;
        end--;
    }

}


int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,0,11,12};
    int size=sizeof(arr)/sizeof(int);

    extremePrint(arr,size);



    return 0;
}