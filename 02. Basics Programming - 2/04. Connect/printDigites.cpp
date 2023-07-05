#include<iostream>
using namespace std;


int main(){

    int a = 123;
    cout<< a<<endl;

    while(a!=0){
        int b = a%10;
        cout<<b<<" , ";
        a = a/10;

    }






    return 0;
}