/*Given the number N, find out and return the number of digits present in a number.*/

#include<iostream>
using namespace std;

void count(int n){
    int cnt = 0;
    while (n!=0)
    {
        n = n/10;
        cnt = cnt + 1;
        
    }
    cout<<cnt;
}

int main(){

    int n;
    cin>>n;

    count(n);

    return 0;
}