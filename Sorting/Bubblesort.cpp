#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size){
    for(int i =0; i< size-1; i++ ){
        int swapped = 0;
        for( int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 

                swapped = 1;
            }
        }
        if ( swapped == 0)
        break;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << " " << arr[i];
    }
    cout << "\n";
}


int main() {
    int arr[] = {2,1,6,3,7,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    cout << "Sorted array is: ";
    printArray(arr, size);


}