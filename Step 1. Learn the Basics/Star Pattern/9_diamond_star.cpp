#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Enter row number: ";
    cin>>row;

    // upper half of the trinagle
    for (int i = 1 ; i <= row; i++)
    {
        // space
        for (int j = 1; j <= row-i; j++)
        {
            cout<<" ";
        }
        // star
        for (int j = 1; j <= (i*2)-1; j++)
        {
            cout<<"*";
        }
        //space
        
        for (int j = 1; j <= row-i; j++)
        {
            cout<<" ";
        }
        cout<<endl;

    }

    //lower half of the triagle
    for (int i = 1 ; i <= row; i++)
    {
        // space
        for (int j = 1; j <= i-1; j++)
        {
            cout<<" ";
        }
        
        // star
        for (int j = 1; j <= (row*2) - (i*2-1); j++)
        {
            cout<<"*";
        }

        //space
        for (int j = 1; j <= i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    
    }
    return 0;
}