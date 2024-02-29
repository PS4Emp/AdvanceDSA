#include <iostream>
using namespace std;


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << " "<< arr[i];
    }
    cout << endl;
}

void selectionSort(int arr[], int size){
    for(int i =0; i<size; i++){
        int min_idx = i;
        for( int j = i + 1; j< size ; j++){
            if(arr[j] < arr[min_idx])
            min_idx = j; 
        }
        swap(&arr[min_idx], &arr[i]);
    }
}




int main() {
    int arr[] = {5,4,3,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);
}
