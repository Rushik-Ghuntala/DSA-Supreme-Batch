#include<iostream>
using namespace std;


int main(){


    vector<int> arr1;
    // arr1.push_back(10);
    arr1.push_back(10);
    arr1.push_back(20);
    arr1.push_back(30);
    arr1.push_back(40);
    // arr1.push_back(60);
    // arr1.push_back(80);
    // arr1.push_back(100);
    int n = 4;



    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                int sum = arr1[i]+arr1[j]+arr1[k];
                if (sum == 70)
                {
                    cout<<arr1[i]<<" "<<arr1[j]<<" "<<arr1[k]<<endl;
                }
                
            }
            
        }
        
    }
    

    return 0;
}