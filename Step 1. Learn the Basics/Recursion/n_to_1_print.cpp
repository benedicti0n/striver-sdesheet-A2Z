#include<iostream>
using namespace std;

// O(n)

void reverseNumber(int n, int i){
    if(i>n) return;
    cout<<n<<endl;

    reverseNumber(n-1, 1);
}

int main (){
    int n;
    cout<<"How many times do you want to print: ";
    cin>>n;

    reverseNumber(n, 1);

    return 0;
}