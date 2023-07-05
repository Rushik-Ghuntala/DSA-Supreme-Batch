#include<iostream>
using namespace std;

int main(){


    //Full Pyramid-----------------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     //spaces
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout<<" ";
    //     }
        

    //     //stars
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<<"* ";
    //     }
        
    //     cout<<endl;
    // }
    

    //Inverted Full Pyramid-----------------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     //spaces
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout<<" ";
    //     }
        

    //     //starts
    //     for (int col = 0; col < n-row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }


    //Solid Diamond-----------------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     //spaces
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout<<" ";
    //     }
        

    //     //stars
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<<"* ";
    //     }
        
    //     cout<<endl;
    // }
    // for (int row = 0; row < n ; row++)
    // {
    //     //spaces
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout<<" ";
    //     }
        

    //     //starts
    //     for (int col = 0; col < n-row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }
    


    //Full ODD Pyramid-----------------------------------------------------------------------
    
    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     //spaces
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout<<" ";
    //     }
        

    //     //stars
    //     for (int col = 0; col < (row*2) +1; col++)
    //     {
    //         cout<<"*";
    //     } 
        
    //     cout<<endl;
    // }



    //Hollow Diamond-----------------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     //spaces
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout<<" ";
    //     }
        

    //     //stars
    //     for (int col = 0; col < 2*n+1; col++)
    //     {
    //         //first OR last charecter
    //         if (col == 0 || col == 2*row)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
        
    //     cout<<endl;
    // }

    // for (int row = 0; row < n; row++)
    // {
    //     //spaces
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout<<" ";
    //     }
        

    //     //starts
    //     for (int col = 0; col < 2*n-2*row-1; col++)
    //     {
    //         //first OR last charecter
    //         if (col == 0 || col == 2*n-2*row-2)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
        
    // }




    //Flipped Solid Diamond-----------------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {

    //     //first pyramid
    //     for (int col = 0; col < n-row; col++)
    //     {
    //         cout<<"*";
    //     }

    //     //second pyramid
    //     for (int col = 0; col < 2*row+1; col++)
    //     {
    //         cout<<" ";
    //     }

    //     //third pyramid
    //     for (int col = 0; col < n-row; col++)
    //     {
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    // for (int row = 0; row < n; row++)
    // {
    //     //2nd first pyramid
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<<"*";
    //     }

    //     //2nd second pyramid
    //     for (int col = 0; col < 2*n-2*row-1; col++)
    //     {
    //         cout<<" ";
    //     }

    //     //2nd third pyramid
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // } 
    





    //Fancy pattern-----------------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<<row+1;
    //         if(col != row){
    //         cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row; col++)
    //     {
    //         cout<<n-row;
    //         if(col != n-row-1){
    //         cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    


    //Numeric Palidrome Pyramid------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     //spaces
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout<<" ";
    //     }
        

    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<< col+1;
    //     }


    //     //reverse counting
    //     for (int col = row; col >=1 ; col--)    
    //     {
    //         cout<<col;
    //     }
        
    //     cout<<endl;
    // }
    


    //Alphabatic Palindrome Pyramid------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row+1; col++)
    //     {

    //         int ans = col+1;
    //         char ch = ans + 'A' -1;
    //         cout<<ch;
    //     }


    //     //reverse counting
    //     for (int col = row; col >=1 ; col--)    
    //     {
    //         int ans = col;
    //         char ch = ans + 'A' -1;
    //         cout<<ch;
    //     }
        
    //     cout<<endl;
    // }
    


    //Floyd's Pyramid------------------------------------------------------------

    // int n;
    // cin>>n;
    // int count = 1;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<<"|"<<count<<"|";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    


    //Numeric Pyramid

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {

    //     //row+1 se start krna hain
    //     int start = row+1;
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         // cout<< row+col+1;
    //         cout<<start;
    //         start++;
    //     }
    //     cout<<endl;
    // }
    
    
    
    //Numeric Full Pyramid

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     //Spaces
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout<<" ";
    //     }
        

    //     //numbers
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<<row+col+1;
    //     }

    //     //reverse counting
    //     int start = 2*row;
    //     for (int col = 0; col< row; col++)
    //     {
    //         cout<<start;
    //         start--;
    //     }
    //     cout<<endl;
        
    // }
    


    //Numeric Hollow Pyramid

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     // Spaces
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout<<" ";
    //     }


    //     for (int col = 0; col < row+1; col++)
    //     {
    //         if ( col == 0 || row == n )
    //         {
    //             cout<<col+1;
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
            
    //     }
    //     cout<<endl;
    // }
    
 



    return 0;
}