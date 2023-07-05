#include<iostream>
#include<vector>
using namespace std;

//LEETCODE 2469: convertTemperature----------------------------------------------

vector<double> convertTemperature(double celsius) {
        
        double k = celsius + 273.15;
        double f = celsius * 1.80 + 32.00;

        vector<double> v;
        v.push_back(k);
        v.push_back(f);
        return v;
    }


int main(){

    double celsius;
    cout<<"Enter the celsius: " <<endl;
    cin>>celsius;

    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32.00;

        vector<double> v;
        v.push_back(k);
        v.push_back(f);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<",";
    }
    



    return 0;
}