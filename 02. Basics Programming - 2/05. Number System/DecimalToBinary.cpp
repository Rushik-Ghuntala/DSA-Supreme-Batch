#include<iostream>
#include<cmath>
using namespace std;

//Divison Method
int DecToBinary(int n){

    int BinaryNo = 0;
    int i = 0;

    while (n>0)
    {
        cout << " Befor Decimal: " << n << endl;
        int bit = n % 2;
        cout << "bit: " << bit << endl;
        BinaryNo = bit * pow(10,i) + BinaryNo;
        cout << "binary No: "<< BinaryNo << endl;
        n = n/2;
        cout << " Afetr Decimal: " << n << endl;
        i++;
    }
    



    return BinaryNo;
}

//Bitwise Method
int DecToBinary2(int n){

    int Binary = 0;
    int i = 0;

    while (n!=0)
    {
        int bit = n & 1;
        // cout<<bit<<endl;
        n = n >>1;

        Binary = bit * pow(10,i++) + Binary;
        
    }
    





    return Binary;
}



int main(){

    int n;
    cout<<"Enter Decimal Number: "<<endl;
    cin>>n;

    int ans = DecToBinary(n);
    int ans2 = DecToBinary2(n);

    cout<<"Binary Number (Divison Method) is: "<<ans<<endl;
    cout<<"Binary Number (Bitwise Method) is: "<<ans2<<endl;
    



    return 0;
}