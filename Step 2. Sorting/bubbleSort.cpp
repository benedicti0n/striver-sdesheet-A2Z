/*
WorstTC - O(n^2)
BestTC - O(n)
SC - O(1)
*/
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {

        swapped = false;
        for (j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
  
        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
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

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}