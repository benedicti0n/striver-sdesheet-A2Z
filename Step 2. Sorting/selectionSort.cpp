/*The inner loop running for n times in the first iteration then it gets reduced by 1 each time. 
so n + n-1 + n-2 + n-3 + n-4....... = {n(n+1)}/2 = n^2/2 + n/2
TM:- O(n^2)*/
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for (int i = 0; i <= n-2; i++)
    {
        int mini = i;
        for (int j = i; j <= n-1; j++)
        {
            if (arr[j]<arr[mini])
            {
                mini = j;
            }
            
        }
        int temp;

        temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
    

}

int main(){

    int n;
    cout<< "Enter array size: ";
    cin>>n;
    int arr[n];

    for (int i = 0; i <  n; i++)
    {
        cin>>arr[i];
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}