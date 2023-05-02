/*Reverse a number*/

#include<iostream>
using namespace std;

void reverse(int n){
    int number=0;
    while (n>0)
    {
        number = number*10 + (n%10);
        n = n/10;
    }
    cout<<number;
}

int main(){

    int n;
    cin>>n;

    reverse(n);

    return 0;
}