/*
   A   
  ABA  
 ABCBA 
ABCDCBA
*/
#include<iostream>
using namespace std;

void pattern(int row){
    for (int i = 1; i <= row; i++)
    {
        //spaces
        for (int j = 1; j <= row - i; j++)
        {
            cout<<" ";
        }

        //alphabets
        char ch = 'A';
        int breakpoint = (2*i) / 2;
        for (int j = 1; j <=  2*i-1; j++)
        {
            cout<<ch;
            if (j < breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
            
        }
        
        //spaces
        for (int j = 1; j <= row - i; j++)
        {
            cout<<" ";
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