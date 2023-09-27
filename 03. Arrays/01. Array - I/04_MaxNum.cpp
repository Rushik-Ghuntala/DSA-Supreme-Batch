#include<iostream>
using namespace std;

// void maxNum(int arr[], int size){
//     int max = arr[0];

//     for (int index = 0; index < size; index++)
//     {
//             if(arr[index] > max){
//                 max = arr[index];
//             }
//     }

//     cout<<"Max Number is: "<<max<<endl;
    
// }


int maxNum(int arr[], int size){

    int maxi = INT_MIN;

    for (int index = 0; index < size; index++)
    {
        if (arr[index] > maxi){
            maxi = arr[index];
        }
        
    }
    


    return maxi;
}


int minNum(int arr[], int size){

    int mini = INT_MAX;

    for (int index = 0; index < size; index++)
    {
        if (arr[index] < mini){
            mini = arr[index];
        }
        
    }
    


    return mini;
}


int main(){

    int arr[]={111,2,30,4,500,6,7,8,9,100};
    int size=sizeof(arr)/sizeof(int);

    // maxNum(arr,size);
    int num1 = maxNum(arr,size);
    cout<<"Maximum Number is: "<<num1<<endl;
    int num2 = minNum(arr,size);
    cout<<"Minimum Number is: "<<num2<<endl;



    return 0;
}