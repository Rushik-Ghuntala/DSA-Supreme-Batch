#include<iostream>
#include<climits>
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
            cout << "x: " << x << endl;
            reminder = x % 10;
            cout << "reminder: " << reminder << endl;
            ans = ans * 10 + reminder;
            cout << "ans: " << ans << endl;
            x = x/10;
            cout<< "after x: "<< x<< endl;
            cout << " -------------- " << endl;
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