/*
1
23
456
78910
*/
#include<iostream>
using namespace std;

void pattern(int row){
    int count = 1;
    for (int i = 1; i <= row; i++)
    {   
        for (int j = 1; j <= i; j++)
        {
            cout<<count;
            count++;
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