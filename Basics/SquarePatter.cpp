#include<iostream>
using namespace std;

int main()
{
    // square
    for(int i = 0;i<4 ; i++ )
    {
        for( int j= 0; j<4; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    //rectangle
    cout<<"Printing Rectangle"<<endl;
    for (int i = 0 ;i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           cout<<" * ";
        }
        cout<<endl;
    }
    // Hollow Rectangle
    cout<<"Printing Hollow Rectangle"<<endl;
    for(int i =0;i< 5; i++)
    {
        for(int j =0; j< 5; j++)
        {
            if(i==0 || i==4)
            {
                cout<<" * ";
            }
            else if(j == 0 || j == 4)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;

    }

    cout<<"Pyramid pattern"<<endl;
    for(int row =0; row<5; row++)
    {
        for (int col = 0; col < row+1 ; col++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<"Inverse Pyramid Pattern"<<endl;
    int n = 5;
    for (int row = 0;row< n; row++)
    {
        for(int col = 0; col< n - row; col++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<"Numeric half pyramid"<<endl;
    n=5;
    for (int row = 0; row < n; row++)
    {
        for(int col = 0; col< row+1; col++)
        {
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
    cout<<"Inverted Numeric half pyramid"<<endl;
    n= 10;
    for(int row =0; row < n; row ++)
    {
        for(int col = 0; col< n-row; col++)
        {
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
    cout<<"Quiz question"<<endl;
    if(cout<<n)
    {
        cout<<"Lakshay";
    }
}