#include<iostream>
using namespace std;


int raja = 420;

int main(){


    //vairable scoping

	//decalaration
	int a;
	//initialisation
	int b = 5;
	// updation
	b = 10;
	cout << raja << endl;

    int c = 99;

    raja = 90;

    cout << raja << endl;

	if(true) {
		int b = 15;
		int raja = 421;

		cout << b << endl;
		cout << raja << endl;
        cout << c << endl;  
	}

	cout << b << endl;

    cout << raja << endl;




    return 0;
}