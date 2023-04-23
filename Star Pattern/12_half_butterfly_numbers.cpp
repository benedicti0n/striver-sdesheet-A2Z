/*
1      1
12    21
123  321
12344321
*/
#include<iostream>
using namespace std;

void pattern(int row){
    
    for (int i = 1; i <= row; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }

        // spaces
        for (int j = 1; j <= (row*2)-i*2 ; j++)
        {
            cout<<" ";
        }


        // numbers
        for (int j = i; j >= 1; j--)
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

    pattern(row);

    return 0;
}