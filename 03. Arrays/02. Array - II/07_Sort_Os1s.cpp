#include<iostream>
using namespace std;


int main(){

    vector<int> arr;
    
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);


    int start = 0;
    int end = arr.size() - 1;
    int i = 0;


    //first approach
    while (i!=end)
    {
        if (arr[i] == 0)
        {
            swap(arr[start],arr[i] );
            start++;
            i++;
        }
        if (arr[i] == 1)
        {
            swap(arr[i],arr[end]);
            end--;
            
        }
        
        
        
    }


    //Second Approach

    // while (start<end)
    // {
    //     if (arr[start] == 0)
    //     {
    //         start++;
    //     }
    //     if (arr[end] == 1)  
    //     {
    //         end--;
    //     }
    //     if(arr[start] == 1 && arr[end] == 0){
    //         swap(arr[start++],arr[end--]);
    //     }
        
        
    // }
    

    //printing
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


    return 0;
}