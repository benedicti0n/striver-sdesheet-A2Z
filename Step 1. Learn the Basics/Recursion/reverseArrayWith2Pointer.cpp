#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int p1= 0; int p2= n-1;
    while (p1<p2)
    {
        swap(arr[p1], arr[p2]);
        p1++; p2--;
    }
    
}

void printArray(int arr[], int n){
    cout<<"Reversed array is: ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
    	
int main() {	
   int n;

    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

   reverseArray(arr, n);
   printArray(arr, n);

   return 0;
}