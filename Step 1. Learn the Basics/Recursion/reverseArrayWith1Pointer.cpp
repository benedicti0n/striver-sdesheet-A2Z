#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
    if(start<end){
        swap(arr[start], arr[end]);
        reverseArray(arr, start+1, end-1);
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

    int arr[n]; //note: always initialize custom size array after taking the array size input or it will throw Seg Fault.

    cout<<"Enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

   reverseArray(arr, 0, n - 1);
   printArray(arr, n);

   return 0;
}