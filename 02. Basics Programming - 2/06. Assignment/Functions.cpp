#include<iostream>
using namespace std;

float AreaOfCircle(float r){
    float ans = 3.14*r*r;
    return ans;
}

bool checkEven(int n){
    if (n%2 == 0)
    {
        return true;
    }
    else{
        return false;
    }
    
}

int fact(int n){
    int fact =1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    
    return fact;
}

void checkPrime(int n){

    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            cout<<"Not Prime"<<endl;
        }
        
        
    }

    
}



int main(){

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    checkPrime(n);
    


    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // int ans = fact(n);
    // cout<<ans<<endl;




    // int n;
    // cout<<"Enter the Number: "<<endl;
    // cin>>n;

    // bool isEven = checkEven(n);

    // if (isEven)
    // {
    //     cout<<"Even"<<endl;
    // }
    // else{
    //     cout<<"Odd"<<endl;
    // }
    







    // float r;
    // cout<<"Enter Radius of Circle: "<<endl;
    // cin>>r;

    // float ans = AreaOfCircle(r);
    // cout<<"Area of Circle is: "<<ans<<endl;





    return 0;
}