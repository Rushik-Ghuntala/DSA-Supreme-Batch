#include<iostream>
using namespace std;

int BinaryToDecimal(int n){

    int decimal = 0;
    int i = 0;

    while(n!=0){
        int bit = n%10;
        decimal = bit * pow(2,i++) + decimal;
        n = n/10;
    }

    return decimal;
}


int main(){

    int n;
    cout<<"Enter the Binary Value: "<<endl;
    cin>>n;

    int ans = BinaryToDecimal(n);
    cout<<"Decimal number is: "<<ans<<endl;



    return 0;
}