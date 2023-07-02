//sort arrays in ascending and descending order using bubble sort

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void bubbleSortDesc(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSortDesc(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}