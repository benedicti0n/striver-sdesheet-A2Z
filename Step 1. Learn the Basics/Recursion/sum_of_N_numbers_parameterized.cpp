#include<iostream>
using namespace std;


// TC - O(n)
// SC - O(n)
void sum(int n, int result){
    if(n<1){
        cout<<result;
        return;
    }
    
    sum(n-1, result+n);
    
}

int main (){
    int n;
    cout<<"Enter last interger: ";
    cin>>n;

    sum(n, 0);

    return 0;
}