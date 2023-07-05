#include<iostream>
using namespace std;

//GFG ----------------------------------------------

int setKthBit(int N, int K)
    {
        // Write Your Code here
        int mask = 1 << K;
        int ans = N | mask;
        return ans;
    }


int main(){

    int n,k;
    cout<<"Enter the N and K: " <<endl;
    cin>>n>>k;

    int ans = setKthBit(n,k);
    cout<<"Ans : "<<ans<<endl;



    return 0;
}