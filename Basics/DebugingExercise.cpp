#include<iostream>
using namespace std;


int main(){
    int n=4;
    int i=0;
    while(i<n){
        int j = 0,count = i+1;
        while(j<count){
            cout<<j+2;
            j = j + 1;
            
        }
        cout<<"\n";
        i = i + 1;
    }
}