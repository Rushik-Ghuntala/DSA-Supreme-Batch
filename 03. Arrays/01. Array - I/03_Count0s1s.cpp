#include<iostream>
using namespace std;

void count0s1s(int arr[], int size){

    int numOnes = 0;
    int numZeros = 0;

    for (int index = 0; index < size; index++)
    {
        if(arr[index] == 0){
            numZeros++;
        }
        if(arr[index] == 1){
            numOnes++;
        }
    }
    

    cout<<"Total Number of Os is: "<<numZeros<<endl;
    cout<<"Total Number of 1s is: "<<numOnes<<endl;


}


int main(){

    int arr[]={0,0,1,1,1,0,0,0,1,1,1,0,0,0,1,1,1,1,0};
    int size=sizeof(arr)/sizeof(int);

    count0s1s(arr,size);



    return 0;
}