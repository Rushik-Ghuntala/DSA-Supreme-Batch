#include<iostream>
using namespace std;

//LEETCODE 7: Reverse Integer----------------------------------------------

int reverse(int x) {
        int ans = 0;
        int reminder = 0;

        if(x >= INT_MAX || x <= INT_MIN){
            return 0;
        }

        while(x!=0){
            if(ans > INT_MAX/10 || ans < INT_MIN/10 ){
                return 0;
            }
            reminder = x % 10;
            ans = ans * 10 + reminder;
            x = x/10;
        }
        
        return ans;
    }


int main(){

    int n;
    cout<<"Enter the number: " <<endl;
    cin>>n;

    int ans = reverse(n);
    cout<<"Reverse Ans : "<<ans<<endl;



    return 0;
}