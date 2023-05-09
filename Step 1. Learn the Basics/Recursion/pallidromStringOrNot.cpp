#include<iostream>
using namespace std;

bool pallindrom(int index, string &s){

    if(s[index] != s[s.size() - index - 1]) return false;
    if(s[index] >= s[s.size()/2]) return true;

    return pallindrom(index+1, s);
}

int main(){

    string s;
    cout<<"Enter string: ";
    cin>>s;

    cout<<pallindrom(0, s)<<endl;

    return 0;
}