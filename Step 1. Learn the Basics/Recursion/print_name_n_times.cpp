#include<iostream>
using namespace std;

// O(n)

void name(int i, int n){
    if(i>n) return;

    cout<<"Ashesh"<<endl;

    name(i+1, n);
    
}

int main (){
    int n;
    cout<<"How many times do you want to print: ";
    cin>>n;

    name(1, n);

    return 0;
}