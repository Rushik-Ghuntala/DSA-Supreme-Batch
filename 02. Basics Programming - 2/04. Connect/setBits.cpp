#include<iostream>
using namespace std;


int main(){

    int a = 29;

    int sum =0;

    while(a!=0){
        int b = a&1;
        a = a>>1;
        cout<<b<<" ";
        if (b==1)
        {
            sum = sum+b;
        }
        
    }
    cout<<endl;
    cout<<"Total set bits: "<<sum<<endl;






    return 0;
}