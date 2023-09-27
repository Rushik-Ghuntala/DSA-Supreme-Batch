#include<iostream>
using namespace std;

int main(){

    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(4);
    arr1.push_back(6);
    arr1.push_back(8);
    arr1.push_back(10);
    int n = 6;
    


    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int sum = arr1[i] + arr1[j];
            if (sum == 9)
            {
                cout<<arr1[i]<<" "<<arr1[j]<<endl;
            }
            
        }
        
    }





    // vector<int> arr1;
    // arr1.push_back(1);
    // arr1.push_back(3);
    // arr1.push_back(4);
    // arr1.push_back(6);
    // arr1.push_back(8);
    // arr1.push_back(10);
    // int n1 = 6;

    // vector<int> arr2;
    // arr2.push_back(3);
    // arr2.push_back(4);
    // arr2.push_back(5);
    // arr2.push_back(6);
    // int n2 = 4;


    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n2; j++)
    //     {
    //         int sum = arr1[i] + arr2[j];
    //         if (sum == 9)
    //         {
    //             cout<<arr1[i]<<" "<<arr2[j]<<endl;
    //         }
            
    //     }
        
    // }
    



    return 0;
}