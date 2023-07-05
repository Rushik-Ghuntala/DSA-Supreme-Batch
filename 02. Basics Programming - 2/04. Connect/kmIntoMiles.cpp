#include<iostream>
using namespace std; 

void converstion(int n){
    float ans = n * 0.625;

    cout<<ans<<endl;

}


int main(){

    int n;
    cout<<"Enter the KM: "<<endl;
    cin>>n;

    converstion(n);

    // cout<<"Miles is: "<< ans<<endl;



    return 0;
}