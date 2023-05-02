/*Print all divisors*/

#include<iostream>

using namespace std;

//O(n)
void divisors(int n){

    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0) cout<<i<<" ";
    }
    
}


void divisors2(int n){
    vector<int> ls;

    //O(sqrt(n))
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0) {
            ls.push_back(i);
            if((n/i) != i) {
                ls.push_back(n/i);
            }
        }
    }
    
    //O(no of factors * log (no of facotrs))
    sort(ls.begin(), ls.end());

    //O(number of factors)
    for(auto it : ls) cout<< it << " ";
}

int main(){

    int n;
    cin>>n;

    // divisors(n);
    divisors2(n);

    return 0;
}