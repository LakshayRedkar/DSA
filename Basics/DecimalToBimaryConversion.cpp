#include<iostream>
#include<cmath>
using namespace std;

int DecimalToBinaryMethod(int n)
{
    int binaryNumber = 0;
    int i=0;
    // division method 
    while(n > 0)
    {
        int bit = n%2;
        binaryNumber = bit * pow(10, i++) + binaryNumber;
        n= n/2;
    }
    return binaryNumber;
}

int DecimalToBinaryByBitwiseMethod(int n)
{
    int binaryNumber = 0;
    int index = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        binaryNumber = bit * pow(10, index++) + binaryNumber;
        n= n>>1;
    }
    return binaryNumber;
}

int BinaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n)
    {
        int bit = n%10;
        decimal = decimal + bit * pow(2,i++);
        n = n / 10;
    }    
    return decimal;
}

int main()
{
   int n;
   cout<<"Enter decimal number "<<endl;
   cin>> n;
   int binary = DecimalToBinaryMethod(n);
   cout <<"Decimal to binary is "<<binary<<endl;

   binary = DecimalToBinaryByBitwiseMethod(n);
   cout <<"Decimal to binary using bitwise method is "<<binary<<endl;

   int binaryNo;
   cout <<"Enter binary number"<<endl;
   cin>> binaryNo;
   cout<<"Binary to decimal of "<<binaryNo<<" is "<<BinaryToDecimal(binaryNo)<<endl;
}