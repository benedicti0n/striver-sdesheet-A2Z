/*Find the GCD of two numbers*/
#include<iostream>
using namespace std;

void gcd(int n1, int n2){
    for (int i = min(n1, n2); i >=1; i--)
    {
        if (n1%i==0 && n2%i==0)
        {
            cout<<i<<endl; //as the loop is inverse it will always print the GDC
            break;
        }   
    }
}

void euclideanMethod(int n1, int n2){

    while (n1>0 && n2>0)
    {
        if(n1>n2) n1 = n1%n2;
        else n2 = n2%n1;
    }
    if(n1==0) cout<<n2;
    else cout<<n1;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;

    // gcd(n1, n2);
    euclideanMethod(n1, n2);

    return 0;
}