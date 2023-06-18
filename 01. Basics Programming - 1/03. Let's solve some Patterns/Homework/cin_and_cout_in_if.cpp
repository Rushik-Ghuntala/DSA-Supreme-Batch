#include<iostream>
using namespace std;

int main(){

    // cin in if
        int num;
        if(cin>>num){
            cout<<num<<'\n';
            cout<<"Chl to raha hai"<<endl;
        }
        else{
            cout<<"Nahi chl raha hai"<<endl;
        }

    // cout in if
        int num2=0;
        if(cout<<num2<<'\n'){
            cout<<num2<<'\n';
            cout<<"Chl to raha hai"<<endl;
        }
        else{
            cout<<"Nahi chl raha hai"<<endl;
        }



    return 1;
}