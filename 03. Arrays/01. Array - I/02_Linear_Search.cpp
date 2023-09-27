#include<iostream>
using namespace std;

bool linear(int arr[], int size, int key){
    for (int index = 0; index < size; index++)
    {
        if (arr[index] == key)
        {
            return 1;
        }
        
    }
    return 0;
}


int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int size=sizeof(arr)/sizeof(int);

    int found = linear(arr,size,9);

    if (found)
    {
        cout<<"Key is Present..."<<endl;
    }else{
        cout<<"Key is Absent..."<<endl;
    }
    



    return 0;
}