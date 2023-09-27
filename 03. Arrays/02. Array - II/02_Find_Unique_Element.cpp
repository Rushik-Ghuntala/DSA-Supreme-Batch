#include<iostream>
using namespace std;

int uniqueElement(vector<int> arr, int size){

    int ans = 0;

    for (int index = 0; index < size; index++)
    {
        ans = ans ^ arr[index];
    }
    

    return ans;
}


int main(){


    int n;
    cout<<"Enter the size of vector: "<<endl;
    cin>>n;
    vector<int> arr(n);

    // vector<int> arr;
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(1);
    // arr.push_back(2);


    // //input
    for (int index = 0; index < arr.size(); index++)
    {
        cin>>arr[index];
    }
    
    

    int ans = uniqueElement(arr, arr.size());
    cout<<"Unique Element is :" <<ans<<endl;


    return 0;
}