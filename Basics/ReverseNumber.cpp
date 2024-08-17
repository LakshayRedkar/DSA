#include<iostream>
#include<limits.h>
using namespace std;

int reverse(int x)
{
    int ans = 0, rem = 0;
    bool isNeg = false;
    if(x<= INT_MIN)
    {
        return 0;
    }
    if(x < 0)
    {
        x = -x;
    }
    while(x > 0)
    {
        if(ans > INT_MAX /10)
        {
            return 0;
        }
        rem = x % 10;
        ans = ans * 10 + rem;
        x = x / 10;
    }
    return ans;
}

int main()
{
    cout<<reverse(521)<<endl;
}