/*Palindrom number
121 = 121 (same as reversed)*/

#include<iostream>
using namespace std;

void palindrom(int n){
    int original_number = n;
    int reverse_number = 0;

    while (n>0)
    {
        reverse_number = reverse_number*10 + (n%10);
        n = n/10;
    }

    if (reverse_number == original_number) cout<<"true";
    else cout<<"false";
    
    
}

int main(){

    int n;
    cin>>n;

    palindrom(n);

    return 0;
}