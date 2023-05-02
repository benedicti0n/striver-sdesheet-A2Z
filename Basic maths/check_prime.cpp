/*Check for prime*/

#include<iostream>
using namespace std;

void brute_prime(int n){
    int count=0;

    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0) count++; 
    }
    if (count==2) cout<<"prime";
    else cout<<"not prime";

}

void prime(int n){
    int count=0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0) {
            count++;
            if ((n/i != i)) count++;    
        }

    }
    if (count==2) cout<<"prime";
    else cout<<"not prime";

}

int main(){

    int n;
    cin>>n;

    // brute_prime(n);
    prime(n);


    return 0;
}