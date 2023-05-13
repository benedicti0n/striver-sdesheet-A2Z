#include<iostream>
using namespace std;

void number(int i, int n){
    if(i>n) return;

    cout<<i<<endl;

    number(i+1, n); 
}

int main (){
    int n;
    cout<<"Enter last interger: ";
    cin>>n;

    number(1, n);

    return 0;
}