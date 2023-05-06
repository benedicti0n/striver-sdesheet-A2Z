#include<iostream>
using namespace std;


// TC - O(n)
// SC - O(n)
int sum(int n){
    if(n == 0) return 0;

    return n + sum(n-1);
    
}

int main (){
    int n;
    cout<<"Enter last interger: ";
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;
}