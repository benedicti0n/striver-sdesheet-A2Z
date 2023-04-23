/*
1
01
101
0101
*/
#include<iostream>
using namespace std;

void long_method(int row){
    for (int i = 1; i <= row; i++)
    {
        if (i%2==1)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j%2==1)
                {
                    cout<<"1";
                }
                else{
                    cout<<"0";
                }
            }
        }
        else{
            for (int j = 1; j <= i; j++)
            {
                if (j%2==1)
                {
                    cout<<"0";
                }
                else{
                    cout<<"1";
                }
            }
        }
        cout<<endl;
    }
}
void short_method(int row){
    int start = 1;
    for (int i = 1; i <= row; i++)
    {
        if(i%2==1) start = 1;
        else start = 0;

        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout<<endl;
    }
    
}
int main(){

    int row;
    cout<<"Enter row number: ";
    cin>>row;

    //long_method(row);
    short_method(row);
    

    return 0;
}