#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    while(n > 0)
    {
        fact = fact * n ;
        n--;
    }
    return fact;
}
int fact(int n)
{
    int fact = 1;
    for( int i =1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    cout<<factorial(5)<<endl;
    // another method
    cout<<fact(5)<<endl;
    
}