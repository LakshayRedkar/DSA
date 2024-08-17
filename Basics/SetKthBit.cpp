#include<iostream>
using namespace std;
int main()
{
    int n = 10, k = 2;
    // create the mask uisng the kth bit 
    int maskNumber = 1<<k;
    cout<< (n | maskNumber)<<endl;
}