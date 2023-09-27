#include<iostream>
using namespace std;

void intersection(vector<int> arr1, int size1, vector<int> arr2, int size2 ){

    vector<int> ans;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = -1;
                ans.push_back(arr1[i]);
                
            }
        }
    }

    //printing
    cout<<"Intersection Elements is : "<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    

}


int main(){


    int n1;
    cout<<"Enter the size of vector1: "<<endl;
    cin>>n1;
    int n2;
    cout<<"Enter the size of vector2: "<<endl;
    cin>>n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);

    // //input
    cout<<"Enter the 1st vector values: "<<endl;
    for (int index = 0; index < arr1.size(); index++)
    {
        cin>>arr1[index];
    }
    
    cout<<"Enter the 2nd vector values: "<<endl;
    for (int index = 0; index < arr2.size(); index++)
    {
        cin>>arr2[index];
    }
    

    intersection(arr1,n1,arr2,n2);

   
    

    return 0;
}