#include<iostream>
#include <cmath>
using namespace std;


int BinaryToDecimal(int n){

    int decimal = 0;
    int i = 0;

    while(n!=0){
        cout << " Before n: "<< n<<endl;
        int bit = n%10;
        cout << "bit: "<< bit << endl;
        decimal = bit * pow(2,i++) + decimal;
        cout << "decimal: " << decimal << endl;
        n = n/10;
        cout << " After n: " << n << endl;
        cout << "------------------------"<< endl;
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