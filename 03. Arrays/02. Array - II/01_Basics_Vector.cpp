#include<iostream>
#include<vector>
using namespace std;

//printing function
void print(vector<int> arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main(){

    //declaration
    // vector<int> arr;
    // vector<int> arr(5);
    vector<int> arr(5,0);
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    //insertion
    arr.push_back(1);
    arr.push_back(1);

    //remove
    arr.pop_back();

    // int ans = sizeof(arr)/sizeof(int);
    // cout<<ans<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    print(arr,arr.size());


    //Making vector at run time
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

    vector<int> arr2(n,101);
    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
    cout<<arr2.size()<<endl;
    cout<<arr2.capacity()<<endl;
    cout<<arr2.empty()<<endl;


    //printing crr
    // vector<int> crr{1,2,3,4};
    // for (int i = 0; i < crr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    




    return 0;
}