/*
A
BB
CCC
DDDD
*/
#include<iostream>
using namespace std;

void pattern(int row){
    char ch = 'A';
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j<= i; j++)
        {
            cout<<ch;
            
        }
        ch++;
        cout<<endl;
    }
}
int main(){
    int row;
    cout<<"Enter row number: ";
    cin>>row;

    pattern(row);

    return 0;
}