/*Armstrong Number:-
371 = 3^3 + 7^3 + 1^3*/

#include<iostream>
using namespace std;

void armstrong(int n){
    int original_number = n;
    int check = 0;

    while (n>0)
    {
        int last_digit = n%10;
        check = check + (last_digit*last_digit*last_digit);
        n = n/10;
    }
    
    if(original_number == check) cout<<"true";
    else cout<<"false";

}

int main(){

    int n;
    cin>>n;

    armstrong(n);
    
    return 0;
}