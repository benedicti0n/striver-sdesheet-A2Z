/*
ABCD
ABC
AB
A
*/
#include<iostream>
using namespace std;

void my_pattern(int row){
    
    for (int i = row; i >= 1; i--)
    {
        char alphabet = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout<<alphabet;
            alphabet++;
        }
        cout<<endl;
    }

}
void pattern(int row){
    for (int i = row; i >= 1; i--)
    {
        for (char j = 'A'; j <= 'A' + i - 1; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int row;
    cout<<"Enter row number: ";
    cin>>row;

    my_pattern(row);
    pattern(row);

    return 0;
}