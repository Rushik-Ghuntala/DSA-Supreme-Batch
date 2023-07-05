#include<iostream>
#include<assert.h>
using namespace std;


int main(){



    //Numeric Half Hollow Pyramid------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col <= row; col++)
    //     {
    //         if (col == 0 || row == n-1 || row == col)
    //         {
    //             cout<<col+1;
    //         }
    //         else{
    //             cout<< " ";
    //         }
            
    //     } 
    //     cout<<endl;
        
    // }
    
    //Numeric Hollow Inverted Half Pyramid---------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = row+1; col <= n; col++)
    //     {
    //         if (col == n || col == row+1 || row == 0)
    //         {
    //             cout<<col;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
        
    // }
    




    //Numeric Palindrome Pyramid---------------------------------------------------

    // int n;
    // cin>>n;



    // for (int row = 0; row < n; row++)
    // {
    //     //Spaces
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout<<" ";
    //     }
        

    //     //Print 1 to n number
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<<col+1;
    //     }
        


    //     //print n to 1 number
    //     for (int col = row; col >= 1; col--)
    //     {
    //         cout<<col;
    //     }
        
    //     cout<<endl;
    // }
    


    //Solid Half Pyramid---------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    

    //Fancy Pattern #1---------------------------------------------------------------
    // int n;
    // cin>>n;

    // assert(n<=9);

    // for (int row = 0; row < n; row++)
    // {

    //     //Print stars
    //     for (int col = 0; col < 9-row-1; col++)
    //     {
    //         cout<<"*";
    //     }
        

    //     //Printing numbers
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         if (col == row)
    //         {
    //             cout<<row+1;
    //         }
    //         else{
    //             cout<<row+1<<"*";
    //         }
    //     }

    //     //Print stars in reverse
    //     for (int col = 0; col < 9-row-1; col++)
    //     {
    //         cout<<"*";
    //     }
        


    //     cout<<endl;

    // }
    

    //Fancy Pattern #2---------------------------------------------------------------
    // int n;
    // cin>>n;
    // int count = 1;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col <= row; col++)
    //     {
    //         cout<<count;
    //         count++;
    //         if (col<row)
    //         {
    //             cout<<"*";
    //         }
            
    //     }
    //     cout<<endl;
    // }

    // int start = count - n;
    // for (int row = 0; row < n; row++)
    // {
    //     int k = start;
    //     for (int col = 0; col <= n-row-1; col++)
    //     {
    //             cout<<k;
    //             k++;
    //             if (col<n-row-1)
    //             {
    //                 cout<<"*";
    //             }
                
            
    //     }
    //     start = start - (n-row-1);
    //     cout<<endl;
    // }
    

    //Fancy Pattern #3---------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
        
    //     //print number
    //     for (int col = 0; col < row; col++)
    //     {
    //         if(col==0){
    //             cout<<"*";
    //         }
    //         cout<<col+1;
    //     }

    //     //print number in reverse
    //     for (int col = row-1; col >= 1; col--)
    //     {
            
    //         cout<<col;
    //     }
    //     cout<<"*";

    //     cout<<endl;
        
    // }

    // for (int row = 0; row < n-1; row++)
    // {
        
    //     //print number
    //     for (int col = 0; col < n-row-2; col++)
    //     {
    //         if (col==0)
    //         {
    //             cout<<"*";
    //         }
            
    //         cout<<col+1;
    //     }

    //     //print number in reverse
    //     for (int col = n-row-3; col >= 1; col--)
    //     {
            
    //         cout<<col;
    //     }
    //     cout<<"*";

    //     cout<<endl;
        
    // }
    

    //Floyd's Triangle Pyramid---------------------------------------------------------------

    // int n;
    // cin>>n;

    // int count = 1;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<<count++;
    //     }
    //     cout<<endl;
    // }
    


    //Pascal's Triangle Pyramid---------------------------------------------------------------

    // int n;
    // cin>>n;

    // for (int row = 1; row <= n; row++)
    // {
    //     int c = 1;
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout<<c<<" ";
    //         c = c * (row - col)/col;
    //     }
    //     cout<<endl;
        
    // }
    


    //Butterfly Pattern---------------------------------------------------------------

    int n;
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }

        for (int col = (n-row-1)*2; col >= 1; col--)
        {
            cout<<" ";
        }

        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= n-row-1; col++)
        {
            cout<<"*";
        }

        for (int col = 0 ; col < row*2; col=col+2)
        {
            cout<<"  ";
        }

        for (int col = 0; col <= n-row-1; col++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    



    return 0;
}