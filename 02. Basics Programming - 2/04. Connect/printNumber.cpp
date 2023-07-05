#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"Enter the digit yo want:"<<endl;
    cin>>n;



    // Approach 1------------------------------------------------------

    // int sum = 0;
    
    // for (int i = n-1; i >= 0; i--)
    // {
    //     int num;
    //     cout<<"Enter num"<<endl;
    //     cin>>num;
    //     int ans = num * pow(10,i);
    //     cout<<"Ans:"<<ans<<endl;
    //     sum = sum + ans;
    //     cout<<"Sum:" <<sum<<endl;
    // }
    

    // cout<<"Sum:" <<sum<<endl;





    // Approach 2------------------------------------------------------

    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        int digit;
        cout<<"enter digit:"<<endl;
        cin>>digit;
        ans = ans * 10 + digit;
    }
    
    cout << ans<<endl;


    return 0;
}