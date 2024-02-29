#include <iostream>
using namespace std;


int linearSearch(int arr[], int size, int x){
    for(int i = 0; i < size; i++){
        if(arr[i] == x){
            return i;
        }
        
    } return -1;
}


int main() {
    int arr[] = {1,2,4,3,6,5};
    int x = 1;
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = linearSearch(arr, size, x);
    (result == -1) ? cout <<"not found" : cout << "found at index: "<<result;
}