#include<iostream>
using namespace std;

int main(){


//SEVEN PATTERN

    //Solid Rectangle Pattern

    //Outer Loop -> Row Observe
    // for (int row = 0; row < 3; row++)
    // {
    //     //Inner Loop -> Col Obeserve
    //     for (int col = 0; col < 5; col++)
    //     {
    //         cout << "* " ;
    //     }
    //     cout<<endl;
        
    // }

    // cout << endl;


    //Solid Square Pattern

    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = 0; col < 5; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
    // cout<<endl;

    //Inputable Pattern

    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout<<endl;
        
    // }
    


    //Hollow Rectangle
    
    // for (int row = 0; row < 3; row++)
    // {
    //     //First Row And Last Row
    //     if ((row==0 || row==2))
    //     {
    //         for (int col = 0; col < 5; col++)
    //         {
    //             cout<<"*";
    //         }
           
    //     }
    //     //Remaining middle rows
    //     else{
    //         //first star
    //         cout<<"*";
    //         //middle spaces
    //         for (int i = 0; i < 3; i++)
    //         {
    //             cout<<" ";
    //         }
    //         //last star
    //         cout<<"*";
            
    //     }
        
    //     cout<<endl;
    // }
    

    // int rowCount, colCount;
    // cin >> rowCount;
    // cin >> colCount;
    
    // for (int row = 0; row < rowCount; row++)
    // {
    //     if (row==0 || row==rowCount-1)
    //     {
    //         for (int col = 0; col < colCount; col++)
    //         {
    //             cout<<"*";
    //         }
            
    //     }
    //     else{
    //             //remaining rows
    //             cout<<"*";
    //             for (int i = 0; i < colCount-2; i++)
    //             {
    //                 cout<<" ";
    //             }
    //             cout<<"*";
                
    //         }
    //         cout<<endl;
        
    // }
    

    //Half Pyramid

    // int n;
    // cin >> n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }
    

    //Inverted Half Pyramid

    // int n;
    // cin >> n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0 ; col < n-row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }



    //Numeric half Pyramid

    // int n;
    // cin >> n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0 ; col < row+1; col++)
    //     {
    //         cout<<col+1;
    //     }
    //     cout<<endl;
        
    // }

    //Inverted Numeric half Pyramid

    // int n;
    // cin >> n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0 ; col < n-row; col++)
    //     {
    //         cout<<col+1;
    //     }
    //     cout<<endl;
        
    // }


    //Holow Inverted Half Pyramid

    int n;
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || col == 0|| col == n-row-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    

    return 0;

}